typedef long __time_t;
typedef long __syscall_slong_t;
typedef __time_t time_t;
struct timespec
{
  __syscall_slong_t tv_nsec;
};
typedef unsigned long size_t;
typedef unsigned long __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long __ino_t;
typedef unsigned int __mode_t;
typedef unsigned long __nlink_t;
typedef long __off_t;
typedef long __blksize_t;
typedef long __blkcnt_t;
typedef __gid_t gid_t;
typedef __mode_t mode_t;
typedef __uid_t uid_t;
struct stat
{
  __syscall_slong_t __glibc_reserved[3];
};
typedef __ino_t ino_t;
typedef __dev_t dev_t;
struct di_set;
struct di_set;
struct hash_tuning
{
  float shrink_threshold;
  float shrink_factor;
  float growth_threshold;
  float growth_factor;
  _Bool is_n_buckets;
};
typedef struct hash_tuning Hash_tuning;
struct hash_table;
struct hash_table;
typedef struct hash_table Hash_table;
struct di_set
{
  struct hash_table *dev_map;
  struct ino_map *ino_map;
  struct di_ent *probe;
};
typedef unsigned long uintmax_t;
struct dev_ino
{
};
typedef long __off64_t;
struct _IO_FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
typedef void _IO_lock_t;
struct _IO_marker
{
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;
  int _pos;
};
struct _IO_FILE
{
  int _flags;
  void *__pad4;
  size_t __pad5;
  int _mode;
  char _unused2[((15UL * (sizeof(int))) - (4UL * (sizeof(void *)))) - (sizeof(size_t))];
};
typedef __off_t off_t;
struct cd_buf
{
  int fd;
};
typedef long __ssize_t;
typedef __ssize_t ssize_t;
struct allocator;
struct allocator;
struct allocator
{
  void *(*allocate)(size_t);
  void *(*reallocate)(void *, size_t);
  void (*free)(void *);
  void (*die)(size_t);
};
typedef long ptrdiff_t;
typedef unsigned int __socklen_t;
typedef __socklen_t socklen_t;
typedef unsigned short sa_family_t;
struct sockaddr
{
  sa_family_t sa_family;
  char sa_data[14];
};
struct addrinfo
{
  const int *__ctype_toupper;
  const char *__names[13];
};
typedef struct __locale_struct *__locale_t;
typedef __locale_t locale_t;
struct base64_decode_context
{
  unsigned int i;
  char buf[4];
};
enum backup_type
{
  no_backups = 0,
  simple_backups = 1,
  numbered_existing_backups = 2,
  numbered_backups = 3
};
struct __dirstream;
struct __dirstream;
typedef struct __dirstream DIR;
enum numbered_backup_result
{
  BACKUP_IS_SAME_LENGTH = 0,
  BACKUP_IS_LONGER = 1,
  BACKUP_IS_NEW = 2
};
typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;
struct argv_iterator;
struct argv_iterator
{
  FILE *fp;
  size_t item_idx;
  char *tok;
  size_t buf_len;
  char **arg_list;
  char **p;
};
enum quoting_style
{
  custom_quoting_style = 8
};
enum strtol_error
{
  LONGINT_OK = 0,
  LONGINT_OVERFLOW = 1,
  LONGINT_INVALID_SUFFIX_CHAR = 2,
  LONGINT_INVALID_SUFFIX_CHAR_WITH_OVERFLOW = 3,
  LONGINT_INVALID = 4
};
typedef enum strtol_error strtol_error;
struct option
{
  const char *name;
  int has_arg;
  int *flag;
  int val;
};
typedef long intmax_t;
typedef void *iconv_t;
typedef __nlink_t nlink_t;
struct I_ring
{
  int ir_data[4];
  int ir_default_val;
  unsigned int ir_front;
  unsigned int ir_back;
  _Bool ir_empty;
};
typedef struct I_ring I_ring;
struct _ftsent;
struct _ftsent;
union __anonunion_fts_cycle_25
{
  struct hash_table *ht;
  struct cycle_check_state *state;
};
struct __anonstruct_FTS_24
{
  size_t fts_nitems;
  int (*fts_compar)(const struct _ftsent **, const struct _ftsent **);
  int fts_options;
  struct hash_table *fts_leaf_optimization_works_ht;
  union __anonunion_fts_cycle_25 fts_cycle;
  I_ring fts_fd_ring;
};
typedef struct __anonstruct_FTS_24 FTS;
struct _ftsent
{
  unsigned short fts_flags;
  unsigned short fts_instr;
  struct stat fts_statp[1];
  char fts_name[1];
};
typedef struct _ftsent FTSENT;
typedef unsigned int uint32_t;
typedef uint32_t ucs4_t;
typedef int __pid_t;
typedef __pid_t pid_t;
typedef int __sig_atomic_t;
typedef __sig_atomic_t sig_atomic_t;
struct __anonstruct_slaves_entry_t_50
{
  volatile sig_atomic_t used;
  volatile pid_t child;
};
typedef struct __anonstruct_slaves_entry_t_50 slaves_entry_t;
union __anonunion_51
{
  int __in;
  int __i;
};
union __anonunion_52
{
  int __in;
  int __i;
};
union __anonunion_53
{
  int __in;
  int __i;
};
union __anonunion_54
{
  int __in;
  int __i;
};
union __anonunion_55
{
  int __in;
  int __i;
};
union __anonunion_56
{
  int __in;
  int __i;
};
union __anonunion_57
{
  int __in;
  int __i;
};
union __anonunion_58
{
  int __in;
  int __i;
};
typedef int wchar_t;
typedef int nl_item;
typedef unsigned int wint_t;
enum __anonenum_arg_type_27
{
  TYPE_WIDE_STRING = 16,
  TYPE_POINTER = 17,
  TYPE_COUNT_SCHAR_POINTER = 18,
  TYPE_COUNT_SHORT_POINTER = 19,
  TYPE_COUNT_INT_POINTER = 20,
  TYPE_COUNT_LONGINT_POINTER = 21,
  TYPE_COUNT_LONGLONGINT_POINTER = 22
};
typedef enum __anonenum_arg_type_27 arg_type;
union __anonunion_a_29
{
  const wchar_t *a_wide_string;
  void *a_pointer;
  signed char *a_count_schar_pointer;
  short *a_count_short_pointer;
  int *a_count_int_pointer;
  long *a_count_longint_pointer;
  long long *a_count_longlongint_pointer;
};
struct __anonstruct_argument_28
{
  arg_type type;
};
typedef struct __anonstruct_arguments_30 arguments;
struct __anonstruct_char_directive_31
{
  size_t precision_arg_index;
  char conversion;
  size_t arg_index;
};
typedef struct __anonstruct_char_directive_31 char_directive;
typedef struct __anonstruct_char_directives_32 char_directives;
typedef unsigned short fpucw_t;
struct saved_cwd
{
};
struct fs_res
{
  char *gr_name;
  char *gr_passwd;
  __gid_t gr_gid;
  char **gr_mem;
};
typedef unsigned char uint8_t;
union __anonunion___value_23
{
  unsigned int __wch;
  char __wchb[4];
};
struct __anonstruct___mbstate_t_22
{
  int __count;
  union __anonunion___value_23 __value;
};
typedef struct __anonstruct___mbstate_t_22 __mbstate_t;
typedef __mbstate_t mbstate_t;
struct mbchar
{
  const char *ptr;
  size_t bytes;
  _Bool wc_valid;
  wchar_t wc;
  char buf[24];
};
typedef struct mbiter_multi mbi_iterator_t;
typedef uintmax_t randint;
struct randint_source;
struct randint_source;
union __anonunion_tmp_21
{
};
struct __anonstruct___sigset_t_9
{
  unsigned long __val[1024UL / (8UL * (sizeof(unsigned long)))];
};
typedef struct __anonstruct___sigset_t_9 __sigset_t;
typedef __sigset_t sigset_t;
struct sched_param
{
  int __sched_priority;
  int __policy;
  int __pad[16];
};
typedef struct __anonstruct_posix_spawnattr_t_50 posix_spawnattr_t;
struct __spawn_action;
typedef struct __anonstruct_posix_spawn_file_actions_t_51 posix_spawn_file_actions_t;
struct numname
{
  int num;
  const char name[8];
};
typedef unsigned long uint64_t;
typedef uint64_t u64;
struct sha512_ctx
{
  uint32_t C;
  uint32_t D;
  uint32_t E;
  uint32_t total[2];
  uint32_t buflen;
  uint32_t buffer[32];
};
typedef int __clockid_t;
typedef __clockid_t clockid_t;
struct timezone
{
  int tz_minuteswest;
  int tz_dsttime;
};
enum __anonenum_state_14
{
  INITIAL_STATE = 0,
  FD_STATE = 1,
  FD_POST_CHDIR_STATE = 2,
  FORKING_STATE = 3,
  ERROR_STATE = 4,
  FINAL_STATE = 5
};
union __anonunion_val_15
{
  int __in;
  int __i;
};
union __anonunion_54___0
{
  int __in;
  int __i;
};
typedef int __int32_t;
struct __exit_status
{
  short e_termination;
  short e_exit;
};
struct __anonstruct_ut_tv_15
{
  __int32_t tv_sec;
  __int32_t tv_usec;
};
struct utmpx
{
  struct __anonstruct_ut_tv_15 ut_tv;
  char *limit;
  struct _obstack_chunk *prev;
  char contents[4];
};
union __anonunion_temp_26
{
  long tempint;
  void *tempptr;
};
struct obstack
{
  void (*freefun)(void *, struct _obstack_chunk *);
  void *extra_arg;
  unsigned int use_extra_arg : 1;
  unsigned int maybe_empty_object : 1;
  unsigned int alloc_failed : 1;
};
struct Tokens
{
  size_t n_tok;
  size_t size;
  char *buffer;
};
typedef struct tokenbuffer token_buffer;
typedef size_t word;
struct randread_source;
struct randread_source;
typedef unsigned long uint_least64_t;
typedef struct timezone *__restrict __timezone_ptr_t;
typedef uint_least64_t isaac_word;
struct isaac_state
{
  isaac_word m[1 << 8];
  isaac_word a;
  isaac_word b;
  isaac_word c;
};
union __anonunion_data_31
{
  isaac_word w[1 << 8];
  unsigned char b[((unsigned long) (1 << 8)) * (sizeof(isaac_word))];
};
struct isaac
{
  size_t buffered;
  struct isaac_state state;
  union __anonunion_data_31 data;
};
union __anonunion_buf_30
{
  char c[2UL * (((unsigned long) (1 << 8)) * (sizeof(isaac_word)))];
};
struct sparse_ent_
{
  randint randmax;
};
struct quoting_options;
struct quoting_options;
struct quoting_options
{
  enum quoting_style style;
  int flags;
  unsigned int quote_these_too[(255UL / ((sizeof(int)) * 8UL)) + 1UL];
  const char *left_quote;
  const char *right_quote;
};
struct slotvec
{
  _Bool next_done;
  struct mbchar cur;
};
typedef struct mbuiter_multi mbui_iterator_t;
typedef long long_time_t;
struct __anonstruct_textint_27
{
  _Bool negative;
  long value;
  size_t digits;
};
typedef struct __anonstruct_textint_27 textint;
struct __anonstruct_table_28
{
  const char *name;
  int type;
  int value;
};
typedef struct __anonstruct_table_28 table;
struct __anonstruct_relative_time_31
{
  long year;
  long month;
  long day;
  long hour;
  long minutes;
  long_time_t seconds;
  long ns;
};
typedef struct __anonstruct_relative_time_31 relative_time;
struct __anonstruct_parser_control_32
{
  size_t days_seen;
  size_t local_zones_seen;
  size_t dsts_seen;
  size_t times_seen;
  size_t zones_seen;
  table local_time_zone_table[3];
};
typedef struct __anonstruct_parser_control_32 parser_control;
union YYSTYPE;
union YYSTYPE;
union YYSTYPE
{
  long intval;
  textint textintval;
  struct timespec timespec;
  relative_time rel;
};
typedef union YYSTYPE YYSTYPE;
typedef unsigned char yytype_uint8;
typedef signed char yytype_int8;
typedef short yytype_int16;
union yyalloc
{
};
typedef unsigned long __cpu_mask;
struct __anonstruct_cpu_set_t_24
{
  __cpu_mask __bits[1024UL / (8UL * (sizeof(__cpu_mask)))];
};
typedef struct __anonstruct_cpu_set_t_24 cpu_set_t;
struct mount_entry
{
  uint32_t B;
  uint32_t C;
  uint32_t D;
  uint32_t total[2];
};
typedef enum __anonenum_mbs_align_t_1 mbs_align_t;
typedef unsigned long uintptr_t;
struct preliminary_header
{
  void *next;
  char room[sizeof(int)];
};
struct header
{
  void *next;
  char room[((((((sizeof(struct preliminary_header)) + 16UL) - 1UL) / 16UL) * 16UL) - (sizeof(struct preliminary_header))) + (sizeof(int))];
};
struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
};
typedef struct __pthread_internal_list __pthread_list_t;
struct __pthread_mutex_s
{
};
union __anonunion_pthread_mutex_t_11
{
  struct __pthread_mutex_s __data;
  char __size[40];
  long __align;
};
typedef union __anonunion_pthread_mutex_t_11 pthread_mutex_t;
union __anonunion_pthread_mutexattr_t_12
{
  char __size[4];
  int __align;
};
typedef union __anonunion_pthread_mutexattr_t_12 pthread_mutexattr_t;
typedef int pthread_once_t;
typedef pthread_mutex_t gl_recursive_lock_t;
struct linebuffer
{
  size_t size;
  size_t length;
  char *buffer;
};
union __anonunion_memory_double_1
{
};
struct ino_map
{
  struct hash_table *map;
  size_t next_mapped_ino;
  struct ino_map_ent *probe;
};
union __anonunion_id_23
{
  size_t n_entries;
  char *name;
  ino_t st_ino;
  dev_t st_dev;
};
typedef unsigned char cc_t;
typedef unsigned int speed_t;
typedef unsigned int tcflag_t;
struct termios
{
};
typedef long long xtime_t;
struct __anonstruct___fsid_t_1
{
  int __val[2];
};
typedef struct __anonstruct___fsid_t_1 __fsid_t;
typedef unsigned long __fsblkcnt_t;
typedef unsigned long __fsfilcnt_t;
typedef long __fsword_t;
struct Active_dir
{
  __fsword_t f_flags;
  __fsword_t f_spare[4];
  uintmax_t fsu_blocksize;
  uintmax_t fsu_blocks;
  uintmax_t fsu_bfree;
  uintmax_t fsu_bavail;
  _Bool fsu_bavail_top_bit_set;
  uintmax_t fsu_files;
  uintmax_t fsu_ffree;
};
typedef long __clock_t;
union sigval
{
  int sival_int;
  void *sival_ptr;
};
typedef union sigval sigval_t;
typedef __clock_t __sigchld_clock_t;
struct __anonstruct__kill_23
{
  __pid_t si_pid;
  __uid_t si_uid;
};
struct __anonstruct__timer_24
{
  int si_tid;
  int si_overrun;
  sigval_t si_sigval;
};
struct __anonstruct__rt_25
{
  __pid_t si_pid;
  __uid_t si_uid;
  sigval_t si_sigval;
};
struct __anonstruct__sigchld_26
{
  __pid_t si_pid;
  __uid_t si_uid;
  int si_status;
  __sigchld_clock_t si_utime;
  __sigchld_clock_t si_stime;
};
struct __anonstruct__sigfault_27
{
  void *si_addr;
  short si_addr_lsb;
};
struct __anonstruct__sigpoll_28
{
  long si_band;
  int si_fd;
};
struct __anonstruct__sigsys_29
{
  void *_call_addr;
  int _syscall;
  unsigned int _arch;
};
union __anonunion__sifields_22
{
};
struct __anonstruct_siginfo_t_21
{
  int si_signo;
  int si_errno;
  int si_code;
  union __anonunion__sifields_22 _sifields;
};
typedef struct __anonstruct_siginfo_t_21 siginfo_t;
union __anonunion___sigaction_handler_41
{
  void (*sa_handler)(int);
  void (*sa_sigaction)(int, siginfo_t *, void *);
};
struct sigaction
{
  union __anonunion___sigaction_handler_41 __sigaction_handler;
  __sigset_t sa_mask;
  int sa_flags;
  void (*sa_restorer)(void);
};
typedef void (*sa_handler_t)(int);
struct __anonstruct_actions_entry_t_50
{
  void (*volatile action)(void);
};
typedef struct __anonstruct_actions_entry_t_50 actions_entry_t;
enum __anonenum_fadvice_t_19
{
  FADVISE_NORMAL = 0,
  FADVISE_SEQUENTIAL = 2,
  FADVISE_NOREUSE = 5,
  FADVISE_DONTNEED = 4,
  FADVISE_WILLNEED = 3,
  FADVISE_RANDOM = 1
};
typedef enum __anonenum_fadvice_t_19 fadvice_t;
struct exclude;
struct exclude;
struct patopts
{
  const char *pattern;
  int options;
};
struct exclude_pattern
{
  struct patopts *exclude;
  size_t exclude_alloc;
  size_t exclude_count;
};
enum exclude_type
{
  exclude_hash = 0,
  exclude_pattern = 1
};
union __anonunion_v_29
{
  Hash_table *table;
};
struct exclude
{
  struct exclude_segment *head;
  struct exclude_segment *tail;
};
enum countmode
{
  count_occurrences = 0,
  count_none = 1
};
enum delimit_method
{
  DM_NONE = 0,
  DM_PREPEND = 1,
  DM_SEPARATE = 2
};
enum Skip_field_option_type
{
  SFO_NONE = 0,
  SFO_OBSOLETE = 1,
  SFO_NEW = 2
};
extern int snprintf(char *__restrict __s, size_t __maxlen, const char *__restrict __format, ...);
extern double strtod(const char *__restrict __nptr, char **__restrict __endptr);
void xalloc_die(void);
char *last_component(const char *name);
extern void *malloc(size_t __size);
extern void *memcpy(void *__restrict __dest, const void *__restrict __src, size_t __n);
extern int *__errno_location(void);
const char diacrit_base[256];
const char diacrit_diac[256];
const char diacrit_base[256] = {(const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 'A', (const char) 'B', (const char) 'C', (const char) 'D', (const char) 'E', (const char) 'F', (const char) 'G', (const char) 'H', (const char) 'I', (const char) 'J', (const char) 'K', (const char) 'L', (const char) 'M', (const char) 'N', (const char) 'O', (const char) 'P', (const char) 'Q', (const char) 'R', (const char) 'S', (const char) 'T', (const char) 'U', (const char) 'V', (const char) 'W', (const char) 'X', (const char) 'Y', (const char) 'Z', (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 'a', (const char) 'b', (const char) 'c', (const char) 'd', (const char) 'e', (const char) 'f', (const char) 'g', (const char) 'h', (const char) 'i', (const char) 'j', (const char) 'k', (const char) 'l', (const char) 'm', (const char) 'n', (const char) 'o', (const char) 'p', (const char) 'q', (const char) 'r', (const char) 's', (const char) 't', (const char) 'u', (const char) 'v', (const char) 'w', (const char) 'x', (const char) 'y', (const char) 'z', (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 'A', (const char) 'A', (const char) 'A', (const char) 'A', (const char) 'A', (const char) 'A', (const char) 'A', (const char) 'C', (const char) 'E', (const char) 'E', (const char) 'E', (const char) 'E', (const char) 'I', (const char) 'I', (const char) 'I', (const char) 'I', (const char) 0, (const char) 'N', (const char) 'O', (const char) 'O', (const char) 'O', (const char) 'O', (const char) 'O', (const char) 0, (const char) 'O', (const char) 'U', (const char) 'U', (const char) 'U', (const char) 'U', (const char) 'Y', (const char) 0, (const char) 0, (const char) 'a', (const char) 'a', (const char) 'a', (const char) 'a', (const char) 'a', (const char) 'a', (const char) 'a', (const char) 'c', (const char) 'e', (const char) 'e', (const char) 'e', (const char) 'e', (const char) 'i', (const char) 'i', (const char) 'i', (const char) 'i', (const char) 0, (const char) 'n', (const char) 'o', (const char) 'o', (const char) 'o', (const char) 'o', (const char) 'o', (const char) 0, (const char) 'o', (const char) 'u', (const char) 'u', (const char) 'u', (const char) 'u', (const char) 'y', (const char) 0, (const char) 'y'};
const char diacrit_diac[256] = {(const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 4, (const char) 0, (const char) 3, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 6, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 0, (const char) 3, (const char) 2, (const char) 4, (const char) 6, (const char) 5, (const char) 8, (const char) 1, (const char) 7, (const char) 3, (const char) 2, (const char) 4, (const char) 5, (const char) 3, (const char) 2, (const char) 4, (const char) 5, (const char) 0, (const char) 6, (const char) 3, (const char) 2, (const char) 4, (const char) 6, (const char) 5, (const char) 0, (const char) 9, (const char) 3, (const char) 2, (const char) 4, (const char) 5, (const char) 2, (const char) 0, (const char) 0, (const char) 3, (const char) 2, (const char) 4, (const char) 6, (const char) 5, (const char) 8, (const char) 1, (const char) 7, (const char) 3, (const char) 2, (const char) 4, (const char) 5, (const char) 3, (const char) 2, (const char) 4, (const char) 5, (const char) 0, (const char) 6, (const char) 3, (const char) 2, (const char) 4, (const char) 6, (const char) 5, (const char) 0, (const char) 9, (const char) 3, (const char) 2, (const char) 4, (const char) 5, (const char) 2, (const char) 0, (const char) 0};
extern void free(void *__ptr);
extern void __assert_fail(const char *__assertion, const char *__file, unsigned int __line, const char *__function);
extern int creat(const char *__file, mode_t __mode);
extern void error(int __status, int __errnum, const char *__format, ...);
const char *quote(const char *name);
extern char *gettext(const char *__msgid);
void close_stdout(void);
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;
extern void _exit(int __status);
int close_stream(FILE *stream);
volatile int exit_failure;
char *quotearg_colon(const char *arg);
static const char *file_name;
static _Bool ignore_EPIPE;
void close_stdout(void)
{
  const char *write_error;
  const char *tmp;
  char *tmp___0;
  int *tmp___1;
  int *tmp___2;
  int tmp___3;
  int *tmp___4;
  int tmp___5;
  char *__cil_tmp10;
  {
    {
      tmp___3 = close_stream(stdout);
    }
    if (tmp___3 != 0)
    {
      if (ignore_EPIPE)
      {
        _Exit(-1);
      }
      else
      {
        _L:
        ;

        {
        }
        if (file_name)
        {
          _Exit(-1);
        }

        {
        }
      }

    }

    {
      tmp___5 = close_stream(stderr);
    }
    if (tmp___5 != 0)
    {
      _Exit(-1);
    }

    return;
  }
}

extern struct _IO_FILE *stdin;
int rpl_fflush(FILE *stream);
int rpl_fseeko(FILE *fp, off_t offset, int whence);
static const char *file_name___0;
extern int ferror_unlocked(FILE *__stream);
int rpl_fclose(FILE *fp);
extern size_t __fpending(FILE *__fp);
int close_stream(FILE *stream)
{
  _Bool some_pending;
  size_t tmp;
  _Bool prev_fail;
  int tmp___0;
  _Bool fclose_fail;
  int tmp___1;
  int *tmp___2;
  int *tmp___3;
  {
    {
      tmp = __fpending(stream);
      some_pending = (_Bool) (tmp != 0UL);
      tmp___0 = ferror_unlocked(stream);
      prev_fail = (_Bool) (tmp___0 != 0);
      tmp___1 = rpl_fclose(stream);
      fclose_fail = (_Bool) (tmp___1 != 0);
    }
    if (prev_fail)
    {
      _Exit(-1);
    }
    else
    {
      if (fclose_fail)
      {
        if (some_pending)
        {
          _Exit(-1);
        }
        else
        {
          if ((* tmp___3) != 9)
          {
            _L___0:
            ;

            if (! fclose_fail)
            {
              _Exit(-1);
            }

          }

        }

      }

    }

    return 0;
  }
}

extern void abort(void);
const struct allocator stdlib_allocator;
extern void *memmove(void *__dest, const void *__src, size_t __n);
extern char *strchr(const char *__s, int __c);
extern int lstat(const char *__restrict __file, struct stat *__restrict __buf);
void *xmalloc(size_t n);
void *xrealloc(void *p, size_t n);
static volatile locale_t c_locale_cache;
int c_tolower(int c);
__inline static unsigned char to_uchar(char ch)
{
  {
    return (unsigned char) ch;
  }
}

extern ssize_t readlinkat(int __fd, const char *__restrict __path, char *__restrict __buf, size_t __len);
extern void *realloc(void *__ptr, size_t __size);
const struct allocator stdlib_allocator = {(void *(*)(size_t)) (& malloc), (void *(*)(void *, size_t)) (& realloc), (void (*)(void *)) (& free), (void (*)(size_t)) ((void *) 0)};
extern int rpmatch(const char *__response);
extern __ssize_t getline(char **__restrict __lineptr, size_t *__restrict __n, FILE *__restrict __stream);
__inline static void *xnmalloc(size_t n, size_t s);
__inline static void *xnmalloc(size_t n, size_t s);
__inline static void *xnmalloc(size_t n, size_t s)
{
  int tmp;
  void *tmp___0;
  {
    if ((sizeof(ptrdiff_t)) <= (sizeof(size_t)))
    {
      tmp = - 1;
    }
    else
    {
      tmp = - 2;
    }

    if ((((size_t) tmp) / s) < n)
    {
      {
        xalloc_die();
      }
    }

    {
      tmp___0 = xmalloc(n * s);
    }
    return tmp___0;
  }
}

extern const unsigned short **__ctype_b_loc(void);
extern uintmax_t strtoumax(const char *__restrict __nptr, char **__restrict __endptr, int __base);
strtol_error xstrtoul(const char *s, char **ptr, int strtol_base, unsigned long *val, const char *valid_suffixes);
strtol_error xstrtoul(const char *s, char **ptr, int strtol_base, unsigned long *val, const char *valid_suffixes)
{
  char *t_ptr;
  char **p;
  unsigned long tmp;
  strtol_error err;
  const char *q;
  unsigned char ch;
  const unsigned short **tmp___0;
  int *tmp___1;
  char *tmp___2;
  int *tmp___3;
  int *tmp___4;
  int base;
  int suffixes;
  strtol_error overflow;
  char *tmp___5;
  char *tmp___6;
  {
    err = (strtol_error) 0;
    if (0 <= strtol_base)
    {
      if (! (strtol_base <= 36))
      {
        _Exit(-1);
      }

    }

    if (ptr)
    {
      _Exit(-1);
    }
    else
    {
      p = & t_ptr;
    }

    q = s;
    ch = (unsigned char) (* q);
    {
      while (1)
      {
        while_continue:
        ;

        {
          tmp___0 = __ctype_b_loc();
        }
        if (! (((const int) (* ((* tmp___0) + ((int) ch)))) & 8192))
        {
          goto while_break;
        }

      }

      while_break:
      ;

    }
    if (((int) ch) == 45)
    {
      _Exit(-1);
    }

    {
      tmp___1 = __errno_location();
      * tmp___1 = 0;
      tmp = strtoul((const char *) s, (char **) p, strtol_base);
    }
    if (((unsigned long) (* p)) == ((unsigned long) s))
    {
      if (valid_suffixes)
      {
        _Exit(-1);
      }

    }
    else
    {
      {
        tmp___4 = __errno_location();
      }
      if ((* tmp___4) != 0)
      {
        if ((* tmp___3) != 34)
        {
          _Exit(-1);
        }

      }

    }

    if (! valid_suffixes)
    {
      _Exit(-1);
    }

    if (((int) (* (* p))) != 0)
    {
      if (! tmp___5)
      {
        _Exit(-1);
      }

      {
      }
      if (tmp___6)
      {
        {
          if (((int) (* ((* (p + 0)) + 1))) == 105)
          {
            _Exit(-1);
          }

          if (((int) (* ((* (p + 0)) + 1))) == 66)
          {
            _Exit(-1);
          }

          if (((int) (* ((* (p + 0)) + 1))) == 68)
          {
            _Exit(-1);
          }

          case_105:
          ;

          if (((int) (* ((* (p + 0)) + 2))) == 66)
          {
            _Exit(-1);
          }

          case_66:
          ;

          case_68:
          ;

          base = 1000;
          switch_break:
          ;

        }
      }

      {
        if (((int) (* (* p))) == 98)
        {
          _Exit(-1);
        }

        if (((int) (* (* p))) == 66)
        {
          _Exit(-1);
        }

        if (((int) (* (* p))) == 99)
        {
          _Exit(-1);
        }

        if (((int) (* (* p))) == 69)
        {
          _Exit(-1);
        }

        if (((int) (* (* p))) == 71)
        {
          _Exit(-1);
        }

        if (((int) (* (* p))) == 103)
        {
          _Exit(-1);
        }

        if (((int) (* (* p))) == 107)
        {
          _Exit(-1);
        }

        if (((int) (* (* p))) == 75)
        {
          _Exit(-1);
        }

        if (((int) (* (* p))) == 77)
        {
          _Exit(-1);
        }

        if (((int) (* (* p))) == 109)
        {
          _Exit(-1);
        }

        if (((int) (* (* p))) == 80)
        {
          _Exit(-1);
        }

        if (((int) (* (* p))) == 84)
        {
          _Exit(-1);
        }

        if (((int) (* (* p))) == 116)
        {
          _Exit(-1);
        }

        if (((int) (* (* p))) == 119)
        {
          _Exit(-1);
        }

        if (((int) (* (* p))) == 89)
        {
          _Exit(-1);
        }

        if (((int) (* (* p))) == 90)
        {
          _Exit(-1);
        }

        case_98:
        ;

        {
        }
        case_66___0:
        ;

        {
        }
        case_99:
        ;

        overflow = (strtol_error) 0;
        case_69:
        ;

        {
        }
        case_71:
        ;

        case_103:
        ;

        {
        }
        case_107:
        ;

        case_75:
        ;

        {
        }
        case_77:
        ;

        case_109:
        ;

        {
        }
        case_80:
        ;

        {
        }
        case_84:
        ;

        case_116:
        ;

        {
        }
        case_119:
        ;

        {
        }
        case_89:
        ;

        {
        }
        case_90:
        ;

        {
        }
        switch_default:
        ;

        * val = tmp;
        switch_break___0:
        ;

      }
      if (* (* p))
      {
        _Exit(-1);
      }

    }

    * val = tmp;
    return err;
  }
}

extern long strtol(const char *__restrict __nptr, char **__restrict __endptr, int __base);
extern intmax_t strtoimax(const char *__restrict __nptr, char **__restrict __endptr, int __base);
int xmemcoll(char *s1, size_t s1len, char *s2, size_t s2len)
{
  int diff;
  int tmp;
  int collation_errno;
  int *tmp___0;
  {
    {
      tmp = memcoll(s1, s1len, s2, s2len);
      diff = tmp;
      tmp___0 = __errno_location();
      collation_errno = * tmp___0;
    }
    if (collation_errno)
    {
      _Exit(-1);
    }

    return diff;
  }
}

void *x2realloc(void *p, size_t *pn);
__inline static void *x2nrealloc(void *p, size_t *pn, size_t s)
{
  size_t n;
  void *tmp;
  {
    n = * pn;
    if (! p)
    {
      if (! n)
      {
        n = 128UL / s;
        n += (size_t) (! n);
      }

    }
    else
    {
      if ((0xaaaaaaaaaaaaaaaaUL / s) <= n)
      {
        _Exit(-1);
      }

      n += (n + 1UL) / 2UL;
    }

    {
      * pn = n;
      tmp = xrealloc(p, n * s);
    }
    return tmp;
  }
}

void *xrealloc(void *p, size_t n)
{
  {
    if (! n)
    {
      if (p)
      {
        _Exit(-1);
      }

    }

    {
      p = realloc(p, n);
    }
    if (! p)
    {
      if (n)
      {
        _Exit(-1);
      }

    }

    return p;
  }
}

void *x2realloc(void *p, size_t *pn)
{
  void *tmp;
  {
    {
      tmp = x2nrealloc(p, pn, (size_t) 1);
    }
    return tmp;
  }
}

#pragma GCC diagnostic ignored "-Wsuggest-attribute=const"
extern int iswalnum(wint_t __wc);
const char *program_name;
void set_program_name(const char *argv0);
extern char *program_invocation_name;
extern char *program_invocation_short_name;
extern int fputs(const char *__restrict __s, FILE *__restrict __stream);
extern char *strrchr(const char *__s, int __c);
const char *program_name = (const char *) ((void *) 0);
void set_program_name(const char *argv0)
{
  const char *slash;
  const char *base;
  int tmp;
  int tmp___0;
  {
    if (((unsigned long) argv0) == ((unsigned long) ((void *) 0)))
    {
      _Exit(-1);
    }

    {
      slash = (const char *) strrchr(argv0, '/');
    }
    if (((unsigned long) slash) != ((unsigned long) ((void *) 0)))
    {
      base = slash + 1;
    }

    if ((base - argv0) >= 7L)
    {
      {
        tmp___0 = strncmp(base - 7, "/.libs/", (size_t) 7);
      }
      if (tmp___0 == 0)
      {
        if (tmp == 0)
        {
          _Exit(-1);
        }

      }

    }

    program_name = argv0;
    program_invocation_name = (char *) argv0;
    return;
  }
}

extern long double frexpl(long double __x, int *__exponent);
extern int getgroups(int __size, __gid_t *__list);
extern int getgrouplist(const char *__user, __gid_t __group, __gid_t *__groups, int *__ngroups);
extern int strcoll(const char *__s1, const char *__s2);
__inline static int strcoll_loop(const char *s1, size_t s1size, const char *s2, size_t s2size)
{
  int diff;
  size_t size1;
  size_t tmp;
  size_t size2;
  size_t tmp___0;
  int *tmp___1;
  int *tmp___2;
  int tmp___3;
  {
    {
      while (1)
      {
        while_continue:
        ;

        {
          tmp___1 = __errno_location();
          * tmp___1 = 0;
          diff = strcoll(s1, s2);
        }
        if (diff)
        {
          tmp___3 = 1;
        }
        else
        {
          if (* tmp___2)
          {
            _Exit(-1);
          }

        }

        if (tmp___3)
        {
          goto while_break;
        }

        {
        }
        if (s1size == 0UL)
        {
          _Exit(-1);
        }

        if (s2size == 0UL)
        {
          _Exit(-1);
        }

      }

      while_break:
      ;

    }
    return diff;
  }
}

int memcoll(char *s1, size_t s1len, char *s2, size_t s2len)
{
  int diff;
  int *tmp;
  char n1;
  char n2;
  int tmp___0;
  {
    if (s1len == s2len)
    {
      {
        tmp___0 = memcmp((const void *) s1, (const void *) s2, s1len);
      }
      if (tmp___0 == 0)
      {
        {
          tmp = __errno_location();
          * tmp = 0;
          diff = 0;
        }
      }
      else
      {
        goto _L;
      }

    }
    else
    {
      _L:
      {
        n1 = * (s1 + s1len);
        n2 = * (s2 + s2len);
        * (s1 + s1len) = (char) '\000';
        * (s2 + s2len) = (char) '\000';
        diff = strcoll_loop((const char *) s1, s1len + 1UL, (const char *) s2, s2len + 1UL);
        * (s1 + s1len) = n1;
        * (s2 + s2len) = n2;
      }

    }

    return diff;
  }
}

int memcasecmp(const void *vs1, const void *vs2, size_t n);
int memcasecmp(const void *vs1, const void *vs2, size_t n);
int memcasecmp(const void *vs1, const void *vs2, size_t n)
{
  size_t i;
  const char *s1;
  const char *s2;
  unsigned char u1;
  unsigned char u2;
  int U1;
  int tmp;
  int U2;
  int tmp___0;
  int diff;
  {
    s1 = (const char *) vs1;
    s2 = (const char *) vs2;
    i = (size_t) 0;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (i < n))
        {
          goto while_break;
        }

        {
          u1 = (unsigned char) (* (s1 + i));
          u2 = (unsigned char) (* (s2 + i));
          tmp = toupper((int) u1);
          U1 = tmp;
          tmp___0 = toupper((int) u2);
          U2 = tmp___0;
          diff = U1 - U2;
        }
        if (diff)
        {
          return diff;
        }

        i++;
      }

      while_break:
      ;

    }
    return 0;
  }
}

extern int wcswidth(const wchar_t *__s, size_t __n);
const unsigned int is_basic_table[8] = {(const unsigned int) 6656, (const unsigned int) 4294967279U, (const unsigned int) 4294967294U, (const unsigned int) 2147483646};
static void *mmalloca_results[257];
extern void exit(int __status);
extern int optind;
extern int linkat(int __fromfd, const char *__from, int __tofd, const char *__to, int __flags);
static int have_follow_really;
void initbuffer(struct linebuffer *linebuffer);
struct linebuffer *readlinebuffer_delim(struct linebuffer *linebuffer, FILE *stream, char delimiter);
void initbuffer(struct linebuffer *linebuffer)
{
  {
    {
      memset((void *) linebuffer, 0, sizeof(* linebuffer));
    }
    return;
  }
}

struct linebuffer *readlinebuffer_delim(struct linebuffer *linebuffer, FILE *stream, char delimiter)
{
  int c;
  char *buffer;
  char *p;
  char *end;
  int tmp;
  int tmp___0;
  size_t oldsize;
  char *tmp___1;
  {
    {
      buffer = linebuffer->buffer;
      p = linebuffer->buffer;
      end = buffer + linebuffer->size;
      tmp = feof_unlocked(stream);
    }
    if (tmp)
    {
      _Exit(-1);
    }

    {
      while (1)
      {
        while_continue:
        ;

        {
          c = getc_unlocked(stream);
        }
        if (c == (- 1))
        {
          if (((unsigned long) p) == ((unsigned long) buffer))
          {
            return (struct linebuffer *) ((void *) 0);
          }
          else
          {
            if (tmp___0)
            {
              _Exit(-1);
            }

          }

          if (((int) (* (p + (- 1)))) == ((int) delimiter))
          {
            _Exit(-1);
          }

        }

        if (((unsigned long) p) == ((unsigned long) end))
        {
          {
            oldsize = linebuffer->size;
            buffer = (char *) x2realloc((void *) buffer, & linebuffer->size);
            p = buffer + oldsize;
            linebuffer->buffer = buffer;
            end = buffer + linebuffer->size;
          }
        }

        tmp___1 = p;
        p++;
        * tmp___1 = (char) c;
        if (! (c != ((int) delimiter)))
        {
          goto while_break;
        }

      }

      while_break:
      ;

    }
    linebuffer->length = (size_t) (p - buffer);
    return linebuffer;
  }
}

extern struct lconv *localeconv(void);
static const char power_letter[9] = {(const char) 0, (const char) 'K', (const char) 'M', (const char) 'G', (const char) 'T', (const char) 'P', (const char) 'E', (const char) 'Z', (const char) 'Y'};
static const char *const block_size_args[3] = {(const char *) "human-readable", (const char *) "si", (const char *) 0};
static const int block_size_opts[2] = {(const int) 176, (const int) 144};
static const struct hash_tuning default_tuning = {0.0f, 1.0f, 0.8f, 1.414f, (_Bool) 0};
_Bool hard_locale(int category);
extern char *setlocale(int __category, const char *__locale);
_Bool hard_locale(int category)
{
  _Bool hard;
  const char *p;
  const char *tmp;
  int tmp___0;
  int tmp___1;
  char *locale;
  char *tmp___2;
  int tmp___3;
  int tmp___4;
  {
    {
      hard = (_Bool) 1;
      tmp = (const char *) setlocale(category, (const char *) ((void *) 0));
      p = tmp;
    }
    if (p)
    {
      if (1)
      {
        {
          tmp___0 = strcmp(p, "C");
        }
        if (tmp___0 == 0)
        {
          _Exit(-1);
        }
        else
        {
          {
            tmp___1 = strcmp(p, "POSIX");
          }
          if (tmp___1 == 0)
          {
            _Exit(-1);
          }

        }

      }
      else
      {
        {
          tmp___2 = strdup(p);
          locale = tmp___2;
        }
        if (locale)
        {
          {
            p = (const char *) setlocale(category, "C");
          }
          if (p)
          {
            {
              tmp___3 = strcmp(p, (const char *) locale);
            }
            if (tmp___3 == 0)
            {
              hard = (_Bool) 0;
            }
            else
            {
              goto _L;
            }

          }
          else
          {
            _L:
            {
              p = (const char *) setlocale(category, "POSIX");
            }

            if (p)
            {
              {
                tmp___4 = strcmp(p, (const char *) locale);
              }
              if (tmp___4 == 0)
              {
                hard = (_Bool) 0;
              }

            }

          }

          {
            setlocale(category, (const char *) locale);
            free((void *) locale);
          }
        }

      }

    }

    return hard;
  }
}

static size_t bufsize;
extern void qsort(void *__base, size_t __nmemb, size_t __size, int (*__compar)(const void *, const void *));
extern FILE *freopen(const char *__restrict __filename, const char *__restrict __modes, FILE *__restrict __stream);
extern int dup2(int __fd, int __fd2);
static _Bool protect_fd(int fd)
{
  _Exit(-1);
}

FILE *freopen_safer(const char *name, const char *mode, FILE *f)
{
  _Bool protect_in;
  _Bool protect_out;
  _Bool protect_err;
  int saved_errno;
  int tmp;
  int tmp___0;
  int tmp___1;
  int tmp___2;
  _Bool tmp___3;
  _Bool tmp___4;
  _Bool tmp___5;
  int *tmp___6;
  int *tmp___7;
  {
    {
      protect_in = (_Bool) 0;
      protect_out = (_Bool) 0;
      protect_err = (_Bool) 0;
      tmp = fileno(f);
    }
    {
      if (tmp == 2)
      {
        _Exit(-1);
      }

      if (tmp == 1)
      {
        _Exit(-1);
      }

      if (tmp == 0)
      {
        goto case_0;
      }

      switch_default:
      ;

      {
      }
      if (tmp___0 != 2)
      {
        _Exit(-1);
      }

      case_2:
      ;

      {
      }
      if (tmp___1 != 1)
      {
        _Exit(-1);
      }

      case_1:
      ;

      {
      }
      if (tmp___2 != 0)
      {
        _Exit(-1);
      }

      case_0:
      ;

      goto switch_break;
      switch_break:
      ;

    }
    if (protect_in)
    {
      if (tmp___5)
      {
        _Exit(-1);
      }

    }
    else
    {
      _L___0:
      if (protect_out)
      {
        if (tmp___4)
        {
          _Exit(-1);
        }

      }
      else
      {
        _L:
        if (protect_err)
        {
          if (tmp___3)
          {
            _Exit(-1);
          }

        }
        else
        {
          {
            f = freopen((const char *) name, (const char *) mode, (FILE *) f);
          }
        }


      }


    }

    {
      tmp___6 = __errno_location();
      saved_errno = * tmp___6;
    }
    if (protect_err)
    {
      _Exit(-1);
    }

    if (protect_out)
    {
      _Exit(-1);
    }

    if (protect_in)
    {
      _Exit(-1);
    }

    if (! f)
    {
      _Exit(-1);
    }

    return f;
  }
}

extern void __fpurge(FILE *__fp);
extern int fputc(int __c, FILE *__stream);
#pragma GCC diagnostic ignored "-Wsuggest-attribute=const"
extern int fflush(FILE *__stream);
extern int __freading(FILE *__fp);
__inline static void clear_ungetc_buffer_preserving_position(FILE *fp)
{
  {
    if (fp->_flags & 256)
    {
      _Exit(-1);
    }

    return;
  }
}

int rpl_fflush(FILE *stream)
{
  int tmp;
  int tmp___0;
  int tmp___1;
  {
    if (((unsigned long) stream) == ((unsigned long) ((void *) 0)))
    {
      _Exit(-1);
    }
    else
    {
      {
        tmp___0 = __freading(stream);
      }
      if (! (tmp___0 != 0))
      {
        {
          tmp = fflush(stream);
        }
        return tmp;
      }

    }

    {
      clear_ungetc_buffer_preserving_position(stream);
      tmp___1 = fflush(stream);
    }
    return tmp___1;
  }
}

extern int fcntl(int __fd, int __cmd, ...);
static int have_dupfd_cloexec = 0;
extern int fclose(FILE *__stream);
int rpl_fclose(FILE *fp)
{
  int saved_errno;
  int fd;
  int result;
  int tmp;
  int *tmp___0;
  int tmp___1;
  int tmp___2;
  __off_t tmp___3;
  int tmp___4;
  int *tmp___5;
  {
    {
      saved_errno = 0;
      result = 0;
      fd = fileno(fp);
    }
    if (fd < 0)
    {
      _Exit(-1);
    }

    {
      tmp___1 = __freading(fp);
    }
    if (tmp___1 != 0)
    {
      {
        tmp___2 = fileno(fp);
        tmp___3 = lseek(tmp___2, (__off_t) 0, 1);
      }
      if (tmp___3 != (- 1L))
      {
        _L:
        {
          tmp___4 = rpl_fflush(fp);
        }

        if (tmp___4)
        {
          _Exit(-1);
        }

      }

    }
    else
    {
      goto _L;
    }

    {
      result = fclose(fp);
    }
    if (saved_errno != 0)
    {
      _Exit(-1);
    }

    return result;
  }
}

extern int sigemptyset(sigset_t *__set);
static struct sigaction saved_sigactions[64];
static _Bool cleanup_initialized = (_Bool) 0;
static sigset_t fatal_signal_set;
static _Bool fatal_signal_set_initialized = (_Bool) 0;
extern int posix_fadvise(int __fd, off_t __offset, off_t __len, int __advise);
void fdadvise(int fd, off_t offset, off_t len, fadvice_t advice);
void fadvise(FILE *fp, fadvice_t advice);
void fdadvise(int fd, off_t offset, off_t len, fadvice_t advice)
{
  int __x;
  int tmp;
  {
    {
      tmp = posix_fadvise(fd, offset, len, (int) advice);
      __x = tmp;
    }
    return;
  }
}

void fadvise(FILE *fp, fadvice_t advice)
{
  int tmp;
  {
    if (fp)
    {
      {
        tmp = fileno(fp);
        fdadvise(tmp, (off_t) 0, (off_t) 0, advice);
      }
    }

    return;
  }
}

#pragma weak pthread_self
#pragma weak pthread_cancel
#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma GCC diagnostic ignored "-Wsuggest-attribute=const"
const char *Version = "8.16";
extern char *optarg;
static _Bool hard_LC_COLLATE;
static size_t skip_fields;
static size_t skip_chars;
static size_t check_chars;
static enum countmode countmode;
static _Bool output_unique;
static _Bool output_first_repeated;
static _Bool output_later_repeated;
static _Bool ignore_case;
static const char *const delimit_method_string[4] = {(const char *) "none", (const char *) "prepend", (const char *) "separate", (const char *) ((void *) 0)};
static const enum delimit_method delimit_method_map[3] = {(const enum delimit_method) 0, (const enum delimit_method) 1, (const enum delimit_method) 2};
static enum delimit_method delimit_groups;
static const struct option longopts[12] = {{"count", 0, (int *) ((void *) 0), 'c'}, {"repeated", 0, (int *) ((void *) 0), 'd'}, {"all-repeated", 2, (int *) ((void *) 0), 'D'}, {"ignore-case", 0, (int *) ((void *) 0), 'i'}, {"unique", 0, (int *) ((void *) 0), 'u'}, {"skip-fields", 1, (int *) ((void *) 0), 'f'}, {"skip-chars", 1, (int *) ((void *) 0), 's'}, {"check-chars", 1, (int *) ((void *) 0), 'w'}, {"zero-terminated", 0, (int *) ((void *) 0), 'z'}, {"help", 0, (int *) ((void *) 0), - 130}, {"version", 0, (int *) ((void *) 0), - 131}, {(const char *) ((void *) 0), 0, (int *) ((void *) 0), 0}};
static size_t size_opt(const char *opt, const char *msgid)
{
  unsigned long size;
  strtol_error tmp;
  char *tmp___0;
  unsigned long tmp___1;
  char *__cil_tmp7;
  {
    {
      tmp = xstrtoul(opt, (char **) ((void *) 0), 10, & size, "");
    }
    {
      if (((unsigned int) tmp) == 0U)
      {
        goto case_0;
      }

      if (((unsigned int) tmp) == 1U)
      {
        _Exit(-1);
      }

      case_0:
      case_1:
      goto switch_break;


      switch_default:
      ;

      {
      }
      switch_break:
      ;

    }
    if (size < 0xffffffffffffffffUL)
    {
      tmp___1 = size;
    }

    return tmp___1;
  }
}

static char *find_field(const struct linebuffer *line)
{
  size_t count;
  const char *lp;
  size_t size;
  size_t i;
  const unsigned short **tmp;
  unsigned char tmp___0;
  const unsigned short **tmp___1;
  unsigned char tmp___2;
  size_t tmp___3;
  {
    lp = (const char *) line->buffer;
    size = (size_t) (line->length - 1UL);
    i = (size_t) 0;
    count = (size_t) 0;
    {
      while (1)
      {
        while_continue:
        ;

        if (count < skip_fields)
        {
          if (! (i < size))
          {
            goto while_break;
          }

        }
        else
        {
          goto while_break;
        }

        {
          while (1)
          {
            while_continue___0:
            ;

            if (i < size)
            {
              {
                tmp = __ctype_b_loc();
                tmp___0 = to_uchar((char) (* (lp + i)));
              }
              if (! (((const int) (* ((* tmp) + ((int) tmp___0)))) & 1))
              {
                goto while_break___0;
              }

            }
            else
            {
              goto while_break___0;
            }

            i++;
          }

          while_break___0:
          ;

        }
        {
          while (1)
          {
            while_continue___1:
            ;

            if (i < size)
            {
              {
                tmp___1 = __ctype_b_loc();
                tmp___2 = to_uchar((char) (* (lp + i)));
              }
              if (((const int) (* ((* tmp___1) + ((int) tmp___2)))) & 1)
              {
                goto while_break___1;
              }

            }
            else
            {
              goto while_break___1;
            }

            i++;
          }

          while_break___1:
          ;

        }
        count++;
      }

      while_break:
      ;

    }
    if (skip_chars < (size - i))
    {
      tmp___3 = skip_chars;
    }
    else
    {
      tmp___3 = size - i;
    }

    i += tmp___3;
    return (char *) (line->buffer + i);
  }
}

static _Bool different(char *old, char *new, size_t oldlen, size_t newlen)
{
  int tmp;
  int tmp___0;
  int tmp___1;
  int tmp___2;
  int tmp___3;
  {
    if (check_chars < oldlen)
    {
      oldlen = check_chars;
    }

    if (check_chars < newlen)
    {
      newlen = check_chars;
    }

    if (ignore_case)
    {
      if (oldlen != newlen)
      {
        tmp___0 = 1;
      }
      else
      {
        {
          tmp = memcasecmp((const void *) old, (const void *) new, oldlen);
        }
        if (tmp)
        {
          tmp___0 = 1;
        }
        else
        {
          tmp___0 = 0;
        }

      }

      return (_Bool) tmp___0;
    }
    else
    {
      if (hard_LC_COLLATE)
      {
        {
          tmp___1 = xmemcoll(old, oldlen, new, newlen);
        }
        return (_Bool) (tmp___1 != 0);
      }
      else
      {
        if (oldlen != newlen)
        {
          _Exit(-1);
        }
        else
        {
          if (tmp___2)
          {
            _Exit(-1);
          }

        }

      }

    }

  }
}

static void writeline(const struct linebuffer *line, _Bool match, uintmax_t linecount)
{
  int tmp;
  int tmp___0;
  {
    if (linecount == 0UL)
    {
      tmp___0 = (int) output_unique;
    }
    else
    {
      if (! match)
      {
        tmp = (int) output_first_repeated;
      }

      tmp___0 = tmp;
    }

    if (! tmp___0)
    {
      return;
    }

    if (((unsigned int) countmode) == 0U)
    {
      {
        printf((const char *) "%7lu ", linecount + 1UL);
      }
    }

    {
      fwrite_unlocked((const void *) line->buffer, sizeof(char), (size_t) line->length, (FILE *) stdout);
    }
    return;
  }
}

static void check_file(const char *infile, const char *outfile, char delimiter)
{
  struct linebuffer lb1;
  struct linebuffer lb2;
  struct linebuffer *thisline;
  struct linebuffer *prevline;
  int *tmp;
  int tmp___0;
  FILE *tmp___1;
  int *tmp___2;
  int tmp___3;
  FILE *tmp___4;
  char *prevfield;
  size_t prevlen;
  char *thisfield;
  size_t thislen;
  struct linebuffer *tmp___5;
  struct linebuffer *_tmp;
  _Bool tmp___6;
  int tmp___7;
  char *prevfield___0;
  size_t prevlen___0;
  uintmax_t match_count;
  _Bool first_delimiter;
  struct linebuffer *tmp___8;
  _Bool match;
  char *thisfield___0;
  size_t thislen___0;
  int tmp___9;
  struct linebuffer *tmp___10;
  _Bool tmp___11;
  int tmp___12;
  struct linebuffer *_tmp___0;
  int tmp___14;
  char *tmp___15;
  int tmp___16;
  int tmp___17;
  char *__cil_tmp42;
  char *__cil_tmp43;
  char *__cil_tmp44;
  char *__cil_tmp45;
  {
    {
      tmp___0 = strcmp(infile, "-");
    }
    if (! (tmp___0 == 0))
    {
      {
        tmp___1 = freopen_safer(infile, "r", stdin);
      }
      if (! tmp___1)
      {
        _Exit(-1);
      }

    }

    {
      tmp___3 = strcmp(outfile, "-");
    }
    if (! (tmp___3 == 0))
    {
      if (! tmp___4)
      {
        _Exit(-1);
      }

    }

    {
      fadvise(stdin, (fadvice_t) 2);
      thisline = & lb1;
      prevline = & lb2;
      initbuffer(thisline);
      initbuffer(prevline);
    }
    if (output_unique)
    {
      if (output_first_repeated)
      {
        if (((unsigned int) countmode) == 1U)
        {
          {
            while (1)
            {
              while_continue:
              ;

              {
                tmp___7 = feof_unlocked(stdin);
              }
              if (tmp___7)
              {
                _Exit(-1);
              }

              {
                tmp___5 = readlinebuffer_delim(thisline, stdin, delimiter);
              }
              if (((unsigned long) tmp___5) == ((unsigned long) ((struct linebuffer *) 0)))
              {
                goto while_break;
              }

              {
                thisfield = (char *) find_field((const struct linebuffer *) thisline);
                thislen = (thisline->length - 1UL) - ((size_t) (thisfield - thisline->buffer));
              }
              if (prevline->length == 0UL)
              {
                goto _L;
              }
              else
              {
                {
                  tmp___6 = different(thisfield, prevfield, thislen, prevlen);
                }
                if (tmp___6)
                {
                  _L:
                  {
                    fwrite_unlocked((const void *) thisline->buffer, sizeof(char), thisline->length, (FILE *) stdout);
                  }

                  {
                    while (1)
                    {
                      while_continue___0:
                      ;

                      _tmp = prevline;
                      prevline = thisline;
                      thisline = _tmp;
                      goto while_break___0;
                    }

                    while_break___0:
                    ;

                  }
                  prevfield = thisfield;
                  prevlen = thislen;
                }

              }

            }

            while_break:
            ;

          }
        }
        else
        {
          goto _L___2;
        }

      }
      else
      {
        goto _L___2;
      }

    }
    else
    {
      _L___2:
      {
        match_count = (uintmax_t) 0;
        first_delimiter = (_Bool) 1;
        tmp___8 = readlinebuffer_delim(prevline, stdin, delimiter);
      }

      if (((unsigned long) tmp___8) == ((unsigned long) ((struct linebuffer *) 0)))
      {
        _Exit(-1);
      }

      {
        prevfield___0 = (char *) find_field((const struct linebuffer *) prevline);
        prevlen___0 = (prevline->length - 1UL) - ((size_t) (prevfield___0 - prevline->buffer));
      }
      {
        while (1)
        {
          while_continue___1:
          ;

          {
            tmp___14 = feof_unlocked(stdin);
          }
          if (tmp___14)
          {
            _Exit(-1);
          }

          {
            tmp___10 = readlinebuffer_delim(thisline, stdin, delimiter);
          }
          if (((unsigned long) tmp___10) == ((unsigned long) ((struct linebuffer *) 0)))
          {
            {
              tmp___9 = ferror_unlocked(stdin);
            }
            if (tmp___9)
            {
              _Exit(-1);
            }

            goto while_break___1;
          }

          {
            thisfield___0 = (char *) find_field((const struct linebuffer *) thisline);
            thislen___0 = (thisline->length - 1UL) - ((size_t) (thisfield___0 - thisline->buffer));
            tmp___11 = different(thisfield___0, prevfield___0, thislen___0, prevlen___0);
          }
          if (tmp___11)
          {
            tmp___12 = 0;
          }
          else
          {
            tmp___12 = 1;
          }

          match = (_Bool) tmp___12;
          match_count += (uintmax_t) match;
          if (match_count == 0xffffffffffffffffUL)
          {
            _Exit(-1);
          }

          if (((unsigned int) delimit_groups) != 0U)
          {
            if (! match)
            {
              _Exit(-1);
            }
            else
            {
              if (match_count == 1UL)
              {
                _Exit(-1);
              }

            }

          }

          if (! match)
          {
            goto _L___0;
          }
          else
          {
            if (output_later_repeated)
            {
              _L___0:
              ;

              {
                writeline((const struct linebuffer *) prevline, match, match_count);
              }
              {
                while (1)
                {
                  while_continue___2:
                  ;

                  _tmp___0 = prevline;
                  prevline = thisline;
                  thisline = _tmp___0;
                  goto while_break___2;
                }

                while_break___2:
                ;

              }
              prevfield___0 = thisfield___0;
              prevlen___0 = thislen___0;
              if (! match)
              {
                match_count = (uintmax_t) 0;
              }

            }

          }

        }

        while_break___1:
        ;

      }
      {
        writeline((const struct linebuffer *) prevline, (_Bool) 0, match_count);
      }
    }

    closefiles:
    {
      tmp___16 = ferror_unlocked(stdin);
    }

    if (tmp___16)
    {
      _Exit(-1);
    }
    else
    {
      {
        tmp___17 = rpl_fclose(stdin);
      }
      if (tmp___17 != 0)
      {
        _Exit(-1);
      }

    }

    {
      free((void *) lb1.buffer);
      free((void *) lb2.buffer);
    }
    return;
  }
}

int main(int argc, char **argv)
{
  int optc;
  _Bool posixly_correct;
  char *tmp;
  enum Skip_field_option_type skip_field_option_type;
  int nfiles;
  const char *file[2];
  char delimiter;
  const char *tmp___0;
  char *tmp___1;
  int tmp___2;
  int tmp___3;
  unsigned long size;
  const char *tmp___4;
  char *tmp___5;
  int tmp___6;
  int tmp___7;
  strtol_error tmp___8;
  ptrdiff_t tmp___9;
  char *tmp___10;
  void *__cil_tmp22;
  char *__cil_tmp23;
  char *__cil_tmp24;
  char *__cil_tmp25;
  char *__cil_tmp26;
  char *__cil_tmp27;
  char *__cil_tmp28;
  char *__cil_tmp29;
  char *__cil_tmp30;
  char *__cil_tmp31;
  char *__cil_tmp32;
  char *__cil_tmp33;
  char *__cil_tmp34;
  char *__cil_tmp35;
  char *__cil_tmp36;
  {
    {
      optc = 0;
      tmp = getenv("POSIXLY_CORRECT");
      posixly_correct = (_Bool) (((unsigned long) tmp) != ((unsigned long) ((void *) 0)));
      skip_field_option_type = (enum Skip_field_option_type) 0;
      nfiles = 0;
      delimiter = (char) '\n';
      file[1] = "-";
      file[0] = file[1];
      set_program_name((const char *) (* (argv + 0)));
      setlocale(6, "");
      bindtextdomain("coreutils", "/usr/local/share/locale");
      textdomain("coreutils");
      hard_LC_COLLATE = hard_locale(3);
      atexit(& close_stdout);
      skip_chars = (size_t) 0;
      skip_fields = (size_t) 0;
      check_chars = 0xffffffffffffffffUL;
      output_first_repeated = (_Bool) 1;
      output_unique = output_first_repeated;
      output_later_repeated = (_Bool) 0;
      countmode = (enum countmode) 1;
      delimit_groups = (enum delimit_method) 0;
    }
    {
      while (1)
      {
        while_continue:
        ;

        if (optc == (- 1))
        {
          _Exit(-1);
        }
        else
        {
          if (posixly_correct)
          {
            if (nfiles != 0)
            {
              _Exit(-1);
            }

          }
          else
          {
            _L___3:
            {
              optc = getopt_long(argc, (char *const *) argv, "-0123456789Dcdf:is:uw:z", longopts, (int *) ((void *) 0));
            }

            if (optc == (- 1))
            {
              _L___2:
              if (argc <= optind)
              {
                goto while_break;
              }


              if (nfiles == 2)
              {
                _Exit(-1);
              }

            }
            else
            {
              {
                if (optc == 1)
                {
                  goto case_1;
                }

                if (optc == 48)
                {
                  _Exit(-1);
                }

                if (optc == 49)
                {
                  _Exit(-1);
                }

                if (optc == 50)
                {
                  _Exit(-1);
                }

                if (optc == 51)
                {
                  _Exit(-1);
                }

                if (optc == 52)
                {
                  _Exit(-1);
                }

                if (optc == 53)
                {
                  _Exit(-1);
                }

                if (optc == 54)
                {
                  _Exit(-1);
                }

                if (optc == 55)
                {
                  _Exit(-1);
                }

                if (optc == 56)
                {
                  _Exit(-1);
                }

                if (optc == 57)
                {
                  _Exit(-1);
                }

                if (optc == 99)
                {
                  goto case_99;
                }

                if (optc == 100)
                {
                  goto case_100;
                }

                if (optc == 68)
                {
                  _Exit(-1);
                }

                if (optc == 102)
                {
                  goto case_102;
                }

                if (optc == 105)
                {
                  goto case_105;
                }

                if (optc == 115)
                {
                  goto case_115;
                }

                if (optc == 117)
                {
                  goto case_117;
                }

                if (optc == 119)
                {
                  goto case_119;
                }

                if (optc == 122)
                {
                  _Exit(-1);
                }

                if (optc == (- 130))
                {
                  _Exit(-1);
                }

                if (optc == (- 131))
                {
                  _Exit(-1);
                }

                case_1:
                if (((int) (* (optarg + 0))) == 43)
                {
                  if (tmp___7 < 200112)
                  {
                    _Exit(-1);
                  }

                }
                else
                {
                  _L___1:
                  if (nfiles == 2)
                  {
                    _Exit(-1);
                  }
                  else
                  {
                    tmp___6 = nfiles;
                    nfiles++;
                    file[tmp___6] = (const char *) optarg;
                  }


                }


                goto switch_break;
                case_48:
                ;

                case_49:
                ;

                case_50:
                ;

                case_51:
                ;

                case_52:
                ;

                case_53:
                ;

                case_54:
                ;

                case_55:
                ;

                case_56:
                ;

                case_57:
                ;

                if (((unsigned int) skip_field_option_type) == 2U)
                {
                  _Exit(-1);
                }

                case_99:
                countmode = (enum countmode) 0;

                goto switch_break;
                case_100:
                output_unique = (_Bool) 0;

                goto switch_break;
                case_68:
                ;

                output_unique = (_Bool) 0;
                if (((unsigned long) optarg) == ((unsigned long) ((void *) 0)))
                {
                  _Exit(-1);
                }

                case_102:
                {
                  skip_field_option_type = (enum Skip_field_option_type) 2;
                  skip_fields = size_opt((const char *) optarg, "invalid number of fields to skip");
                }

                goto switch_break;
                case_105:
                ignore_case = (_Bool) 1;

                goto switch_break;
                case_115:
                {
                  skip_chars = size_opt((const char *) optarg, "invalid number of bytes to skip");
                }

                goto switch_break;
                case_117:
                output_first_repeated = (_Bool) 0;

                goto switch_break;
                case_119:
                {
                  check_chars = size_opt((const char *) optarg, "invalid number of bytes to compare");
                }

                goto switch_break;
                case_122:
                ;

                delimiter = (char) '\000';
                case_neg_130:
                ;

                {
                }
                case_neg_131:
                ;

                {
                }
                goto switch_break;
                switch_default:
                ;

                {
                }
                switch_break:
                ;

              }
            }

          }

        }

      }

      while_break:
      ;

    }
    if (((unsigned int) countmode) == 0U)
    {
      if (output_later_repeated)
      {
        _Exit(-1);
      }

    }

    {
      check_file(file[0], file[1], delimiter);
      exit(0);
    }
  }
}

