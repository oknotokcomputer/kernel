/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (C) 2012 ARM Ltd.
 */
#ifdef CONFIG_COMPAT
#define __ARCH_WANT_COMPAT_STAT
#define __ARCH_WANT_COMPAT_STAT64
#define __ARCH_WANT_SYS_GETHOSTNAME
#define __ARCH_WANT_SYS_PAUSE
#define __ARCH_WANT_SYS_GETPGRP
#define __ARCH_WANT_SYS_NICE
#define __ARCH_WANT_SYS_SIGPENDING
#define __ARCH_WANT_SYS_SIGPROCMASK
#define __ARCH_WANT_COMPAT_SYS_SENDFILE
#define __ARCH_WANT_SYS_UTIME32
#define __ARCH_WANT_SYS_FORK
#define __ARCH_WANT_SYS_VFORK

/*
 * Compat syscall numbers used by the AArch64 kernel.
 */
#define __NR_compat_restart_syscall	0
#define __NR_compat_exit		1
#define __NR_compat_fork		2
#define __NR_compat_read		3
#define __NR_compat_write		4
#define __NR_compat_open		5
#define __NR_compat_close		6
#define __NR_compat_creat		8
#define __NR_compat_link		9
#define __NR_compat_unlink		10
#define __NR_compat_execve		11
#define __NR_compat_chdir		12
#define __NR_compat_mknod		14
#define __NR_compat_chmod		15
#define __NR_compat_lchown		16
#define __NR_compat_lseek		19
#define __NR_compat_getpid		20
#define __NR_compat_mount		21
#define __NR_compat_setuid		23
#define __NR_compat_getuid		24
#define __NR_compat_ptrace		26
#define __NR_compat_pause		29
#define __NR_compat_access		33
#define __NR_compat_nice		34
#define __NR_compat_sync		36
#define __NR_compat_kill		37
#define __NR_compat_rename		38
#define __NR_compat_mkdir		39
#define __NR_compat_rmdir		40
#define __NR_compat_dup			41
#define __NR_compat_pipe		42
#define __NR_compat_times		43
#define __NR_compat_brk			45
#define __NR_compat_setgid		46
#define __NR_compat_getgid		47
#define __NR_compat_geteuid		49
#define __NR_compat_getegid		50
#define __NR_compat_acct		51
#define __NR_compat_umount2		52
#define __NR_compat_ioctl		54
#define __NR_compat_fcntl		55
#define __NR_compat_setpgid		57
#define __NR_compat_umask		60
#define __NR_compat_chroot		61
#define __NR_compat_ustat		62
#define __NR_compat_dup2		63
#define __NR_compat_getppid		64
#define __NR_compat_getpgrp		65
#define __NR_compat_setsid		66
#define __NR_compat_sigaction		67
#define __NR_compat_setreuid		70
#define __NR_compat_setregid		71
#define __NR_compat_sigsuspend		72
#define __NR_compat_sigpending		73
#define __NR_compat_sethostname		74
#define __NR_compat_setrlimit		75
#define __NR_compat_getrusage		77
#define __NR_compat_gettimeofday	78
#define __NR_compat_settimeofday	79
#define __NR_compat_getgroups		80
#define __NR_compat_setgroups		81
#define __NR_compat_symlink		83
#define __NR_compat_readlink		85
#define __NR_compat_uselib		86
#define __NR_compat_swapon		87
#define __NR_compat_reboot		88
#define __NR_compat_munmap		91
#define __NR_compat_truncate		92
#define __NR_compat_ftruncate		93
#define __NR_compat_fchmod		94
#define __NR_compat_fchown		95
#define __NR_compat_getpriority		96
#define __NR_compat_setpriority		97
#define __NR_compat_statfs		99
#define __NR_compat_fstatfs		100
#define __NR_compat_syslog		103
#define __NR_compat_setitimer		104
#define __NR_compat_getitimer		105
#define __NR_compat_stat		106
#define __NR_compat_lstat		107
#define __NR_compat_fstat		108
#define __NR_compat_vhangup		111
#define __NR_compat_wait4		114
#define __NR_compat_swapoff		115
#define __NR_compat_sysinfo		116
#define __NR_compat_fsync		118
#define __NR_compat_sigreturn		119
#define __NR_compat_clone		120
#define __NR_compat_setdomainname	121
#define __NR_compat_uname		122
#define __NR_compat_adjtimex		124
#define __NR_compat_mprotect		125
#define __NR_compat_sigprocmask		126
#define __NR_compat_init_module		128
#define __NR_compat_delete_module	129
#define __NR_compat_quotactl		131
#define __NR_compat_getpgid		132
#define __NR_compat_fchdir		133
#define __NR_compat_bdflush		134
#define __NR_compat_sysfs		135
#define __NR_compat_personality		136
#define __NR_compat_setfsuid		138
#define __NR_compat_setfsgid		139
#define __NR_compat__llseek		140
#define __NR_compat_getdents		141
#define __NR_compat__newselect		142
#define __NR_compat_flock		143
#define __NR_compat_msync		144
#define __NR_compat_readv		145
#define __NR_compat_writev		146
#define __NR_compat_getsid		147
#define __NR_compat_fdatasync		148
#define __NR_compat__sysctl		149
#define __NR_compat_mlock		150
#define __NR_compat_munlock		151
#define __NR_compat_mlockall		152
#define __NR_compat_munlockall		153
#define __NR_compat_sched_setparam	154
#define __NR_compat_sched_getparam	155
#define __NR_compat_sched_setscheduler	156
#define __NR_compat_sched_getscheduler	157
#define __NR_compat_sched_yield		158
#define __NR_compat_sched_get_priority_max	159
#define __NR_compat_sched_get_priority_min	160
#define __NR_compat_sched_rr_get_interval	161
#define __NR_compat_nanosleep		162
#define __NR_compat_mremap		163
#define __NR_compat_setresuid		164
#define __NR_compat_getresuid		165
#define __NR_compat_poll		168
#define __NR_compat_nfsservctl		169
#define __NR_compat_setresgid		170
#define __NR_compat_getresgid		171
#define __NR_compat_prctl		172
#define __NR_compat_rt_sigreturn	173
#define __NR_compat_rt_sigaction	174
#define __NR_compat_rt_sigprocmask	175
#define __NR_compat_rt_sigpending	176
#define __NR_compat_rt_sigtimedwait	177
#define __NR_compat_rt_sigqueueinfo	178
#define __NR_compat_rt_sigsuspend	179
#define __NR_compat_pread64		180
#define __NR_compat_pwrite64		181
#define __NR_compat_chown		182
#define __NR_compat_getcwd		183
#define __NR_compat_capget		184
#define __NR_compat_capset		185
#define __NR_compat_sigaltstack		186
#define __NR_compat_sendfile		187
#define __NR_compat_vfork		190
#define __NR_compat_ugetrlimit		191
#define __NR_compat_mmap2		192
#define __NR_compat_truncate64		193
#define __NR_compat_ftruncate64		194
#define __NR_compat_stat64		195
#define __NR_compat_lstat64		196
#define __NR_compat_fstat64		197
#define __NR_compat_lchown32		198
#define __NR_compat_getuid32		199
#define __NR_compat_getgid32		200
#define __NR_compat_geteuid32		201
#define __NR_compat_getegid32		202
#define __NR_compat_setreuid32		203
#define __NR_compat_setregid32		204
#define __NR_compat_getgroups32		205
#define __NR_compat_setgroups32		206
#define __NR_compat_fchown32		207
#define __NR_compat_setresuid32		208
#define __NR_compat_getresuid32		209
#define __NR_compat_setresgid32		210
#define __NR_compat_getresgid32		211
#define __NR_compat_chown32		212
#define __NR_compat_setuid32		213
#define __NR_compat_setgid32		214
#define __NR_compat_setfsuid32		215
#define __NR_compat_setfsgid32		216
#define __NR_compat_getdents64		217
#define __NR_compat_pivot_root		218
#define __NR_compat_mincore		219
#define __NR_compat_madvise		220
#define __NR_compat_fcntl64		221
#define __NR_compat_gettid		224
#define __NR_compat_readahead		225
#define __NR_compat_setxattr		226
#define __NR_compat_lsetxattr		227
#define __NR_compat_fsetxattr		228
#define __NR_compat_getxattr		229
#define __NR_compat_lgetxattr		230
#define __NR_compat_fgetxattr		231
#define __NR_compat_listxattr		232
#define __NR_compat_llistxattr		233
#define __NR_compat_flistxattr		234
#define __NR_compat_removexattr		235
#define __NR_compat_lremovexattr	236
#define __NR_compat_fremovexattr	237
#define __NR_compat_tkill		238
#define __NR_compat_sendfile64		239
#define __NR_compat_futex		240
#define __NR_compat_sched_setaffinity	241
#define __NR_compat_sched_getaffinity	242
#define __NR_compat_io_setup		243
#define __NR_compat_io_destroy		244
#define __NR_compat_io_getevents	245
#define __NR_compat_io_submit		246
#define __NR_compat_io_cancel		247
#define __NR_compat_exit_group		248
#define __NR_compat_lookup_dcookie	249
#define __NR_compat_epoll_create	250
#define __NR_compat_epoll_ctl		251
#define __NR_compat_epoll_wait		252
#define __NR_compat_remap_file_pages	253
#define __NR_compat_set_tid_address	256
#define __NR_compat_timer_create	257
#define __NR_compat_timer_settime	258
#define __NR_compat_timer_gettime	259
#define __NR_compat_timer_getoverrun	260
#define __NR_compat_timer_delete	261
#define __NR_compat_clock_settime	262
#define __NR_compat_clock_gettime	263
#define __NR_compat_clock_getres	264
#define __NR_compat_clock_nanosleep	265
#define __NR_compat_statfs64		266
#define __NR_compat_fstatfs64		267
#define __NR_compat_tgkill		268
#define __NR_compat_utimes		269
#define __NR_compat_arm_fadvise64_64	270
#define __NR_compat_pciconfig_iobase	271
#define __NR_compat_pciconfig_read	272
#define __NR_compat_pciconfig_write	273
#define __NR_compat_mq_open		274
#define __NR_compat_mq_unlink		275
#define __NR_compat_mq_timedsend	276
#define __NR_compat_mq_timedreceive	277
#define __NR_compat_mq_notify		278
#define __NR_compat_mq_getsetattr	279
#define __NR_compat_waitid		280
#define __NR_compat_socket		281
#define __NR_compat_bind		282
#define __NR_compat_connect		283
#define __NR_compat_listen		284
#define __NR_compat_accept		285
#define __NR_compat_getsockname		286
#define __NR_compat_getpeername		287
#define __NR_compat_socketpair		288
#define __NR_compat_send		289
#define __NR_compat_sendto		290
#define __NR_compat_recv		291
#define __NR_compat_recvfrom		292
#define __NR_compat_shutdown		293
#define __NR_compat_setsockopt		294
#define __NR_compat_getsockopt		295
#define __NR_compat_sendmsg		296
#define __NR_compat_recvmsg		297
#define __NR_compat_semop		298
#define __NR_compat_semget		299
#define __NR_compat_semctl		300
#define __NR_compat_msgsnd		301
#define __NR_compat_msgrcv		302
#define __NR_compat_msgget		303
#define __NR_compat_msgctl		304
#define __NR_compat_shmat		305
#define __NR_compat_shmdt		306
#define __NR_compat_shmget		307
#define __NR_compat_shmctl		308
#define __NR_compat_add_key		309
#define __NR_compat_request_key		310
#define __NR_compat_keyctl		311
#define __NR_compat_semtimedop		312
#define __NR_compat_vserver		313
#define __NR_compat_ioprio_set		314
#define __NR_compat_ioprio_get		315
#define __NR_compat_inotify_init	316
#define __NR_compat_inotify_add_watch	317
#define __NR_compat_inotify_rm_watch	318
#define __NR_compat_mbind		319
#define __NR_compat_get_mempolicy	320
#define __NR_compat_set_mempolicy	321
#define __NR_compat_openat		322
#define __NR_compat_mkdirat		323
#define __NR_compat_mknodat		324
#define __NR_compat_fchownat		325
#define __NR_compat_futimesat		326
#define __NR_compat_fstatat64		327
#define __NR_compat_unlinkat		328
#define __NR_compat_renameat		329
#define __NR_compat_linkat		330
#define __NR_compat_symlinkat		331
#define __NR_compat_readlinkat		332
#define __NR_compat_fchmodat		333
#define __NR_compat_faccessat		334
#define __NR_compat_pselect6		335
#define __NR_compat_ppoll		336
#define __NR_compat_unshare		337
#define __NR_compat_set_robust_list	338
#define __NR_compat_get_robust_list	339
#define __NR_compat_splice		340
#define __NR_compat_sync_file_range2	341
#define __NR_compat_tee			342
#define __NR_compat_vmsplice		343
#define __NR_compat_move_pages		344
#define __NR_compat_getcpu		345
#define __NR_compat_epoll_pwait		346
#define __NR_compat_kexec_load		347
#define __NR_compat_utimensat		348
#define __NR_compat_signalfd		349
#define __NR_compat_timerfd_create	350
#define __NR_compat_eventfd		351
#define __NR_compat_fallocate		352
#define __NR_compat_timerfd_settime	353
#define __NR_compat_timerfd_gettime	354
#define __NR_compat_signalfd4		355
#define __NR_compat_eventfd2		356
#define __NR_compat_epoll_create1	357
#define __NR_compat_dup3		358
#define __NR_compat_pipe2		359
#define __NR_compat_inotify_init1	360
#define __NR_compat_preadv		361
#define __NR_compat_pwritev		362
#define __NR_compat_rt_tgsigqueueinfo	363
#define __NR_compat_perf_event_open	364
#define __NR_compat_recvmmsg		365
#define __NR_compat_accept4		366
#define __NR_compat_fanotify_init	367
#define __NR_compat_fanotify_mark	368
#define __NR_compat_prlimit64		369
#define __NR_compat_name_to_handle_at	370
#define __NR_compat_open_by_handle_at	371
#define __NR_compat_clock_adjtime	372
#define __NR_compat_syncfs		373
#define __NR_compat_sendmmsg		374
#define __NR_compat_setns		375
#define __NR_compat_process_vm_readv	376
#define __NR_compat_process_vm_writev	377
#define __NR_compat_kcmp		378
#define __NR_compat_finit_module	379
#define __NR_compat_sched_setattr	380
#define __NR_compat_sched_getattr	381
#define __NR_compat_renameat2		382
#define __NR_compat_seccomp		383
#define __NR_compat_getrandom		384
#define __NR_compat_memfd_create	385
#define __NR_compat_bpf			386
#define __NR_compat_execveat		387
#define __NR_compat_userfaultfd		388
#define __NR_compat_membarrier		389
#define __NR_compat_clock_gettime64	403
#define __NR_compat_clock_getres_time64	406

/*
 * The following SVCs are ARM private.
 */
#define __ARM_NR_COMPAT_BASE		0x0f0000
#define __ARM_NR_compat_cacheflush	(__ARM_NR_COMPAT_BASE + 2)
#define __ARM_NR_compat_set_tls		(__ARM_NR_COMPAT_BASE + 5)
#define __ARM_NR_COMPAT_END		(__ARM_NR_COMPAT_BASE + 0x800)

#define __NR_compat_syscalls		453
#endif

#define __ARCH_WANT_SYS_CLONE

#ifndef __COMPAT_SYSCALL_NR
#include <uapi/asm/unistd.h>
#endif

#define NR_syscalls (__NR_syscalls)
