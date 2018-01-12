// AUTOGENERATED FILE

#if defined(__x86_64__) || 0
#define GOARCH "amd64"
#define SYZ_REVISION "8a10b163677425b6f340b2e4e277358c7c1a4237"
unsigned syscall_count = 188;
call_t syscalls[] = {
    {"accept", 30},
    {"accept$inet", 30},
    {"accept$inet6", 30},
    {"accept$unix", 30},
    {"bind", 104},
    {"bind$inet", 104},
    {"bind$inet6", 104},
    {"bind$unix", 104},
    {"chdir", 12},
    {"chmod", 15},
    {"chown", 16},
    {"chroot", 61},
    {"clock_getres", 429},
    {"clock_gettime", 427},
    {"clock_nanosleep", 477},
    {"clock_settime", 428},
    {"close", 6},
    {"connect", 98},
    {"connect$inet", 98},
    {"connect$inet6", 98},
    {"connect$unix", 98},
    {"dup", 41},
    {"dup2", 90},
    {"execve", 59},
    {"faccessat", 462},
    {"fchdir", 13},
    {"fchmod", 124},
    {"fchmodat", 463},
    {"fchown", 123},
    {"fchownat", 464},
    {"fchroot", 297},
    {"fcntl$dupfd", 92},
    {"fcntl$getflags", 92},
    {"fcntl$getown", 92},
    {"fcntl$lock", 92},
    {"fcntl$setflags", 92},
    {"fcntl$setown", 92},
    {"fcntl$setstatus", 92},
    {"fdatasync", 241},
    {"flock", 131},
    {"fsync", 95},
    {"ftruncate", 201},
    {"getdents", 390},
    {"getegid", 43},
    {"geteuid", 25},
    {"getgid", 47},
    {"getgroups", 79},
    {"getitimer", 426},
    {"getpeername", 31},
    {"getpeername$inet", 31},
    {"getpeername$inet6", 31},
    {"getpeername$unix", 31},
    {"getpgid", 207},
    {"getpgrp", 81},
    {"getpid", 20},
    {"getppid", 39},
    {"getrlimit", 194},
    {"getrusage", 445},
    {"getsockname", 32},
    {"getsockname$inet", 32},
    {"getsockname$inet6", 32},
    {"getsockname$unix", 32},
    {"getsockopt", 118},
    {"getsockopt$SO_PEERCRED", 118},
    {"getsockopt$inet_opts", 118},
    {"getsockopt$sock_cred", 118},
    {"getsockopt$sock_int", 118},
    {"getsockopt$sock_linger", 118},
    {"getsockopt$sock_timeval", 118},
    {"getuid", 24},
    {"lchown", 275},
    {"link", 9},
    {"linkat", 457},
    {"listen", 106},
    {"lseek", 199},
    {"lstat", 441},
    {"madvise", 75},
    {"mincore", 78},
    {"mkdir", 136},
    {"mkdirat", 461},
    {"mknod", 450},
    {"mknod$loop", 450},
    {"mknodat", 460},
    {"mlock", 203},
    {"mlockall", 242},
    {"mmap", 197},
    {"mprotect", 74},
    {"msgctl$IPC_RMID", 444},
    {"msgctl$IPC_SET", 444},
    {"msgctl$IPC_STAT", 444},
    {"msgget", 225},
    {"msgget$private", 225},
    {"msgrcv", 227},
    {"msgsnd", 226},
    {"munlock", 204},
    {"munlockall", 243},
    {"munmap", 73},
    {"nanosleep", 430},
    {"open", 5},
    {"open$dir", 5},
    {"openat", 468},
    {"paccept", 456},
    {"pipe", 42},
    {"pipe2", 453},
    {"poll", 209},
    {"preadv", 289},
    {"pwritev", 290},
    {"read", 3},
    {"readlink", 58},
    {"readlinkat", 469},
    {"readv", 120},
    {"recvfrom", 29},
    {"recvfrom$inet", 29},
    {"recvfrom$inet6", 29},
    {"recvfrom$unix", 29},
    {"recvmsg", 27},
    {"rename", 128},
    {"renameat", 458},
    {"rmdir", 137},
    {"select", 417},
    {"semctl$GETALL", 442},
    {"semctl$GETNCNT", 442},
    {"semctl$GETPID", 442},
    {"semctl$GETVAL", 442},
    {"semctl$GETZCNT", 442},
    {"semctl$IPC_RMID", 442},
    {"semctl$IPC_SET", 442},
    {"semctl$IPC_STAT", 442},
    {"semctl$SETALL", 442},
    {"semctl$SETVAL", 442},
    {"semget", 221},
    {"semget$private", 221},
    {"semop", 222},
    {"sendmsg", 28},
    {"sendmsg$unix", 28},
    {"sendto", 133},
    {"sendto$inet", 133},
    {"sendto$inet6", 133},
    {"sendto$unix", 133},
    {"setegid", 182},
    {"seteuid", 183},
    {"setgid", 181},
    {"setgroups", 80},
    {"setitimer", 425},
    {"setpgid", 82},
    {"setregid", 127},
    {"setreuid", 126},
    {"setrlimit", 195},
    {"setsockopt", 105},
    {"setsockopt$inet6_MRT6_ADD_MFC", 105},
    {"setsockopt$inet6_MRT6_ADD_MIF", 105},
    {"setsockopt$inet6_MRT6_DEL_MFC", 105},
    {"setsockopt$inet_opts", 105},
    {"setsockopt$sock_cred", 105},
    {"setsockopt$sock_int", 105},
    {"setsockopt$sock_linger", 105},
    {"setsockopt$sock_timeval", 105},
    {"setuid", 23},
    {"shmat", 228},
    {"shmctl$IPC_RMID", 443},
    {"shmctl$IPC_SET", 443},
    {"shmctl$IPC_STAT", 443},
    {"shmctl$SHM_LOCK", 443},
    {"shmctl$SHM_UNLOCK", 443},
    {"shmdt", 230},
    {"shmget", 231},
    {"shmget$private", 231},
    {"shutdown", 134},
    {"socket", 394},
    {"socket$inet", 394},
    {"socket$inet6", 394},
    {"socket$unix", 394},
    {"socketpair", 135},
    {"socketpair$inet", 135},
    {"socketpair$inet6", 135},
    {"socketpair$unix", 135},
    {"stat", 439},
    {"symlink", 57},
    {"symlinkat", 470},
    {"sync", 36},
    {"truncate", 200},
    {"unlink", 10},
    {"unlinkat", 471},
    {"utimensat", 467},
    {"utimes", 420},
    {"wait4", 449},
    {"write", 4},
    {"writev", 121},

};
#endif
