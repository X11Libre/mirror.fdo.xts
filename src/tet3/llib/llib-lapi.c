/*
 *      SCCS:  @(#)llib-lapi.c	1.5 (96/11/04) 
 *
 * (C) Copyright 1994 UniSoft Ltd., London, England
 *
 * All rights reserved.  No part of this source code may be reproduced,
 * stored in a retrieval system, or transmitted, in any form or by any
 * means, electronic, mechanical, photocopying, recording or otherwise,
 * except as stated in the end-user licence agreement, without the prior
 * permission of the copyright owners.
 */

/************************************************************************

SCCS:   	@(#)llib-lapi.c	1.5 96/11/04 TETware release 3.3
NAME:		llib-lapi.c
PRODUCT:	TETware
AUTHOR:		Andrew Dingwall, UniSoft Ltd.
DATE CREATED:	December 1993

DESCRIPTION:
	TETware API lint library

MODIFICATIONS:

	Geoff Clare, UniSoft Ltd., Oct 1996
	Changes for TETware.

	Aaron Plattner, April 2010
	Fixed warnings when compiled with GCC's -Wall option.

************************************************************************/

/* LINTLIBRARY */

/* band-aid for non-posix systems */
#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#if defined(SVR2) || defined(BSD42) || defined(BSD43)
typedef int pid_t;
#endif

#if defined(TET_THREADS) && !defined(TET_POSIX_THREADS)
#include <synch.h>
#endif
#include "tet_api.h"

#undef tet_child
pid_t	tet_child;
#undef tet_errno
int	tet_errno;
char *	tet_errlist[1];
int	tet_nerr;
void	(*tet_syncerr)();

void tet_delete(int test_no, char *reason)
{
	;
}

int tet_exec(char *file, char *argv[], char *envp[])
{
	return(0);
}

TET_NORETURN void tet_exit(int status)
{
	;
}

int tet_fork(void (*childproc)(), void (*parentproc)(), int waittime, int exitvals)
int waittime, exitvals;
{
	return(0);
}

#if defined(TET_THREADS) || defined(TET_POSIX_THREADS)
int tet_fork1(void (*childproc)(), void (*parentproc)(), int waittime, int exitvals)
{
	return(0);
}
#endif /* THREADS */

int tet_getsysbyid(int sysid, struct tet_sysent *sysp)
{
	return 0;
}

char *tet_getvar(const char *name)
{
	return((const char *) 0);
}

void tet_infoline(char *data)
{
	;
}

int tet_kill(pid_t pid, int sig)
{
	return 0;
}

void tet_logoff()
{
	;
}

int tet_minfoline(char **lines, int nlines)
{
	return 0;
}

int tet_msync(long syncptno, int *syncnames, int waittime, struct tet_synmsg *msgp)
{
	return 0;
}

/* PRINTFLIKE1 */ /* VARARGS1 */
int tet_printf(char *format, ...)
{
	return 0;
}

#ifdef TET_POSIX_THREADS
int tet_pthread_create(pthread_t new_thread, pthread_attr_t attr, void *(*start_routine)(), void *arg, int waittime)
{
	return 0;
}
#endif

char *tet_reason(int test_no)
{
	return((char *) 0);
}

int tet_remexec(int sysname, char *file, char **argv)
{
	return(0);
}

int tet_remgetlist(int **sysnames)
{
	return(0);
}

int tet_remgetsys()
{
	return(0);
}

int tet_remkill(int remoteid)
{
	return(0);
}

int tet_remsync(long syncptno, int *syncnames, int nsyncname, int waittime, int vote, struct tet_synmsg *msgp)
{
	return 0;
}

int tet_remtime(int sysid, time_t tp)
{
	return 0;
}

int tet_remwait(int remoteid, int waittime, int *statloc)
{
	return(0);
}

void tet_result(int result)
{
	;
}

void tet_setblock()
{
	;
}

void tet_setcontext()
{
	;
}

pid_t tet_spawn(char *file, char *argv[], char *envp[])
{
	return 0;
}

int tet_sync(long syncptno, int *syncnames, int waittime)
{
	return(0);
}

void tet_syncreport(long syncptno, struct tet_syncstat *statp, int nsys)
{
	;
}

#if defined(TET_THREADS) || defined(TET_POSIX_THREADS)
pid_t *tet_thr_child()
{
	return (pid_t *)0;
}
#endif

#if defined(TET_THREADS) || defined(TET_POSIX_THREADS)
int *tet_thr_errno()
{
	return (int *)0;
}
#endif

#if defined(TET_THREADS) && !defined(TET_POSIX_THREADS)
int tet_thr_create(stack_base, stack_size, start_routine, arg, flags,
		new_thread, waittime)
void *stack_base;
size_t stack_size;
void *(*start_routine)();
void *arg;
long flags;
thread_t *new_thread;
int waittime;
{
	return 0;
}
#endif

int tet_vprintf(format, ap)
char *format;
va_list ap;
{
	return 0;
}

int tet_wait(pid_t pid, int *statp)
{
	return 0;
}

#ifndef TET_API_ONLY

/* non-API functions and data: these go in llib-lapi.ln (for linting
   TETware source), but not in llib-ltcm.ln and llib-ltcmc.ln */

#if defined(TET_THREADS) || defined(TET_POSIX_THREADS)
void tet_api_lock(int getlock, char *file, int line)
{
	;
}
void tet_cln_threads(int signum)
{
	;
}
#endif /* THREADS */

void tet_config()
{
	;
}

void tet_delreas(int ntests)
{
	;
}

void tet_disconnect()
{
	;
}

void tet_error(int errno_val, char *msg)
{
	;
}

int tet_killw(pid_t child, unsigned int timeout)
{
	return 0;
}

#if defined(TET_THREADS) || defined(TET_POSIX_THREADS)
void tet_mtx_init()
{
	;
}
void tet_mtx_destroy()
{
	;
}
void tet_mtx_lock()
{
	;
}
void tet_mtx_unlock()
{
	;
}
#endif /* THREADS */

char * tet_signame(int sig)
{
	return (char *)0;
}

#if defined(TET_THREADS) || defined(TET_POSIX_THREADS)
long * tet_thr_block()
{
	return (long *)0;
}
long * tet_thr_sequence()
{
	return (long *)0;
}
void tet_thrtab_reset()
{
	;
}
#endif /* THREADS */

int	tet_combined_ok;
long	tet_activity;
long	tet_context;
#undef tet_block
long	tet_block;
#undef tet_sequence
long	tet_sequence;
#if defined(TET_THREADS) || defined(TET_POSIX_THREADS)
long		tet_next_block;
thread_key_t	tet_block_key;
thread_key_t	tet_sequence_key;
thread_key_t	tet_child_key;
thread_key_t	tet_errno_key;
mutex_t tet_top_mtx;
mutex_t tet_thrtab_mtx;
mutex_t tet_thrwait_mtx;
mutex_t tet_sigalrm_mtx;
mutex_t tet_alarm_mtx;
#endif /* THREADS */

#endif /* TET_API_ONLY */
