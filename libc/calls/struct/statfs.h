#ifndef COSMOPOLITAN_LIBC_CALLS_STRUCT_STATFS_H_
#define COSMOPOLITAN_LIBC_CALLS_STRUCT_STATFS_H_
#if !(__ASSEMBLER__ + __LINKER__ + 0)
COSMOPOLITAN_C_START_

struct statfs {       /* cosmo abi */
  int64_t f_type;     /* type of filesystem */
  int64_t f_bsize;    /* optimal transfer block size */
  int64_t f_blocks;   /* total data blocks in filesystem */
  int64_t f_bfree;    /* free blocks in filesystem */
  int64_t f_bavail;   /* free blocks available to unprivileged users */
  int64_t f_files;    /* total file nodes in filesystem */
  int64_t f_ffree;    /* free file nodes in filesystem */
  int64_t f_fsid;     /* filesystem id */
  int64_t f_namelen;  /* maximum length of filenames */
  int64_t f_frsize;   /* fragment size */
  int64_t f_flags;    /* mount flags of filesystem 2.6.36 */
  int64_t f_spare[4]; /* end of linux abi */
  uint32_t f_owner;
  char f_fstypename[16];
};

int statfs(const char *, struct statfs *);
int fstatfs(int, struct statfs *);

COSMOPOLITAN_C_END_
#endif /* !(__ASSEMBLER__ + __LINKER__ + 0) */
#endif /* COSMOPOLITAN_LIBC_CALLS_STRUCT_STATFS_H_ */
