/*
Copyright (C) 2017 The University of Notre Dame
This software is distributed under the GNU General Public License.
See the file LICENSE for details.
*/

#ifndef SYSCALL_H
#define SYSCALL_H

#include "kerneltypes.h"

typedef enum {
	SYSCALL_DEBUG,
	SYSCALL_PROCESS_YIELD,
	SYSCALL_PROCESS_EXIT,
	SYSCALL_PROCESS_RUN,
	SYSCALL_PROCESS_FORK,
	SYSCALL_PROCESS_EXEC,
	SYSCALL_PROCESS_KILL,
	SYSCALL_PROCESS_WAIT,
	SYSCALL_PROCESS_REAP,
	SYSCALL_PROCESS_SELF,
	SYSCALL_PROCESS_PARENT,
	SYSCALL_OPEN,
	SYSCALL_DUP,
	SYSCALL_READ,
	SYSCALL_WRITE,
	SYSCALL_LSEEK,
	SYSCALL_CLOSE,
	SYSCALL_KEYBOARD_READ_CHAR,
	SYSCALL_OPEN_CONSOLE,
	SYSCALL_OPEN_PIPE,
	SYSCALL_SET_BLOCKING,
	SYSCALL_OPEN_WINDOW,
	SYSCALL_DRAW_WRITE,
	SYSCALL_PROCESS_SLEEP,
	SYSCALL_GETTIMEOFDAY,
	SYSCALL_MOUNT,
	SYSCALL_CHDIR,
	SYSCALL_SBRK,
	SYSCALL_NS_COPY,
	SYSCALL_NS_DELETE,
	SYSCALL_NS_GET_PERMS,
	SYSCALL_NS_REMOVE_PERMS,
	SYSCALL_NS_LOWER_ROOT,
	SYSCALL_NS_CHANGE,
	SYSCALL_MKDIR,
	SYSCALL_RMDIR,
	SYSCALL_READDIR,
	SYSCALL_PWD,
} syscall_t;

typedef enum {
	ENOENT = -1,
	EINVAL = -2,
	EACCES = -3,
	ENOSYS = -4
} syscall_error_t;

uint32_t syscall(syscall_t s, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);

#endif
