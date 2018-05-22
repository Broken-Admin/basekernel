/*
Copyright (C) 2017 The University of Notre Dame
This software is distributed under the GNU General Public License.
See the file LICENSE for details.
*/

#ifndef SYSCALLS_H
#define SYSCALLS_H

#include "kerneltypes.h"
#include "graphics_lib.h"

void debug( const char *str );
void process_exit( int status );
int process_yield();
int process_run( const char *cmd, const char** argv, int argc );
int process_fork();
void process_exec( const char *path, const char ** argv, int argc);
int process_self();
int process_parent();
int process_kill( unsigned int pid );
int process_reap( unsigned int pid );
int process_wait( struct process_info* info, int timeout );
int process_sleep( unsigned int ms );
int ns_copy(const char *old_ns, const char * new_ns);
int ns_delete(const char *ns);
int ns_get_perms(const char *ns);
int ns_remove_perms(const char *ns, int mask);
int ns_lower_root(const char *ns, const char * path);
int ns_change(const char *ns);
int open( const char *path, int mode, int flags );
int dup( int fd1, int fd2 );
int read( int fd, void *data, int length );
int write( int fd, void *data, int length );
int lseek( int fd, int offset, int whence );
int close( int fd );
extern void* sbrk( int a );
char keyboard_read_char();
int open_window( int wd, int x, int y, int w, int h );
int set_blocking( int fd, int b );
int console_open( int fd );
int pipe_open();
int mount(uint32_t device_no, const char *fs_name, const char *ns);
int mkdir(const char *path);
int readdir(const char *path, char *buffer, int buffer_len);
int rmdir(const char *path);
int pwd(char *buffer);
int chdir(const char *path);
void draw_write( struct graphics_command *s );
uint32_t gettimeofday();

#endif
