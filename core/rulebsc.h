   /*******************************************************/
   /*      "C" Language Integrated Production System      */
   /*                                                     */
   /*             CLIPS Version 6.24  06/05/06            */
   /*                                                     */
   /*         DEFRULE BASIC COMMANDS HEADER FILE          */
   /*******************************************************/

/*************************************************************/
/* Purpose: Implements core commands for the defrule         */
/*   construct such as clear, reset, save, undefrule,        */
/*   ppdefrule, list-defrules, and                           */
/*   get-defrule-list.                                       */
/*                                                           */
/* Principal Programmer(s):                                  */
/*      Gary D. Riley                                        */
/*                                                           */
/* Contributing Programmer(s):                               */
/*      Brian L. Dantes                                      */
/*                                                           */
/* Revision History:                                         */
/*      6.23: Corrected compilation errors for files         */
/*            generated by constructs-to-c. DR0861           */
/*                                                           */
/*      6.24: Renamed BOOLEAN macro type to intBool.         */
/*                                                           */
/*************************************************************/

#ifndef _H_rulebsc
#define _H_rulebsc

#ifndef _H_evaluatn
#include "evaluatn.h"
#endif

#ifdef LOCALE
#undef LOCALE
#endif

#ifdef _RULEBSC_SOURCE_
#define LOCALE
#else
#define LOCALE extern
#endif

#define GetDefruleList(a,b) EnvGetDefruleList(GetCurrentEnvironment(),a,b)
#define GetDefruleWatchActivations(a) EnvGetDefruleWatchActivations(GetCurrentEnvironment(),a)
#define GetDefruleWatchFirings(a) EnvGetDefruleWatchFirings(GetCurrentEnvironment(),a)
#define ListDefrules(a,b) EnvListDefrules(GetCurrentEnvironment(),a,b)
#define SetDefruleWatchActivations(a,b) EnvSetDefruleWatchActivations(GetCurrentEnvironment(),a,b)
#define SetDefruleWatchFirings(a,b) EnvSetDefruleWatchFirings(GetCurrentEnvironment(),a,b)
#define Undefrule(a) EnvUndefrule(GetCurrentEnvironment(),a)

   LOCALE void                           DefruleBasicCommands(void *,EXEC_STATUS);
   LOCALE void                           UndefruleCommand(void *,EXEC_STATUS);
   LOCALE intBool                        EnvUndefrule(void *,EXEC_STATUS,void *);
   LOCALE void                           GetDefruleListFunction(void *,EXEC_STATUS,DATA_OBJECT_PTR);
   LOCALE void                           EnvGetDefruleList(void *,EXEC_STATUS,DATA_OBJECT_PTR,void *);
   LOCALE void                          *DefruleModuleFunction(void *,EXEC_STATUS);
#if DEBUGGING_FUNCTIONS
   LOCALE void                           PPDefruleCommand(void *,EXEC_STATUS);
   LOCALE int                            PPDefrule(void *,EXEC_STATUS,char *,char *);
   LOCALE void                           ListDefrulesCommand(void *,EXEC_STATUS);
   LOCALE void                           EnvListDefrules(void *,EXEC_STATUS,char *,void *);
   LOCALE unsigned                       EnvGetDefruleWatchFirings(void *,EXEC_STATUS,void *);
   LOCALE unsigned                       EnvGetDefruleWatchActivations(void *,EXEC_STATUS,void *);
   LOCALE void                           EnvSetDefruleWatchFirings(void *,EXEC_STATUS,unsigned,void *);
   LOCALE void                           EnvSetDefruleWatchActivations(void *,EXEC_STATUS,unsigned,void *);
   LOCALE unsigned                       DefruleWatchAccess(void *,EXEC_STATUS,int,unsigned,struct expr *);
   LOCALE unsigned                       DefruleWatchPrint(void *,EXEC_STATUS,char *,int,struct expr *);
#endif

#endif


