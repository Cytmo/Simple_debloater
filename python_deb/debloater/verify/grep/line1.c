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
typedef long ptrdiff_t;
typedef unsigned long size_t;
typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;
typedef long __off_t;
typedef long __off64_t;
struct _IO_FILE;
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
  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;
  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;
  struct _IO_marker *_markers;
  struct _IO_FILE *_chain;
  int _fileno;
  int _flags2;
  __off_t _old_offset;
  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];
  _IO_lock_t *_lock;
  __off64_t _offset;
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;
  int _mode;
  char _unused2[((15UL * (sizeof(int))) - (4UL * (sizeof(void *)))) - (sizeof(size_t))];
};
typedef int wchar_t;
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
typedef unsigned int wint_t;
typedef __mbstate_t mbstate_t;
struct mbchar
{
  const char *ptr;
  size_t bytes;
  _Bool wc_valid;
  wchar_t wc;
  char buf[24];
};
typedef struct mbchar mbchar_t;
struct mbiter_multi
{
  const char *limit;
  _Bool in_shift;
  mbstate_t state;
  _Bool next_done;
  struct mbchar cur;
};
typedef struct mbiter_multi mbi_iterator_t;
typedef long __ssize_t;
typedef __ssize_t ssize_t;
enum quoting_style
{
  literal_quoting_style = 0,
  shell_quoting_style = 1,
  shell_always_quoting_style = 2,
  c_quoting_style = 3,
  c_maybe_quoting_style = 4,
  escape_quoting_style = 5,
  locale_quoting_style = 6,
  clocale_quoting_style = 7,
  custom_quoting_style = 8
};
struct quoting_options;
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
  size_t size;
  char *val;
};
struct mbuiter_multi
{
  _Bool in_shift;
  mbstate_t state;
  _Bool next_done;
  struct mbchar cur;
};
typedef struct mbuiter_multi mbui_iterator_t;
struct __dirstream;
struct __dirstream;
struct __dirstream;
typedef struct __dirstream DIR;
typedef unsigned int __mode_t;
typedef __mode_t mode_t;
typedef unsigned long uintptr_t;
typedef unsigned long longword;
struct preliminary_header
{
  void *next;
  int magic;
};
struct __anonstruct_magic_22
{
  char room[(((((sizeof(struct preliminary_header)) + 16UL) - 1UL) / 16UL) * 16UL) - (sizeof(int))];
  int word;
};
union header
{
  void *next;
  struct __anonstruct_magic_22 magic;
};
typedef int nl_item;
struct I_ring
{
  int ir_data[4];
  int ir_default_val;
  unsigned int ir_front;
  unsigned int ir_back;
  _Bool ir_empty;
};
typedef struct I_ring I_ring;
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
struct hash_table;
typedef struct hash_table Hash_table;
struct hash_entry
{
  void *data;
  struct hash_entry *next;
};
struct hash_table
{
  struct hash_entry *bucket;
  const struct hash_entry *bucket_limit;
  size_t n_buckets;
  size_t n_buckets_used;
  size_t n_entries;
  const Hash_tuning *tuning;
  size_t (*hasher)(const void *, size_t);
  _Bool (*comparator)(const void *, const void *);
  void (*data_freer)(void *);
  struct hash_entry *free_entry_list;
};
typedef unsigned long __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long __ino_t;
typedef unsigned long __nlink_t;
struct __anonstruct___fsid_t_1
{
  int __val[2];
};
typedef struct __anonstruct___fsid_t_1 __fsid_t;
typedef long __time_t;
typedef long __blksize_t;
typedef long __blkcnt_t;
typedef unsigned long __fsblkcnt_t;
typedef unsigned long __fsfilcnt_t;
typedef long __fsword_t;
typedef long __syscall_slong_t;
typedef __ino_t ino_t;
typedef __dev_t dev_t;
typedef __nlink_t nlink_t;
struct timespec
{
  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};
struct dirent
{
  __ino_t d_ino;
  __off_t d_off;
  unsigned short d_reclen;
  unsigned char d_type;
  char d_name[256];
};
struct stat
{
  __dev_t st_dev;
  __ino_t st_ino;
  __nlink_t st_nlink;
  __mode_t st_mode;
  __uid_t st_uid;
  __gid_t st_gid;
  int __pad0;
  __dev_t st_rdev;
  __off_t st_size;
  __blksize_t st_blksize;
  __blkcnt_t st_blocks;
  struct timespec st_atim;
  struct timespec st_mtim;
  struct timespec st_ctim;
  __syscall_slong_t __glibc_reserved[3];
};
struct _ftsent;
struct _ftsent;
struct _ftsent;
struct cycle_check_state;
struct cycle_check_state;
struct cycle_check_state;
union __anonunion_fts_cycle_19
{
  struct hash_table *ht;
  struct cycle_check_state *state;
};
struct __anonstruct_FTS_18
{
  struct _ftsent *fts_cur;
  struct _ftsent *fts_child;
  struct _ftsent **fts_array;
  dev_t fts_dev;
  char *fts_path;
  int fts_rfd;
  int fts_cwd_fd;
  size_t fts_pathlen;
  size_t fts_nitems;
  int (*fts_compar)(const struct _ftsent **, const struct _ftsent **);
  int fts_options;
  struct hash_table *fts_leaf_optimization_works_ht;
  union __anonunion_fts_cycle_19 fts_cycle;
  I_ring fts_fd_ring;
};
typedef struct __anonstruct_FTS_18 FTS;
struct _ftsent
{
  struct _ftsent *fts_cycle;
  struct _ftsent *fts_parent;
  struct _ftsent *fts_link;
  DIR *fts_dirp;
  long fts_number;
  void *fts_pointer;
  char *fts_accpath;
  char *fts_path;
  int fts_errno;
  int fts_symfd;
  size_t fts_pathlen;
  FTS *fts_fts;
  ptrdiff_t fts_level;
  size_t fts_namelen;
  nlink_t fts_n_dirs_remaining;
  unsigned short fts_info;
  unsigned short fts_flags;
  unsigned short fts_instr;
  struct stat fts_statp[1];
  char fts_name[1];
};
typedef struct _ftsent FTSENT;
typedef unsigned long uintmax_t;
struct dev_ino
{
  ino_t st_ino;
  dev_t st_dev;
};
struct cycle_check_state
{
  struct dev_ino dev_ino;
  uintmax_t chdir_counter;
  int magic;
};
struct Active_dir
{
  dev_t dev;
  ino_t ino;
  FTSENT *fts_ent;
};
struct statfs
{
  __fsword_t f_type;
  __fsword_t f_bsize;
  __fsblkcnt_t f_blocks;
  __fsblkcnt_t f_bfree;
  __fsblkcnt_t f_bavail;
  __fsfilcnt_t f_files;
  __fsfilcnt_t f_ffree;
  __fsid_t f_fsid;
  __fsword_t f_namelen;
  __fsword_t f_frsize;
  __fsword_t f_flags;
  __fsword_t f_spare[4];
};
struct LCO_ent
{
  dev_t st_dev;
  _Bool opt_ok;
};
typedef unsigned long __re_long_size_t;
typedef unsigned long reg_syntax_t;
struct re_dfa_t;
struct re_dfa_t;
struct re_dfa_t;
struct re_pattern_buffer
{
  struct re_dfa_t *buffer;
  __re_long_size_t allocated;
  __re_long_size_t used;
  reg_syntax_t syntax;
  char *fastmap;
  unsigned char *translate;
  size_t re_nsub;
  unsigned int can_be_null : 1;
  unsigned int regs_allocated : 2;
  unsigned int fastmap_accurate : 1;
  unsigned int no_sub : 1;
  unsigned int not_bol : 1;
  unsigned int not_eol : 1;
  unsigned int newline_anchor : 1;
};
typedef struct re_pattern_buffer regex_t;
typedef int regoff_t;
struct __anonstruct_regmatch_t_29
{
  regoff_t rm_so;
  regoff_t rm_eo;
};
typedef struct __anonstruct_regmatch_t_29 regmatch_t;
struct exclude;
struct exclude;
struct exclude;
union __anonunion_v_33
{
  const char *pattern;
  regex_t re;
};
struct patopts
{
  int options;
  union __anonunion_v_33 v;
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
union __anonunion_v_34
{
  Hash_table *table;
  struct exclude_pattern pat;
};
struct exclude_segment
{
  struct exclude_segment *next;
  enum exclude_type type;
  int options;
  union __anonunion_v_34 v;
};
struct pattern_buffer
{
  struct pattern_buffer *next;
  char *base;
};
struct exclude
{
  struct exclude_segment *head;
  struct pattern_buffer *patbuf;
};
struct real_pcre;
struct real_pcre;
struct real_pcre;
typedef struct real_pcre pcre;
struct real_pcre_jit_stack;
struct real_pcre_jit_stack;
struct real_pcre_jit_stack;
typedef struct real_pcre_jit_stack pcre_jit_stack;
struct pcre_extra
{
  unsigned long flags;
  void *study_data;
  unsigned long match_limit;
  void *callout_data;
  const unsigned char *tables;
  unsigned long match_limit_recursion;
  unsigned char **mark;
  void *executable_jit;
};
typedef struct pcre_extra pcre_extra;
struct kwsmatch
{
  size_t index;
  size_t offset[1];
  size_t size[1];
};
struct kwset;
struct kwset;
struct kwset;
typedef struct kwset *kwset_t;
typedef signed char mb_len_map_t;
struct obstack;
struct obstack;
struct obstack;
struct _obstack_chunk
{
  char *limit;
  struct _obstack_chunk *prev;
  char contents[4];
};
union __anonunion_temp_56
{
  long tempint;
  void *tempptr;
};
struct obstack
{
  long chunk_size;
  struct _obstack_chunk *chunk;
  char *object_base;
  char *next_free;
  char *chunk_limit;
  union __anonunion_temp_56 temp;
  int alignment_mask;
  struct _obstack_chunk *(*chunkfun)(void *, long);
  void (*freefun)(void *, struct _obstack_chunk *);
  void *extra_arg;
  unsigned int use_extra_arg : 1;
  unsigned int maybe_empty_object : 1;
  unsigned int alloc_failed : 1;
};
struct trie;
struct trie;
struct trie;
struct tree
{
  struct tree *llink;
  struct tree *rlink;
  struct trie *trie;
  unsigned char label;
  char balance;
};
struct trie
{
  size_t accepting;
  struct tree *links;
  struct trie *parent;
  struct trie *next;
  struct trie *fail;
  int depth;
  int shift;
  int maxshift;
};
struct kwset
{
  struct obstack obstack;
  ptrdiff_t words;
  struct trie *trie;
  int mind;
  int maxd;
  unsigned char delta[256];
  struct trie *next[256];
  char *target;
  int *shift;
  const char *trans;
  char gc1;
  char gc2;
  int gc1help;
};
enum __anonenum_dirs_58
{
  L = 0,
  R = 1
};
typedef int __re_idx_t;
typedef unsigned int __re_size_t;
struct re_registers
{
  __re_size_t num_regs;
  regoff_t *start;
  regoff_t *end;
};
struct dfamust
{
  _Bool exact;
  _Bool begline;
  _Bool endline;
  char *must;
  struct dfamust *next;
};
struct dfa;
struct dfa;
struct dfa;
struct patterns
{
  struct re_pattern_buffer regexbuf;
  struct re_registers regs;
};
enum __anonenum_mode_60
{
  DW_NONE = 0,
  DW_POSIX = 1,
  DW_GNU = 2
};
typedef unsigned long wctype_t;
typedef unsigned int charclass_word;
typedef charclass_word charclass[8];
typedef ptrdiff_t token;
struct __anonstruct_position_35
{
  size_t index;
  unsigned int constraint;
};
typedef struct __anonstruct_position_35 position;
struct __anonstruct_position_set_36
{
  position *elems;
  size_t nelem;
  size_t alloc;
};
typedef struct __anonstruct_position_set_36 position_set;
struct __anonstruct_leaf_set_37
{
  size_t *elems;
  size_t nelem;
};
typedef struct __anonstruct_leaf_set_37 leaf_set;
struct __anonstruct_dfa_state_38
{
  size_t hash;
  position_set elems;
  unsigned char context;
  _Bool has_backref;
  _Bool has_mbcset;
  unsigned short constraint;
  token first_end;
  position_set mbps;
};
typedef struct __anonstruct_dfa_state_38 dfa_state;
typedef ptrdiff_t state_num;
struct __anonstruct_ranges_39
{
  wchar_t beg;
  wchar_t end;
};
struct mb_char_classes
{
  ptrdiff_t cset;
  _Bool invert;
  wchar_t *chars;
  size_t nchars;
  wctype_t *ch_classes;
  size_t nch_classes;
  struct __anonstruct_ranges_39 *ranges;
  size_t nranges;
  char **equivs;
  size_t nequivs;
  char **coll_elems;
  size_t ncoll_elems;
};
struct dfa
{
  charclass *charclasses;
  size_t cindex;
  size_t calloc;
  token *tokens;
  size_t tindex;
  size_t talloc;
  size_t depth;
  size_t nleaves;
  size_t nregexps;
  _Bool fast;
  _Bool multibyte;
  token utf8_anychar_classes[5];
  mbstate_t mbs;
  int *multibyte_prop;
  wint_t mbrtowc_cache[256];
  struct mb_char_classes *mbcsets;
  size_t nmbcsets;
  size_t mbcsets_alloc;
  struct dfa *superset;
  dfa_state *states;
  state_num sindex;
  size_t salloc;
  position_set *follows;
  _Bool searchflag;
  state_num tralloc;
  int trcount;
  state_num **trans;
  state_num **fails;
  int *success;
  state_num *newlines;
  struct dfamust *musts;
  position_set mb_follows;
  int *mb_match_lens;
};
typedef int predicate(int);
struct dfa_ctype
{
  const char *name;
  predicate *func;
  _Bool single_byte_only;
};
struct __anonstruct_stkalloc_43
{
  _Bool nullable;
  size_t nfirstpos;
  size_t nlastpos;
};
enum __anonenum_status_transit_state_44
{
  TRANSIT_STATE_IN_PROGRESS = 0,
  TRANSIT_STATE_DONE = 1,
  TRANSIT_STATE_END_BUFFER = 2
};
typedef enum __anonenum_status_transit_state_44 status_transit_state;
struct must;
struct must;
struct must;
typedef struct must must;
struct must
{
  char **in;
  char *left;
  char *right;
  char *is;
  _Bool begline;
  _Bool endline;
  must *prev;
};
typedef __off_t off_t;
struct color_cap
{
  const char *name;
  const char **var;
  void (*fct)(void);
};
enum directories_type
{
  READ_DIRECTORIES = 2,
  RECURSE_DIRECTORIES = 3,
  SKIP_DIRECTORIES = 4
};
enum __anonenum_devices_71
{
  READ_COMMAND_LINE_DEVICES = 0,
  READ_DEVICES = 1,
  SKIP_DEVICES = 2
};
enum __anonenum_binary_files_72
{
  BINARY_BINARY_FILES = 0,
  TEXT_BINARY_FILES = 1,
  WITHOUT_MATCH_BINARY_FILES = 2
};
enum __anonenum_File_type_73
{
  UNKNOWN = 0,
  DOS_BINARY = 1,
  DOS_TEXT = 2,
  UNIX_TEXT = 3
};
typedef enum __anonenum_File_type_73 File_type;
struct dos_map
{
  off_t pos;
  off_t add;
};
struct matcher
{
  const char name[16];
  void (*compile)(const char *, size_t);
  size_t (*execute)(const char *, size_t, size_t *, const char *);
};
extern const unsigned short **__ctype_b_loc(void);
extern void __assert_fail(const char *__assertion, const char *__file, unsigned int __line, const char *__function);
extern int *__errno_location(void);
extern char *strchr(const char *__s, int __c);
extern void abort(void);
extern void error(int __status, int __errnum, const char *__format, ...);
volatile int exit_failure;
extern char *gettext(const char *__msgid);
extern intmax_t strtoimax(const char *__restrict __nptr, char **__restrict __endptr, int __base);
strtol_error xstrtoimax(const char *s, char **ptr, int strtol_base, intmax_t *val, const char *valid_suffixes);
static strtol_error bkm_scale___1(intmax_t *x, int scale_factor)
{
}

static strtol_error bkm_scale_by_power___1(intmax_t *x, int base, int power)
{
}

strtol_error xstrtoimax(const char *s, char **ptr, int strtol_base, intmax_t *val, const char *valid_suffixes)
{
}

void xalloc_die(void);
void *xmalloc(size_t n);
void *xrealloc(void *p, size_t n);
void *xnmalloc(size_t n, size_t s);
void *xnmalloc(size_t n, size_t s);
void *xnmalloc(size_t n, size_t s)
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
      }
    }

    {
      tmp___0 = xmalloc(n * s);
    }
    return tmp___0;
  }
}

void *xnrealloc(void *p, size_t n, size_t s);
void *xnrealloc(void *p, size_t n, size_t s);
void *xnrealloc(void *p, size_t n, size_t s)
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
      }
    }

    {
      tmp___0 = xrealloc(p, n * s);
    }
    return tmp___0;
  }
}

void *x2nrealloc(void *p, size_t *pn, size_t s)
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
        {
        }
      }

      n += (n / 2UL) + 1UL;
    }

    {
      * pn = n;
      tmp = xrealloc(p, n * s);
    }
    return tmp;
  }
}

char *xcharalloc(size_t n);
char *xcharalloc(size_t n);
char *xcharalloc(size_t n)
{
}

void *xzalloc(size_t s);
void *xcalloc(size_t n, size_t s);
void *x2realloc(void *p, size_t *pn);
void *xmemdup(const void *p, size_t s);
char *xstrdup(const char *string);
extern void *malloc(size_t __size);
extern void *calloc(size_t __nmemb, size_t __size);
extern void *realloc(void *__ptr, size_t __size);
extern void free(void *__ptr);
extern void *memcpy(void *__restrict __dest, const void *__restrict __src, size_t __n);
extern void *memset(void *__s, int __c, size_t __n);
extern size_t strlen(const char *__s);
void *xmalloc(size_t n);
void *xmalloc(size_t n)
{
  void *p;
  void *tmp;
  {
    {
      tmp = malloc(n);
      p = tmp;
    }
    if (! p)
    {
      if (n != 0UL)
      {
      }

    }

    return p;
  }
}

void *xrealloc(void *p, size_t n);
void *xrealloc(void *p, size_t n)
{
  {
    if (! n)
    {
      if (p)
      {
      }

    }

    {
      p = realloc(p, n);
    }
    if (! p)
    {
      if (n)
      {
      }

    }

    return p;
  }
}

void *x2realloc(void *p, size_t *pn)
{
}

void *xzalloc(size_t s);
void *xzalloc(size_t s)
{
  void *tmp;
  void *tmp___0;
  {
    {
      tmp = xmalloc(s);
      tmp___0 = memset(tmp, 0, s);
    }
    return tmp___0;
  }
}

void *xcalloc(size_t n, size_t s);
void *xcalloc(size_t n, size_t s)
{
  void *p;
  {
    {
      p = calloc(n, s);
    }
    if (! p)
    {
      {
      }
    }

    return p;
  }
}

void *xmemdup(const void *p, size_t s);
void *xmemdup(const void *p, size_t s)
{
  void *tmp;
  void *tmp___0;
  {
    {
      tmp = xmalloc(s);
      tmp___0 = memcpy((void *) tmp, (const void *) p, s);
    }
    return tmp___0;
  }
}

char *xstrdup(const char *string);
char *xstrdup(const char *string)
{
  size_t tmp;
  char *tmp___0;
  {
    {
      tmp = strlen(string);
      tmp___0 = (char *) xmemdup((const void *) string, tmp + 1UL);
    }
    return tmp___0;
  }
}

void xalloc_die(void);
void xalloc_die(void)
{
}

extern int strcmp(const char *__s1, const char *__s2);
extern struct _IO_FILE *stdout;
extern int fprintf(FILE *__restrict __stream, const char *__restrict __format, ...);
extern int printf(const char *__restrict __format, ...);
extern int fputs_unlocked(const char *__restrict __s, FILE *__restrict __stream);
const char version_etc_copyright[47];
void version_etc_arn(FILE *stream, const char *command_name, const char *package, const char *version, const char *const *authors, size_t n_authors);
void version_etc_va(FILE *stream, const char *command_name, const char *package, const char *version, va_list authors);
void version_etc(FILE *stream, const char *command_name, const char *package, const char *version, ...);
void version_etc_arn(FILE *stream, const char *command_name, const char *package, const char *version, const char *const *authors, size_t n_authors)
{
}

void version_etc_va(FILE *stream, const char *command_name, const char *package, const char *version, va_list authors)
{
}

void version_etc(FILE *stream, const char *command_name, const char *package, const char *version, ...);
void version_etc(FILE *stream, const char *command_name, const char *package, const char *version, ...)
{
}

const char version_etc_copyright[47] = {(const char) 'C', (const char) 'o', (const char) 'p', (const char) 'y', (const char) 'r', (const char) 'i', (const char) 'g', (const char) 'h', (const char) 't', (const char) ' ', (const char) '%', (const char) 's', (const char) ' ', (const char) '%', (const char) 'd', (const char) ' ', (const char) 'F', (const char) 'r', (const char) 'e', (const char) 'e', (const char) ' ', (const char) 'S', (const char) 'o', (const char) 'f', (const char) 't', (const char) 'w', (const char) 'a', (const char) 'r', (const char) 'e', (const char) ' ', (const char) 'F', (const char) 'o', (const char) 'u', (const char) 'n', (const char) 'd', (const char) 'a', (const char) 't', (const char) 'i', (const char) 'o', (const char) 'n', (const char) ',', (const char) ' ', (const char) 'I', (const char) 'n', (const char) 'c', (const char) '.', (const char) '\000'};
char *trim2(const char *s, int how);
extern void *memmove(void *__dest, const void *__src, size_t __n);
extern char *strdup(const char *__s);
extern size_t __ctype_get_mb_cur_max(void);
extern int mbsinit(const mbstate_t *__ps);
extern size_t mbrtowc(wchar_t *__restrict __pwc, const char *__restrict __s, size_t __n, mbstate_t *__restrict __p);
extern int iswspace(wint_t __wc);
void mb_copy(mbchar_t *new_mbc, const mbchar_t *old_mbc)
{
}

const unsigned int is_basic_table[8];
_Bool is_basic(char c)
{
}

void mbiter_multi_next(struct mbiter_multi *iter)
{
}

char *trim2(const char *s, int how)
{
}

size_t strnlen1(const char *string, size_t maxlen);
extern void *memchr(const void *__s, int __c, size_t __n);
size_t strnlen1(const char *string, size_t maxlen);
size_t strnlen1(const char *string, size_t maxlen)
{
}

int c_strcasecmp(const char *s1, const char *s2);
extern int close(int __fd);
extern int fchdir(int __fd);
int set_cloexec_flag(int desc, _Bool value);
int open_safer(const char *file, int flags, ...);
size_t safe_read(int fd, void *buf, size_t count);
extern ssize_t read(int __fd, void *__buf, size_t __nbytes);
size_t safe_read(int fd, void *buf, size_t count)
{
  ssize_t result;
  ssize_t tmp;
  int *tmp___0;
  int *tmp___1;
  {
    {
      while (1)
      {
        while_continue:
        ;

        {
          tmp = read(fd, buf, count);
          result = tmp;
        }
        if (0L <= result)
        {
          return (size_t) result;
        }
        else
        {
          {
          }
          if ((* tmp___1) == 4)
          {
          }
          else
          {
            {
            }
            if ((* tmp___0) == 22)
            {
            }

          }

        }

        __Cont:
;        ;

      }

      while_break:
      ;

    }
    return 0UL;
  }
}

const char *const quoting_style_args[9];
const enum quoting_style quoting_style_vals[8];
int set_char_quoting(struct quoting_options *o, char c, int i);
char *quotearg_n_style(int n, enum quoting_style s, const char *arg);
char *quotearg_char(const char *arg, char ch);
char *quotearg_char_mem(const char *arg, size_t argsize, char ch);
char *quotearg_colon(const char *arg);
struct quoting_options quote_quoting_options;
const char *quote_n_mem(int n, const char *arg, size_t argsize);
const char *quote_n(int n, const char *arg);
const char *quote(const char *arg);
const char *locale_charset(void);
extern int memcmp(const void *__s1, const void *__s2, size_t __n);
extern int iswprint(wint_t __wc);
const char *const quoting_style_args[9] = {(const char *) "literal", (const char *) "shell", (const char *) "shell-always", (const char *) "c", (const char *) "c-maybe", (const char *) "escape", (const char *) "locale", (const char *) "clocale", (const char *) ((const char *) 0)};
const enum quoting_style quoting_style_vals[8] = {(const enum quoting_style) 0, (const enum quoting_style) 1, (const enum quoting_style) 2, (const enum quoting_style) 3, (const enum quoting_style) 4, (const enum quoting_style) 5, (const enum quoting_style) 6, (const enum quoting_style) 7};
static struct quoting_options default_quoting_options;
int set_char_quoting(struct quoting_options *o, char c, int i)
{
}

static struct quoting_options quoting_options_from_style(enum quoting_style style)
{
}

static const char *gettext_quote(const char *msgid, enum quoting_style s)
{
}

static size_t quotearg_buffer_restyled(char *buffer___0, size_t buffersize, const char *arg, size_t argsize, enum quoting_style quoting_style, int flags, const unsigned int *quote_these_too, const char *left_quote, const char *right_quote)
{
}

static char slot0[256];
static unsigned int nslots = 1U;
static struct slotvec slotvec0 = {sizeof(slot0), slot0};
static struct slotvec *slotvec = & slotvec0;
static char *quotearg_n_options(int n, const char *arg, size_t argsize, const struct quoting_options *options)
{
}

char *quotearg_n_style(int n, enum quoting_style s, const char *arg)
{
}

char *quotearg_char_mem(const char *arg, size_t argsize, char ch)
{
}

char *quotearg_char(const char *arg, char ch)
{
}

char *quotearg_colon(const char *arg)
{
}

struct quoting_options quote_quoting_options = {(enum quoting_style) 6, 0, {0U}, (const char *) ((void *) 0), (const char *) ((void *) 0)};
const char *quote_n_mem(int n, const char *arg, size_t argsize)
{
}

const char *quote_n(int n, const char *arg)
{
}

const char *quote(const char *arg)
{
}

const char *proper_name(const char *name);
extern int sprintf(char *__restrict __s, const char *__restrict __format, ...);
char *mbsstr(const char *haystack, const char *needle);
extern int iswalnum(wint_t __wc);
void mbuiter_multi_next(struct mbuiter_multi *iter)
{
}

static _Bool mbsstr_trimmed_wordbounded(const char *string, const char *sub)
{
}

const char *proper_name(const char *name)
{
}

const char *program_name;
void set_program_name(const char *argv0);
extern char *program_invocation_name;
extern char *program_invocation_short_name;
extern struct _IO_FILE *stderr;
extern int fputs(const char *__restrict __s, FILE *__restrict __stream);
extern int strncmp(const char *__s1, const char *__s2, size_t __n);
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
      {
      }
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
        {
        }
        if (tmp == 0)
        {
        }

      }

    }

    program_name = argv0;
    program_invocation_name = (char *) argv0;
    return;
  }
}

int fd_safer(int fd);
extern DIR *fdopendir(int __fd);
extern int closedir(DIR *__dirp);
extern int dirfd(DIR *__dirp);
int dup_safer(int fd);
int openat_safer(int fd, const char *file, int flags, ...);
extern int openat(int __fd, const char *__file, int __oflag, ...);
int openat_safer(int fd, const char *file, int flags, ...)
{
  mode_t mode___0;
  va_list ap;
  int tmp;
  int tmp___0;
  {
    mode___0 = (mode_t) 0;
    if (flags & 64)
    {
      {
      }
    }

    {
      tmp = openat(fd, file, flags, mode___0);
      tmp___0 = fd_safer(tmp);
    }
    return tmp___0;
  }
}

extern int open(const char *__file, int __oflag, ...);
int open_safer(const char *file, int flags, ...)
{
}

void *memchr2(const void *s, int c1_in, int c2_in, size_t n);
void *memchr2(const void *s, int c1_in, int c2_in, size_t n);
void *memchr2(const void *s, int c1_in, int c2_in, size_t n)
{
}

extern size_t strnlen(const char *__string, size_t __maxlen);
size_t mbslen(const char *string);
void *mmalloca(size_t n);
void freea(void *p);
static _Bool knuth_morris_pratt(const unsigned char *haystack, const unsigned char *needle, size_t needle_len, const unsigned char **resultp)
{
}

static _Bool knuth_morris_pratt_multibyte(const char *haystack, const char *needle, const char **resultp)
{
}

char *mbsstr(const char *haystack, const char *needle);
char *mbsstr(const char *haystack, const char *needle)
{
}

size_t mbslen(const char *string);
size_t mbslen(const char *string)
{
}

int mbscasecmp(const char *s1, const char *s2);
extern int tolower(int __c);
extern wint_t towlower(wint_t __wc);
int mbscasecmp(const char *s1, const char *s2);
int mbscasecmp(const char *s1, const char *s2)
{
}

const unsigned int is_basic_table[8] = {(const unsigned int) 6656, (const unsigned int) 4294967279U, (const unsigned int) 4294967294U, (const unsigned int) 2147483646};
static void *mmalloca_results[257];
void *mmalloca(size_t n)
{
}

void freea(void *p)
{
}

#pragma weak pthread_mutex_init
#pragma weak pthread_mutex_lock
#pragma weak pthread_mutex_unlock
#pragma weak pthread_mutex_destroy
#pragma weak pthread_rwlock_init
#pragma weak pthread_rwlock_rdlock
#pragma weak pthread_rwlock_wrlock
#pragma weak pthread_rwlock_unlock
#pragma weak pthread_rwlock_destroy
#pragma weak pthread_once
#pragma weak pthread_cond_init
#pragma weak pthread_cond_wait
#pragma weak pthread_cond_signal
#pragma weak pthread_cond_broadcast
#pragma weak pthread_cond_destroy
#pragma weak pthread_mutexattr_init
#pragma weak pthread_mutexattr_settype
#pragma weak pthread_mutexattr_destroy
#pragma weak pthread_self
#pragma weak pthread_cancel
extern int fclose(FILE *__stream);
extern FILE *fdopen(int __fd, const char *__modes);
extern int fscanf(FILE *__restrict __stream, const char *__restrict __format, ...);
extern int getc_unlocked(FILE *__stream);
extern int ungetc(int __c, FILE *__stream);
extern char *strcpy(char *__restrict __dest, const char *__restrict __src);
extern char *getenv(const char *__name);
extern char *nl_langinfo(nl_item __item);
static const char *volatile charset_aliases;
static const char *get_charset_aliases(void)
{
}

const char *locale_charset(void)
{
}

void i_ring_init(I_ring *ir, int default_val);
int i_ring_push(I_ring *ir, int val);
int i_ring_pop(I_ring *ir);
_Bool i_ring_empty(const I_ring *ir);
void i_ring_init(I_ring *ir, int default_val)
{
}

_Bool i_ring_empty(const I_ring *ir);
_Bool i_ring_empty(const I_ring *ir)
{
}

int i_ring_push(I_ring *ir, int val)
{
}

int i_ring_pop(I_ring *ir)
{
}

void *hash_lookup(const Hash_table *table, const void *entry);
size_t hash_string(const char *string, size_t n_buckets);
Hash_table *hash_initialize(size_t candidate, const Hash_tuning *tuning, size_t (*hasher)(const void *, size_t), _Bool (*comparator)(const void *, const void *), void (*data_freer)(void *));
void hash_free(Hash_table *table);
_Bool hash_rehash(Hash_table *table, size_t candidate);
void *hash_insert(Hash_table *table, const void *entry);
int hash_insert_if_absent(Hash_table *table, const void *entry, const void **matched_ent);
void *hash_delete(Hash_table *table, const void *entry);
size_t rotr_sz(size_t x, int n)
{
}

static const struct hash_tuning default_tuning = {0.0f, 1.0f, 0.8f, 1.414f, (_Bool) 0};
static struct hash_entry *safe_hasher(const Hash_table *table, const void *key)
{
}

void *hash_lookup(const Hash_table *table, const void *entry)
{
}

size_t hash_string(const char *string, size_t n_buckets);
size_t hash_string(const char *string, size_t n_buckets)
{
}

static _Bool is_prime(size_t candidate);
static _Bool is_prime(size_t candidate);
static _Bool is_prime(size_t candidate)
{
}

static size_t next_prime(size_t candidate);
static size_t next_prime(size_t candidate);
static size_t next_prime(size_t candidate)
{
}

static size_t raw_hasher(const void *data, size_t n)
{
}

static _Bool raw_comparator(const void *a, const void *b)
{
}

static _Bool check_tuning(Hash_table *table)
{
}

static size_t compute_bucket_size(size_t candidate, const Hash_tuning *tuning)
{
}

Hash_table *hash_initialize(size_t candidate, const Hash_tuning *tuning, size_t (*hasher)(const void *, size_t), _Bool (*comparator)(const void *, const void *), void (*data_freer)(void *))
{
}

void hash_free(Hash_table *table)
{
}

static struct hash_entry *allocate_entry(Hash_table *table)
{
}

static void free_entry(Hash_table *table, struct hash_entry *entry)
{
}

static void *hash_find_entry(Hash_table *table, const void *entry, struct hash_entry **bucket_head, _Bool delete___0)
{
}

static _Bool transfer_entries(Hash_table *dst, Hash_table *src, _Bool safe)
{
}

_Bool hash_rehash(Hash_table *table, size_t candidate)
{
}

int hash_insert_if_absent(Hash_table *table, const void *entry, const void **matched_ent)
{
}

void *hash_insert(Hash_table *table, const void *entry)
{
}

void *hash_delete(Hash_table *table, const void *entry)
{
}

extern struct dirent *readdir(DIR *__dirp);
extern int stat(const char *__restrict __file, struct stat *__restrict __buf);
extern int fstat(int __fd, struct stat *__buf);
extern int fstatat(int __fd, const char *__restrict __file, struct stat *__restrict __buf, int __flag);
extern int lstat(const char *__restrict __file, struct stat *__restrict __buf);
int fts_close(FTS *sp);
FTS *fts_open(char *const *argv, int options, int (*compar)(const FTSENT **, const FTSENT **));
FTSENT *fts_read(FTS *sp);
int fts_set(FTS *sp, FTSENT *p, int instr);
extern void qsort(void *__base, size_t __nmemb, size_t __size, int (*__compar)(const void *, const void *));
static FTSENT *fts_alloc(FTS *sp, const char *name, size_t namelen);
static FTSENT *fts_build(FTS *sp, int type);
static void fts_lfree(FTSENT *head);
static void fts_load(FTS *sp, FTSENT *p);
static size_t fts_maxarglen(char *const *argv);
static void fts_padjust(FTS *sp, FTSENT *head);
static _Bool fts_palloc(FTS *sp, size_t more);
static FTSENT *fts_sort(FTS *sp, FTSENT *head, size_t nitems);
static unsigned short fts_stat(FTS *sp, FTSENT *p, _Bool follow);
static int fts_safe_changedir(FTS *sp, FTSENT *p, int fd, const char *dir);
void cycle_check_init(struct cycle_check_state *state);
_Bool cycle_check(struct cycle_check_state *state, const struct stat *sb);
static _Bool AD_compare(const void *x, const void *y)
{
}

static size_t AD_hash(const void *x, size_t table_size)
{
}

static _Bool setup_dir(FTS *fts)
{
}

static _Bool enter_dir(FTS *fts, FTSENT *ent)
{
}

static void leave_dir(FTS *fts, FTSENT *ent)
{
}

static void free_dir(FTS *sp)
{
}

static void fd_ring_clear(I_ring *fd_ring)
{
}

static void fts_set_stat_required(FTSENT *p, _Bool required)
{
}

static DIR *opendirat(int fd, const char *dir, int extra_flags, int *pdir_fd)
{
}

static void cwd_advance_fd(FTS *sp, int fd, _Bool chdir_down_one)
{
}

static int restore_initial_cwd(FTS *sp)
{
}

static int diropen(const FTS *sp, const char *dir)
{
}

FTS *fts_open(char *const *argv, int options, int (*compar)(const FTSENT **, const FTSENT **));
FTS *fts_open(char *const *argv, int options, int (*compar)(const FTSENT **, const FTSENT **))
{
}

static void fts_load(FTS *sp, FTSENT *p)
{
}

int fts_close(FTS *sp);
int fts_close(FTS *sp)
{
}

extern int fstatfs(int __fildes, struct statfs *__buf);
static _Bool dirent_inode_sort_may_be_useful(int dir_fd)
{
}

static _Bool leaf_optimization_applies(int dir_fd)
{
}

static size_t LCO_hash(const void *x, size_t table_size)
{
}

static _Bool LCO_compare(const void *x, const void *y)
{
}

static _Bool link_count_optimize_ok(const FTSENT *p)
{
}

FTSENT *fts_read(FTS *sp);
FTSENT *fts_read(FTS *sp)
{
}

int fts_set(FTS *sp, FTSENT *p, int instr);
int fts_set(FTS *sp, FTSENT *p, int instr)
{
}

static int fts_compare_ino(const struct _ftsent **a, const struct _ftsent **b)
{
}

static void set_stat_type(struct stat *st, unsigned int dtype)
{
}

static FTSENT *fts_build(FTS *sp, int type)
{
}

static unsigned short fts_stat(FTS *sp, FTSENT *p, _Bool follow)
{
}

static int fts_compar(const void *a, const void *b)
{
}

static FTSENT *fts_sort(FTS *sp, FTSENT *head, size_t nitems)
{
}

static FTSENT *fts_alloc(FTS *sp, const char *name, size_t namelen)
{
}

static void fts_lfree(FTSENT *head)
{
}

static _Bool fts_palloc(FTS *sp, size_t more)
{
}

static void fts_padjust(FTS *sp, FTSENT *head)
{
}

static size_t fts_maxarglen(char *const *argv)
{
}

static int fts_safe_changedir(FTS *sp, FTSENT *p, int fd, const char *dir)
{
}

extern void *mempcpy(void *__restrict __dest, const void *__restrict __src, size_t __n);
int fd_safer(int fd)
{
  int f;
  int tmp;
  int e;
  int *tmp___0;
  int *tmp___1;
  {
    if (0 <= fd)
    {
      if (fd <= 2)
      {
        {
        }
      }

    }

    return fd;
  }
}

extern int fcntl(int __fd, int __cmd, ...);
int rpl_fcntl(int fd, int action, ...);
static int have_dupfd_cloexec = 0;
int rpl_fcntl(int fd, int action, ...)
{
}

volatile int exit_failure = (volatile int) 1;
extern struct _IO_FILE *stdin;
extern FILE *fopen(const char *__restrict __filename, const char *__restrict __modes);
extern int ferror_unlocked(FILE *__stream);
extern int regcomp(regex_t *__restrict __preg, const char *__restrict __pattern, int __cflags);
extern int regexec(const regex_t *__restrict __preg, const char *__restrict __string, size_t __nmatch, regmatch_t *__restrict __pmatch, int __eflags);
_Bool fnmatch_pattern_has_wildcards(const char *str, int options);
struct exclude *new_exclude(void);
void add_exclude(struct exclude *ex, const char *pattern, int options);
int add_exclude_file(void (*add_func)(struct exclude *, const char *, int), struct exclude *ex, const char *file_name___1, int options, char line_end);
int add_exclude_fp(void (*add_func)(struct exclude *, const char *, int, void *), struct exclude *ex, FILE *fp, int options, char line_end, void *data);
_Bool excluded_file_name(const struct exclude *ex, const char *f);
void exclude_add_pattern_buffer(struct exclude *ex, char *buf);
_Bool exclude_fnmatch(const char *pattern, const char *f, int options);
extern int fnmatch(const char *__pattern, const char *__name, int __flags);
void exclude_add_pattern_buffer(struct exclude *ex, char *buf)
{
}

_Bool fnmatch_pattern_has_wildcards(const char *str, int options);
_Bool fnmatch_pattern_has_wildcards(const char *str, int options)
{
}

static void unescape_pattern(char *str)
{
}

struct exclude *new_exclude(void)
{
}

static size_t string_hasher(const void *data, size_t n_buckets)
{
}

static size_t string_hasher_ci(const void *data, size_t n_buckets)
{
}

static _Bool string_compare(const void *data1, const void *data2)
{
}

static _Bool string_compare_ci(const void *data1, const void *data2)
{
}

static void string_free(void *data)
{
}

static void new_exclude_segment(struct exclude *ex, enum exclude_type type, int options)
{
}

static int fnmatch_no_wildcards(const char *pattern, const char *f, int options)
{
}

_Bool exclude_fnmatch(const char *pattern, const char *f, int options)
{
}

_Bool exclude_patopts(const struct patopts *opts, const char *f)
{
}

static _Bool file_pattern_matches(const struct exclude_segment *seg, const char *f)
{
}

static _Bool file_name_matches(const struct exclude_segment *seg, const char *f, char *buffer___0)
{
}

_Bool excluded_file_name(const struct exclude *ex, const char *f)
{
}

void add_exclude(struct exclude *ex, const char *pattern, int options)
{
}

int add_exclude_fp(void (*add_func)(struct exclude *, const char *, int, void *), struct exclude *ex, FILE *fp, int options, char line_end, void *data)
{
}

static void call_addfn(struct exclude *ex, const char *pattern, int options, void *data)
{
}

int add_exclude_file(void (*add_func)(struct exclude *, const char *, int), struct exclude *ex, const char *file_name___1, int options, char line_end)
{
}

int dup_safer(int fd)
{
}

static _Bool is_zero_or_power_of_two(uintmax_t i)
{
}

void cycle_check_init(struct cycle_check_state *state)
{
}

_Bool cycle_check(struct cycle_check_state *state, const struct stat *sb)
{
}

int should_colorize(void);
void init_colorize(void);
void print_start_colorize(const char *sgr_start___0, const char *sgr_seq);
void print_end_colorize(const char *sgr_end___0);
int should_colorize(void)
{
}

void init_colorize(void)
{
  {
    return;
  }
}

void print_start_colorize(const char *sgr_start___0, const char *sgr_seq)
{
}

void print_end_colorize(const char *sgr_end___0)
{
}

void close_stdout(void);
extern void _exit(int __status);
int close_stream(FILE *stream);
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
  char *__cil_tmp11;
  {
    {
      tmp___3 = close_stream(stdout);
    }
    if (tmp___3 != 0)
    {
      if (ignore_EPIPE)
      {
      }
      else
      {
        _L:
;        {
        }

        if (file_name)
        {
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
      {
      }
    }

    return;
  }
}

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
      tmp___1 = fclose(stream);
      fclose_fail = (_Bool) (tmp___1 != 0);
    }
    if (prev_fail)
    {
    }
    else
      if (fclose_fail)
    {
      if (some_pending)
      {
      }
      else
      {
        {
        }
        if ((* tmp___3) != 9)
        {
          _L___0:
        }

      }

    }


    return 0;
  }
}

int set_cloexec_flag(int desc, _Bool value)
{
}

extern void *memrchr(const void *__s, int __c, size_t __n);
int c_tolower(int c);
int c_strcasecmp(const char *s1, const char *s2);
int c_strcasecmp(const char *s1, const char *s2)
{
}

_Bool c_isspace(int c);
_Bool c_isspace(int c);
_Bool c_isspace(int c)
{
}

int c_tolower(int c);
int c_tolower(int c)
{
}

int set_binary_mode(int fd, int mode___0)
{
  {
    return 0;
  }
}

ptrdiff_t argmatch(const char *arg, const char *const *arglist, const char *vallist, size_t valsize);
void (*argmatch_die)(void);
void argmatch_invalid(const char *context, const char *value, ptrdiff_t problem);
void argmatch_valid(const char *const *arglist, const char *vallist, size_t valsize);
ptrdiff_t __xargmatch_internal(const char *context, const char *arg, const char *const *arglist, const char *vallist, size_t valsize, void (*exit_fn)(void));
extern int putc_unlocked(int __c, FILE *__stream);
void usage(int status);
static void __argmatch_die(void)
{
}

void (*argmatch_die)(void) = & __argmatch_die;
ptrdiff_t argmatch(const char *arg, const char *const *arglist, const char *vallist, size_t valsize);
ptrdiff_t argmatch(const char *arg, const char *const *arglist, const char *vallist, size_t valsize)
{
}

void argmatch_invalid(const char *context, const char *value, ptrdiff_t problem)
{
}

void argmatch_valid(const char *const *arglist, const char *vallist, size_t valsize)
{
}

ptrdiff_t __xargmatch_internal(const char *context, const char *arg, const char *const *arglist, const char *vallist, size_t valsize, void (*exit_fn)(void))
{
}

#pragma weak pthread_mutex_init
#pragma weak pthread_mutex_lock
#pragma weak pthread_mutex_unlock
#pragma weak pthread_mutex_destroy
#pragma weak pthread_rwlock_init
#pragma weak pthread_rwlock_rdlock
#pragma weak pthread_rwlock_wrlock
#pragma weak pthread_rwlock_unlock
#pragma weak pthread_rwlock_destroy
#pragma weak pthread_once
#pragma weak pthread_cond_init
#pragma weak pthread_cond_wait
#pragma weak pthread_cond_signal
#pragma weak pthread_cond_broadcast
#pragma weak pthread_cond_destroy
#pragma weak pthread_mutexattr_init
#pragma weak pthread_mutexattr_settype
#pragma weak pthread_mutexattr_destroy
#pragma weak pthread_self
#pragma weak pthread_cancel
int match_icase;
int match_words;
int match_lines;
unsigned char eolbyte;
int using_utf8(void);
void Pcompile(const char *pattern, size_t size);
size_t Pexecute(const char *buf, size_t size, size_t *match_size, const char *start_ptr);
extern pcre *pcre_compile(const char *, int, const char **, int *, const unsigned char *);
extern int pcre_exec(const pcre *, const pcre_extra *, const char *, int, int, int, int *, int);
extern int pcre_fullinfo(const pcre *, const pcre_extra *, int, void *);
extern const unsigned char *pcre_maketables(void);
extern pcre_extra *pcre_study(const pcre *, int, const char **);
extern pcre_jit_stack *pcre_jit_stack_alloc(int, int);
extern void pcre_assign_jit_stack(pcre_extra *, pcre_jit_stack *(*)(void *), void *);
static pcre *cre;
static pcre_extra *extra;
static pcre_jit_stack *jit_stack;
void Pcompile(const char *pattern, size_t size)
{
}

size_t Pexecute(const char *buf, size_t size, size_t *match_size, const char *start_ptr)
{
}

void kwsincr(kwset_t kwset___1, const char *text, size_t len);
void kwsprep(kwset_t kwset___1);
size_t kwsexec(kwset_t kwset___1, const char *text, size_t size, struct kwsmatch *kwsmatch);
void kwsinit(kwset_t *kwset___1);
char *mbtoupper(const char *beg, size_t *n, mb_len_map_t **len_map_p);
ptrdiff_t mb_goback(const char **mb_start, const char *cur, const char *end);
wint_t mb_prev_wc(const char *buf, const char *cur, const char *end);
wint_t mb_next_wc(const char *cur, const char *end);
void Fcompile(const char *pattern, size_t size);
size_t Fexecute(const char *buf, size_t size, size_t *match_size, const char *start_ptr);
static _Bool wordchar(wint_t wc)
{
}

static kwset_t kwset;
void Fcompile(const char *pattern, size_t size)
{
}

static void mb_case_map_apply(const mb_len_map_t *map, size_t *off, size_t *len)
{
}

size_t Fexecute(const char *buf, size_t size, size_t *match_size, const char *start_ptr)
{
}

kwset_t kwsalloc(const char *trans___0);
static unsigned char to_uchar(char ch)
{
  {
    return (unsigned char) ch;
  }
}

extern void _obstack_newchunk(struct obstack *, int);
extern int _obstack_begin(struct obstack *, int, int, void *(*)(long), void (*)(void *));
static char tr(const char *trans___0, char c)
{
  unsigned char tmp;
  int tmp___0;
  {
    if (trans___0)
    {
      {
      }
    }
    else
    {
      tmp___0 = (int) c;
    }

    return (char) tmp___0;
  }
}

kwset_t kwsalloc(const char *trans___0)
{
  struct kwset *kwset___1;
  struct kwset *tmp;
  struct obstack *__h;
  struct obstack *__o;
  int __len;
  struct obstack *__o1;
  void *__value;
  char *tmp___0;
  char *tmp___1;
  {
    {
      tmp = (struct kwset *) xmalloc(sizeof(* kwset___1));
      kwset___1 = tmp;
      _obstack_begin(& kwset___1->obstack, 0, 0, (void *(*)(long)) (& xmalloc), & free);
      kwset___1->words = (ptrdiff_t) 0;
      __h = & kwset___1->obstack;
      __o = __h;
      __len = (int) (sizeof(* kwset___1->trie));
    }
    if ((__o->chunk_limit - __o->next_free) < ((long) __len))
    {
      {
      }
    }

    __o->next_free += __len;
    __o1 = __h;
    __value = (void *) __o1->object_base;
    if (((unsigned long) __o1->next_free) == ((unsigned long) __value))
    {
    }

    if ((sizeof(long)) < (sizeof(void *)))
    {
      tmp___0 = __o1->object_base;
    }
    else
    {
      tmp___0 = (char *) 0;
    }

    if ((sizeof(long)) < (sizeof(void *)))
    {
      tmp___1 = __o1->object_base;
    }
    else
    {
      tmp___1 = (char *) 0;
    }

    __o1->next_free = tmp___0 + (((__o1->next_free - tmp___1) + ((long) __o1->alignment_mask)) & ((long) (~ __o1->alignment_mask)));
    if ((__o1->next_free - ((char *) __o1->chunk)) > (__o1->chunk_limit - ((char *) __o1->chunk)))
    {
    }

    __o1->object_base = __o1->next_free;
    kwset___1->trie = (struct trie *) __value;
    kwset___1->trie->accepting = (size_t) 0;
    kwset___1->trie->links = (struct tree *) ((void *) 0);
    kwset___1->trie->parent = (struct trie *) ((void *) 0);
    kwset___1->trie->next = (struct trie *) ((void *) 0);
    kwset___1->trie->fail = (struct trie *) ((void *) 0);
    kwset___1->trie->depth = 0;
    kwset___1->trie->shift = 0;
    kwset___1->mind = 2147483647;
    kwset___1->maxd = - 1;
    kwset___1->target = (char *) ((void *) 0);
    kwset___1->trans = trans___0;
    return kwset___1;
  }
}

void kwsincr(kwset_t kwset___1, const char *text, size_t len)
{
  struct trie *trie;
  const char *trans___0;
  unsigned char uc;
  unsigned char label___0;
  int tmp;
  struct tree *kwset_link;
  struct tree *links[12];
  enum __anonenum_dirs_58 dirs[12];
  int depth___0;
  int tmp___0;
  int tmp___1;
  struct obstack *__h;
  struct obstack *__o;
  int __len;
  struct obstack *__o1;
  void *__value;
  char *tmp___2;
  char *tmp___3;
  struct obstack *__h___0;
  struct obstack *__o___0;
  int __len___0;
  struct obstack *__o1___0;
  void *__value___0;
  char *tmp___4;
  char *tmp___5;
  struct tree *t;
  struct tree *r;
  struct tree *l;
  struct tree *rl;
  struct tree *lr;
  char tmp___6;
  char tmp___7;
  size_t tmp___8;
  void *__cil_tmp39;
  void *__cil_tmp40;
  {
    trie = kwset___1->trie;
    trans___0 = kwset___1->trans;
    text += len;
    {
      while (1)
      {
        while_continue:
        ;

        tmp___8 = len;
        len--;
        if (! tmp___8)
        {
          goto while_break;
        }

        text--;
        uc = (unsigned char) (* text);
        if (trans___0)
        {
        }
        else
        {
          tmp = (int) uc;
        }

        label___0 = (unsigned char) tmp;
        kwset_link = trie->links;
        links[0] = (struct tree *) (& trie->links);
        dirs[0] = (enum __anonenum_dirs_58) 0;
        depth___0 = 1;
        {
          while (1)
          {
            while_continue___0:
            ;

            if (kwset_link)
            {
              if (! (((int) label___0) != ((int) kwset_link->label)))
              {
              }

            }
            else
            {
              goto while_break___0;
            }

            if (((int) label___0) < ((int) kwset_link->label))
            {
            }

          }

          while_break___3:
          ;

        }
        while_break___0:
        ;

        if (! kwset_link)
        {
          __h = & kwset___1->obstack;
          __o = __h;
          __len = (int) (sizeof(* kwset_link));
          if ((__o->chunk_limit - __o->next_free) < ((long) __len))
          {
            {
            }
          }

          __o->next_free += __len;
          __o1 = __h;
          __value = (void *) __o1->object_base;
          if (((unsigned long) __o1->next_free) == ((unsigned long) __value))
          {
          }

          if ((sizeof(long)) < (sizeof(void *)))
          {
            tmp___2 = __o1->object_base;
          }
          else
          {
            tmp___2 = (char *) 0;
          }

          if ((sizeof(long)) < (sizeof(void *)))
          {
            tmp___3 = __o1->object_base;
          }
          else
          {
            tmp___3 = (char *) 0;
          }

          __o1->next_free = tmp___2 + (((__o1->next_free - tmp___3) + ((long) __o1->alignment_mask)) & ((long) (~ __o1->alignment_mask)));
          if ((__o1->next_free - ((char *) __o1->chunk)) > (__o1->chunk_limit - ((char *) __o1->chunk)))
          {
          }

          __o1->object_base = __o1->next_free;
          kwset_link = (struct tree *) __value;
          kwset_link->llink = (struct tree *) ((void *) 0);
          kwset_link->rlink = (struct tree *) ((void *) 0);
          __h___0 = & kwset___1->obstack;
          __o___0 = __h___0;
          __len___0 = (int) (sizeof(* kwset_link->trie));
          if ((__o___0->chunk_limit - __o___0->next_free) < ((long) __len___0))
          {
            {
            }
          }

          __o___0->next_free += __len___0;
          __o1___0 = __h___0;
          __value___0 = (void *) __o1___0->object_base;
          if (((unsigned long) __o1___0->next_free) == ((unsigned long) __value___0))
          {
          }

          if ((sizeof(long)) < (sizeof(void *)))
          {
            tmp___4 = __o1___0->object_base;
          }
          else
          {
            tmp___4 = (char *) 0;
          }

          if ((sizeof(long)) < (sizeof(void *)))
          {
            tmp___5 = __o1___0->object_base;
          }
          else
          {
            tmp___5 = (char *) 0;
          }

          __o1___0->next_free = tmp___4 + (((__o1___0->next_free - tmp___5) + ((long) __o1___0->alignment_mask)) & ((long) (~ __o1___0->alignment_mask)));
          if ((__o1___0->next_free - ((char *) __o1___0->chunk)) > (__o1___0->chunk_limit - ((char *) __o1___0->chunk)))
          {
          }

          __o1___0->object_base = __o1___0->next_free;
          kwset_link->trie = (struct trie *) __value___0;
          kwset_link->trie->accepting = (size_t) 0;
          kwset_link->trie->links = (struct tree *) ((void *) 0);
          kwset_link->trie->parent = trie;
          kwset_link->trie->next = (struct trie *) ((void *) 0);
          kwset_link->trie->fail = (struct trie *) ((void *) 0);
          kwset_link->trie->depth = trie->depth + 1;
          kwset_link->trie->shift = 0;
          kwset_link->label = label___0;
          kwset_link->balance = (char) 0;
          depth___0--;
          if (((unsigned int) dirs[depth___0]) == 0U)
          {
            links[depth___0]->llink = kwset_link;
          }

          {
            while (1)
            {
              while_continue___1:
              ;

              if (depth___0)
              {
                if (! (! links[depth___0]->balance))
                {
                }

              }
              else
              {
                goto while_break___1;
              }

              if (((unsigned int) dirs[depth___0]) == 0U)
              {
              }

            }

            while_break___4:
            ;

          }
          while_break___1:
          ;

          if (depth___0)
          {
            if (((unsigned int) dirs[depth___0]) == 0U)
            {
            }
              _L___0:
;            if (((unsigned int) dirs[depth___0]) == 1U)
            {
                _L:
                case_neg_2:
                case_0:
                case_1:
                switch_default:
                switch_break___0:
                case_2:
                case_1___0:
                case_0___0:
                switch_default___0:
                switch_break___1:
                switch_default___1:
                switch_break:
            }



          }

        }

        trie = kwset_link->trie;
      }

      while_break___2:
      ;

    }
    while_break:
    ;

    if (! trie->accepting)
    {
      trie->accepting = (size_t) (1L + (2L * kwset___1->words));
    }

    kwset___1->words++;
    if (trie->depth < kwset___1->mind)
    {
      kwset___1->mind = trie->depth;
    }

    if (trie->depth > kwset___1->maxd)
    {
      kwset___1->maxd = trie->depth;
    }

    return;
  }
}

static void enqueue(struct tree *tree, struct trie **last)
{
  struct trie *tmp;
  {
    if (! tree)
    {
      return;
    }

    {
      enqueue(tree->llink, last);
      enqueue(tree->rlink, last);
      tmp = tree->trie;
      (* last)->next = tmp;
      * last = tmp;
    }
    return;
  }
}

static void treefails(const struct tree *tree, const struct trie *fail, struct trie *recourse)
{
  struct tree *kwset_link;
  {
    if (! tree)
    {
      return;
    }

    {
      treefails((const struct tree *) tree->llink, fail, recourse);
      treefails((const struct tree *) tree->rlink, fail, recourse);
    }
    {
      while (1)
      {
        while_continue:
        ;

        if (! fail)
        {
          goto while_break;
        }

        kwset_link = (struct tree *) fail->links;
        {
          while (1)
          {
            while_continue___0:
            ;

            if (kwset_link)
            {
              if (! (((const int) tree->label) != ((const int) kwset_link->label)))
              {
                goto while_break___0;
              }

            }
            else
            {
              goto while_break___0;
            }

            if (((const int) tree->label) < ((const int) kwset_link->label))
            {
              kwset_link = kwset_link->llink;
            }
            else
            {
              kwset_link = kwset_link->rlink;
            }

          }

          while_break___2:
          ;

        }
        while_break___0:
        ;

        if (kwset_link)
        {
          tree->trie->fail = kwset_link->trie;
          return;
        }

        fail = (const struct trie *) fail->fail;
      }

      while_break___1:
      ;

    }
    while_break:
    tree->trie->fail = recourse;

    return;
  }
}

static void treedelta(const struct tree *tree, unsigned int depth___0, unsigned char *delta)
{
  {
    if (! tree)
    {
      return;
    }

    {
      treedelta((const struct tree *) tree->llink, depth___0, delta);
      treedelta((const struct tree *) tree->rlink, depth___0, delta);
    }
    if (depth___0 < ((unsigned int) (* (delta + ((const int) tree->label)))))
    {
      * (delta + ((const int) tree->label)) = (unsigned char) depth___0;
    }

    return;
  }
}

static int hasevery(const struct tree *a, const struct tree *b)
{
  int tmp;
  int tmp___0;
  {
    if (! b)
    {
      return (int) 1;
    }

    {
      tmp = hasevery(a, (const struct tree *) b->llink);
    }
    if (! tmp)
    {
    }

    {
      tmp___0 = hasevery(a, (const struct tree *) b->rlink);
    }
    if (! tmp___0)
    {
    }

    {
      while (1)
      {
        while_continue:
        ;

        if (a)
        {
          if (! (((const int) b->label) != ((const int) a->label)))
          {
            goto while_break;
          }

        }
        else
        {
          goto while_break;
        }

        if (((const int) b->label) < ((const int) a->label))
        {
          a = (const struct tree *) a->llink;
        }
        else
        {
          a = (const struct tree *) a->rlink;
        }

      }

      while_break___0:
      ;

    }
    while_break:
    ;

    return (int) (! (! a));
  }
}

static void treenext(const struct tree *tree, struct trie **next)
{
  {
    if (! tree)
    {
      return;
    }

    {
      treenext((const struct tree *) tree->llink, next);
      treenext((const struct tree *) tree->rlink, next);
      * (next + ((const int) tree->label)) = (struct trie *) tree->trie;
    }
    return;
  }
}

void kwsprep(kwset_t kwset___1)
{
  const char *trans___0;
  int i;
  unsigned char deltabuf[256];
  unsigned char *delta;
  unsigned char *tmp;
  int tmp___0;
  struct trie *curr;
  struct trie *last;
  struct trie *fail;
  int tmp___1;
  struct trie *nextbuf[256];
  struct trie **next;
  struct trie **tmp___2;
  unsigned char tmp___3;
  struct obstack *__h;
  struct obstack *__o;
  int __len;
  struct obstack *__o1;
  void *__value;
  char *tmp___4;
  char *tmp___5;
  struct obstack *__h___0;
  struct obstack *__o___0;
  int __len___0;
  struct obstack *__o1___0;
  void *__value___0;
  char *tmp___6;
  char *tmp___7;
  char gc1;
  char tmp___8;
  int gc1help;
  const char *equiv1;
  const char *tmp___9;
  const char *equiv2;
  const char *tmp___10;
  unsigned char tmp___12;
  void *tmp___13;
  unsigned char tmp___14;
  void *__cil_tmp44;
  void *__cil_tmp45;
  {
    trans___0 = kwset___1->trans;
    if (trans___0)
    {
    }
    else
    {
      tmp = kwset___1->delta;
    }

    delta = tmp;
    if (kwset___1->mind < 255)
    {
      tmp___0 = kwset___1->mind;
    }

    {
      memset((void *) delta, tmp___0, sizeof(deltabuf));
      last = kwset___1->trie;
      curr = last;
    }
    {
      while (1)
      {
        while_continue:
        ;

        if (! curr)
        {
          goto while_break;
        }

        {
          enqueue(curr->links, & last);
          curr->shift = kwset___1->mind;
          curr->maxshift = kwset___1->mind;
          treedelta((const struct tree *) curr->links, (unsigned int) curr->depth, delta);
          treefails((const struct tree *) curr->links, (const struct trie *) curr->fail, kwset___1->trie);
          fail = curr->fail;
        }
        {
          while (1)
          {
            while_continue___0:
            ;

            if (! fail)
            {
              goto while_break___0;
            }

            {
              tmp___1 = hasevery((const struct tree *) fail->links, (const struct tree *) curr->links);
            }
            if (! tmp___1)
            {
              if ((curr->depth - fail->depth) < fail->shift)
              {
                fail->shift = curr->depth - fail->depth;
              }

            }

            if (curr->accepting)
            {
              if (fail->maxshift > (curr->depth - fail->depth))
              {
                fail->maxshift = curr->depth - fail->depth;
              }

            }

            fail = fail->fail;
          }

          while_break___7:
          ;

        }
        while_break___0:
        curr = curr->next;

      }

      while_break___6:
      ;

    }
    while_break:
    curr = kwset___1->trie->next;

    {
      while (1)
      {
        while_continue___1:
        ;

        if (! curr)
        {
          goto while_break___1;
        }

        if (curr->maxshift > curr->parent->maxshift)
        {
          curr->maxshift = curr->parent->maxshift;
        }

        if (curr->shift > curr->maxshift)
        {
          curr->shift = curr->maxshift;
        }

        curr = curr->next;
      }

      while_break___8:
      ;

    }
    while_break___1:
    ;

    if (trans___0)
    {
    }
    else
    {
      tmp___2 = kwset___1->next;
    }

    {
      next = tmp___2;
      memset((void *) next, 0, sizeof(nextbuf));
      treenext((const struct tree *) kwset___1->trie->links, next);
    }
    if (trans___0)
    {
      {
        while (1)
        {
          while_continue___2:
;          ;

          if (! (i < 256))
          {
          }

          {
          }
        }

        while_break___9:
        ;

      }
      while_break___2:
      ;

    }

    if (kwset___1->words == 1L)
    {
      __h = & kwset___1->obstack;
      __o = __h;
      __len = kwset___1->mind;
      if ((__o->chunk_limit - __o->next_free) < ((long) __len))
      {
        {
        }
      }

      __o->next_free += __len;
      __o1 = __h;
      __value = (void *) __o1->object_base;
      if (((unsigned long) __o1->next_free) == ((unsigned long) __value))
      {
      }

      if ((sizeof(long)) < (sizeof(void *)))
      {
        tmp___4 = __o1->object_base;
      }
      else
      {
        tmp___4 = (char *) 0;
      }

      if ((sizeof(long)) < (sizeof(void *)))
      {
        tmp___5 = __o1->object_base;
      }
      else
      {
        tmp___5 = (char *) 0;
      }

      __o1->next_free = tmp___4 + (((__o1->next_free - tmp___5) + ((long) __o1->alignment_mask)) & ((long) (~ __o1->alignment_mask)));
      if ((__o1->next_free - ((char *) __o1->chunk)) > (__o1->chunk_limit - ((char *) __o1->chunk)))
      {
      }

      __o1->object_base = __o1->next_free;
      kwset___1->target = (char *) __value;
      i = kwset___1->mind - 1;
      curr = kwset___1->trie;
      {
        while (1)
        {
          while_continue___3:
          ;

          if (! (i >= 0))
          {
            goto while_break___3;
          }

          * (kwset___1->target + i) = (char) curr->links->label;
          curr = curr->next;
          i--;
        }

        while_break___10:
        ;

      }
      while_break___3:
      ;

      if (kwset___1->mind > 1)
      {
        __h___0 = & kwset___1->obstack;
        __o___0 = __h___0;
        __len___0 = (int) ((sizeof(* kwset___1->shift)) * ((unsigned long) (kwset___1->mind - 1)));
        if ((__o___0->chunk_limit - __o___0->next_free) < ((long) __len___0))
        {
          {
          }
        }

        __o___0->next_free += __len___0;
        __o1___0 = __h___0;
        __value___0 = (void *) __o1___0->object_base;
        if (((unsigned long) __o1___0->next_free) == ((unsigned long) __value___0))
        {
        }

        if ((sizeof(long)) < (sizeof(void *)))
        {
          tmp___6 = __o1___0->object_base;
        }
        else
        {
          tmp___6 = (char *) 0;
        }

        if ((sizeof(long)) < (sizeof(void *)))
        {
          tmp___7 = __o1___0->object_base;
        }
        else
        {
          tmp___7 = (char *) 0;
        }

        __o1___0->next_free = tmp___6 + (((__o1___0->next_free - tmp___7) + ((long) __o1___0->alignment_mask)) & ((long) (~ __o1___0->alignment_mask)));
        if ((__o1___0->next_free - ((char *) __o1___0->chunk)) > (__o1___0->chunk_limit - ((char *) __o1___0->chunk)))
        {
        }

        __o1___0->object_base = __o1___0->next_free;
        kwset___1->shift = (int *) __value___0;
        i = 0;
        curr = kwset___1->trie->next;
        {
          while (1)
          {
            while_continue___4:
            ;

            if (! (i < (kwset___1->mind - 1)))
            {
              goto while_break___4;
            }

            * (kwset___1->shift + i) = curr->shift;
            curr = curr->next;
            i++;
          }

          while_break___11:
          ;

        }
        while_break___4:
        ;

      }

      {
        tmp___8 = tr(trans___0, * (kwset___1->target + (kwset___1->mind - 1)));
        gc1 = tmp___8;
        gc1help = - 1;
      }
      if (trans___0)
      {
        {
        }
        if (equiv2)
        {
        }

      }

      kwset___1->gc1 = gc1;
      kwset___1->gc1help = gc1help;
      if (kwset___1->mind > 1)
      {
        {
          kwset___1->gc2 = tr(trans___0, * (kwset___1->target + (kwset___1->mind - 2)));
        }
      }

    }

    if (trans___0)
    {
      {
        while (1)
        {
          while_continue___5:
;          ;

          if (! (i < 256))
          {
          }

          {
          }
        }

        while_break___12:
        ;

      }
      while_break___5:
      ;

    }

    return;
  }
}

static _Bool bm_delta2_search(const char **tpp, const char *ep, const char *sp, int len, const char *trans___0, char gc1, char gc2, const unsigned char *d1, kwset_t kwset___1)
{
  const char *tp;
  int d;
  int skip;
  int i;
  char tmp;
  char tmp___0;
  char tmp___1;
  char tmp___2;
  char tmp___3;
  unsigned char tmp___4;
  char tmp___5;
  {
    tp = * tpp;
    d = len;
    skip = 0;
    {
      while (1)
      {
        while_continue:
        ;

        {
          i = 2;
          tmp___3 = tr(trans___0, (char) (* (tp + (- 2))));
        }
        if (((int) tmp___3) == ((int) gc2))
        {
          {
            while (1)
            {
              while_continue___0:
              ;

              i++;
              if (! (i <= d))
              {
                goto while_break___0;
              }

              {
                tmp = tr(trans___0, (char) (* (tp + (- i))));
                tmp___0 = tr(trans___0, (char) (* (sp + (- i))));
              }
              if (((int) tmp) != ((int) tmp___0))
              {
                goto while_break___0;
              }

            }

            while_break___3:
            ;

          }
          while_break___0:
          ;

          if (i > d)
          {
            i = (d + skip) + 1;
            {
              while (1)
              {
                while_continue___1:
                ;

                if (! (i <= len))
                {
                  goto while_break___1;
                }

                {
                  tmp___1 = tr(trans___0, (char) (* (tp + (- i))));
                  tmp___2 = tr(trans___0, (char) (* (sp + (- i))));
                }
                if (((int) tmp___1) != ((int) tmp___2))
                {
                  goto while_break___1;
                }

                i++;
              }

              while_break___4:
              ;

            }
            while_break___1:
            ;

            if (i > len)
            {
              * tpp = tp - len;
              return (_Bool) 1;
            }

          }

        }

        d = * (kwset___1->shift + (i - 2));
        tp += d;
        if (((unsigned long) tp) > ((unsigned long) ep))
        {
          goto while_break;
        }

        {
          tmp___5 = tr(trans___0, (char) (* (tp + (- 1))));
        }
        if (((int) tmp___5) != ((int) gc1))
        {
          if (d1)
          {
            {
              tmp___4 = to_uchar((char) (* (tp + (- 1))));
              tp += (const int) (* (d1 + ((int) tmp___4)));
            }
          }

          goto while_break;
        }

        skip = i - 1;
      }

      while_break___2:
      ;

    }
    while_break:
    * tpp = tp;

    return (_Bool) 0;
  }
}

static const char *memchr_kwset(const char *s, size_t n, kwset_t kwset___1)
{
  const char *tmp;
  int small_heuristic;
  int small;
  size_t ntrans;
  size_t tmp___0;
  const char *slim;
  unsigned char tmp___1;
  void *tmp___2;
  void *tmp___3;
  {
    if (kwset___1->gc1help < 0)
    {
      {
        tmp = (const char *) memchr((const void *) s, (int) kwset___1->gc1, n);
      }
      return tmp;
    }

    if (kwset___1->gc1help < 256)
    {
    }

    {
      while (1)
      {
        while_continue:
;        ;

        if (! (((unsigned long) s) < ((unsigned long) slim)))
        {
        }

        {
        }
        if (((const int) (* (kwset___1->trans + ((int) tmp___1)))) == ((const int) kwset___1->gc1))
        {
        }

      }

      while_break___0:
;      ;

    }
    while_break:
;    n -= ntrans;

    if (n == 0UL)
    {
    }

  }
}

static size_t bmexec_trans(kwset_t kwset___1, const char *text, size_t size)
{
  const unsigned char *d1;
  const char *ep;
  const char *sp;
  const char *tp;
  int d;
  int len;
  const char *trans___0;
  long tmp;
  char gc1;
  char gc2;
  const char *tp0;
  unsigned char tmp___0;
  unsigned char tmp___1;
  unsigned char tmp___2;
  unsigned char tmp___3;
  unsigned char tmp___4;
  unsigned char tmp___5;
  unsigned char tmp___6;
  unsigned char tmp___7;
  unsigned char tmp___8;
  unsigned char tmp___9;
  int advance_heuristic;
  _Bool tmp___10;
  unsigned char tmp___11;
  unsigned char tmp___12;
  _Bool tmp___13;
  {
    len = kwset___1->mind;
    trans___0 = kwset___1->trans;
    if (len == 0)
    {
    }

    if (((size_t) len) > size)
    {
    }

    if (len == 1)
    {
      {
        tp = memchr_kwset(text, size, kwset___1);
      }
      if (tp)
      {
        tmp = tp - text;
      }
      else
      {
        tmp = - 1L;
      }

      return (size_t) tmp;
    }

    d1 = (const unsigned char *) kwset___1->delta;
    sp = (const char *) (kwset___1->target + len);
    tp = text + len;
    gc1 = kwset___1->gc1;
    gc2 = kwset___1->gc2;
    if (size > ((size_t) (12 * len)))
    {
      ep = (text + size) - (11 * len);
      {
        while (1)
        {
          while_continue:
          ;

          if (! (((unsigned long) tp) <= ((unsigned long) ep)))
          {
            goto while_break;
          }

          {
            tp0 = tp;
            tmp___0 = to_uchar((char) (* (tp + (- 1))));
            d = (int) (* (d1 + ((int) tmp___0)));
            tp += d;
            tmp___1 = to_uchar((char) (* (tp + (- 1))));
            d = (int) (* (d1 + ((int) tmp___1)));
            tp += d;
          }
          if (d != 0)
          {
            {
              tmp___2 = to_uchar((char) (* (tp + (- 1))));
              d = (int) (* (d1 + ((int) tmp___2)));
              tp += d;
              tmp___3 = to_uchar((char) (* (tp + (- 1))));
              d = (int) (* (d1 + ((int) tmp___3)));
              tp += d;
              tmp___4 = to_uchar((char) (* (tp + (- 1))));
              d = (int) (* (d1 + ((int) tmp___4)));
              tp += d;
            }
            if (d != 0)
            {
              {
                tmp___5 = to_uchar((char) (* (tp + (- 1))));
                d = (int) (* (d1 + ((int) tmp___5)));
                tp += d;
                tmp___6 = to_uchar((char) (* (tp + (- 1))));
                d = (int) (* (d1 + ((int) tmp___6)));
                tp += d;
                tmp___7 = to_uchar((char) (* (tp + (- 1))));
                d = (int) (* (d1 + ((int) tmp___7)));
                tp += d;
              }
              if (d != 0)
              {
                {
                  tmp___8 = to_uchar((char) (* (tp + (- 1))));
                  d = (int) (* (d1 + ((int) tmp___8)));
                  tp += d;
                  tmp___9 = to_uchar((char) (* (tp + (- 1))));
                  d = (int) (* (d1 + ((int) tmp___9)));
                  tp += d;
                  advance_heuristic = (int) (16UL * (sizeof(long)));
                }
                if (((long) advance_heuristic) <= (tp - tp0))
                {
                }

                {
                  tp--;
                  tp = memchr_kwset(tp, (size_t) ((text + size) - tp), kwset___1);
                }
                if (! tp)
                {
                  return (size_t) (- 1);
                }

                tp++;
              }

            }

          }

          {
            tmp___10 = bm_delta2_search(& tp, ep, sp, len, trans___0, gc1, gc2, d1, kwset___1);
          }
          if (tmp___10)
          {
            return (size_t) (tp - text);
          }

          big_advance:
          ;

        }

        while_break___1:
        ;

      }
      while_break:
      ;

    }

    {
      ep = text + size;
      tmp___11 = to_uchar((char) (* (tp + (- 1))));
      d = (int) (* (d1 + ((int) tmp___11)));
    }
    {
      while (1)
      {
        while_continue___1:
        ;

        while_continue___0:
        ;

        if (! (((long) d) <= (ep - tp)))
        {
          goto while_break___0;
        }

        {
          tp += d;
          tmp___12 = to_uchar((char) (* (tp + (- 1))));
          d = (int) (* (d1 + ((int) tmp___12)));
        }
        if (d != 0)
        {
          goto while_continue___0;
        }

        {
          tmp___13 = bm_delta2_search(& tp, ep, sp, len, trans___0, gc1, gc2, (const unsigned char *) ((void *) 0), kwset___1);
        }
        if (tmp___13)
        {
          return (size_t) (tp - text);
        }

      }

      while_break___2:
      ;

    }
    while_break___0:
    ;

    return (size_t) (- 1);
  }
}

static size_t bmexec(kwset_t kwset___1, const char *text, size_t size)
{
  size_t tmp;
  size_t tmp___0;
  size_t tmp___1;
  {
    if (kwset___1->trans)
    {
      {
      }
    }
    else
    {
      {
        tmp___0 = bmexec_trans(kwset___1, text, size);
        tmp___1 = tmp___0;
      }
    }

    return (size_t) tmp___1;
  }
}

static size_t cwexec(kwset_t kwset___1, const char *text, size_t len, struct kwsmatch *kwsmatch)
{
}

size_t kwsexec(kwset_t kwset___1, const char *text, size_t size, struct kwsmatch *kwsmatch)
{
  size_t ret;
  size_t tmp;
  size_t tmp___0;
  {
    if (kwset___1->words == 1L)
    {
      {
        tmp = bmexec(kwset___1, text, size);
        ret = tmp;
      }
      if (ret != 0xffffffffffffffffUL)
      {
        kwsmatch->index = (size_t) 0;
        kwsmatch->offset[0] = ret;
        kwsmatch->size[0] = (size_t) kwset___1->mind;
      }

      return ret;
    }

  }
}

extern reg_syntax_t re_set_syntax(reg_syntax_t __syntax);
extern const char *re_compile_pattern(const char *__pattern, size_t __length, struct re_pattern_buffer *__buffer);
extern regoff_t re_search(struct re_pattern_buffer *__buffer, const char *__string, __re_idx_t __length, __re_idx_t __start, regoff_t __range, struct re_registers *__regs);
extern regoff_t re_match(struct re_pattern_buffer *__buffer, const char *__string, __re_idx_t __length, __re_idx_t __start, struct re_registers *__regs);
struct dfa *dfaalloc(void);
struct dfamust *dfamusts(const struct dfa *d);
void dfasyntax(reg_syntax_t bits, int fold, unsigned char eol);
void dfacomp(const char *s, size_t len, struct dfa *d, int searchflag);
char *dfaexec(struct dfa *d, const char *begin, char *end, int allow_nl, size_t *count, int *backref);
struct dfa *dfasuperset(const struct dfa *d);
_Bool dfaisfast(const struct dfa *d);
void dfawarn(const char *mesg);
void dfaerror(const char *mesg);
void GEAcompile(const char *pattern, size_t size, reg_syntax_t syntax_bits___0);
size_t EGexecute(const char *buf, size_t size, size_t *match_size, const char *start_ptr);
static _Bool wordchar___0(wint_t wc)
{
  int tmp;
  int tmp___0;
  {
    if (wc == 95U)
    {
    }
    else
    {
      {
        tmp = iswalnum(wc);
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
}

static kwset_t kwset___0;
static struct dfa *dfa;
static struct patterns patterns0;
static struct patterns *patterns;
static size_t pcount;
static size_t kwset_exact_matches;
static _Bool begline;
void dfaerror(const char *mesg);
void dfaerror(const char *mesg)
{
}

static enum __anonenum_mode_60 mode;
void dfawarn(const char *mesg)
{
}

static void kwsmusts(void)
{
  const struct dfamust *dm;
  const struct dfamust *tmp;
  size_t old_len;
  size_t tmp___0;
  size_t new_len;
  char *must___0;
  char *tmp___1;
  char *mp;
  size_t tmp___2;
  {
    {
      tmp = (const struct dfamust *) dfamusts((const struct dfa *) dfa);
      dm = tmp;
    }
    if (dm)
    {
      {
        kwsinit(& kwset___0);
      }
      {
        while (1)
        {
          while_continue:
          ;

          if (! dm)
          {
            goto while_break;
          }

          if (! dm->exact)
          {
            goto __Cont;
          }

          {
            kwset_exact_matches++;
            tmp___0 = strlen((const char *) dm->must);
            old_len = tmp___0;
            new_len = (old_len + ((size_t) dm->begline)) + ((size_t) dm->endline);
            tmp___1 = (char *) xmalloc(new_len);
            must___0 = tmp___1;
            mp = must___0;
            * mp = (char) eolbyte;
            mp += (const int) dm->begline;
            begline = (_Bool) (((int) begline) | ((int) dm->begline));
            memcpy((void *) ((void *) mp), (const void *) ((const void *) dm->must), old_len);
          }
          if (dm->endline)
          {
            * (mp + old_len) = (char) eolbyte;
          }

          {
            kwsincr(kwset___0, (const char *) must___0, new_len);
            free((void *) must___0);
          }
          __Cont:
          dm = (const struct dfamust *) dm->next;

        }

        while_break___1:
        ;

      }
      while_break:
      {
        dm = (const struct dfamust *) dfamusts((const struct dfa *) dfa);
      }

      {
        while (1)
        {
          while_continue___0:
          ;

          if (! dm)
          {
            goto while_break___0;
          }

          if (dm->exact)
          {
            goto __Cont___0;
          }

          {
            tmp___2 = strlen((const char *) dm->must);
            kwsincr(kwset___0, (const char *) dm->must, tmp___2);
          }
          __Cont___0:
          dm = (const struct dfamust *) dm->next;

        }

        while_break___2:
        ;

      }
      while_break___0:
      {
        kwsprep(kwset___0);
      }

    }

    return;
  }
}

static const char line_beg_no_bk[3] = {(const char) '^', (const char) '(', (const char) '\000'};
static const char line_end_no_bk[3] = {(const char) ')', (const char) '$', (const char) '\000'};
static const char word_beg_no_bk[19] = {(const char) '(', (const char) '^', (const char) '|', (const char) '[', (const char) '^', (const char) '[', (const char) ':', (const char) 'a', (const char) 'l', (const char) 'n', (const char) 'u', (const char) 'm', (const char) ':', (const char) ']', (const char) '_', (const char) ']', (const char) ')', (const char) '(', (const char) '\000'};
static const char word_end_no_bk[19] = {(const char) ')', (const char) '(', (const char) '[', (const char) '^', (const char) '[', (const char) ':', (const char) 'a', (const char) 'l', (const char) 'n', (const char) 'u', (const char) 'm', (const char) ':', (const char) ']', (const char) '_', (const char) ']', (const char) '|', (const char) '$', (const char) ')', (const char) '\000'};
static const char line_beg_bk[4] = {(const char) '^', (const char) '\\', (const char) '(', (const char) '\000'};
static const char line_end_bk[4] = {(const char) '\\', (const char) ')', (const char) '$', (const char) '\000'};
static const char word_beg_bk[23] = {(const char) '\\', (const char) '(', (const char) '^', (const char) '\\', (const char) '|', (const char) '[', (const char) '^', (const char) '[', (const char) ':', (const char) 'a', (const char) 'l', (const char) 'n', (const char) 'u', (const char) 'm', (const char) ':', (const char) ']', (const char) '_', (const char) ']', (const char) '\\', (const char) ')', (const char) '\\', (const char) '(', (const char) '\000'};
static const char word_end_bk[23] = {(const char) '\\', (const char) ')', (const char) '\\', (const char) '(', (const char) '[', (const char) '^', (const char) '[', (const char) ':', (const char) 'a', (const char) 'l', (const char) 'n', (const char) 'u', (const char) 'm', (const char) ':', (const char) ']', (const char) '_', (const char) ']', (const char) '\\', (const char) '|', (const char) '$', (const char) '\\', (const char) ')', (const char) '\000'};
void GEAcompile(const char *pattern, size_t size, reg_syntax_t syntax_bits___0)
{
  size_t total;
  char *motif;
  const char *p;
  size_t len;
  const char *sep;
  const char *tmp;
  const char *err;
  const char *tmp___0;
  int bk;
  char *n;
  char *tmp___1;
  const char *tmp___2;
  const char *tmp___3;
  const char *tmp___4;
  const char *tmp___5;
  const char *tmp___6;
  const char *tmp___7;
  size_t tmp___8;
  {
    total = size;
    if (match_icase)
    {
      syntax_bits___0 |= (((((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1;
    }

    {
      re_set_syntax(syntax_bits___0);
      dfasyntax(syntax_bits___0, match_icase, eolbyte);
      p = pattern;
    }
    {
      while (1)
      {
        while_continue:
        ;

        {
          tmp = (const char *) memchr((const void *) p, '\n', total);
          sep = tmp;
        }
        if (sep)
        {
        }
        else
        {
          len = total;
          total = (size_t) 0;
        }

        {
          patterns = (struct patterns *) xnrealloc((void *) patterns, pcount + 1UL, sizeof(* patterns));
          * (patterns + pcount) = patterns0;
          tmp___0 = re_compile_pattern(p, len, & (patterns + pcount)->regexbuf);
          err = tmp___0;
        }
        if (err)
        {
          {
          }
        }

        pcount++;
        p = sep;
        if (! p)
        {
          goto while_break;
        }

      }

      while_break___0:
      ;

    }
    while_break:
    ;

    if (match_words)
    {
      goto _L;
    }
    else
      if (match_lines)
    {
      _L:
      {
        bk = ! (syntax_bits___0 & (((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1));
        tmp___1 = (char *) xmalloc((((sizeof(word_beg_bk)) - 1UL) + size) + (sizeof(word_end_bk)));
        n = tmp___1;
      }

      if (match_lines)
      {
        if (bk)
        {
          tmp___2 = line_beg_bk;
        }

        tmp___4 = tmp___2;
      }
      else
      {
        if (bk)
        {
          tmp___3 = word_beg_bk;
        }

        tmp___4 = tmp___3;
      }

      {
        strcpy((char *) n, (const char *) tmp___4);
        total = strlen((const char *) n);
        memcpy((void *) ((void *) (n + total)), (const void *) ((const void *) pattern), size);
        total += size;
      }
      if (match_lines)
      {
        if (bk)
        {
          tmp___5 = line_end_bk;
        }

        tmp___7 = tmp___5;
      }
      else
      {
        if (bk)
        {
          tmp___6 = word_end_bk;
        }

        tmp___7 = tmp___6;
      }

      {
        strcpy((char *) (n + total), (const char *) tmp___7);
        tmp___8 = strlen((const char *) (n + total));
        total += tmp___8;
        motif = n;
        pattern = (const char *) motif;
        size = total;
      }
    }
    else
    {
      motif = (char *) ((void *) 0);
    }


    {
      dfa = dfaalloc();
      dfacomp(pattern, size, dfa, 1);
      kwsmusts();
      free((void *) motif);
    }
    return;
  }
}

size_t EGexecute(const char *buf, size_t size, size_t *match_size, const char *start_ptr)
{
  const char *buflim___0;
  const char *beg;
  const char *end;
  const char *ptr;
  const char *match;
  const char *best_match;
  const char *mb_start;
  char eol;
  int backref;
  regoff_t start;
  size_t len;
  size_t best_len;
  struct kwsmatch kwsm;
  size_t i;
  struct dfa *superset;
  struct dfa *tmp;
  _Bool dfafast;
  _Bool tmp___0;
  const char *next_beg;
  const char *dfa_beg;
  size_t count;
  _Bool exact_kwset_match;
  const char *prev_beg;
  size_t offset;
  size_t tmp___1;
  long tmp___4;
  const char *tmp___5;
  long tmp___6;
  long tmp___7;
  size_t tmp___8;
  int tmp___9;
  ptrdiff_t tmp___10;
  regoff_t shorter_len;
  wint_t tmp___11;
  _Bool tmp___12;
  wint_t tmp___13;
  _Bool tmp___14;
  size_t off;
  void *__cil_tmp53;
  void *__cil_tmp54;
  {
    {
      eol = (char) eolbyte;
      tmp = dfasuperset((const struct dfa *) dfa);
      superset = tmp;
      tmp___0 = dfaisfast((const struct dfa *) dfa);
      dfafast = tmp___0;
      mb_start = buf;
      buflim___0 = buf + size;
      end = buf;
      beg = end;
    }
    {
      while (1)
      {
        while_continue:
        ;

        if (! (((unsigned long) end) < ((unsigned long) buflim___0)))
        {
          goto while_break;
        }

        end = buflim___0;
        if (! start_ptr)
        {
          dfa_beg = beg;
          count = (size_t) 0;
          exact_kwset_match = (_Bool) 0;
          if (kwset___0)
          {
            {
              tmp___1 = kwsexec(kwset___0, beg - ((int) begline), (size_t) ((buflim___0 - beg) + ((long) begline)), & kwsm);
              offset = tmp___1;
            }
            if (offset == 0xffffffffffffffffUL)
            {
              goto failure;
            }

            {
              match = beg + offset;
              prev_beg = beg;
              beg = (const char *) memrchr((const void *) buf, (int) eol, (size_t) (match - buf));
            }
            if (beg)
            {
              beg++;
            }
            else
            {
              beg = buf;
            }

            dfa_beg = beg;
            exact_kwset_match = (_Bool) (kwsm.index < kwset_exact_matches);
            if (exact_kwset_match)
            {
              end = match;
            }
            else
              if (! dfafast)
            {
              end = match;
            }
            else
            {
              if (16L > (match - beg))
              {
                tmp___7 = 16L;
              }
              else
              {
                tmp___7 = match - beg;
              }

              if (tmp___7 < ((match - prev_beg) >> 2))
              {
                end = match;
              }
              else
              {
                if (16L > (match - beg))
                {
                  tmp___6 = 16L;
                }
                else
                {
                  tmp___6 = match - beg;
                }

                if (tmp___6 < ((buflim___0 - prev_beg) >> 2))
                {
                  if (16L > (match - beg))
                  {
                    tmp___4 = 16L;
                  }
                  else
                  {
                    tmp___4 = match - beg;
                  }

                  tmp___5 = prev_beg + (4L * tmp___4);
                }

                end = tmp___5;
              }

            }


            {
              end = (const char *) memchr((const void *) end, (int) eol, (size_t) (buflim___0 - end));
            }
            if (end)
            {
              end++;
            }

            if (exact_kwset_match)
            {
              {
                tmp___8 = __ctype_get_mb_cur_max();
              }
              if (tmp___8 == 1UL)
              {
              }
              else
              {
                {
                  tmp___9 = using_utf8();
                }
                if (tmp___9)
                {
                  goto success;
                }

              }

              if (((unsigned long) mb_start) < ((unsigned long) beg))
              {
              }

              {
              }
              if (tmp___10 == 0L)
              {
              }

            }

          }

          if (superset)
          {
            if (! exact_kwset_match)
            {
              {
                while (1)
                {
                  while_continue___0:
                  ;

                  {
                    next_beg = (const char *) dfaexec(superset, dfa_beg, (char *) end, 1, & count, (int *) ((void *) 0));
                  }
                  if (next_beg)
                  {
                    if (((unsigned long) next_beg) != ((unsigned long) end))
                    {
                      if (! (count != 0UL))
                      {
                        goto while_break___0;
                      }

                    }

                  }

                  {
                  }
                }

                while_break___4:
                ;

              }
              while_break___0:
              ;

              if (((unsigned long) next_beg) == ((unsigned long) ((void *) 0)))
              {
              }
              else
                if (((unsigned long) next_beg) == ((unsigned long) end))
              {
              }


              {
                end = (const char *) memchr((const void *) next_beg, (int) eol, (size_t) (buflim___0 - next_beg));
              }
              if (end)
              {
                end++;
              }

            }

          }

          {
            next_beg = (const char *) dfaexec(dfa, dfa_beg, (char *) end, 0, & count, & backref);
          }
          if (((unsigned long) next_beg) == ((unsigned long) ((void *) 0)))
          {
            goto __Cont;
          }
          else
            if (((unsigned long) next_beg) == ((unsigned long) end))
          {
            goto __Cont;
          }


          if (count != 0UL)
          {
            {
              beg = (const char *) memrchr((const void *) buf, (int) eol, (size_t) (next_beg - buf));
              beg++;
            }
          }

          {
            end = (const char *) memchr((const void *) next_beg, (int) eol, (size_t) (buflim___0 - next_beg));
          }
          if (end)
          {
            end++;
          }

          if (! backref)
          {
            goto success;
          }

          ptr = beg;
        }
        else
        {
          ptr = start_ptr;
        }

        if (((long) ((((1 << (((sizeof(regoff_t)) * 8UL) - 2UL)) - 1) * 2) + 1)) < ((end - beg) - 1L))
        {
          {
          }
        }

        best_match = end;
        best_len = (size_t) 0;
        i = (size_t) 0;
        {
          while (1)
          {
            while_continue___1:
            ;

            if (! (i < pcount))
            {
              goto while_break___1;
            }

            {
              (patterns + i)->regexbuf.not_eol = 0U;
              start = re_search(& (patterns + i)->regexbuf, beg, (__re_idx_t) ((end - beg) - 1L), (__re_idx_t) (ptr - beg), (regoff_t) ((end - ptr) - 1L), & (patterns + i)->regs);
              __msan_unpoison((patterns + i)->regs.end, 100);
            }
            if (start < (- 1))
            {
              {
              }
            }
            else
              if (0 <= start)
            {
              len = (size_t) ((* ((patterns + i)->regs.end + 0)) - start);
              match = beg + start;
              if (((unsigned long) match) > ((unsigned long) best_match))
              {
              }

              if (start_ptr)
              {
                if (! match_words)
                {
                  goto assess_pattern_match;
                }

              }

              if (! match_lines)
              {
                if (! match_words)
                {
                  match = ptr;
                  len = (size_t) (end - ptr);
                  goto assess_pattern_match;
                }
                else
                {
                  goto _L;
                }

              }
                _L:
;              if (match_lines)
              {
                if (len == ((size_t) ((end - ptr) - 1L)))
                {
                }

              }



              if (match_words)
              {
                {
                  while (1)
                  {
                    while_continue___2:
                    ;

                    if (! (((unsigned long) match) <= ((unsigned long) best_match)))
                    {
                    }

                    {
                      shorter_len = 0;
                      tmp___11 = mb_prev_wc(beg, match, end - 1);
                      tmp___12 = wordchar___0(tmp___11);
                    }
                    if (! tmp___12)
                    {
                      {
                        tmp___13 = mb_next_wc(match + len, end - 1);
                        tmp___14 = wordchar___0(tmp___13);
                      }
                      if (! tmp___14)
                      {
                        goto assess_pattern_match;
                      }

                    }

                    if (len > 0UL)
                    {
                      {
                        len--;
                        (patterns + i)->regexbuf.not_eol = 1U;
                        shorter_len = re_match(& (patterns + i)->regexbuf, beg, (__re_idx_t) ((match + len) - ptr), (__re_idx_t) (match - beg), & (patterns + i)->regs);
                      }
                      if (shorter_len < (- 1))
                      {
                        {
                        }
                      }

                    }

                    if (0 < shorter_len)
                    {
                    }
                    else
                    {
                      if (((unsigned long) match) == ((unsigned long) (end - 1)))
                      {
                      }

                      {
                        match++;
                        (patterns + i)->regexbuf.not_eol = 0U;
                        start = re_search(& (patterns + i)->regexbuf, beg, (__re_idx_t) ((end - beg) - 1L), (__re_idx_t) (match - beg), (regoff_t) ((end - match) - 1L), & (patterns + i)->regs);
                      }
                      if (start < 0)
                      {
                        if (start < (- 1))
                        {
                          {
                          }
                        }

                        goto while_break___2;
                      }

                      len = (size_t) ((* ((patterns + i)->regs.end + 0)) - start);
                      match = beg + start;
                    }

                  }

                  while_break___6:
;                  ;

                }
                while_break___2:
                ;

              }

              goto __Cont___0;
              assess_pattern_match:
              if (! start_ptr)
              {
                goto success;
              }


              if (((unsigned long) match) < ((unsigned long) best_match))
              {
                best_match = match;
                best_len = len;
              }
              else
                if (((unsigned long) match) == ((unsigned long) best_match))
              {
              }


            }


            __Cont___0:
            i++;

          }

          while_break___5:
          ;

        }
        while_break___1:
        ;

        if (((unsigned long) best_match) < ((unsigned long) end))
        {
          beg = best_match;
          len = best_len;
          goto success_in_len;
        }

        __Cont:
        beg = end;

      }

      while_break___3:
      ;

    }
    while_break:
    ;

    failure:
    return (size_t) (- 1);

    success:
    len = (size_t) (end - beg);

    success_in_len:
    off = (size_t) (beg - buf);

    * match_size = len;
    return off;
  }
}

void dfafree(struct dfa *d);
void dfainit(struct dfa *d);
void dfaparse(const char *s, size_t len, struct dfa *d);
void dfaanalyze(struct dfa *d, int searchflag);
void dfastate(ptrdiff_t s, struct dfa *d, ptrdiff_t *trans___0);
extern int isalnum(int);
extern int isalpha(int);
extern int iscntrl(int);
extern int isdigit(int);
extern int islower(int);
extern int isgraph(int);
extern int isprint(int);
extern int ispunct(int);
extern int isspace(int);
extern int isupper(int);
extern int isxdigit(int);
extern int toupper(int __c);
extern int isblank(int);
extern char *strncpy(char *__restrict __dest, const char *__restrict __src, size_t __n);
extern int strcoll(const char *__s1, const char *__s2);
extern char *setlocale(int __category, const char *__locale);
extern int wctob(wint_t __c);
extern size_t wcrtomb(char *__restrict __s, wchar_t __wc, mbstate_t *__restrict __ps);
extern int iswalpha(wint_t __wc);
extern wctype_t wctype(const char *__property);
extern int iswctype(wint_t __wc, wctype_t __desc);
extern wint_t towupper(wint_t __wc);
static unsigned char to_uchar___0(char ch)
{
  {
    return (unsigned char) ch;
  }
}

static void dfamust(struct dfa *d);
static void regexp(void);
static void dfambcache(struct dfa *d)
{
  int i;
  char c;
  unsigned char uc;
  mbstate_t s;
  wchar_t wc;
  size_t tmp___0;
  void *__cil_tmp9;
  {
    i = - 128;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (i <= 127))
        {
          goto while_break;
        }

        {
          c = (char) i;
          uc = (unsigned char) i;
          s.__count = 0;
          s.__value.__wch = 0U;
          tmp___0 = mbrtowc((wchar_t *) (& wc), (const char *) ((const char *) (& c)), (size_t) 1, (mbstate_t *) (& s));
        }
        if (tmp___0 <= 1UL)
        {
          d->mbrtowc_cache[uc] = (wint_t) wc;
        }
        else
        {
          d->mbrtowc_cache[uc] = 4294967295U;
        }

        i++;
      }

      while_break___0:
      ;

    }
    while_break:
    ;

    return;
  }
}

static size_t mbs_to_wchar(wint_t *pwc, const char *s, size_t n, struct dfa *d)
{
  unsigned char uc;
  wint_t wc;
  wchar_t wch;
  size_t nbytes;
  size_t tmp;
  {
    uc = (unsigned char) (* (s + 0));
    wc = d->mbrtowc_cache[uc];
    if (wc == 4294967295U)
    {
      {
      }
      if (0UL < nbytes)
      {
      }

      {
      }
    }

    * pwc = wc;
    return (size_t) 1;
  }
}

static _Bool tstbit(unsigned int b, charclass_word *const c)
{
  {
    return (_Bool) (((* (c + (b / 32U))) >> (b % 32U)) & 1U);
  }
}

static void setbit(unsigned int b, charclass_word *c)
{
  {
    * (c + (b / 32U)) |= 1U << (b % 32U);
    return;
  }
}

static void clrbit(unsigned int b, charclass_word *c)
{
  {
    * (c + (b / 32U)) &= ~ (1U << (b % 32U));
    return;
  }
}

static void copyset(charclass_word *const src, charclass_word *dst)
{
  {
    {
      memcpy((void *) ((void *) dst), (const void *) ((const void *) src), sizeof(charclass));
    }
    return;
  }
}

static void zeroset(charclass_word *s)
{
  {
    {
      memset((void *) s, 0, sizeof(charclass));
    }
    return;
  }
}

static void notset(charclass_word *s)
{
  int i;
  {
    i = 0;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (i < 8))
        {
          goto while_break;
        }

        * (s + i) = (((1U << 31) << 1) - 1U) & (~ (* (s + i)));
        i++;
      }

      while_break___0:
      ;

    }
    while_break:
    ;

    return;
  }
}

static _Bool equal(charclass_word *const s1, charclass_word *const s2)
{
  int tmp;
  {
    {
      tmp = memcmp((const void *) s1, (const void *) s2, sizeof(charclass));
    }
    return (_Bool) (tmp == 0);
  }
}

static void *maybe_realloc(void *ptr, size_t nitems, size_t *nalloc, size_t itemsize)
{
  void *tmp;
  {
    if (nitems < (* nalloc))
    {
      return ptr;
    }

    {
      * nalloc = nitems;
      tmp = x2nrealloc(ptr, nalloc, itemsize);
    }
    return tmp;
  }
}

static size_t dfa_charclass_index(struct dfa *d, charclass_word *const s)
{
  size_t i;
  _Bool tmp;
  {
    i = (size_t) 0;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (i < d->cindex))
        {
          goto while_break;
        }

        {
          tmp = equal(s, (charclass_word *) (* (d->charclasses + i)));
        }
        if (tmp)
        {
          return i;
        }

        i++;
      }

      while_break___0:
      ;

    }
    while_break:
    {
      d->charclasses = (charclass *) maybe_realloc((void *) d->charclasses, d->cindex, & d->calloc, sizeof(* d->charclasses));
      d->cindex++;
      copyset(s, * (d->charclasses + i));
    }

    return i;
  }
}

static struct dfa *dfa___0;
static size_t charclass_index(charclass_word *const s)
{
  size_t tmp;
  {
    {
      tmp = dfa_charclass_index(dfa___0, s);
    }
    return tmp;
  }
}

static reg_syntax_t syntax_bits;
static reg_syntax_t syntax_bits_set;
static _Bool case_fold;
static unsigned char eolbyte___0;
static int sbit[256];
static charclass letters;
static charclass newline;
static int char_context(unsigned char c)
{
  const unsigned short **tmp;
  {
    if (((int) c) == ((int) eolbyte___0))
    {
      return 4;
    }

    {
      tmp = __ctype_b_loc();
    }
    if (((const int) (* ((* tmp) + ((int) c)))) & 8)
    {
      return 2;
    }
    else
      if (((int) c) == 95)
    {
      return 2;
    }


    return 1;
  }
}

static int wchar_context(wint_t wc)
{
}

void dfasyntax(reg_syntax_t bits, int fold, unsigned char eol)
{
  unsigned int i;
  {
    syntax_bits_set = (reg_syntax_t) 1;
    syntax_bits = bits;
    case_fold = (_Bool) (fold != 0);
    eolbyte___0 = eol;
    i = 0U;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (i < 256U))
        {
          goto while_break;
        }

        {
          sbit[i] = char_context((unsigned char) i);
        }
        if (sbit[i] == 2)
        {
          goto case_2;
        }

        if (sbit[i] == 4)
        {
          goto case_4;
        }

        goto switch_break;
        case_2:
        {
          setbit(i, letters);
        }

        goto switch_break;
        case_4:
        {
          setbit(i, newline);
        }

        goto switch_break;
        switch_break:
        i++;

      }

      while_break___0:
      ;

    }
    while_break:
    ;

    return;
  }
}

static _Bool setbit_wc(wint_t wc, charclass_word *c)
{
  int b;
  int tmp;
  {
    {
      tmp = wctob(wc);
      b = tmp;
    }
    if (b == (- 1))
    {
    }

    {
      setbit((unsigned int) b, c);
    }
    return (_Bool) 1;
  }
}

static void setbit_case_fold_c(int b, charclass_word *c)
{
}

static int utf8 = - 1;
int using_utf8(void)
{
  wchar_t wc;
  mbstate_t mbs;
  size_t tmp;
  int tmp___0;
  void *__cil_tmp6;
  {
    if (utf8 < 0)
    {
      {
        mbs.__count = 0;
        mbs.__value.__wch = 0U;
        tmp = mbrtowc((wchar_t *) (& wc), (const char *) "\304\200", (size_t) 2, (mbstate_t *) (& mbs));
      }
      if (tmp == 2UL)
      {
        if (wc == 256)
        {
          tmp___0 = 1;
        }

      }

      utf8 = tmp___0;
    }

    return utf8;
  }
}

static _Bool using_simple_locale(void);
static int unibyte_c = - 1;
static _Bool using_simple_locale(void)
{
  const char *locale;
  const char *tmp;
  int tmp___0;
  int tmp___1;
  int tmp___2;
  {
    if (dfa___0->multibyte)
    {
      return (_Bool) 0;
    }
    else
    {
      if (unibyte_c < 0)
      {
      }

    }

  }
}

static const char *lexptr;
static size_t lexleft;
static token lasttok;
static _Bool laststart;
static size_t parens;
static int minrep;
static int maxrep;
static int cur_mb_len = 1;
static wint_t wctok;
static const short lonesome_lower[19] = {(const short) 181, (const short) 305, (const short) 383, (const short) 453, (const short) 456, (const short) 459, (const short) 498, (const short) 837, (const short) 962, (const short) 976, (const short) 977, (const short) 981, (const short) 982, (const short) 1008, (const short) 1009, (const short) 1010, (const short) 1013, (const short) 7835, (const short) 8126};
static int case_folded_counterparts(wchar_t c, wchar_t *folded)
{
  int i;
  int n;
  wint_t uc;
  wint_t tmp;
  wint_t lc;
  wint_t tmp___0;
  int tmp___1;
  int tmp___2;
  wint_t tmp___3;
  wint_t li;
  int tmp___4;
  wint_t tmp___5;
  {
    {
      n = 0;
      tmp = towupper((wint_t) c);
      uc = tmp;
      tmp___0 = towlower(uc);
      lc = tmp___0;
    }
    if (uc != ((wint_t) c))
    {
      tmp___1 = n;
      n++;
      * (folded + tmp___1) = (wchar_t) uc;
    }

    if (lc != uc)
    {
      if (lc != ((wint_t) c))
      {
        {
          tmp___3 = towupper(lc);
        }
        if (tmp___3 == uc)
        {
          tmp___2 = n;
          n++;
          * (folded + tmp___2) = (wchar_t) lc;
        }

      }

    }

    i = 0;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (((unsigned long) i) < ((sizeof(lonesome_lower)) / (sizeof(lonesome_lower[0])))))
        {
          goto while_break;
        }

        li = (wint_t) lonesome_lower[i];
        if (li != lc)
        {
          if (li != uc)
          {
            if (li != ((wint_t) c))
            {
              {
                tmp___5 = towupper(li);
              }
              if (tmp___5 == uc)
              {
                tmp___4 = n;
                n++;
                * (folded + tmp___4) = (wchar_t) li;
              }

            }

          }

        }

        i++;
      }

      while_break___0:
      ;

    }
    while_break:
    ;

    return n;
  }
}

static const struct dfa_ctype prednames[13] = {{"alpha", & isalpha, (_Bool) 0}, {"upper", & isupper, (_Bool) 0}, {"lower", & islower, (_Bool) 0}, {"digit", & isdigit, (_Bool) 1}, {"xdigit", & isxdigit, (_Bool) 0}, {"space", & isspace, (_Bool) 0}, {"punct", & ispunct, (_Bool) 0}, {"alnum", & isalnum, (_Bool) 0}, {"print", & isprint, (_Bool) 0}, {"graph", & isgraph, (_Bool) 0}, {"cntrl", & iscntrl, (_Bool) 0}, {"blank", & isblank, (_Bool) 0}, {(const char *) ((void *) 0), (predicate *) ((void *) 0), (_Bool) 0}};
static const struct dfa_ctype *find_pred(const char *str)
{
  unsigned int i;
  int tmp;
  {
    i = 0U;
    {
      while (1)
      {
        while_continue:
        ;

        if (! prednames[i].name)
        {
        }

        {
          tmp = strcmp(str, (const char *) prednames[i].name);
        }
        if (tmp == 0)
        {
          goto while_break;
        }

        i++;
      }

      while_break___0:
      ;

    }
    while_break:
    ;

    return (const struct dfa_ctype *) (& prednames[i]);
  }
}

static charclass zeroclass;
static token parse_bracket_exp(void)
{
  _Bool invert;
  int c;
  int c1;
  int c2;
  charclass ccl;
  _Bool known_bracket_exp;
  int colon_warning_state;
  wint_t wc;
  wint_t wc2;
  wint_t wc1;
  struct mb_char_classes *work_mbc;
  size_t chars_al;
  size_t ranges_al;
  size_t ch_classes_al;
  size_t equivs_al;
  size_t coll_elems_al;
  size_t tmp;
  char *tmp___0;
  char *tmp___1;
  wint_t _wc;
  size_t nbytes;
  size_t tmp___2;
  unsigned char tmp___3;
  char *tmp___4;
  char *tmp___5;
  wint_t _wc___0;
  size_t nbytes___0;
  size_t tmp___6;
  unsigned char tmp___7;
  char *tmp___8;
  char *tmp___9;
  wint_t _wc___1;
  size_t nbytes___1;
  size_t tmp___10;
  unsigned char tmp___11;
  char str[33];
  size_t len;
  char *tmp___12;
  char *tmp___13;
  wint_t _wc___2;
  size_t nbytes___2;
  size_t tmp___14;
  unsigned char tmp___15;
  size_t tmp___16;
  char *tmp___17;
  char *tmp___18;
  wint_t _wc___3;
  size_t nbytes___3;
  size_t tmp___19;
  unsigned char tmp___20;
  const char *class;
  const char *tmp___23;
  int tmp___24;
  int tmp___25;
  const struct dfa_ctype *pred;
  const struct dfa_ctype *tmp___26;
  char *tmp___27;
  wctype_t wt;
  wctype_t tmp___28;
  size_t tmp___29;
  int tmp___30;
  char *tmp___31;
  char *tmp___32;
  wint_t _wc___4;
  size_t nbytes___4;
  size_t tmp___33;
  unsigned char tmp___34;
  char *tmp___35;
  char *tmp___36;
  wint_t _wc___5;
  size_t nbytes___5;
  size_t tmp___37;
  unsigned char tmp___38;
  char *tmp___39;
  char *tmp___40;
  wint_t _wc___6;
  size_t nbytes___6;
  size_t tmp___41;
  unsigned char tmp___42;
  char *tmp___43;
  char *tmp___44;
  wint_t _wc___7;
  size_t nbytes___7;
  size_t tmp___45;
  unsigned char tmp___46;
  char *tmp___47;
  char *tmp___48;
  wint_t _wc___8;
  size_t nbytes___8;
  size_t tmp___49;
  unsigned char tmp___50;
  wint_t tmp___51;
  size_t tmp___52;
  wint_t tmp___53;
  size_t tmp___54;
  int tmp___55;
  int tmp___56;
  int uc;
  int tmp___57;
  int uc2;
  int tmp___58;
  int uc1;
  int tmp___59;
  _Bool tmp___60;
  char *tmp___61;
  char *tmp___62;
  wint_t _wc___9;
  size_t nbytes___9;
  size_t tmp___63;
  unsigned char tmp___64;
  int tmp___65;
  wchar_t folded[22];
  int i;
  int n;
  int tmp___66;
  int tmp___67;
  size_t tmp___68;
  _Bool tmp___69;
  char *tmp___70;
  size_t tmp___72;
  _Bool tmp___73;
  size_t tmp___74;
  void *__cil_tmp161;
  void *__cil_tmp162;
  void *__cil_tmp163;
  char *__cil_tmp164;
  char *__cil_tmp165;
  char *__cil_tmp166;
  char *__cil_tmp167;
  char *__cil_tmp168;
  char *__cil_tmp169;
  char *__cil_tmp170;
  char *__cil_tmp171;
  char *__cil_tmp172;
  char *__cil_tmp173;
  char *__cil_tmp174;
  char *__cil_tmp175;
  char *__cil_tmp176;
  char *__cil_tmp177;
  char *__cil_tmp178;
  char *__cil_tmp179;
  char *__cil_tmp180;
  char *__cil_tmp181;
  char *__cil_tmp182;
  char *__cil_tmp183;
  char *__cil_tmp184;
  char *__cil_tmp185;
  char *__cil_tmp186;
  char *__cil_tmp187;
  char *__cil_tmp188;
  char *__cil_tmp189;
  {
    known_bracket_exp = (_Bool) 1;
    wc1 = (wint_t) 0;
    coll_elems_al = (size_t) 0;
    equivs_al = coll_elems_al;
    ch_classes_al = equivs_al;
    ranges_al = ch_classes_al;
    chars_al = ranges_al;
    if (dfa___0->multibyte)
    {
      {
        dfa___0->mbcsets = (struct mb_char_classes *) maybe_realloc((void *) dfa___0->mbcsets, dfa___0->nmbcsets, & dfa___0->mbcsets_alloc, sizeof(* dfa___0->mbcsets));
        tmp = dfa___0->nmbcsets;
        dfa___0->nmbcsets++;
        work_mbc = dfa___0->mbcsets + tmp;
        memset((void *) work_mbc, 0, sizeof(* work_mbc));
      }
    }

    {
      memset((void *) ccl, 0, sizeof(ccl));
    }
    {
      while (1)
      {
        while_continue:
        ;

        if (! lexleft)
        {
          {
          }
          if (((unsigned long) tmp___1) != ((unsigned long) ((char *) 0)))
          {
          }

        }
        else
        {
          {
            tmp___2 = mbs_to_wchar(& _wc, lexptr, lexleft, dfa___0);
            nbytes = tmp___2;
            cur_mb_len = (int) nbytes;
            wc = _wc;
          }
          if (nbytes == 1UL)
          {
            {
              tmp___3 = to_uchar___0((char) (* lexptr));
              c = (int) tmp___3;
            }
          }

          lexptr += nbytes;
          lexleft -= nbytes;
        }

        goto while_break;
      }

      while_break___16:
      ;

    }
    while_break:
    ;

    if (c == 94)
    {
      {
        while (1)
        {
          while_continue___0:
          ;

          if (! lexleft)
          {
            {
            }
            if (((unsigned long) tmp___5) != ((unsigned long) ((char *) 0)))
            {
            }

          }
          else
          {
            {
              tmp___6 = mbs_to_wchar(& _wc___0, lexptr, lexleft, dfa___0);
              nbytes___0 = tmp___6;
              cur_mb_len = (int) nbytes___0;
              wc = _wc___0;
            }
            if (nbytes___0 == 1UL)
            {
              {
                tmp___7 = to_uchar___0((char) (* lexptr));
                c = (int) tmp___7;
              }
            }

            lexptr += nbytes___0;
            lexleft -= nbytes___0;
          }

          goto while_break___0;
        }

        while_break___17:
        ;

      }
      while_break___0:
      {
        invert = (_Bool) 1;
        known_bracket_exp = using_simple_locale();
      }

    }
    else
    {
      invert = (_Bool) 0;
    }

    colon_warning_state = c == 58;
    {
      while (1)
      {
        while_continue___1:
        ;

        c1 = 256;
        colon_warning_state &= - 3;
        if (c == 91)
        {
          {
            while (1)
            {
              while_continue___2:
              ;

              if (! lexleft)
              {
                {
                }
                if (((unsigned long) tmp___9) != ((unsigned long) ((char *) 0)))
                {
                }

              }
              else
              {
                {
                  tmp___10 = mbs_to_wchar(& _wc___1, lexptr, lexleft, dfa___0);
                  nbytes___1 = tmp___10;
                  cur_mb_len = (int) nbytes___1;
                  wc1 = _wc___1;
                }
                if (nbytes___1 == 1UL)
                {
                  {
                    tmp___11 = to_uchar___0((char) (* lexptr));
                    c1 = (int) tmp___11;
                  }
                }

                lexptr += nbytes___1;
                lexleft -= nbytes___1;
              }

              goto while_break___2;
            }

            while_break___19:
            ;

          }
          while_break___2:
          ;

          if (c1 == 58)
          {
            if (syntax_bits & ((1UL << 1) << 1))
            {
              goto _L___0;
            }

          }
            _L___1:
;          if (c1 == 46)
          {
          }
          else
            if (c1 == 61)
          {
            _L___0:
                while_continue___3:
                    while_continue___4:
                  while_break___21:
                while_break___4:
                  _L:
              while_break___20:
            while_break___3:
                while_continue___5:
              while_break___22:
            while_break___5:
                  while_continue___6:
                while_break___23:
              while_break___6:
                while_continue___7:
              while_break___24:
            while_break___7:
          }




        }

        if (c == 92)
        {
          if (syntax_bits & 1UL)
          {
                while_continue___8:
              while_break___25:
            while_break___8:
          }

        }

        if (c1 == 256)
        {
          {
            while (1)
            {
              while_continue___9:
              ;

              if (! lexleft)
              {
                {
                }
                if (((unsigned long) tmp___40) != ((unsigned long) ((char *) 0)))
                {
                }

              }
              else
              {
                {
                  tmp___41 = mbs_to_wchar(& _wc___6, lexptr, lexleft, dfa___0);
                  nbytes___6 = tmp___41;
                  cur_mb_len = (int) nbytes___6;
                  wc1 = _wc___6;
                }
                if (nbytes___6 == 1UL)
                {
                  {
                    tmp___42 = to_uchar___0((char) (* lexptr));
                    c1 = (int) tmp___42;
                  }
                }

                lexptr += nbytes___6;
                lexleft -= nbytes___6;
              }

              goto while_break___9;
            }

            while_break___26:
;            ;

          }
          while_break___9:
          ;

        }

        if (c1 == 45)
        {
          {
            while (1)
            {
              while_continue___10:
              ;

              if (! lexleft)
              {
                {
                }
                if (((unsigned long) tmp___44) != ((unsigned long) ((char *) 0)))
                {
                }

              }
              else
              {
                {
                  tmp___45 = mbs_to_wchar(& _wc___7, lexptr, lexleft, dfa___0);
                  nbytes___7 = tmp___45;
                  cur_mb_len = (int) nbytes___7;
                  wc2 = _wc___7;
                }
                if (nbytes___7 == 1UL)
                {
                  {
                    tmp___46 = to_uchar___0((char) (* lexptr));
                    c2 = (int) tmp___46;
                  }
                }

                lexptr += nbytes___7;
                lexleft -= nbytes___7;
              }

              goto while_break___10;
            }

            while_break___27:
            ;

          }
          while_break___10:
          ;

          if (c2 == 91)
          {
            if (((const int) (* lexptr)) == 46)
            {
            }

          }

          if (c2 != 93)
          {
            if (c2 == 92)
            {
              if (syntax_bits & 1UL)
              {
                    while_continue___11:
                  while_break___28:
                while_break___11:
              }

            }

            if (dfa___0->multibyte)
            {
              if (wc != 4294967295U)
              {
                if (wc2 != 4294967295U)
                {
                  {
                    work_mbc->ranges = (struct __anonstruct_ranges_39 *) maybe_realloc((void *) work_mbc->ranges, work_mbc->nranges + 2UL, & ranges_al, sizeof(* work_mbc->ranges));
                  }
                  if (case_fold)
                  {
                    {
                    }
                  }
                  else
                  {
                    (work_mbc->ranges + work_mbc->nranges)->beg = (wchar_t) wc;
                  }

                  tmp___52 = work_mbc->nranges;
                  work_mbc->nranges++;
                  if (case_fold)
                  {
                    {
                    }
                  }
                  else
                  {
                    (work_mbc->ranges + tmp___52)->end = (wchar_t) wc2;
                  }

                  if (case_fold)
                  {
                    {
                    }
                    if (tmp___55)
                    {
                    }
                    else
                    {
                      {
                      }
                      if (tmp___56)
                      {
                      }

                    }

                  }

                }

              }

            }
            else
            {
              {
              }
              if (tmp___60)
              {
                    while_continue___12:
                  while_break___29:
                while_break___12:
                      while_continue___13:
                    while_break___30:
                  while_break___13:
              }

            }

            colon_warning_state |= 8;
            {
              while (1)
              {
                while_continue___14:
                ;

                if (! lexleft)
                {
                  {
                  }
                  if (((unsigned long) tmp___62) != ((unsigned long) ((char *) 0)))
                  {
                  }

                }
                else
                {
                  {
                    tmp___63 = mbs_to_wchar(& _wc___9, lexptr, lexleft, dfa___0);
                    nbytes___9 = tmp___63;
                    cur_mb_len = (int) nbytes___9;
                    wc1 = _wc___9;
                  }
                  if (nbytes___9 == 1UL)
                  {
                    {
                      tmp___64 = to_uchar___0((char) (* lexptr));
                      c1 = (int) tmp___64;
                    }
                  }

                  lexptr += nbytes___9;
                  lexleft -= nbytes___9;
                }

                goto while_break___14;
              }

              while_break___31:
              ;

            }
            while_break___14:
            ;

            goto __Cont;
          }

        }

        if (c == 58)
        {
        }
        else
        {
          tmp___65 = 4;
        }

        colon_warning_state |= tmp___65;
        if (! dfa___0->multibyte)
        {
          if (case_fold)
          {
          }

        }

        if (wc == 4294967295U)
        {
        }
        else
        {
          if (case_fold)
          {
            {
            }
          }
          else
          {
            tmp___67 = 1;
          }

          n = tmp___67;
          folded[0] = (wchar_t) wc;
          i = 0;
          {
            while (1)
            {
              while_continue___15:
              ;

              if (! (i < n))
              {
                goto while_break___15;
              }

              {
                tmp___69 = setbit_wc((wint_t) folded[i], ccl);
              }
              if (! tmp___69)
              {
                {
                }
              }

              i++;
            }

            while_break___32:
            ;

          }
          while_break___15:
          ;

        }

        __Cont:
        wc = wc1;

        c = c1;
        if (! (c != 93))
        {
          goto while_break___1;
        }

      }

      while_break___18:
      ;

    }
    while_break___1:
    ;

    if (colon_warning_state == 7)
    {
      {
      }
    }

    if (! known_bracket_exp)
    {
      return (token) 257;
    }

    if (dfa___0->multibyte)
    {
      {
        work_mbc->invert = invert;
        tmp___73 = equal((charclass_word *) ccl, (charclass_word *) zeroclass);
      }
      if (tmp___73)
      {
        work_mbc->cset = (ptrdiff_t) (- 1);
      }
      else
      {
        {
          tmp___72 = charclass_index((charclass_word *) ccl);
          work_mbc->cset = (ptrdiff_t) tmp___72;
        }
      }

      return (token) 273;
    }

    if (invert)
    {
    }

    {
    }
  }
}

static token lex(void)
{
  int c;
  int c2;
  _Bool backslash;
  charclass ccl;
  int i;
  wint_t _wc;
  size_t nbytes;
  size_t tmp;
  unsigned char tmp___0;
  char *tmp___1;
  int tmp___2;
  int tmp___3;
  int tmp___4;
  int tmp___5;
  int tmp___6;
  int tmp___7;
  const char *p;
  const char *lim;
  char *tmp___8;
  const char *tmp___9;
  const char *tmp___10;
  char *tmp___11;
  size_t tmp___12;
  const unsigned short **tmp___13;
  size_t tmp___14;
  const char *lexptr_saved;
  size_t lexleft_saved;
  const unsigned short **tmp___15;
  size_t tmp___16;
  size_t tmp___17;
  const unsigned short **tmp___18;
  void *__cil_tmp38;
  char *__cil_tmp39;
  char *__cil_tmp40;
  char *__cil_tmp41;
  char *__cil_tmp42;
  char *__cil_tmp43;
  {
    backslash = (_Bool) 0;
    i = 0;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (i < 2))
        {
        }

        {
          while (1)
          {
            while_continue___0:
            ;

            if (! lexleft)
            {
              lasttok = (token) (- 1);
              return lasttok;
            }
            else
            {
              {
                tmp = mbs_to_wchar(& _wc, lexptr, lexleft, dfa___0);
                nbytes = tmp;
                cur_mb_len = (int) nbytes;
                wctok = _wc;
              }
              if (nbytes == 1UL)
              {
                {
                  tmp___0 = to_uchar___0((char) (* lexptr));
                  c = (int) tmp___0;
                }
              }

              lexptr += nbytes;
              lexleft -= nbytes;
            }

            goto while_break___0;
          }

          while_break___7:
          ;

        }
        while_break___0:
        ;

        if (c == 92)
        {
          goto case_92;
        }

        if (c == 94)
        {
          goto case_94;
        }

        if (c == 36)
        {
          goto case_36;
        }

        if (c == 49)
        {
        }

        if (c == 50)
        {
          goto case_49;
        }

        if (c == 51)
        {
          goto case_49;
        }

        if (c == 52)
        {
        }

        if (c == 53)
        {
          goto case_49;
        }

        if (c == 54)
        {
        }

        if (c == 55)
        {
        }

        if (c == 56)
        {
        }

        if (c == 57)
        {
        }

        if (c == 96)
        {
        }

        if (c == 39)
        {
          goto case_39;
        }

        if (c == 60)
        {
        }

        if (c == 62)
        {
        }

        if (c == 98)
        {
        }

        if (c == 66)
        {
        }

        if (c == 63)
        {
          goto case_63;
        }

        if (c == 42)
        {
          goto case_42;
        }

        if (c == 43)
        {
          goto case_43;
        }

        if (c == 123)
        {
        }

        if (c == 124)
        {
          goto case_124;
        }

        if (c == 10)
        {
        }

        if (c == 40)
        {
          goto case_40;
        }

        if (c == 41)
        {
          goto case_41;
        }

        if (c == 46)
        {
          goto case_46;
        }

        if (c == 115)
        {
          goto case_115;
        }

        if (c == 83)
        {
          goto case_115;
        }

        if (c == 119)
        {
        }

        if (c == 87)
        {
        }

        if (c == 91)
        {
          goto case_91;
        }

        goto normal_char;
        case_92:
        if (backslash)
        {
        }


        if (lexleft == 0UL)
        {
          {
          }
        }

        backslash = (_Bool) 1;
        goto switch_break;
        case_94:
        if (backslash)
        {
        }


        if (syntax_bits & (((1UL << 1) << 1) << 1))
        {
        }
        else
          if (lasttok == (- 1L))
        {
          lasttok = (token) 258;
          return lasttok;
        }
        else
          if (lasttok == 270L)
        {
          lasttok = (token) 258;
          return lasttok;
        }
        else
          if (lasttok == 269L)
        {
        }




        case_36:
        if (backslash)
        {
        }


        if (syntax_bits & (((1UL << 1) << 1) << 1))
        {
        }
        else
          if (lexleft == 0UL)
        {
          lasttok = (token) 259;
          return lasttok;
        }
        else
        {
          if (syntax_bits & (((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
          {
            if (lexleft > 0UL)
            {
            }

          }
          else
          {
            if (lexleft > 1UL)
            {
              if (((const int) (* (lexptr + 0))) == 92)
              {
                if (((const int) (* (lexptr + 1))) == 41)
                {
                  tmp___3 = 1;
                }

              }

            }

            tmp___4 = tmp___3;
          }

          if (tmp___4)
          {
            lasttok = (token) 259;
            return lasttok;
          }
          else
          {
            if (syntax_bits & (((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
            {
            }
            else
            {
              if (lexleft > 1UL)
              {
              }

            }

            if (tmp___7)
            {
            }
            else
              if (syntax_bits & (((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
            {
            }


          }

        }


        case_49:
        if (backslash)
        {
          if (! (syntax_bits & ((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
          {
          }

        }


        goto normal_char;
        case_96:
;        if (backslash)
        {
        }


        case_39:
        if (backslash)
        {
          if (! (syntax_bits & (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
          {
          }

        }


        goto normal_char;
        case_60:
;        if (backslash)
        {
        }


        case_62:
;        if (backslash)
        {
        }


        case_98:
;        if (backslash)
        {
        }


        case_66:
;        if (backslash)
        {
        }


        case_63:
        if (syntax_bits & ((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
        {
        }


        if (((int) backslash) != ((syntax_bits & (1UL << 1)) != 0UL))
        {
        }

        if (! (syntax_bits & ((((1UL << 1) << 1) << 1) << 1)))
        {
          if (laststart)
          {
          }

        }

        lasttok = (token) 264;
        return lasttok;
        case_42:
        if (backslash)
        {
        }


        if (! (syntax_bits & ((((1UL << 1) << 1) << 1) << 1)))
        {
          if (laststart)
          {
          }

        }

        lasttok = (token) 265;
        return lasttok;
        case_43:
        if (syntax_bits & ((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
        {
        }


        if (((int) backslash) != ((syntax_bits & (1UL << 1)) != 0UL))
        {
        }

        if (! (syntax_bits & ((((1UL << 1) << 1) << 1) << 1)))
        {
          if (laststart)
          {
          }

        }

        lasttok = (token) 266;
        return lasttok;
        case_123:
;        if (! (syntax_bits & (((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
        {
        }


        if (((int) backslash) != ((syntax_bits & ((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) == 0UL))
        {
        }

        if (! (syntax_bits & ((((1UL << 1) << 1) << 1) << 1)))
        {
        }

        {
          while (1)
          {
            while_continue___1:
;            ;

            if (((unsigned long) p) != ((unsigned long) lim))
            {
            }

            if (minrep < 0)
            {
            }
            else
              if (32768 < (((minrep * 10) + ((int) (* p))) - 48))
            {
            }


          }

          while_break___8:
;          ;

        }
        while_break___1:
;        ;

        if (((unsigned long) p) != ((unsigned long) lim))
        {
                while_continue___2:
              while_break___9:
            while_break___2:
        }

        if (! backslash)
        {
        }
        else
          if (((unsigned long) p) != ((unsigned long) lim))
        {
            _L___3:
        }
        else
        {
          _L___4:
;          if (syntax_bits & (((((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
          {
          }


          {
          }
        }


        if (32767 < maxrep)
        {
        }

        case_124:
        if (syntax_bits & ((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
        {
        }


        if (((int) backslash) != ((syntax_bits & (((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) == 0UL))
        {
        }

        laststart = (_Bool) 1;
        lasttok = (token) 269;
        return lasttok;
        case_10:
;        if (syntax_bits & ((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
        {
        }
        else
          if (backslash)
        {
        }
        else
          if (! (syntax_bits & (((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
        {
        }




        case_40:
        if (((int) backslash) != ((syntax_bits & (((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) == 0UL))
        {
        }


        parens++;
        laststart = (_Bool) 1;
        lasttok = (token) 270;
        return lasttok;
        case_41:
        if (((int) backslash) != ((syntax_bits & (((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) == 0UL))
        {
        }


        if (parens == 0UL)
        {
          if (syntax_bits & (((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
          {
          }

        }

        parens--;
        laststart = (_Bool) 0;
        lasttok = (token) 271;
        return lasttok;
        case_46:
        if (backslash)
        {
          goto normal_char;
        }


        if (dfa___0->multibyte)
        {
          laststart = (_Bool) 0;
          lasttok = (token) 272;
          return lasttok;
        }

        {
        }
        if (! (syntax_bits & ((((((1UL << 1) << 1) << 1) << 1) << 1) << 1)))
        {
        }

        if (syntax_bits & (((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1))
        {
        }

        {
        }
        case_115:
        if (! backslash)
        {
          goto normal_char;
        }
        else
          if (syntax_bits & (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
        {
        }



        if (! dfa___0->multibyte)
        {
              while_continue___3:
            while_break___10:
          while_break___3:
        }

        {
          while (1)
          {
            while_continue___4:
;            ;

            if (c == 115)
            {
            }

            {
            }
          }

          while_break___11:
;          ;

        }
        while_break___4:
;        laststart = (_Bool) 0;

        case_119:
;        if (! backslash)
        {
        }
        else
          if (syntax_bits & (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
        {
        }



        {
        }
        {
          while (1)
          {
            while_continue___5:
;            ;

            if (! (c2 < 256))
            {
            }

            {
            }
            if (((const int) (* ((* tmp___15) + c2))) & 8)
            {
            }
            else
              if (c2 == 95)
            {
            }


          }

          while_break___12:
;          ;

        }
        while_break___5:
;        ;

        if (c == 87)
        {
        }

        {
        }
        case_91:
        if (backslash)
        {
        }


        {
          laststart = (_Bool) 0;
          lasttok = parse_bracket_exp();
        }
        return lasttok;
        normal_char:
        laststart = (_Bool) 0;

        if (dfa___0->multibyte)
        {
          lasttok = (token) 274;
          return lasttok;
        }

        if (case_fold)
        {
        }

        switch_break:
        i++;

      }

      while_break___6:
;      ;

    }
    while_break:
;    {
    }

    return (token) (- 1);
  }
}

static token tok;
static size_t depth;
static void addtok_mb(token t, int mbprop)
{
  size_t tmp;
  {
    if (dfa___0->talloc == dfa___0->tindex)
    {
      {
        dfa___0->tokens = (token *) x2nrealloc((void *) dfa___0->tokens, & dfa___0->talloc, sizeof(* dfa___0->tokens));
      }
      if (dfa___0->multibyte)
      {
        {
          dfa___0->multibyte_prop = (int *) xnrealloc((void *) dfa___0->multibyte_prop, dfa___0->talloc, sizeof(* dfa___0->multibyte_prop));
        }
      }

    }

    if (dfa___0->multibyte)
    {
      * (dfa___0->multibyte_prop + dfa___0->tindex) = mbprop;
    }

    tmp = dfa___0->tindex;
    dfa___0->tindex++;
    * (dfa___0->tokens + tmp) = t;
    if (t == 264L)
    {
      goto case_264;
    }

    if (t == 265L)
    {
      goto case_264;
    }

    if (t == 266L)
    {
      goto case_264;
    }

    if (t == 268L)
    {
      goto case_268;
    }

    if (t == 269L)
    {
      goto case_268;
    }

    if (t == 257L)
    {
      goto case_257;
    }

    if (t == 256L)
    {
    }

    goto switch_default;
    case_264:
    goto switch_break;

    case_268:
    depth--;

    goto switch_break;
    case_257:
    dfa___0->fast = (_Bool) 0;

    switch_default:
    dfa___0->nleaves++;

    case_256:
    depth++;

    goto switch_break;
    switch_break:
    ;

    if (depth > dfa___0->depth)
    {
      dfa___0->depth = depth;
    }

    return;
  }
}

static void addtok_wc(wint_t wc);
static void addtok(token t)
{
  _Bool need_or;
  struct mb_char_classes *work_mbc;
  size_t i;
  {
    if (dfa___0->multibyte)
    {
      if (t == 273L)
      {
        need_or = (_Bool) 0;
        work_mbc = dfa___0->mbcsets + (dfa___0->nmbcsets - 1UL);
        if (! work_mbc->invert)
        {
          i = (size_t) 0;
          {
            while (1)
            {
              while_continue:
              ;

              if (! (i < work_mbc->nchars))
              {
                goto while_break;
              }

              {
              }
              if (need_or)
              {
              }

            }

            while_break___0:
            ;

          }
          while_break:
          work_mbc->nchars = (size_t) 0;

        }

        if (work_mbc->invert)
        {
        }
        else
          if (work_mbc->nch_classes != 0UL)
        {
        }
        else
          if (work_mbc->nranges != 0UL)
        {
          goto _L;
        }
        else
          if (work_mbc->nequivs != 0UL)
        {
        }
        else
          if (work_mbc->ncoll_elems != 0UL)
        {
          _L:
;          {
            addtok_mb((token) 273, (int) (((dfa___0->nmbcsets - 1UL) << 2) + 3UL));
          }

          if (need_or)
          {
            {
            }
          }

        }
        else
          if (work_mbc->cset != (- 1L))
        {
          {
            addtok(275L + work_mbc->cset);
          }
          if (need_or)
          {
            {
            }
          }

        }






      }
      else
      {
        {
          addtok_mb(t, 3);
        }
      }

    }

    return;
  }
}

static void addtok_wc(wint_t wc)
{
  unsigned char buf[16];
  mbstate_t s;
  int i;
  size_t stored_bytes;
  size_t tmp;
  int tmp___0;
  int tmp___1;
  void *__cil_tmp11;
  void *__cil_tmp12;
  {
    {
      s.__count = 0;
      s.__value.__wch = 0U;
      tmp = wcrtomb((char *) ((char *) buf), (wchar_t) wc, (mbstate_t *) (& s));
      stored_bytes = tmp;
    }
    if (stored_bytes != 0xffffffffffffffffUL)
    {
      cur_mb_len = (int) stored_bytes;
    }

    if (cur_mb_len == 1)
    {
      tmp___0 = 3;
    }
    else
    {
      tmp___0 = 1;
    }

    {
      addtok_mb((token) buf[0], tmp___0);
      i = 1;
    }
    {
      while (1)
      {
        while_continue:
        ;

        if (! (i < cur_mb_len))
        {
          goto while_break;
        }

        if (i == (cur_mb_len - 1))
        {
          tmp___1 = 2;
        }

        {
          addtok_mb((token) buf[i], tmp___1);
          addtok((token) 268);
          i++;
        }
      }

      while_break___0:
      ;

    }
    while_break:
    ;

    return;
  }
}

static void add_utf8_anychar(void);
static const charclass utf8_classes[5] = {{(charclass_word) 0, (charclass_word) 0, (charclass_word) 0, (charclass_word) 0, ((1U << 31) << 1) - 1U, ((1U << 31) << 1) - 1U, (charclass_word) 0, (charclass_word) 0}, {((1U << 31) << 1) - 1U, ((1U << 31) << 1) - 1U, ((1U << 31) << 1) - 1U, ((1U << 31) << 1) - 1U, (charclass_word) 0, (charclass_word) 0, (charclass_word) 0, (charclass_word) 0}, {(charclass_word) 0, (charclass_word) 0, (charclass_word) 0, (charclass_word) 0, (charclass_word) 0, (charclass_word) 0, 4294967292U & (((1U << 31) << 1) - 1U), (charclass_word) 0}, {(charclass_word) 0, (charclass_word) 0, (charclass_word) 0, (charclass_word) 0, (charclass_word) 0, (charclass_word) 0, (charclass_word) 0, (charclass_word) 65535}, {(charclass_word) 0, (charclass_word) 0, (charclass_word) 0, (charclass_word) 0, (charclass_word) 0, (charclass_word) 0, (charclass_word) 0, (charclass_word) 16711680}};
static void add_utf8_anychar(void)
{
  unsigned int n;
  unsigned int i;
  charclass c;
  size_t tmp;
  void *__cil_tmp6;
  {
    n = (unsigned int) ((sizeof(utf8_classes)) / (sizeof(utf8_classes[0])));
    if (dfa___0->utf8_anychar_classes[0] == 0L)
    {
      i = 0U;
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
            copyset(utf8_classes[i], c);
          }
          if (i == 1U)
          {
            if (! (syntax_bits & ((((((1UL << 1) << 1) << 1) << 1) << 1) << 1)))
            {
              {
                clrbit((unsigned int) eolbyte___0, c);
              }
            }

            if (syntax_bits & (((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1))
            {
              {
              }
            }

          }

          {
            tmp = charclass_index((charclass_word *) c);
            dfa___0->utf8_anychar_classes[i] = (token) (275UL + tmp);
            i++;
          }
        }

        while_break___2:
;        ;

      }
      while_break:
      ;

    }

    i = 1U;
    {
      while (1)
      {
        while_continue___0:
        ;

        if (! (i < n))
        {
          goto while_break___0;
        }

        {
          addtok(dfa___0->utf8_anychar_classes[i]);
          i++;
        }
      }

      while_break___3:
      ;

    }
    while_break___0:
    ;

    {
      while (1)
      {
        while_continue___1:
        ;

        i--;
        if (! (i > 1U))
        {
          goto while_break___1;
        }

        {
          addtok(dfa___0->utf8_anychar_classes[0]);
          addtok((token) 268);
          addtok((token) 269);
        }
      }

      while_break___4:
      ;

    }
    while_break___1:
    ;

    return;
  }
}

static void atom(void)
{
  wchar_t folded[21];
  int i;
  int n;
  int tmp;
  char *tmp___0;
  int tmp___1;
  void *__cil_tmp9;
  char *__cil_tmp10;
  {
    if (tok == 274L)
    {
      if (wctok == 4294967295U)
      {
        {
        }
      }
      else
      {
        {
          addtok_wc(wctok);
        }
        if (case_fold)
        {
          {
            tmp = case_folded_counterparts((wchar_t) wctok, folded);
            n = tmp;
            i = 0;
          }
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
                addtok_wc((wint_t) folded[i]);
                addtok((token) 269);
                i++;
              }
            }

            while_break___0:
            ;

          }
          while_break:
          ;

        }

      }

      {
        tok = lex();
      }
    }
    else
      if (tok == 272L)
    {
      {
        tmp___1 = using_utf8();
      }
      if (tmp___1)
      {
        {
          add_utf8_anychar();
          tok = lex();
        }
      }

    }
      _L___0:
;    if (tok >= 0L)
    {
      if (tok < 256L)
      {
        {
        }
      }
      else
      {
        goto _L;
      }

    }
      _L:
;    if (tok >= 275L)
    {
      {
      }
    }
    else
      if (tok == 257L)
    {
      {
        addtok(tok);
        tok = lex();
      }
    }
    else
      if (tok == 258L)
    {
      {
        addtok(tok);
        tok = lex();
      }
    }
    else
      if (tok == 259L)
    {
      {
        addtok(tok);
        tok = lex();
      }
    }
    else
      if (tok == 260L)
    {
      {
      }
    }
    else
      if (tok == 272L)
    {
      {
      }
    }
    else
      if (tok == 273L)
    {
      {
        addtok(tok);
        tok = lex();
      }
    }
    else
      if (tok == 261L)
    {
      {
      }
    }
    else
      if (tok == 262L)
    {
      {
      }
    }
    else
      if (tok == 263L)
    {
      {
      }
    }
    else
      if (tok == 270L)
    {
      {
        tok = lex();
        regexp();
      }
      if (tok != 271L)
      {
        {
        }
      }

      {
        tok = lex();
      }
    }
















    return;
  }
}

static size_t nsubtoks(size_t tindex)
{
}

static void copytoks(size_t tindex, size_t ntokens)
{
}

static void closure(void)
{
  int i;
  size_t tindex;
  size_t ntokens;
  size_t tmp;
  {
    {
      atom();
    }
    {
      while (1)
      {
        while_continue:
        ;

        if (! (tok == 264L))
        {
          if (! (tok == 265L))
          {
            if (! (tok == 266L))
            {
              if (! (tok == 267L))
              {
                goto while_break;
              }

            }

          }

        }

        if (tok == 267L)
        {
          if (minrep)
          {
          }
          else
            if (maxrep)
          {
            _L___0:
                while_continue___0:
              while_break___3:
            while_break___0:
                while_continue___1:
              while_break___4:
            while_break___1:
          }


        }
          _L:
;        if (tok == 267L)
        {
          {
          }
        }
        else
        {
          {
            addtok(tok);
            tok = lex();
          }
        }



      }

      while_break___2:
      ;

    }
    while_break:
    ;

    return;
  }
}

static void branch(void)
{
  {
    {
      closure();
    }
    {
      while (1)
      {
        while_continue:
        ;

        if (tok != 271L)
        {
          if (tok != 269L)
          {
            if (! (tok >= 0L))
            {
              goto while_break;
            }

          }
          else
          {
            goto while_break;
          }

        }
        else
        {
          goto while_break;
        }

        {
          closure();
          addtok((token) 268);
        }
      }

      while_break___0:
      ;

    }
    while_break:
    ;

    return;
  }
}

static void regexp(void)
{
  {
    {
      branch();
    }
    {
      while (1)
      {
        while_continue:
        ;

        if (! (tok == 269L))
        {
          goto while_break;
        }

        {
          tok = lex();
          branch();
          addtok((token) 269);
        }
      }

      while_break___0:
      ;

    }
    while_break:
    ;

    return;
  }
}

void dfaparse(const char *s, size_t len, struct dfa *d)
{
  char *tmp;
  char *tmp___0;
  char *__cil_tmp8;
  char *__cil_tmp9;
  {
    dfa___0 = d;
    lexptr = s;
    lexleft = len;
    lasttok = (token) (- 1);
    laststart = (_Bool) 1;
    parens = (size_t) 0;
    if (dfa___0->multibyte)
    {
      {
        cur_mb_len = 0;
        memset((void *) (& d->mbs), 0, sizeof(d->mbs));
      }
    }

    if (! syntax_bits_set)
    {
      {
      }
    }

    {
      tok = lex();
      depth = d->depth;
      regexp();
    }
    if (tok != (- 1L))
    {
      {
      }
    }

    {
      addtok((token) (0xffffffffffffffffUL - d->nregexps));
      addtok((token) 268);
    }
    if (d->nregexps)
    {
      {
      }
    }

    d->nregexps++;
    return;
  }
}

static void copy(const position_set *src, position_set *dst)
{
  {
    if (dst->alloc < ((size_t) src->nelem))
    {
      {
        free((void *) dst->elems);
        dst->alloc = (size_t) src->nelem;
        dst->elems = (position *) x2nrealloc((void *) 0, & dst->alloc, sizeof(* dst->elems));
      }
    }

    {
      memcpy((void *) ((void *) dst->elems), (const void *) ((const void *) src->elems), (size_t) (src->nelem * ((const size_t) (sizeof(* dst->elems)))));
      dst->nelem = (size_t) src->nelem;
    }
    return;
  }
}

static void alloc_position_set(position_set *s, size_t size)
{
  {
    {
      s->elems = (position *) xnmalloc(size, sizeof(* s->elems));
      s->alloc = size;
      s->nelem = (size_t) 0;
    }
    return;
  }
}

static void insert(position p, position_set *s)
{
  size_t count;
  size_t lo;
  size_t hi;
  size_t i;
  size_t mid;
  {
    count = s->nelem;
    lo = (size_t) 0;
    hi = count;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (lo < hi))
        {
          goto while_break;
        }

        mid = (lo + hi) >> 1;
        if ((s->elems + mid)->index > p.index)
        {
          lo = mid + 1UL;
        }
        else
        {
          hi = mid;
        }

      }

      while_break___1:
      ;

    }
    while_break:
    ;

    if (lo < count)
    {
      if (p.index == (s->elems + lo)->index)
      {
        (s->elems + lo)->constraint |= p.constraint;
        return;
      }

    }

    {
      s->elems = (position *) maybe_realloc((void *) s->elems, count, & s->alloc, sizeof(* s->elems));
      i = count;
    }
    {
      while (1)
      {
        while_continue___0:
        ;

        if (! (i > lo))
        {
          goto while_break___0;
        }

      }

      while_break___2:
      ;

    }
    while_break___0:
    * (s->elems + lo) = p;

    s->nelem++;
    return;
  }
}

static void merge(const position_set *s1, const position_set *s2, position_set *m)
{
  size_t i;
  size_t j;
  size_t tmp;
  size_t tmp___0;
  size_t tmp___1;
  size_t tmp___2;
  size_t tmp___3;
  size_t tmp___4;
  size_t tmp___5;
  size_t tmp___6;
  size_t tmp___7;
  size_t tmp___8;
  size_t tmp___9;
  {
    i = (size_t) 0;
    j = (size_t) 0;
    if (m->alloc < ((size_t) (s1->nelem + s2->nelem)))
    {
      {
      }
    }

    m->nelem = (size_t) 0;
    {
      while (1)
      {
        while_continue:
        ;

        if (i < ((size_t) s1->nelem))
        {
          if (! (j < ((size_t) s2->nelem)))
          {
            goto while_break;
          }

        }
        else
        {
          goto while_break;
        }

        if ((s1->elems + i)->index > (s2->elems + j)->index)
        {
          tmp = m->nelem;
          m->nelem++;
          tmp___0 = i;
          i++;
          * (m->elems + tmp) = * (s1->elems + tmp___0);
        }
        else
          if ((s1->elems + i)->index < (s2->elems + j)->index)
        {
          tmp___1 = m->nelem;
          m->nelem++;
          tmp___2 = j;
          j++;
          * (m->elems + tmp___1) = * (s2->elems + tmp___2);
        }
        else
        {
          tmp___3 = i;
          i++;
          * (m->elems + m->nelem) = * (s1->elems + tmp___3);
          tmp___4 = m->nelem;
          m->nelem++;
          tmp___5 = j;
          j++;
          (m->elems + tmp___4)->constraint |= (s2->elems + tmp___5)->constraint;
        }


      }

      while_break___2:
      ;

    }
    while_break:
    ;

    {
      while (1)
      {
        while_continue___0:
        ;

        if (! (i < ((size_t) s1->nelem)))
        {
          goto while_break___0;
        }

        tmp___6 = m->nelem;
        m->nelem++;
        tmp___7 = i;
        i++;
        * (m->elems + tmp___6) = * (s1->elems + tmp___7);
      }

      while_break___3:
      ;

    }
    while_break___0:
    ;

    {
      while (1)
      {
        while_continue___1:
        ;

        if (! (j < ((size_t) s2->nelem)))
        {
          goto while_break___1;
        }

        tmp___8 = m->nelem;
        m->nelem++;
        tmp___9 = j;
        j++;
        * (m->elems + tmp___8) = * (s2->elems + tmp___9);
      }

      while_break___4:
      ;

    }
    while_break___1:
    ;

    return;
  }
}

static void delete(position p, position_set *s)
{
  size_t i;
  {
    i = (size_t) 0;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (i < s->nelem))
        {
        }

        if (p.index == (s->elems + i)->index)
        {
          goto while_break;
        }

        i++;
      }

      while_break___1:
      ;

    }
    while_break:
    ;

    if (i < s->nelem)
    {
      s->nelem--;
      {
        while (1)
        {
          while_continue___0:
          ;

          if (! (i < s->nelem))
          {
            goto while_break___0;
          }

          * (s->elems + i) = * (s->elems + (i + 1UL));
          i++;
        }

        while_break___2:
;        ;

      }
      while_break___0:
      ;

    }

    return;
  }
}

static state_num state_index(struct dfa *d, const position_set *s, int context)
{
  size_t hash;
  int constraint;
  state_num i;
  state_num j;
  {
    hash = (size_t) 0;
    i = (state_num) 0;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (((const size_t) i) < s->nelem))
        {
          goto while_break;
        }

        hash ^= (s->elems + i)->index + ((size_t) (s->elems + i)->constraint);
        i++;
      }

      while_break___3:
      ;

    }
    while_break:
    i = (state_num) 0;

    {
      while (1)
      {
        while_continue___0:
        ;

        if (! (i < d->sindex))
        {
          goto while_break___0;
        }

        if (hash != (d->states + i)->hash)
        {
          goto __Cont;
        }
        else
          if (s->nelem != ((const size_t) (d->states + i)->elems.nelem))
        {
        }
        else
          if (context != ((int) (d->states + i)->context))
        {
          goto __Cont;
        }



        j = (state_num) 0;
        {
          while (1)
          {
            while_continue___1:
            ;

            if (! (((const size_t) j) < s->nelem))
            {
              goto while_break___1;
            }

            if ((s->elems + j)->constraint != ((d->states + i)->elems.elems + j)->constraint)
            {
            }
            else
              if ((s->elems + j)->index != ((d->states + i)->elems.elems + j)->index)
            {
            }


            j++;
          }

          while_break___5:
          ;

        }
        while_break___1:
        ;

        if (((const size_t) j) == s->nelem)
        {
          return i;
        }

        __Cont:
;        i++;

      }

      while_break___4:
      ;

    }
    while_break___0:
    {
      d->states = (dfa_state *) maybe_realloc((void *) d->states, (size_t) d->sindex, & d->salloc, sizeof(* d->states));
      (d->states + i)->hash = hash;
      alloc_position_set(& (d->states + i)->elems, (size_t) s->nelem);
      copy(s, & (d->states + i)->elems);
      (d->states + i)->context = (unsigned char) context;
      (d->states + i)->has_backref = (_Bool) 0;
      (d->states + i)->has_mbcset = (_Bool) 0;
      (d->states + i)->constraint = (unsigned short) 0;
      (d->states + i)->first_end = (token) 0;
      (d->states + i)->mbps.nelem = (size_t) 0;
      (d->states + i)->mbps.elems = (position *) ((void *) 0);
      j = (state_num) 0;
    }

    {
      while (1)
      {
        while_continue___2:
        ;

        if (! (((const size_t) j) < s->nelem))
        {
          goto while_break___2;
        }

        if ((* (d->tokens + (s->elems + j)->index)) < 0L)
        {
          constraint = (int) (s->elems + j)->constraint;
          if ((((constraint & 15) | ((constraint >> 4) & 15)) | ((constraint >> 8) & 15)) & context)
          {
            (d->states + i)->constraint = (unsigned short) (((int) (d->states + i)->constraint) | constraint);
          }

          if (! (d->states + i)->first_end)
          {
            (d->states + i)->first_end = * (d->tokens + (s->elems + j)->index);
          }

        }
        else
          if ((* (d->tokens + (s->elems + j)->index)) == 257L)
        {
          (d->states + i)->constraint = (unsigned short) 1911;
          (d->states + i)->has_backref = (_Bool) 1;
        }


        j++;
      }

      while_break___6:
      ;

    }
    while_break___2:
    d->sindex++;

    return i;
  }
}

static void epsclosure(position_set *s, const struct dfa *d, char *visited)
{
  size_t i;
  size_t j;
  position p;
  position old;
  _Bool initialized;
  {
    initialized = (_Bool) 0;
    i = (size_t) 0;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (i < s->nelem))
        {
          goto while_break;
        }

        if ((* (d->tokens + (s->elems + i)->index)) >= 256L)
        {
          if ((* (d->tokens + (s->elems + i)->index)) != 257L)
          {
            if ((* (d->tokens + (s->elems + i)->index)) != 272L)
            {
              if ((* (d->tokens + (s->elems + i)->index)) != 273L)
              {
                if ((* (d->tokens + (s->elems + i)->index)) < 275L)
                {
                  if (! initialized)
                  {
                    {
                      memset((void *) visited, 0, (size_t) (d->tindex * ((const size_t) (sizeof(* visited)))));
                      initialized = (_Bool) 1;
                    }
                  }

                  {
                    old = * (s->elems + i);
                    p.constraint = old.constraint;
                    delete(* (s->elems + i), s);
                  }
                  if (* (visited + old.index))
                  {
                  }

                  * (visited + old.index) = (char) 1;
                  if ((* (d->tokens + old.index)) == 258L)
                  {
                    goto case_258;
                  }

                  if ((* (d->tokens + old.index)) == 259L)
                  {
                    goto case_259;
                  }

                  if ((* (d->tokens + old.index)) == 260L)
                  {
                  }

                  if ((* (d->tokens + old.index)) == 261L)
                  {
                  }

                  if ((* (d->tokens + old.index)) == 262L)
                  {
                  }

                  if ((* (d->tokens + old.index)) == 263L)
                  {
                  }

                  case_258:
                  p.constraint &= 1092U;

                  goto switch_break;
                  case_259:
                  p.constraint &= 1792U;

                  goto switch_break;
                  case_260:
;                  p.constraint &= 80U;

                  case_261:
;                  p.constraint &= 514U;

                  case_262:
;                  p.constraint &= 594U;

                  case_263:
;                  p.constraint &= 1317U;

                  switch_default:
;                  goto switch_break;

                  switch_break:
                  j = (size_t) 0;

                  {
                    while (1)
                    {
                      while_continue___0:
                      ;

                      if (! (j < (d->follows + old.index)->nelem))
                      {
                        goto while_break___0;
                      }

                      {
                        p.index = ((d->follows + old.index)->elems + j)->index;
                        insert(p, s);
                        j++;
                      }
                    }

                    while_break___2:
                    ;

                  }
                  while_break___0:
                  i = (size_t) (- 1);

                }

              }

            }

          }

        }

        __Cont:
        i++;

      }

      while_break___1:
      ;

    }
    while_break:
    ;

    return;
  }
}

static int charclass_context(charclass_word *c)
{
  int context;
  unsigned int j;
  _Bool tmp;
  {
    {
      context = 0;
      tmp = tstbit((unsigned int) eolbyte___0, (charclass_word *) c);
    }
    if (tmp)
    {
      context |= 4;
    }

    j = 0U;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (j < 8U))
        {
          goto while_break;
        }

        if ((* (c + j)) & letters[j])
        {
          context |= 2;
        }

        if ((* (c + j)) & (~ (letters[j] | newline[j])))
        {
          context |= 1;
        }

        j++;
      }

      while_break___0:
      ;

    }
    while_break:
    ;

    return context;
  }
}

static int state_separate_contexts(const position_set *s)
{
  int separate_contexts;
  size_t j;
  {
    separate_contexts = 0;
    j = (size_t) 0;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (j < ((size_t) s->nelem)))
        {
          goto while_break;
        }

        if ((((s->elems + j)->constraint >> 2) & 273U) != ((s->elems + j)->constraint & 273U))
        {
          separate_contexts |= 4;
        }

        if ((((s->elems + j)->constraint >> 1) & 273U) != ((s->elems + j)->constraint & 273U))
        {
        }

        j++;
      }

      while_break___0:
      ;

    }
    while_break:
    ;

    return (int) separate_contexts;
  }
}

void dfaanalyze(struct dfa *d, int searchflag)
{
  position *posalloc;
  position *tmp;
  position *firstpos;
  position *lastpos;
  struct __anonstruct_stkalloc_43 *stkalloc;
  struct __anonstruct_stkalloc_43 *tmp___0;
  struct __anonstruct_stkalloc_43 *stk;
  position_set tmp___1;
  position_set merged;
  int separate_contexts;
  size_t i;
  size_t j;
  position *pos;
  char *visited;
  char *tmp___2;
  size_t tmp___3;
  size_t tmp___4;
  size_t tmp___5;
  size_t tmp___6;
  unsigned int tmp___7;
  int tmp___8;
  {
    {
      tmp = (position *) xnmalloc(d->nleaves, 2UL * (sizeof(* posalloc)));
      posalloc = tmp;
      firstpos = posalloc + d->nleaves;
      lastpos = firstpos + d->nleaves;
      tmp___0 = (struct __anonstruct_stkalloc_43 *) xnmalloc(d->depth, sizeof(* stkalloc));
      stkalloc = tmp___0;
      stk = stkalloc;
      tmp___2 = (char *) xnmalloc(d->tindex, sizeof(* visited));
      visited = tmp___2;
      d->searchflag = (_Bool) (searchflag != 0);
      alloc_position_set(& merged, d->nleaves);
      d->follows = (position_set *) xcalloc(d->tindex, sizeof(* d->follows));
      i = (size_t) 0;
    }
    {
      while (1)
      {
        while_continue:
        ;

        if (! (i < d->tindex))
        {
          goto while_break;
        }

        if ((* (d->tokens + i)) == 256L)
        {
        }

        if ((* (d->tokens + i)) == 265L)
        {
          goto case_265;
        }

        if ((* (d->tokens + i)) == 266L)
        {
          goto case_265;
        }

        if ((* (d->tokens + i)) == 264L)
        {
          goto case_264;
        }

        if ((* (d->tokens + i)) == 268L)
        {
          goto case_268;
        }

        if ((* (d->tokens + i)) == 269L)
        {
          goto case_269;
        }

        goto switch_default;
        case_256:
;        stk->nullable = (_Bool) 1;

        case_265:
        tmp___1.nelem = (stk + (- 1))->nfirstpos;

        tmp___1.elems = firstpos;
        pos = lastpos;
        j = (size_t) 0;
        {
          while (1)
          {
            while_continue___0:
            ;

            if (! (j < (stk + (- 1))->nlastpos))
            {
              goto while_break___0;
            }

            {
              merge((const position_set *) (& tmp___1), (const position_set *) (d->follows + (pos + j)->index), & merged);
              copy((const position_set *) (& merged), d->follows + (pos + j)->index);
              j++;
            }
          }

          while_break___6:
          ;

        }
        while_break___0:
        ;

        case_264:
        if ((* (d->tokens + i)) != 266L)
        {
          (stk + (- 1))->nullable = (_Bool) 1;
        }


        goto switch_break;
        case_268:
        tmp___1.nelem = (stk + (- 1))->nfirstpos;

        tmp___1.elems = firstpos;
        pos = lastpos + (stk + (- 1))->nlastpos;
        j = (size_t) 0;
        {
          while (1)
          {
            while_continue___1:
            ;

            if (! (j < (stk + (- 2))->nlastpos))
            {
              goto while_break___1;
            }

            {
              merge((const position_set *) (& tmp___1), (const position_set *) (d->follows + (pos + j)->index), & merged);
              copy((const position_set *) (& merged), d->follows + (pos + j)->index);
              j++;
            }
          }

          while_break___7:
          ;

        }
        while_break___1:
        ;

        if ((stk + (- 2))->nullable)
        {
          (stk + (- 2))->nfirstpos += (stk + (- 1))->nfirstpos;
        }
        else
        {
          firstpos += (stk + (- 1))->nfirstpos;
        }

        if ((stk + (- 1))->nullable)
        {
          (stk + (- 2))->nlastpos += (stk + (- 1))->nlastpos;
        }
        else
        {
          pos = lastpos + (stk + (- 2))->nlastpos;
          j = (stk + (- 1))->nlastpos;
          {
            while (1)
            {
              while_continue___2:
              ;

              tmp___4 = j;
              j--;
              if (! (tmp___4 > 0UL))
              {
                goto while_break___2;
              }

              * (pos + j) = * (lastpos + j);
            }

            while_break___8:
            ;

          }
          while_break___2:
          lastpos += (stk + (- 2))->nlastpos;

          (stk + (- 2))->nlastpos = (stk + (- 1))->nlastpos;
        }

        (stk + (- 2))->nullable = (_Bool) (((int) (stk + (- 2))->nullable) & ((int) (stk + (- 1))->nullable));
        stk--;
        goto switch_break;
        case_269:
        (stk + (- 2))->nfirstpos += (stk + (- 1))->nfirstpos;

        (stk + (- 2))->nlastpos += (stk + (- 1))->nlastpos;
        (stk + (- 2))->nullable = (_Bool) (((int) (stk + (- 2))->nullable) | ((int) (stk + (- 1))->nullable));
        stk--;
        goto switch_break;
        switch_default:
        {
          stk->nullable = (_Bool) ((* (d->tokens + i)) == 257L);
          tmp___5 = (size_t) 1;
          stk->nlastpos = tmp___5;
          stk->nfirstpos = tmp___5;
          stk++;
          firstpos--;
          lastpos--;
          tmp___6 = i;
          lastpos->index = tmp___6;
          firstpos->index = tmp___6;
          tmp___7 = 1911U;
          lastpos->constraint = tmp___7;
          firstpos->constraint = tmp___7;
          alloc_position_set(d->follows + i, (size_t) 1);
        }

        goto switch_break;
        switch_break:
        i++;

      }

      while_break___5:
      ;

    }
    while_break:
    i = (size_t) 0;

    {
      while (1)
      {
        while_continue___3:
        ;

        if (! (i < d->tindex))
        {
          goto while_break___3;
        }

        if ((* (d->tokens + i)) < 256L)
        {
          {
            copy((const position_set *) (d->follows + i), & merged);
            epsclosure(& merged, (const struct dfa *) d, visited);
            copy((const position_set *) (& merged), d->follows + i);
          }
        }
        else
          if ((* (d->tokens + i)) == 257L)
        {
          {
            copy((const position_set *) (d->follows + i), & merged);
            epsclosure(& merged, (const struct dfa *) d, visited);
            copy((const position_set *) (& merged), d->follows + i);
          }
        }
        else
          if ((* (d->tokens + i)) == 272L)
        {
          {
          }
        }
        else
          if ((* (d->tokens + i)) == 273L)
        {
          {
            copy((const position_set *) (d->follows + i), & merged);
            epsclosure(& merged, (const struct dfa *) d, visited);
            copy((const position_set *) (& merged), d->follows + i);
          }
        }
        else
          if ((* (d->tokens + i)) >= 275L)
        {
          {
            copy((const position_set *) (d->follows + i), & merged);
            epsclosure(& merged, (const struct dfa *) d, visited);
            copy((const position_set *) (& merged), d->follows + i);
          }
        }





        i++;
      }

      while_break___9:
      ;

    }
    while_break___3:
    merged.nelem = (size_t) 0;

    i = (size_t) 0;
    {
      while (1)
      {
        while_continue___4:
        ;

        if (! (i < (stk + (- 1))->nfirstpos))
        {
          goto while_break___4;
        }

        {
          insert(* (firstpos + i), & merged);
          i++;
        }
      }

      while_break___10:
      ;

    }
    while_break___4:
    {
      epsclosure(& merged, (const struct dfa *) d, visited);
      separate_contexts = (int) state_separate_contexts((const position_set *) (& merged));
    }

    if (separate_contexts & 4)
    {
      tmp___8 = 4;
    }
    else
    {
      tmp___8 = separate_contexts ^ 7;
    }

    {
      state_index(d, (const position_set *) (& merged), tmp___8);
      free((void *) posalloc);
      free((void *) stkalloc);
      free((void *) merged.elems);
      free((void *) visited);
    }
    return;
  }
}

void dfastate(ptrdiff_t s, struct dfa *d, ptrdiff_t *trans___0)
{
  leaf_set grps[256];
  charclass labels[256];
  size_t ngrps;
  position pos;
  charclass matches;
  charclass_word matchesf;
  charclass intersect;
  charclass_word intersectf;
  charclass leftovers;
  charclass_word leftoversf;
  position_set follows;
  position_set tmp;
  int possible_contexts;
  int separate_contexts;
  state_num state;
  state_num state_newline;
  state_num state_letter;
  _Bool next_isnt_1st_byte;
  size_t i;
  size_t j;
  size_t k;
  _Bool tmp___0;
  charclass_word tmp___1;
  charclass_word match;
  charclass_word label___0;
  charclass_word tmp___2;
  charclass_word tmp___3;
  size_t tmp___4;
  const unsigned short **tmp___6;
  int c;
  const unsigned short **tmp___7;
  void *__cil_tmp47;
  int __cil_tmp48;
  void *__cil_tmp49;
  int __cil_tmp50;
  void *__cil_tmp51;
  void *__cil_tmp52;
  void *__cil_tmp53;
  void *__cil_tmp54;
  {
    {
      ngrps = (size_t) 0;
      next_isnt_1st_byte = (_Bool) 0;
      zeroset(matches);
      i = (size_t) 0;
    }
    {
      while (1)
      {
        while_continue:
        ;

        if (! (i < (d->states + s)->elems.nelem))
        {
          goto while_break;
        }

        pos = * ((d->states + s)->elems.elems + i);
        if ((* (d->tokens + pos.index)) >= 0L)
        {
          if ((* (d->tokens + pos.index)) < 256L)
          {
            {
              setbit((unsigned int) (* (d->tokens + pos.index)), matches);
            }
          }
          else
          {
            goto _L___0;
          }

        }
          _L___0:
;        if ((* (d->tokens + pos.index)) >= 275L)
        {
          {
            copyset((charclass_word *) (* (d->charclasses + ((* (d->tokens + pos.index)) - 275L))), matches);
          }
        }
        else
        {
          if ((* (d->tokens + pos.index)) == 273L)
          {
          }
          else
            if ((* (d->tokens + pos.index)) == 272L)
          {
            _L:
;            if ((* (d->tokens + pos.index)) == 273L)
            {
            }


            if ((d->states + s)->mbps.nelem == 0UL)
            {
            }

            {
            }
          }


          goto __Cont;
        }



        if (pos.constraint != 1911U)
        {
          if (! (((pos.constraint >> 8) & 15U) & ((unsigned int) (d->states + s)->context)))
          {
            j = (size_t) 0;
            {
              while (1)
              {
                while_continue___0:
                ;

                if (! (j < 8UL))
                {
                  goto while_break___0;
                }

                matches[j] &= ~ newline[j];
                j++;
              }

              while_break___17:
              ;

            }
            while_break___0:
            ;

          }

          if (! (((pos.constraint >> 4) & 15U) & ((unsigned int) (d->states + s)->context)))
          {
            j = (size_t) 0;
            {
              while (1)
              {
                while_continue___1:
                ;

                if (! (j < 8UL))
                {
                  goto while_break___1;
                }

                matches[j] &= ~ letters[j];
                j++;
              }

              while_break___18:
              ;

            }
            while_break___1:
            ;

          }

          if (! ((pos.constraint & 15U) & ((unsigned int) (d->states + s)->context)))
          {
            j = (size_t) 0;
            {
              while (1)
              {
                while_continue___2:
                ;

                if (! (j < 8UL))
                {
                  goto while_break___2;
                }

                matches[j] &= letters[j] | newline[j];
                j++;
              }

              while_break___19:
              ;

            }
            while_break___2:
            ;

          }

          j = (size_t) 0;
          {
            while (1)
            {
              while_continue___3:
              ;

              if (j < 8UL)
              {
                if (! (! matches[j]))
                {
                  goto while_break___3;
                }

              }
              else
              {
                goto while_break___3;
              }

              goto __Cont___0;
              __Cont___0:
              j++;

            }

            while_break___20:
            ;

          }
          while_break___3:
          ;

          if (j == 8UL)
          {
            goto __Cont;
          }

        }

        j = (size_t) 0;
        {
          while (1)
          {
            while_continue___4:
            ;

            if (! (j < ngrps))
            {
              goto while_break___4;
            }

            if ((* (d->tokens + pos.index)) >= 0L)
            {
              if ((* (d->tokens + pos.index)) < 256L)
              {
                {
                  tmp___0 = tstbit((unsigned int) (* (d->tokens + pos.index)), (charclass_word *) labels[j]);
                }
                if (! tmp___0)
                {
                  goto __Cont___1;
                }

              }

            }

            intersectf = (charclass_word) 0;
            k = (size_t) 0;
            {
              while (1)
              {
                while_continue___5:
                ;

                if (! (k < 8UL))
                {
                  goto while_break___5;
                }

                tmp___1 = matches[k] & labels[j][k];
                intersect[k] = tmp___1;
                intersectf |= tmp___1;
                k++;
              }

              while_break___22:
              ;

            }
            while_break___5:
            ;

            if (! intersectf)
            {
              goto __Cont___1;
            }

            matchesf = (charclass_word) 0;
            leftoversf = matchesf;
            k = (size_t) 0;
            {
              while (1)
              {
                while_continue___6:
                ;

                if (! (k < 8UL))
                {
                  goto while_break___6;
                }

                match = matches[k];
                label___0 = labels[j][k];
                tmp___2 = (~ match) & label___0;
                leftovers[k] = tmp___2;
                leftoversf |= tmp___2;
                tmp___3 = match & (~ label___0);
                matches[k] = tmp___3;
                matchesf |= tmp___3;
                k++;
              }

              while_break___23:
              ;

            }
            while_break___6:
            ;

            if (leftoversf)
            {
              {
                copyset((charclass_word *) leftovers, labels[ngrps]);
                copyset((charclass_word *) intersect, labels[j]);
                grps[ngrps].elems = (size_t *) xnmalloc(d->nleaves, sizeof(* grps[ngrps].elems));
                memcpy((void *) ((void *) grps[ngrps].elems), (const void *) ((const void *) grps[j].elems), (sizeof(* (grps[j].elems + 0))) * grps[j].nelem);
                grps[ngrps].nelem = grps[j].nelem;
                ngrps++;
              }
            }

            tmp___4 = grps[j].nelem;
            grps[j].nelem++;
            * (grps[j].elems + tmp___4) = pos.index;
            if (! matchesf)
            {
              goto while_break___4;
            }

            __Cont___1:
            j++;

          }

          while_break___21:
          ;

        }
        while_break___4:
        ;

        if (j == ngrps)
        {
          {
            copyset((charclass_word *) matches, labels[ngrps]);
            zeroset(matches);
            grps[ngrps].elems = (size_t *) xnmalloc(d->nleaves, sizeof(* grps[ngrps].elems));
            grps[ngrps].nelem = (size_t) 1;
            * (grps[ngrps].elems + 0) = pos.index;
            ngrps++;
          }
        }

        __Cont:
        i++;

      }

      while_break___16:
      ;

    }
    while_break:
    {
      alloc_position_set(& follows, d->nleaves);
      alloc_position_set(& tmp, d->nleaves);
    }

    if (d->searchflag)
    {
      {
        copy((const position_set *) (& (d->states + 0)->elems), & follows);
        separate_contexts = (int) state_separate_contexts((const position_set *) (& follows));
        state = state_index(d, (const position_set *) (& follows), separate_contexts ^ 7);
      }
      if (separate_contexts & 4)
      {
        {
          state_newline = state_index(d, (const position_set *) (& follows), 4);
        }
      }
      else
      {
        state_newline = state;
      }

      if (separate_contexts & 2)
      {
        {
        }
      }
      else
      {
        state_letter = state;
      }

      i = (size_t) 0;
      {
        while (1)
        {
          while_continue___7:
          ;

          if (! (i < 256UL))
          {
            goto while_break___7;
          }

          {
            tmp___6 = __ctype_b_loc();
          }
          if (((const int) (* ((* tmp___6) + ((int) i)))) & 8)
          {
            * (trans___0 + i) = state_letter;
          }
          else
            if (i == 95UL)
          {
            * (trans___0 + i) = state_letter;
          }
          else
          {
            * (trans___0 + i) = state;
          }


          i++;
        }

        while_break___24:
        ;

      }
      while_break___7:
      * (trans___0 + ((int) eolbyte___0)) = state_newline;

    }
    else
    {
      {
        while (1)
        {
          while_continue___8:
;          ;

          if (! (i < 256UL))
          {
          }

        }

        while_break___25:
        ;

      }
      while_break___8:
      ;

    }

    i = (size_t) 0;
    {
      while (1)
      {
        while_continue___9:
        ;

        if (! (i < ngrps))
        {
          goto while_break___9;
        }

        follows.nelem = (size_t) 0;
        j = (size_t) 0;
        {
          while (1)
          {
            while_continue___10:
            ;

            if (! (j < grps[i].nelem))
            {
              goto while_break___10;
            }

            k = (size_t) 0;
            {
              while (1)
              {
                while_continue___11:
                ;

                if (! (k < (d->follows + (* (grps[i].elems + j)))->nelem))
                {
                  goto while_break___11;
                }

                {
                  insert(* ((d->follows + (* (grps[i].elems + j)))->elems + k), & follows);
                  k++;
                }
              }

              while_break___28:
              ;

            }
            while_break___11:
            j++;

          }

          while_break___27:
          ;

        }
        while_break___10:
        ;

        if (d->multibyte)
        {
          {
            while (1)
            {
              while_continue___12:
;              ;

              if (! (j < follows.nelem))
              {
              }

              if (! ((* (d->multibyte_prop + (follows.elems + j)->index)) & 1))
              {
              }

            }

            while_break___29:
            ;

          }
          while_break___12:
          ;

        }

        if (d->searchflag)
        {
          if (! d->multibyte)
          {
            {
              merge((const position_set *) (& (d->states + 0)->elems), (const position_set *) (& follows), & tmp);
              copy((const position_set *) (& tmp), & follows);
            }
          }
          else
            if (! next_isnt_1st_byte)
          {
          }


        }

        {
          possible_contexts = charclass_context(labels[i]);
          separate_contexts = (int) state_separate_contexts((const position_set *) (& follows));
        }
        if ((separate_contexts & possible_contexts) != possible_contexts)
        {
          {
            state = state_index(d, (const position_set *) (& follows), separate_contexts ^ 7);
          }
        }

        if ((separate_contexts & possible_contexts) & 4)
        {
          {
          }
        }
        else
        {
          state_newline = state;
        }

        if ((separate_contexts & possible_contexts) & 2)
        {
          {
          }
        }
        else
        {
          state_letter = state;
        }

        j = (size_t) 0;
        {
          while (1)
          {
            while_continue___13:
            ;

            if (! (j < 8UL))
            {
              goto while_break___13;
            }

            k = (size_t) 0;
            {
              while (1)
              {
                while_continue___14:
                ;

                if (! (k < 32UL))
                {
                  goto while_break___14;
                }

                if ((labels[i][j] >> k) & 1U)
                {
                  c = (int) ((j * 32UL) + k);
                  if (c == ((int) eolbyte___0))
                  {
                    * (trans___0 + c) = state_newline;
                  }
                  else
                  {
                    {
                      tmp___7 = __ctype_b_loc();
                    }
                    if (((const int) (* ((* tmp___7) + c))) & 8)
                    {
                      * (trans___0 + c) = state_letter;
                    }
                    else
                      if (c == 95)
                    {
                      * (trans___0 + c) = state_letter;
                    }
                    else
                      if (c < 256)
                    {
                      * (trans___0 + c) = state;
                    }



                  }

                }

                k++;
              }

              while_break___31:
              ;

            }
            while_break___14:
            j++;

          }

          while_break___30:
          ;

        }
        while_break___13:
        i++;

      }

      while_break___26:
      ;

    }
    while_break___9:
    i = (size_t) 0;

    {
      while (1)
      {
        while_continue___15:
        ;

        if (! (i < ngrps))
        {
          goto while_break___15;
        }

        {
          free((void *) grps[i].elems);
          i++;
        }
      }

      while_break___32:
      ;

    }
    while_break___15:
    {
      free((void *) follows.elems);
      free((void *) tmp.elems);
    }

    return;
  }
}

static void realloc_trans_if_necessary(struct dfa *d, state_num new_state)
{
  state_num oldalloc;
  state_num **realtrans;
  state_num **tmp;
  size_t newalloc;
  size_t newalloc1;
  {
    oldalloc = d->tralloc;
    if (oldalloc <= new_state)
    {
      if (d->trans)
      {
        tmp = d->trans - 1;
      }
      else
      {
        tmp = (state_num **) ((void *) 0);
      }

      {
        realtrans = tmp;
        newalloc1 = (size_t) (new_state + 1L);
        realtrans = (state_num **) x2nrealloc((void *) realtrans, & newalloc1, sizeof(* realtrans));
        * (realtrans + 0) = (state_num *) ((void *) 0);
        d->trans = realtrans + 1;
        newalloc = newalloc1 - 1UL;
        d->tralloc = (state_num) newalloc;
        d->fails = (state_num **) xnrealloc((void *) d->fails, newalloc, sizeof(* d->fails));
        d->success = (int *) xnrealloc((void *) d->success, newalloc, sizeof(* d->success));
        d->newlines = (state_num *) xnrealloc((void *) d->newlines, newalloc, sizeof(* d->newlines));
      }
      {
        while (1)
        {
          while_continue:
          ;

          if (! (((size_t) oldalloc) < newalloc))
          {
            goto while_break;
          }

          * (d->trans + oldalloc) = (state_num *) ((void *) 0);
          * (d->fails + oldalloc) = (state_num *) ((void *) 0);
          oldalloc++;
        }

        while_break___0:
        ;

      }
      while_break:
      ;

    }

    return;
  }
}

static void build_state(state_num s, struct dfa *d)
{
  state_num *trans___0;
  state_num i;
  state_num maxstate;
  state_num *tmp;
  {
    if (d->trcount >= 1024)
    {
      {
        while (1)
        {
          while_continue:
;          ;

          if (! (i < d->tralloc))
          {
          }

          {
          }
        }

        while_break___1:
;        ;

      }
      while_break:
;      d->trcount = 0;

    }

    d->trcount++;
    * (d->success + s) = 0;
    if (((((int) (d->states + s)->constraint) >> 8) & 15) & ((int) (d->states + s)->context))
    {
      * (d->success + s) |= 4;
    }

    if (((((int) (d->states + s)->constraint) >> 4) & 15) & ((int) (d->states + s)->context))
    {
      * (d->success + s) |= 2;
    }

    if ((((int) (d->states + s)->constraint) & 15) & ((int) (d->states + s)->context))
    {
      * (d->success + s) |= 1;
    }

    {
      trans___0 = (state_num *) xmalloc(256UL * (sizeof(* trans___0)));
      dfastate(s, d, trans___0);
      maxstate = (state_num) (- 1);
      i = (state_num) 0;
    }
    {
      while (1)
      {
        while_continue___0:
        ;

        if (! (i < 256L))
        {
          goto while_break___0;
        }

        if (maxstate < (* (trans___0 + i)))
        {
          maxstate = * (trans___0 + i);
        }

        i++;
      }

      while_break___2:
      ;

    }
    while_break___0:
    {
      realloc_trans_if_necessary(d, maxstate);
      * (d->newlines + s) = * (trans___0 + ((int) eolbyte___0));
      * (trans___0 + ((int) eolbyte___0)) = (state_num) (- 1);
    }

    if ((d->states + s)->constraint)
    {
      * (d->fails + s) = trans___0;
    }
    else
    {
      * (d->trans + s) = trans___0;
    }

    return;
  }
}

static void build_state_zero(struct dfa *d)
{
  int initial_tab_size;
  {
    {
      initial_tab_size = 1;
      d->tralloc = (state_num) 0;
      d->trcount = 0;
      d->trans = (state_num **) ((void *) 0);
      d->fails = (state_num **) ((void *) 0);
      d->success = (int *) ((void *) 0);
      d->newlines = (state_num *) ((void *) 0);
      realloc_trans_if_necessary(d, (state_num) initial_tab_size);
      build_state((state_num) 0, d);
    }
    return;
  }
}

static status_transit_state transit_state_singlebyte(struct dfa *d, state_num s, const unsigned char *p, state_num *next_state)
{
}

static int match_anychar(struct dfa *d, state_num s, position pos, wint_t wc, size_t mbclen)
{
}

static int match_mb_charset(struct dfa *d, state_num s, position pos, const char *p, wint_t wc, size_t match_len)
{
}

static int *check_matching_with_multibyte_ops(struct dfa *d, state_num s, const char *p, wint_t wc, size_t mbclen)
{
}

static status_transit_state transit_state_consume_1char(struct dfa *d, state_num s, const unsigned char **pp, wint_t wc, size_t mbclen, int *match_lens)
{
}

static state_num transit_state(struct dfa *d, state_num s, const unsigned char **pp, const unsigned char *end)
{
}

char *dfaexec(struct dfa *d, const char *begin, char *end, int allow_nl, size_t *count, int *backref)
{
  state_num s;
  state_num s1;
  const unsigned char *p;
  const unsigned char *mbp;
  state_num **trans___0;
  state_num *t;
  unsigned char eol;
  unsigned char saved_end;
  size_t nlcount;
  wint_t wc;
  size_t tmp;
  const unsigned char *tmp___0;
  const unsigned char *tmp___1;
  state_num tmp___2;
  const unsigned char *tmp___3;
  const unsigned char *tmp___4;
  {
    eol = eolbyte___0;
    nlcount = (size_t) 0;
    if (! d->tralloc)
    {
      {
        build_state_zero(d);
      }
    }

    s1 = (state_num) 0;
    s = s1;
    mbp = (const unsigned char *) begin;
    p = mbp;
    trans___0 = d->trans;
    saved_end = * ((unsigned char *) end);
    * end = (char) eol;
    if (d->multibyte)
    {
      {
      }
      if (! d->mb_match_lens)
      {
      }

    }

    {
      while (1)
      {
        while_continue:
        ;

        if (d->multibyte)
        {
          {
            while (1)
            {
              while_continue___1:
;              ;

              while_continue___0:
;              t = * (trans___0 + s);

              if (! (((unsigned long) t) != ((unsigned long) ((void *) 0))))
              {
              }

              if (s == 0L)
              {
                    while_continue___2:
                  while_break___4:
                while_break___1:
              }

              if ((d->states + s)->mbps.nelem == 0UL)
              {
              }

              if ((d->states + s)->has_mbcset)
              {
              }

              {
              }
            }

            while_break___3:
;            ;

          }
          while_break___0:
;          ;

        }
        else
        {
          {
            while (1)
            {
              while_continue___3:
              ;

              t = * (trans___0 + s);
              if (! (((unsigned long) t) != ((unsigned long) ((void *) 0))))
              {
                goto while_break___2;
              }

              tmp___1 = p;
              p++;
              s1 = * (t + ((const int) (* tmp___1)));
              t = * (trans___0 + s1);
              if (((unsigned long) t) == ((unsigned long) ((void *) 0)))
              {
                tmp___2 = s;
                s = s1;
                s1 = tmp___2;
                goto while_break___2;
              }

              tmp___3 = p;
              p++;
              s = * (t + ((const int) (* tmp___3)));
            }

            while_break___5:
            ;

          }
          while_break___2:
          ;

        }

        if (((unsigned long) ((char *) p)) > ((unsigned long) end))
        {
          p = (const unsigned char *) ((void *) 0);
          goto done;
        }

        if (s >= 0L)
        {
          if (* (d->fails + s))
          {
            if ((* (d->success + s)) & sbit[* p])
            {
              if (backref)
              {
                * backref = (int) (d->states + s)->has_backref;
              }

              goto done;
            }

            s1 = s;
            if (d->multibyte)
            {
              {
              }
            }
            else
            {
              tmp___4 = p;
              p++;
              s = * ((* (d->fails + s)) + ((const int) (* tmp___4)));
            }

            goto __Cont;
          }

        }

        if (((const int) (* (p + (- 1)))) == ((const int) eol))
        {
          if (((unsigned long) ((char *) p)) != ((unsigned long) begin))
          {
            nlcount++;
            mbp = p;
          }

        }

        if (s >= 0L)
        {
          if (! (* (d->trans + s)))
          {
            {
              build_state(s, d);
            }
          }

          trans___0 = d->trans;
          goto __Cont;
        }

        if (((const int) (* (p + (- 1)))) == ((const int) eol))
        {
          if (allow_nl)
          {
          }

        }

        s = (state_num) 0;
        __Cont:
        ;

      }

      while_break:
      ;

    }
    done:
    if (count)
    {
      * count += nlcount;
    }


    * end = (char) saved_end;
    return (char *) p;
  }
}

struct dfa *dfasuperset(const struct dfa *d);
struct dfa *dfasuperset(const struct dfa *d)
{
  {
    return (struct dfa *) d->superset;
  }
}

_Bool dfaisfast(const struct dfa *d);
_Bool dfaisfast(const struct dfa *d)
{
  {
    return (_Bool) d->fast;
  }
}

static void free_mbdata(struct dfa *d)
{
  size_t i;
  size_t j;
  struct mb_char_classes *p;
  {
    {
      free((void *) d->multibyte_prop);
      i = (size_t) 0;
    }
    {
      while (1)
      {
        while_continue:
        ;

        if (! (i < d->nmbcsets))
        {
          goto while_break;
        }

        {
          p = d->mbcsets + i;
          free((void *) p->chars);
          free((void *) p->ch_classes);
          free((void *) p->ranges);
          j = (size_t) 0;
        }
        {
          while (1)
          {
            while_continue___0:
            ;

            if (! (j < p->nequivs))
            {
              goto while_break___0;
            }

            {
            }
          }

          while_break___3:
          ;

        }
        while_break___0:
        {
          free((void *) p->equivs);
          j = (size_t) 0;
        }

        {
          while (1)
          {
            while_continue___1:
            ;

            if (! (j < p->ncoll_elems))
            {
              goto while_break___1;
            }

            {
            }
          }

          while_break___4:
          ;

        }
        while_break___1:
        {
          free((void *) p->coll_elems);
          i++;
        }

      }

      while_break___2:
      ;

    }
    while_break:
    {
      free((void *) d->mbcsets);
      free((void *) d->mb_follows.elems);
      free((void *) d->mb_match_lens);
      d->mb_match_lens = (int *) ((void *) 0);
    }

    return;
  }
}

void dfainit(struct dfa *d)
{
  size_t tmp;
  {
    {
      memset((void *) d, 0, sizeof(* d));
      tmp = __ctype_get_mb_cur_max();
      d->multibyte = (_Bool) (tmp > 1UL);
      d->fast = (_Bool) (! d->multibyte);
    }
    return;
  }
}

static void dfaoptimize(struct dfa *d)
{
  size_t i;
  _Bool have_backref;
  int tmp;
  {
    {
      have_backref = (_Bool) 0;
      tmp = using_utf8();
    }
    if (! tmp)
    {
    }

    i = (size_t) 0;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (i < d->tindex))
        {
          goto while_break;
        }

        if ((* (d->tokens + i)) == 272L)
        {
        }

        if ((* (d->tokens + i)) == 257L)
        {
          goto case_257;
        }

        if ((* (d->tokens + i)) == 273L)
        {
          goto case_273;
        }

        goto switch_default;
        case_272:
;        {
        }

        case_257:
        have_backref = (_Bool) 1;

        goto switch_break;
        case_273:
        return;

        switch_default:
        goto switch_break;

        switch_break:
        i++;

      }

      while_break___0:
      ;

    }
    while_break:
    ;

    if (! have_backref)
    {
      if (d->superset)
      {
        {
          dfafree(d->superset);
          free((void *) d->superset);
          d->superset = (struct dfa *) ((void *) 0);
        }
      }

    }

    {
      free_mbdata(d);
      d->multibyte = (_Bool) 0;
    }
    return;
  }
}

static void dfassbuild(struct dfa *d)
{
  size_t i;
  size_t j;
  charclass ccl;
  _Bool have_achar;
  _Bool have_nchar;
  struct dfa *sup;
  struct dfa *tmp;
  size_t tmp___0;
  size_t tmp___1;
  size_t tmp___2;
  size_t tmp___3;
  size_t tmp___4;
  void *__cil_tmp17;
  {
    {
      have_achar = (_Bool) 0;
      have_nchar = (_Bool) 0;
      tmp = dfaalloc();
      sup = tmp;
      * sup = * d;
      sup->multibyte = (_Bool) 0;
      sup->multibyte_prop = (int *) ((void *) 0);
      sup->mbcsets = (struct mb_char_classes *) ((void *) 0);
      sup->superset = (struct dfa *) ((void *) 0);
      sup->states = (dfa_state *) ((void *) 0);
      sup->sindex = (state_num) 0;
      sup->follows = (position_set *) ((void *) 0);
      sup->tralloc = (state_num) 0;
      sup->trans = (state_num **) ((void *) 0);
      sup->fails = (state_num **) ((void *) 0);
      sup->success = (int *) ((void *) 0);
      sup->newlines = (state_num *) ((void *) 0);
      sup->musts = (struct dfamust *) ((void *) 0);
      sup->charclasses = (charclass *) xnmalloc(sup->calloc, sizeof(* sup->charclasses));
      memcpy((void *) ((void *) sup->charclasses), (const void *) ((const void *) d->charclasses), d->cindex * (sizeof(* sup->charclasses)));
      sup->tokens = (token *) xnmalloc(d->tindex, 2UL * (sizeof(* sup->tokens)));
      sup->talloc = d->tindex * 2UL;
      j = (size_t) 0;
      i = j;
    }
    {
      while (1)
      {
        while_continue:
        ;

        if (! (i < d->tindex))
        {
          goto while_break;
        }

        if ((* (d->tokens + i)) == 272L)
        {
        }

        if ((* (d->tokens + i)) == 273L)
        {
          goto case_272;
        }

        if ((* (d->tokens + i)) == 257L)
        {
          goto case_272;
        }

        if ((* (d->tokens + i)) == 260L)
        {
        }

        if ((* (d->tokens + i)) == 261L)
        {
        }

        if ((* (d->tokens + i)) == 262L)
        {
        }

        if ((* (d->tokens + i)) == 263L)
        {
        }

        goto switch_default;
        case_272:
        {
          zeroset(ccl);
          notset(ccl);
          tmp___0 = j;
          j++;
          tmp___1 = dfa_charclass_index(sup, (charclass_word *) ccl);
          * (sup->tokens + tmp___0) = (token) (275UL + tmp___1);
          tmp___2 = j;
          j++;
          * (sup->tokens + tmp___2) = (token) 265;
        }

        if ((* (d->tokens + (i + 1UL))) == 264L)
        {
          i++;
        }
        else
          if ((* (d->tokens + (i + 1UL))) == 265L)
        {
        }
        else
          if ((* (d->tokens + (i + 1UL))) == 266L)
        {
          i++;
        }



        have_achar = (_Bool) 1;
        goto switch_break;
        case_260:
;        if (d->multibyte)
        {
        }


        switch_default:
;        tmp___4 = j;

        j++;
        * (sup->tokens + tmp___4) = * (d->tokens + i);
        if (0L <= (* (d->tokens + i)))
        {
          if ((* (d->tokens + i)) < 256L)
          {
            have_nchar = (_Bool) 1;
          }
          else
          {
            goto _L;
          }

        }
          _L:
;        if ((* (d->tokens + i)) >= 275L)
        {
          have_nchar = (_Bool) 1;
        }



        goto switch_break;
        switch_break:
        i++;

      }

      while_break___0:
      ;

    }
    while_break:
    sup->tindex = j;

    if (have_nchar)
    {
      if (have_achar)
      {
        d->superset = sup;
      }
      else
        if (d->multibyte)
      {
        d->superset = sup;
      }


    }
    else
    {
      {
        dfafree(sup);
        free((void *) sup);
      }
    }

    return;
  }
}

void dfacomp(const char *s, size_t len, struct dfa *d, int searchflag)
{
  {
    {
      dfainit(d);
      dfambcache(d);
      dfaparse(s, len, d);
      dfamust(d);
      dfassbuild(d);
      dfaoptimize(d);
      dfaanalyze(d, searchflag);
    }
    if (d->superset)
    {
      {
        d->fast = (_Bool) 1;
        dfaanalyze(d->superset, searchflag);
      }
    }

    return;
  }
}

void dfafree(struct dfa *d)
{
  size_t i;
  struct dfamust *dm;
  struct dfamust *ndm;
  {
    {
      free((void *) d->charclasses);
      free((void *) d->tokens);
    }
    if (d->multibyte)
    {
      {
      }
    }

    i = (size_t) 0;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (i < ((size_t) d->sindex)))
        {
          goto while_break;
        }

        {
        }
      }

      while_break___3:
      ;

    }
    while_break:
    {
      free((void *) d->states);
    }

    if (d->follows)
    {
      {
        while (1)
        {
          while_continue___0:
;          ;

          if (! (i < d->tindex))
          {
          }

          {
          }
        }

        while_break___4:
;        ;

      }
      while_break___0:
;      {
      }

    }

    if (d->trans)
    {
      {
        while (1)
        {
          while_continue___1:
;          ;

          if (! (i < ((size_t) d->tralloc)))
          {
          }

          {
          }
        }

        while_break___5:
;        ;

      }
      while_break___1:
;      {
      }

    }

    dm = d->musts;
    {
      while (1)
      {
        while_continue___2:
        ;

        if (! dm)
        {
          goto while_break___2;
        }

        {
        }
      }

      while_break___6:
      ;

    }
    while_break___2:
    ;

    if (d->superset)
    {
      {
      }
    }

    return;
  }
}

static char *icatalloc(char *old, const char *new)
{
  char *result;
  size_t oldsize;
  size_t newsize;
  size_t tmp;
  {
    {
      tmp = strlen(new);
      newsize = tmp;
    }
    if (newsize == 0UL)
    {
      return old;
    }

    {
      oldsize = strlen((const char *) old);
      result = (char *) xrealloc((void *) old, (oldsize + newsize) + 1UL);
      memcpy((void *) ((void *) (result + oldsize)), (const void *) ((const void *) new), newsize + 1UL);
    }
    return result;
  }
}

static char *istrstr(const char *lookin, const char *lookfor)
{
  const char *cp;
  size_t len;
  int tmp;
  {
    {
      len = strlen(lookfor);
      cp = lookin;
    }
    {
      while (1)
      {
        while_continue:
        ;

        if (! (((const int) (* cp)) != 0))
        {
          goto while_break;
        }

        {
          tmp = strncmp(cp, lookfor, len);
        }
        if (tmp == 0)
        {
          return (char *) ((char *) cp);
        }

        cp++;
      }

      while_break___0:
      ;

    }
    while_break:
    ;

    return (char *) ((char *) ((void *) 0));
  }
}

static void freelist(char **cpp)
{
  char **tmp;
  {
    {
      while (1)
      {
        while_continue:
        ;

        if (! (* cpp))
        {
          goto while_break;
        }

        {
          tmp = cpp;
          cpp++;
          free((void *) (* tmp));
        }
      }

      while_break___0:
      ;

    }
    while_break:
    ;

    return;
  }
}

static char **enlist(char **cpp, char *new, size_t len)
{
  size_t i;
  size_t j;
  void *tmp;
  char *tmp___0;
  char *tmp___1;
  {
    {
      tmp = xmalloc(len + 1UL);
      new = (char *) memcpy((void *) tmp, (const void *) ((const void *) new), len);
      * (new + len) = (char) '\000';
      i = (size_t) 0;
    }
    {
      while (1)
      {
        while_continue:
        ;

        if (! (((unsigned long) (* (cpp + i))) != ((unsigned long) ((void *) 0))))
        {
          goto while_break;
        }

        {
          tmp___0 = istrstr((const char *) (* (cpp + i)), (const char *) new);
        }
        if (((unsigned long) tmp___0) != ((unsigned long) ((void *) 0)))
        {
          {
            free((void *) new);
          }
          return cpp;
        }

        i++;
      }

      while_break___1:
      ;

    }
    while_break:
    j = (size_t) 0;

    {
      while (1)
      {
        while_continue___0:
        ;

        if (! (((unsigned long) (* (cpp + j))) != ((unsigned long) ((void *) 0))))
        {
          goto while_break___0;
        }

        {
          tmp___1 = istrstr((const char *) new, (const char *) (* (cpp + j)));
        }
        if (((unsigned long) tmp___1) == ((unsigned long) ((void *) 0)))
        {
          j++;
        }
        else
        {
          {
            free((void *) (* (cpp + j)));
            i--;
          }
          if (i == j)
          {
            goto while_break___0;
          }

          * (cpp + j) = * (cpp + i);
          * (cpp + i) = (char *) ((void *) 0);
        }

      }

      while_break___2:
      ;

    }
    while_break___0:
    {
      cpp = (char **) xnrealloc((void *) cpp, i + 2UL, sizeof(* cpp));
      * (cpp + i) = new;
      * (cpp + (i + 1UL)) = (char *) ((void *) 0);
    }

    return cpp;
  }
}

static char **comsubs(char *left, const char *right)
{
  char **cpp;
  char **tmp;
  char *lcp;
  size_t len;
  char *rcp;
  char *tmp___0;
  size_t i;
  {
    {
      tmp = (char **) xzalloc(sizeof(* cpp));
      cpp = tmp;
      lcp = left;
    }
    {
      while (1)
      {
        while_continue:
        ;

        if (! (((int) (* lcp)) != 0))
        {
          goto while_break;
        }

        {
          len = (size_t) 0;
          tmp___0 = strchr(right, (int) (* lcp));
          rcp = tmp___0;
        }
        {
          while (1)
          {
            while_continue___0:
            ;

            if (! (((unsigned long) rcp) != ((unsigned long) ((void *) 0))))
            {
              goto while_break___0;
            }

            i = (size_t) 1;
            {
              while (1)
              {
                while_continue___1:
                ;

                if (((int) (* (lcp + i))) != 0)
                {
                  if (! (((int) (* (lcp + i))) == ((int) (* (rcp + i)))))
                  {
                    goto while_break___1;
                  }

                }

                __Cont:
;                i++;

              }

              while_break___4:
              ;

            }
            while_break___1:
            ;

            if (i > len)
            {
              len = i;
            }

            {
              rcp = strchr((const char *) (rcp + 1), (int) (* lcp));
            }
          }

          while_break___3:
          ;

        }
        while_break___0:
        ;

        if (len != 0UL)
        {
          {
            cpp = enlist(cpp, lcp, len);
          }
        }

        lcp++;
      }

      while_break___2:
      ;

    }
    while_break:
    ;

    return cpp;
  }
}

static char **addlists(char **old, char **new)
{
  size_t tmp;
  {
    {
      while (1)
      {
        while_continue:
        ;

        if (! (* new))
        {
          goto while_break;
        }

        {
          tmp = strlen((const char *) (* new));
          old = enlist(old, * new, tmp);
          new++;
        }
      }

      while_break___0:
      ;

    }
    while_break:
    ;

    return old;
  }
}

static char **inboth(char **left, char **right)
{
  char **both;
  char **tmp;
  size_t lnum;
  size_t rnum;
  char **temp;
  char **tmp___0;
  {
    {
      tmp = (char **) xzalloc(sizeof(* both));
      both = tmp;
      lnum = (size_t) 0;
    }
    {
      while (1)
      {
        while_continue:
        ;

        if (! (((unsigned long) (* (left + lnum))) != ((unsigned long) ((void *) 0))))
        {
          goto while_break;
        }

        rnum = (size_t) 0;
        {
          while (1)
          {
            while_continue___0:
            ;

            if (! (((unsigned long) (* (right + rnum))) != ((unsigned long) ((void *) 0))))
            {
              goto while_break___0;
            }

            {
              tmp___0 = comsubs(* (left + lnum), (const char *) (* (right + rnum)));
              temp = tmp___0;
              both = addlists(both, temp);
              freelist(temp);
              free((void *) temp);
              rnum++;
            }
          }

          while_break___2:
          ;

        }
        while_break___0:
        lnum++;

      }

      while_break___1:
      ;

    }
    while_break:
    ;

    return both;
  }
}

static must *allocmust(must *mp)
{
  must *new_mp;
  must *tmp;
  {
    {
      tmp = (must *) xmalloc(sizeof(* new_mp));
      new_mp = tmp;
      new_mp->in = (char **) xzalloc(sizeof(* new_mp->in));
      new_mp->left = (char *) xzalloc((size_t) 2);
      new_mp->right = (char *) xzalloc((size_t) 2);
      new_mp->is = (char *) xzalloc((size_t) 2);
      new_mp->begline = (_Bool) 0;
      new_mp->endline = (_Bool) 0;
      new_mp->prev = mp;
    }
    return new_mp;
  }
}

static void resetmust(must *mp)
{
  char tmp;
  char tmp___0;
  {
    {
      freelist(mp->in);
      * (mp->in + 0) = (char *) ((void *) 0);
      tmp___0 = (char) '\000';
      * (mp->is + 0) = tmp___0;
      tmp = tmp___0;
      * (mp->right + 0) = tmp;
      * (mp->left + 0) = tmp;
      mp->begline = (_Bool) 0;
      mp->endline = (_Bool) 0;
    }
    return;
  }
}

static void freemust(must *mp)
{
  {
    {
      freelist(mp->in);
      free((void *) mp->in);
      free((void *) mp->left);
      free((void *) mp->right);
      free((void *) mp->is);
      free((void *) mp);
    }
    return;
  }
}

static void dfamust(struct dfa *d)
{
  must *mp;
  const char *result;
  size_t ri;
  size_t i;
  _Bool exact;
  _Bool begline___0;
  _Bool endline;
  struct dfamust *dm;
  token t;
  char **new;
  must *rmp;
  must *lmp;
  size_t j;
  size_t ln;
  size_t rn;
  size_t n;
  int tmp;
  size_t tmp___0;
  size_t tmp___1;
  int tmp___2;
  must *rmp___0;
  must *lmp___0;
  size_t lrlen;
  size_t tmp___3;
  size_t rllen;
  size_t tmp___4;
  char *tp;
  char *tmp___5;
  charclass *ccl;
  int j___0;
  _Bool tmp___6;
  _Bool tmp___7;
  int tmp___8;
  int tmp___9;
  char tmp___10;
  char tmp___11;
  int tmp___12;
  char tmp___13;
  char tmp___14;
  must *prev;
  char *__cil_tmp45;
  {
    mp = (must *) ((void *) 0);
    result = "";
    exact = (_Bool) 0;
    begline___0 = (_Bool) 0;
    endline = (_Bool) 0;
    ri = (size_t) 0;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (ri < d->tindex))
        {
        }

        t = * (d->tokens + ri);
        if (t == 258L)
        {
          goto case_258;
        }

        if (t == 259L)
        {
          goto case_259;
        }

        if (t == 270L)
        {
        }

        if (t == 271L)
        {
        }

        if (t == 256L)
        {
        }

        if (t == 260L)
        {
        }

        if (t == 261L)
        {
        }

        if (t == 262L)
        {
        }

        if (t == 263L)
        {
        }

        if (t == 257L)
        {
          goto case_256;
        }

        if (t == 272L)
        {
        }

        if (t == 273L)
        {
          goto case_256;
        }

        if (t == 265L)
        {
          goto case_265;
        }

        if (t == 264L)
        {
          goto case_265;
        }

        if (t == 269L)
        {
          goto case_269;
        }

        if (t == 266L)
        {
          goto case_266;
        }

        if (t == (- 1L))
        {
          goto case_neg_1;
        }

        if (t == 268L)
        {
          goto case_268;
        }

        if (t == 0L)
        {
        }

        goto switch_default;
        case_258:
        {
          mp = allocmust(mp);
          mp->begline = (_Bool) 1;
        }

        goto switch_break;
        case_259:
        {
          mp = allocmust(mp);
          mp->endline = (_Bool) 1;
        }

        goto switch_break;
        case_270:
;        {
        }

        case_256:
        {
          mp = allocmust(mp);
        }

        goto switch_break;
        case_265:
        {
          resetmust(mp);
        }

        goto switch_break;
        case_269:
        {
          rmp = mp;
          mp = mp->prev;
          lmp = mp;
          tmp = strcmp((const char *) lmp->is, (const char *) rmp->is);
        }

        if (! (tmp == 0))
        {
          * (lmp->is + 0) = (char) '\000';
        }

        lmp->begline = (_Bool) (((int) lmp->begline) & ((int) rmp->begline));
        lmp->endline = (_Bool) (((int) lmp->endline) & ((int) rmp->endline));
        i = (size_t) 0;
        {
          while (1)
          {
            while_continue___0:
            ;

            if (((int) (* (lmp->left + i))) != 0)
            {
              if (! (((int) (* (lmp->left + i))) == ((int) (* (rmp->left + i)))))
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

          while_break___8:
          ;

        }
        while_break___0:
        {
          * (lmp->left + i) = (char) '\000';
          ln = strlen((const char *) lmp->right);
          rn = strlen((const char *) rmp->right);
          n = ln;
        }

        if (n > rn)
        {
        }

        i = (size_t) 0;
        {
          while (1)
          {
            while_continue___1:
            ;

            if (! (i < n))
            {
              goto while_break___1;
            }

            if (((int) (* (lmp->right + ((ln - i) - 1UL)))) != ((int) (* (rmp->right + ((rn - i) - 1UL)))))
            {
              goto while_break___1;
            }

          }

          while_break___9:
          ;

        }
        while_break___1:
        j = (size_t) 0;

        {
          while (1)
          {
            while_continue___2:
            ;

            if (! (j < i))
            {
              goto while_break___2;
            }

          }

          while_break___10:
          ;

        }
        while_break___2:
        {
          * (lmp->right + j) = (char) '\000';
          new = inboth(lmp->in, rmp->in);
          freelist(lmp->in);
          free((void *) lmp->in);
          lmp->in = new;
          freemust(rmp);
        }

        goto switch_break;
        case_266:
        * (mp->is + 0) = (char) '\000';

        goto switch_break;
        case_neg_1:
        if (! (! mp->prev))
        {
          {
          }
        }


        i = (size_t) 0;
        {
          while (1)
          {
            while_continue___3:
            ;

            if (! (((unsigned long) (* (mp->in + i))) != ((unsigned long) ((void *) 0))))
            {
              goto while_break___3;
            }

            {
              tmp___0 = strlen((const char *) (* (mp->in + i)));
              tmp___1 = strlen(result);
            }
            if (tmp___0 > tmp___1)
            {
              result = (const char *) (* (mp->in + i));
            }

            i++;
          }

          while_break___11:
          ;

        }
        while_break___3:
        {
          tmp___2 = strcmp(result, (const char *) mp->is);
        }

        if (tmp___2 == 0)
        {
          exact = (_Bool) 1;
          begline___0 = mp->begline;
          endline = mp->endline;
        }

        goto done;
        case_268:
        {
          rmp___0 = mp;
          mp = mp->prev;
          lmp___0 = mp;
          lmp___0->in = addlists(lmp___0->in, rmp___0->in);
        }

        if (((int) (* (lmp___0->right + 0))) != 0)
        {
          if (((int) (* (rmp___0->left + 0))) != 0)
          {
            {
              tmp___3 = strlen((const char *) lmp___0->right);
              lrlen = tmp___3;
              tmp___4 = strlen((const char *) rmp___0->left);
              rllen = tmp___4;
              tmp___5 = (char *) xmalloc(lrlen + rllen);
              tp = tmp___5;
              memcpy((void *) ((void *) tp), (const void *) ((const void *) lmp___0->right), lrlen);
              memcpy((void *) ((void *) (tp + lrlen)), (const void *) ((const void *) rmp___0->left), rllen);
              lmp___0->in = enlist(lmp___0->in, tp, lrlen + rllen);
              free((void *) tp);
            }
          }

        }

        if (((int) (* (lmp___0->is + 0))) != 0)
        {
          {
            lmp___0->left = icatalloc(lmp___0->left, (const char *) rmp___0->left);
          }
        }

        if (((int) (* (rmp___0->is + 0))) == 0)
        {
          * (lmp___0->right + 0) = (char) '\000';
        }

        {
          lmp___0->right = icatalloc(lmp___0->right, (const char *) rmp___0->right);
        }
        if (((int) (* (lmp___0->is + 0))) != 0)
        {
          goto _L;
        }
        else
          if (lmp___0->begline)
        {
          _L:
          if (((int) (* (rmp___0->is + 0))) != 0)
          {
            {
              lmp___0->is = icatalloc(lmp___0->is, (const char *) rmp___0->is);
              lmp___0->endline = rmp___0->endline;
            }
          }
          else
            if (rmp___0->endline)
          {
            {
              lmp___0->is = icatalloc(lmp___0->is, (const char *) rmp___0->is);
              lmp___0->endline = rmp___0->endline;
            }
          }
          else
          {
            * (lmp___0->is + 0) = (char) '\000';
            lmp___0->begline = (_Bool) 0;
            lmp___0->endline = (_Bool) 0;
          }



        }
        else
        {
          * (lmp___0->is + 0) = (char) '\000';
          lmp___0->begline = (_Bool) 0;
          lmp___0->endline = (_Bool) 0;
        }


        {
          freemust(rmp___0);
        }
        goto switch_break;
        case_0:
;        goto done;

        switch_default:
        {
          mp = allocmust(mp);
        }

        if (275L <= t)
        {
          ccl = d->charclasses + (t - 275L);
          j___0 = 0;
          {
            while (1)
            {
              while_continue___4:
              ;

              if (! (j___0 < 256))
              {
              }

              {
                tmp___6 = tstbit((unsigned int) j___0, (charclass_word *) (* ccl));
              }
              if (tmp___6)
              {
                goto while_break___4;
              }

              j___0++;
            }

            while_break___12:
            ;

          }
          while_break___4:
          ;

          if (! (j___0 < 256))
          {
          }

          t = (token) j___0;
          {
            while (1)
            {
              while_continue___5:
              ;

              j___0++;
              if (! (j___0 < 256))
              {
                goto while_break___5;
              }

              {
                tmp___7 = tstbit((unsigned int) j___0, (charclass_word *) (* ccl));
              }
              if (tmp___7)
              {
                if (case_fold)
                {
                  if (! d->multibyte)
                  {
                  }

                }
                else
                {
                  goto while_break___5;
                }

              }

            }

            while_break___13:
            ;

          }
          while_break___5:
          ;

          if (j___0 < 256)
          {
            goto switch_break;
          }

        }

        if (case_fold)
        {
          if (! d->multibyte)
          {
            {
            }
          }
          else
          {
            tmp___11 = (char) t;
          }

        }
        else
        {
          tmp___11 = (char) t;
        }

        {
          * (mp->right + 0) = tmp___11;
          tmp___10 = tmp___11;
          * (mp->left + 0) = tmp___10;
          * (mp->is + 0) = tmp___10;
          tmp___14 = (char) '\000';
          * (mp->right + 1) = tmp___14;
          tmp___13 = tmp___14;
          * (mp->left + 1) = tmp___13;
          * (mp->is + 1) = tmp___13;
          mp->in = enlist(mp->in, mp->is, (size_t) 1);
        }
        goto switch_break;
        switch_break:
        ri++;

      }

      while_break___7:
      ;

    }
    while_break:
    ;

    done:
    if (* result)
    {
      {
        dm = (struct dfamust *) xmalloc(sizeof(* dm));
        dm->exact = exact;
        dm->begline = begline___0;
        dm->endline = endline;
        dm->must = xstrdup(result);
        dm->next = d->musts;
        d->musts = dm;
      }
    }


    {
      while (1)
      {
        while_continue___6:
        ;

        if (! mp)
        {
          goto while_break___6;
        }

        {
          prev = mp->prev;
          freemust(mp);
          mp = prev;
        }
      }

      while_break___14:
      ;

    }
    while_break___6:
    ;

    return;
  }
}

struct dfa *dfaalloc(void)
{
  struct dfa *tmp;
  {
    {
      tmp = (struct dfa *) xmalloc(sizeof(struct dfa));
    }
    return tmp;
  }
}

struct dfamust *dfamusts(const struct dfa *d)
{
  {
    return (struct dfamust *) ((struct dfamust *) d->musts);
  }
}

extern size_t mbrlen(const char *__restrict __s, size_t __n, mbstate_t *__restrict __ps);
void build_mbclen_cache(void);
static size_t mbclen_cache[256];
static char trans[256];
void kwsinit(kwset_t *kwset___1)
{
  int i;
  size_t tmp;
  {
    if (match_icase)
    {
      {
      }
      if (tmp == 1UL)
      {
            while_continue:
          while_break___0:
        while_break:
      }

    }
    else
    {
      {
        * kwset___1 = kwsalloc((const char *) ((void *) 0));
      }
    }

    if (! (* kwset___1))
    {
      {
      }
    }

    return;
  }
}

static char *out;
static mb_len_map_t *len_map;
static size_t outalloc;
char *mbtoupper(const char *beg, size_t *n, mb_len_map_t **len_map_p)
{
}

void build_mbclen_cache(void)
{
  int i;
  char c;
  unsigned char uc;
  mbstate_t mbs;
  void *__cil_tmp6;
  {
    i = - 128;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (i <= 127))
        {
          goto while_break;
        }

        {
          c = (char) i;
          uc = (unsigned char) i;
          mbs.__count = 0;
          mbs.__value.__wch = 0U;
          mbclen_cache[uc] = mbrlen((const char *) ((const char *) (& c)), (size_t) 1, (mbstate_t *) (& mbs));
          i++;
        }
      }

      while_break___0:
      ;

    }
    while_break:
    ;

    return;
  }
}

ptrdiff_t mb_goback(const char **mb_start, const char *cur, const char *end)
{
  const char *p;
  const char *p0;
  mbstate_t cur_state;
  size_t mbclen;
  unsigned char tmp;
  long tmp___0;
  void *__cil_tmp11;
  {
    {
      p = * mb_start;
      p0 = p;
      memset((void *) (& cur_state), 0, sizeof(cur_state));
    }
    {
      while (1)
      {
        while_continue:
        ;

        if (! (((unsigned long) p) < ((unsigned long) cur)))
        {
          goto while_break;
        }

        {
          tmp = to_uchar((char) (* p));
          mbclen = mbclen_cache[tmp];
        }
        if (mbclen == 0xfffffffffffffffeUL)
        {
          {
          }
        }

        if (0UL < mbclen)
        {
          if (! (mbclen < 0xfffffffffffffffeUL))
          {
            {
            }
          }

        }

        p0 = p;
        p += mbclen;
      }

      while_break___0:
      ;

    }
    while_break:
    * mb_start = p;

    if (((unsigned long) p) == ((unsigned long) cur))
    {
      tmp___0 = 0L;
    }

    return tmp___0;
  }
}

wint_t mb_prev_wc(const char *buf, const char *cur, const char *end)
{
  const char *p;
  ptrdiff_t tmp;
  wint_t tmp___0;
  {
    if (((unsigned long) cur) == ((unsigned long) buf))
    {
      return 4294967295U;
    }

    {
      p = buf;
      cur--;
      tmp = mb_goback(& p, cur, end);
      cur -= tmp;
      tmp___0 = mb_next_wc(cur, end);
    }
    return tmp___0;
  }
}

wint_t mb_next_wc(const char *cur, const char *end)
{
  wchar_t wc;
  mbstate_t mbs;
  unsigned int tmp___0;
  size_t tmp___1;
  void *__cil_tmp8;
  {
    mbs.__count = 0;
    mbs.__value.__wch = 0U;
    if ((end - cur) != 0L)
    {
      {
        tmp___1 = mbrtowc((wchar_t *) (& wc), (const char *) cur, (size_t) (end - cur), (mbstate_t *) (& mbs));
      }
      if (tmp___1 < 0xfffffffffffffffeUL)
      {
        tmp___0 = (unsigned int) wc;
      }

    }

    return tmp___0;
  }
}

extern int fflush_unlocked(FILE *__stream);
extern int fputc_unlocked(int __c, FILE *__stream);
extern size_t fread_unlocked(void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream);
extern size_t fwrite_unlocked(const void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream);
extern __off_t lseek(int __fd, __off_t __offset, int __whence);
extern int isatty(int __fd);
extern char *optarg;
extern int optind;
extern int getpagesize(void);
extern int atexit(void (*__func)(void));
extern void exit(int __status);
extern int strcasecmp(const char *__s1, const char *__s2);
extern char *textdomain(const char *__domainname);
extern char *bindtextdomain(const char *__domainname, const char *__dirname);
extern int getopt_long(int ___argc, char *const *___argv, const char *__shortopts, const struct option *__longopts, int *__longind);
static struct stat out_stat;
static int show_help;
static int show_version;
static int suppress_errors;
static int color_option;
static int only_matching;
static int align_tabs;
static const char *group_separator = "--";
static const char *selected_match_color = "01;31";
static const char *context_match_color = "01;31";
static const char *filename_color = "35";
static const char *line_num_color = "32";
static const char *byte_num_color = "32";
static const char *sep_color = "36";
static const char *selected_line_color = "";
static const char *context_line_color = "";
static const char *sgr_start = "\033[%sm\033[K";
static const char *sgr_end = "\033[m\033[K";
static void pr_sgr_start(const char *s)
{
}

static void pr_sgr_end(const char *s)
{
}

static void pr_sgr_start_if(const char *s)
{
  {
    if (color_option)
    {
      {
      }
    }

    return;
  }
}

static void pr_sgr_end_if(const char *s)
{
  {
    if (color_option)
    {
      {
      }
    }

    return;
  }
}

static void color_cap_mt_fct(void)
{
}

static void color_cap_rv_fct(void)
{
}

static void color_cap_ne_fct(void)
{
}

static const struct color_cap color_dict[12] = {{"mt", & selected_match_color, & color_cap_mt_fct}, {"ms", & selected_match_color, (void (*)(void)) ((void *) 0)}, {"mc", & context_match_color, (void (*)(void)) ((void *) 0)}, {"fn", & filename_color, (void (*)(void)) ((void *) 0)}, {"ln", & line_num_color, (void (*)(void)) ((void *) 0)}, {"bn", & byte_num_color, (void (*)(void)) ((void *) 0)}, {"se", & sep_color, (void (*)(void)) ((void *) 0)}, {"sl", & selected_line_color, (void (*)(void)) ((void *) 0)}, {"cx", & context_line_color, (void (*)(void)) ((void *) 0)}, {"rv", (const char **) ((void *) 0), & color_cap_rv_fct}, {"ne", (const char **) ((void *) 0), & color_cap_ne_fct}, {(const char *) ((void *) 0), (const char **) ((void *) 0), (void (*)(void)) ((void *) 0)}};
static struct exclude *excluded_patterns;
static struct exclude *excluded_directory_patterns;
static const char short_options[58] = {(const char) '0', (const char) '1', (const char) '2', (const char) '3', (const char) '4', (const char) '5', (const char) '6', (const char) '7', (const char) '8', (const char) '9', (const char) 'A', (const char) ':', (const char) 'B', (const char) ':', (const char) 'C', (const char) ':', (const char) 'D', (const char) ':', (const char) 'E', (const char) 'F', (const char) 'G', (const char) 'H', (const char) 'I', (const char) 'P', (const char) 'T', (const char) 'U', (const char) 'V', (const char) 'X', (const char) ':', (const char) 'a', (const char) 'b', (const char) 'c', (const char) 'd', (const char) ':', (const char) 'e', (const char) ':', (const char) 'f', (const char) ':', (const char) 'h', (const char) 'i', (const char) 'L', (const char) 'l', (const char) 'm', (const char) ':', (const char) 'n', (const char) 'o', (const char) 'q', (const char) 'R', (const char) 'r', (const char) 's', (const char) 'u', (const char) 'v', (const char) 'w', (const char) 'x', (const char) 'y', (const char) 'Z', (const char) 'z', (const char) '\000'};
static const struct option long_options[50] = {{"basic-regexp", 0, (int *) ((void *) 0), 'G'}, {"extended-regexp", 0, (int *) ((void *) 0), 'E'}, {"fixed-regexp", 0, (int *) ((void *) 0), 'F'}, {"fixed-strings", 0, (int *) ((void *) 0), 'F'}, {"perl-regexp", 0, (int *) ((void *) 0), 'P'}, {"after-context", 1, (int *) ((void *) 0), 'A'}, {"before-context", 1, (int *) ((void *) 0), 'B'}, {"binary-files", 1, (int *) ((void *) 0), 128}, {"byte-offset", 0, (int *) ((void *) 0), 'b'}, {"context", 1, (int *) ((void *) 0), 'C'}, {"color", 2, (int *) ((void *) 0), 129}, {"colour", 2, (int *) ((void *) 0), 129}, {"count", 0, (int *) ((void *) 0), 'c'}, {"devices", 1, (int *) ((void *) 0), 'D'}, {"directories", 1, (int *) ((void *) 0), 'd'}, {"exclude", 1, (int *) ((void *) 0), 131}, {"exclude-from", 1, (int *) ((void *) 0), 132}, {"exclude-dir", 1, (int *) ((void *) 0), 135}, {"file", 1, (int *) ((void *) 0), 'f'}, {"files-with-matches", 0, (int *) ((void *) 0), 'l'}, {"files-without-match", 0, (int *) ((void *) 0), 'L'}, {"group-separator", 1, (int *) ((void *) 0), 136}, {"help", 0, & show_help, 1}, {"include", 1, (int *) ((void *) 0), 130}, {"ignore-case", 0, (int *) ((void *) 0), 'i'}, {"initial-tab", 0, (int *) ((void *) 0), 'T'}, {"label", 1, (int *) ((void *) 0), 134}, {"line-buffered", 0, (int *) ((void *) 0), 133}, {"line-number", 0, (int *) ((void *) 0), 'n'}, {"line-regexp", 0, (int *) ((void *) 0), 'x'}, {"max-count", 1, (int *) ((void *) 0), 'm'}, {"no-filename", 0, (int *) ((void *) 0), 'h'}, {"no-group-separator", 0, (int *) ((void *) 0), 136}, {"no-messages", 0, (int *) ((void *) 0), 's'}, {"null", 0, (int *) ((void *) 0), 'Z'}, {"null-data", 0, (int *) ((void *) 0), 'z'}, {"only-matching", 0, (int *) ((void *) 0), 'o'}, {"quiet", 0, (int *) ((void *) 0), 'q'}, {"recursive", 0, (int *) ((void *) 0), 'r'}, {"dereference-recursive", 0, (int *) ((void *) 0), 'R'}, {"regexp", 1, (int *) ((void *) 0), 'e'}, {"invert-match", 0, (int *) ((void *) 0), 'v'}, {"silent", 0, (int *) ((void *) 0), 'q'}, {"text", 0, (int *) ((void *) 0), 'a'}, {"binary", 0, (int *) ((void *) 0), 'U'}, {"unix-byte-offsets", 0, (int *) ((void *) 0), 'u'}, {"version", 0, (int *) ((void *) 0), 'V'}, {"with-filename", 0, (int *) ((void *) 0), 'H'}, {"word-regexp", 0, (int *) ((void *) 0), 'w'}, {(const char *) 0, 0, (int *) 0, 0}};
static const char *matcher;
static const char *filename;
static size_t filename_prefix_len;
static int errseen;
static int write_error_seen;
static const char *const directories_args[4] = {(const char *) "read", (const char *) "recurse", (const char *) "skip", (const char *) ((const char *) ((void *) 0))};
static const enum directories_type directories_types[3] = {(const enum directories_type) 2, (const enum directories_type) 3, (const enum directories_type) 4};
static enum directories_type directories = (enum directories_type) 2;
static int fts_options = 793;
static enum __anonenum_devices_71 devices = (enum __anonenum_devices_71) 0;
static int grepfile(int dirdesc, const char *name, int follow, int command_line);
static int grepdesc(int desc, int command_line);
static void dos_binary(void);
static void dos_unix_byte_offsets(void);
static int undossify_input(char *buf, size_t buflen);
static int is_device_mode(mode_t m)
{
}

static int usable_st_size(const struct stat *st)
{
  int tmp;
  {
    if ((st->st_mode & 61440U) == 32768U)
    {
      tmp = 1;
    }
    else
      if (st->st_mode - st->st_mode)
    {
      tmp = 1;
    }


    return tmp;
  }
}

static void (*compile)(const char *, size_t);
static size_t (*execute)(const char *, size_t, size_t *, const char *);
static void suppressible_error(const char *mesg, int errnum)
{
}

static void clean_up_stdout(void)
{
  {
    if (! write_error_seen)
    {
      {
        close_stdout();
      }
    }

    return;
  }
}

static int file_is_binary(const char *buf, size_t bufsize, int fd, const struct stat *st)
{
  void *tmp;
  void *tmp___0;
  off_t cur;
  off_t hole_start;
  off_t tmp___1;
  int *tmp___2;
  __off_t tmp___3;
  int tmp___4;
  {
    if (! eolbyte)
    {
      {
      }
    }

    {
      tmp___0 = memchr((const void *) buf, '\000', bufsize);
    }
    if (tmp___0)
    {
    }

    {
      tmp___4 = usable_st_size(st);
    }
    if (tmp___4)
    {
      cur = (off_t) bufsize;
      if (fd == 0)
      {
        {
        }
        if (cur < 0L)
        {
        }

      }

      {
        tmp___1 = lseek(fd, cur, 4);
        hole_start = tmp___1;
      }
      if (0L <= hole_start)
      {
        {
          tmp___3 = lseek(fd, cur, 0);
        }
        if (tmp___3 < 0L)
        {
          {
          }
        }

        if (hole_start < ((off_t) st->st_size))
        {
        }

      }

    }

    return 0;
  }
}

static void context_length_arg(const char *str, intmax_t *out___0)
{
}

static int skipped_file(const char *name, int command_line, int is_dir)
{
  _Bool tmp;
  int tmp___0;
  _Bool tmp___1;
  int tmp___2;
  int tmp___3;
  {
    if (is_dir)
    {
      if (((unsigned int) directories) == 4U)
      {
      }
      else
        if (command_line)
      {
      }
        _L:
;      if (excluded_directory_patterns)
      {
      }




    }
    else
    {
      if (excluded_patterns)
      {
        {
        }
        if (tmp___1)
        {
        }

      }
      else
      {
        tmp___2 = 0;
      }

      tmp___3 = tmp___2;
    }

    return tmp___3;
  }
}

static char *buffer;
static size_t bufalloc;
static int bufdesc;
static char *bufbeg;
static char *buflim;
static size_t pagesize;
static off_t bufoffset;
static off_t after_last_match;
static int reset(int fd, const struct stat *st)
{
  size_t tmp;
  int *tmp___0;
  char *tmp___1;
  char *__cil_tmp9;
  {
    if (! pagesize)
    {
      {
        pagesize = (size_t) getpagesize();
      }
      if (pagesize == 0UL)
      {
        {
        }
      }
      else
        if (((2UL * pagesize) + 1UL) <= pagesize)
      {
        {
        }
      }


      if ((32768UL % pagesize) == 0UL)
      {
        tmp = (size_t) 32768;
      }

      {
        bufalloc = (tmp + pagesize) + 1UL;
        buffer = (char *) xmalloc(bufalloc);
      }
    }

    if ((((size_t) (buffer + 1)) % pagesize) == 0UL)
    {
    }
    else
    {
      buflim = (buffer + 1) + (pagesize - (((size_t) (buffer + 1)) % pagesize));
    }

    bufbeg = buflim;
    * (bufbeg + (- 1)) = (char) eolbyte;
    bufdesc = fd;
    if ((st->st_mode & 61440U) == 32768U)
    {
      if (fd != 0)
      {
        bufoffset = (off_t) 0;
      }
      else
      {
        {
        }
        if (bufoffset < 0L)
        {
        }

      }

    }

    return 1;
  }
}

static int fillbuf(size_t save, const struct stat *st)
{
  ssize_t fillsize;
  int cc;
  char *readbuf;
  size_t readsize;
  size_t saved_offset;
  size_t minsize;
  size_t newsize;
  size_t newalloc;
  char *newbuf;
  off_t to_be_read;
  off_t maxsize_off;
  int tmp;
  void *tmp___0;
  {
    cc = 1;
    saved_offset = (size_t) ((buflim - save) - buffer);
    if (pagesize <= ((size_t) ((buffer + bufalloc) - buflim)))
    {
      readbuf = buflim;
      bufbeg = buflim - save;
    }
    else
    {
      minsize = save + pagesize;
      newsize = (bufalloc - pagesize) - 1UL;
      {
        while (1)
        {
          while_continue:
          ;

          if (! (newsize < minsize))
          {
            goto while_break;
          }

          if ((newsize * 2UL) < newsize)
          {
          }
          else
            if ((((newsize * 2UL) + pagesize) + 1UL) < (newsize * 2UL))
          {
          }


        }

        while_break___0:
        ;

      }
      while_break:
      {
        tmp = usable_st_size(st);
      }

      if (tmp)
      {
        to_be_read = (off_t) (st->st_size - ((const __off_t) bufoffset));
        maxsize_off = (off_t) (save + ((size_t) to_be_read));
        if (0L <= to_be_read)
        {
          if (to_be_read <= maxsize_off)
          {
            if (((size_t) maxsize_off) == ((size_t) maxsize_off))
            {
              if (minsize <= ((size_t) maxsize_off))
              {
                if (((size_t) maxsize_off) < newsize)
                {
                  newsize = (size_t) maxsize_off;
                }

              }

            }

          }

        }

      }

      newalloc = (newsize + pagesize) + 1UL;
      if (bufalloc < newalloc)
      {
        {
        }
      }
      else
      {
        newbuf = buffer;
      }

      if ((((size_t) ((newbuf + 1) + save)) % pagesize) == 0UL)
      {
        readbuf = (newbuf + 1) + save;
      }
      else
      {
        readbuf = ((newbuf + 1) + save) + (pagesize - (((size_t) ((newbuf + 1) + save)) % pagesize));
      }

      {
        bufbeg = readbuf - save;
        memmove((void *) bufbeg, (const void *) (buffer + saved_offset), save);
        * (bufbeg + (- 1)) = (char) eolbyte;
      }
      if (((unsigned long) newbuf) != ((unsigned long) buffer))
      {
        {
        }
      }

    }

    {
      readsize = (size_t) ((buffer + bufalloc) - readbuf);
      readsize -= readsize % pagesize;
      fillsize = (ssize_t) safe_read(bufdesc, (void *) readbuf, readsize);
    }
    if (fillsize < 0L)
    {
    }

    {
      bufoffset += fillsize;
      fillsize = (ssize_t) undossify_input(readbuf, (size_t) fillsize);
      buflim = readbuf + fillsize;
    }
    return cc;
  }
}

static enum __anonenum_binary_files_72 binary_files;
static int filename_mask;
static int out_quiet;
static _Bool out_invert;
static int out_file;
static int out_line;
static int out_byte;
static intmax_t out_before;
static intmax_t out_after;
static int count_matches;
static int list_files;
static int no_filenames;
static intmax_t max_count;
static int line_buffered;
static char *label = (char *) ((void *) 0);
static uintmax_t totalcc;
static const char *lastnl;
static const char *lastout;
static uintmax_t totalnl;
static intmax_t outleft;
static intmax_t pending;
static int done_on_match;
static int exit_on_match;
static int dos_report_unix_offset = 0;
static File_type dos_file_type = (File_type) 0;
static File_type dos_use_file_type = (File_type) 0;
static off_t dos_stripped_crs = (off_t) 0;
static struct dos_map *dos_pos_map;
static int dos_pos_map_size = 0;
static int dos_pos_map_used = 0;
static int inp_map_idx = 0;
static int out_map_idx = 1;
static void dos_binary(void)
{
}

static void dos_unix_byte_offsets(void)
{
}

static int undossify_input(char *buf, size_t buflen)
{
  int chars_left;
  char *destp;
  char *tmp;
  char *tmp___0;
  int tmp___1;
  char *tmp___2;
  size_t tmp___3;
  {
    return (int) buflen;
    chars_left = 0;
    if (totalcc == 0UL)
    {
      inp_map_idx = 0;
      out_map_idx = 1;
      dos_pos_map_used = 0;
      dos_stripped_crs = (off_t) 0;
      dos_file_type = dos_use_file_type;
    }

    if (((unsigned int) dos_file_type) == 0U)
    {
      {
        dos_file_type = (File_type) guess_type(buf, buflen);
      }
    }

    if (((unsigned int) dos_file_type) == 2U)
    {
      destp = buf;
      {
        while (1)
        {
          while_continue:
          ;

          tmp___3 = buflen;
          buflen--;
          if (! tmp___3)
          {
            goto while_break;
          }

          if (((int) (* buf)) != 13)
          {
            tmp = destp;
            destp++;
            tmp___0 = buf;
            buf++;
            * tmp = * tmp___0;
            chars_left++;
          }
          else
          {
            buf++;
            if (out_byte)
            {
              if (! dos_report_unix_offset)
              {
                dos_stripped_crs++;
                {
                  while (1)
                  {
                    while_continue___0:
                    ;

                    if (buflen)
                    {
                      if (! (((int) (* buf)) == 13))
                      {
                        goto while_break___0;
                      }

                    }
                    else
                    {
                      goto while_break___0;
                    }

                    dos_stripped_crs++;
                    buflen--;
                    buf++;
                  }

                  while_break___2:
                  ;

                }
                while_break___0:
                ;

                if (inp_map_idx >= (dos_pos_map_size - 1))
                {
                  if (inp_map_idx)
                  {
                    dos_pos_map_size = inp_map_idx * 2;
                  }
                  else
                  {
                    dos_pos_map_size = 1000;
                  }

                  {
                    dos_pos_map = (struct dos_map *) xrealloc((void *) dos_pos_map, ((unsigned long) dos_pos_map_size) * (sizeof(struct dos_map)));
                  }
                }

                if (! inp_map_idx)
                {
                  (dos_pos_map + inp_map_idx)->pos = (off_t) 0;
                  tmp___1 = inp_map_idx;
                  inp_map_idx++;
                  (dos_pos_map + tmp___1)->add = (off_t) 0;
                  (dos_pos_map + inp_map_idx)->add = (off_t) 0;
                }

                inp_map_idx++;
                if (((int) (* buf)) == 10)
                {
                  tmp___2 = destp + 1;
                }
                else
                {
                  tmp___2 = destp;
                }

                (dos_pos_map + (inp_map_idx - 1))->pos = (off_t) (((uintmax_t) (tmp___2 - bufbeg)) + totalcc);
                (dos_pos_map + inp_map_idx)->add = dos_stripped_crs;
                dos_pos_map_used = inp_map_idx;
                (dos_pos_map + inp_map_idx)->pos = (off_t) ((((uintmax_t) (destp - bufbeg)) + totalcc) + 1UL);
              }

            }

          }

        }

        while_break___1:
        ;

      }
      while_break:
      ;

      return chars_left;
    }

    return (int) buflen;
  }
}

static off_t dossified_pos(off_t byteno)
{
}

static uintmax_t add_count(uintmax_t a, uintmax_t b)
{
  uintmax_t sum;
  char *tmp;
  char *__cil_tmp6;
  {
    sum = a + b;
    if (sum < a)
    {
      {
      }
    }

    return sum;
  }
}

static void nlscan(const char *lim)
{
  size_t newlines;
  const char *beg;
  {
    newlines = (size_t) 0;
    beg = lastnl;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (((unsigned long) beg) < ((unsigned long) lim)))
        {
          goto while_break;
        }

        {
          beg = (const char *) memchr((const void *) beg, (int) eolbyte, (size_t) (lim - beg));
        }
        if (! beg)
        {
        }

        newlines++;
        beg++;
      }

      while_break___0:
      ;

    }
    while_break:
    {
      totalnl = add_count(totalnl, newlines);
      lastnl = lim;
    }

    return;
  }
}

static void print_filename(void)
{
}

static void print_sep(char sep)
{
  {
    {
      pr_sgr_start_if(sep_color);
      fputc_unlocked((int) sep, stdout);
      pr_sgr_end_if(sep_color);
    }
    return;
  }
}

static void print_offset(uintmax_t pos, int min_width, const char *color)
{
  char buf[(sizeof(pos)) * 8UL];
  char *p;
  void *__cil_tmp7;
  {
    p = buf + (sizeof(buf));
    {
      while (1)
      {
        while_continue:
        ;

        p--;
        * p = (char) (48UL + (pos % 10UL));
        min_width--;
        pos /= 10UL;
        if (! (pos != 0UL))
        {
          goto while_break;
        }

      }

      while_break___1:
      ;

    }
    while_break:
    ;

    if (align_tabs)
    {
      {
        while (1)
        {
          while_continue___0:
;          ;

          if (! (min_width >= 0))
          {
          }

        }

        while_break___2:
        ;

      }
      while_break___0:
      ;

    }

    {
      pr_sgr_start_if(color);
      fwrite_unlocked((const void *) ((const void *) p), (size_t) 1, (size_t) ((buf + (sizeof(buf))) - p), (FILE *) stdout);
      pr_sgr_end_if(color);
    }
    return;
  }
}

static void print_line_head(const char *beg, const char *lim, int sep)
{
  int pending_sep;
  uintmax_t pos;
  uintmax_t tmp;
  {
    pending_sep = 0;
    if (out_file)
    {
      {
      }
      if (filename_mask)
      {
      }

    }

    if (out_line)
    {
      if (((unsigned long) lastnl) < ((unsigned long) lim))
      {
        {
          nlscan(beg);
          totalnl = add_count(totalnl, (uintmax_t) 1);
          lastnl = lim;
        }
      }

      if (pending_sep)
      {
        {
        }
      }

      {
        print_offset(totalnl, 4, line_num_color);
        pending_sep = 1;
      }
    }

    if (out_byte)
    {
      {
      }
      if (pending_sep)
      {
      }

      {
      }
    }

    if (pending_sep)
    {
      if (align_tabs)
      {
        {
        }
      }

      {
        print_sep((char) sep);
      }
    }

    return;
  }
}

static const char *print_line_middle(const char *beg, const char *lim, const char *line_color, const char *match_color)
{
  size_t match_size;
  size_t match_offset;
  const char *cur;
  const char *mid;
  const char *b;
  int tmp;
  {
    cur = beg;
    mid = (const char *) ((void *) 0);
    {
      while (1)
      {
        while_continue:
        ;

        if (((unsigned long) cur) < ((unsigned long) lim))
        {
          {
            match_offset = (* execute)(beg, (size_t) (lim - beg), & match_size, beg + (cur - beg));
          }
          if (! (match_offset != 0xffffffffffffffffUL))
          {
            goto while_break;
          }

        }

        b = beg + match_offset;
        if (((unsigned long) b) == ((unsigned long) lim))
        {
        }

        if (match_size == 0UL)
        {
          if (! mid)
          {
          }

        }
        else
        {
          if (only_matching)
          {
            if (out_invert)
            {
            }
            else
            {
              tmp = ':';
            }

            {
              print_line_head(b, lim, tmp);
            }
          }
          else
          {
            {
            }
            if (mid)
            {
            }

            {
            }
          }

          {
            pr_sgr_start_if(match_color);
            fwrite_unlocked((const void *) ((const void *) b), sizeof(char), match_size, (FILE *) stdout);
            pr_sgr_end_if(match_color);
          }
          if (only_matching)
          {
            {
              fputs_unlocked((const char *) "\n", (FILE *) stdout);
            }
          }

        }

        cur = b + match_size;
      }

      while_break___0:
      ;

    }
    while_break:
    ;

    if (only_matching)
    {
      cur = lim;
    }
    else
      if (mid)
    {
    }


    return cur;
  }
}

static const char *print_line_tail(const char *beg, const char *lim, const char *line_color)
{
}

static void prline(const char *beg, const char *lim, int sep)
{
  int matching;
  const char *line_color;
  const char *match_color;
  int tmp___0;
  char *tmp___1;
  int tmp___2;
  char *__cil_tmp11;
  {
    if (! only_matching)
    {
      {
        print_line_head(beg, lim, sep);
      }
    }

    matching = (sep == 58) ^ ((int) out_invert);
    if (color_option)
    {
      if (out_invert)
      {
      }

      if ((sep == 58) ^ tmp___0)
      {
      }

      if (sep == 58)
      {
      }

    }
    else
    {
      match_color = (const char *) ((void *) 0);
      line_color = match_color;
    }

    if (only_matching)
    {
      if (matching)
      {
        goto _L___0;
      }

    }
      _L___1:
;    if (color_option)
    {
      if (* line_color)
      {
      }
      else
        if (* match_color)
      {
        _L___0:
      }


    }



    if (! only_matching)
    {
      if (((unsigned long) lim) > ((unsigned long) beg))
      {
        {
          fwrite_unlocked((const void *) ((const void *) beg), (size_t) 1, (size_t) (lim - beg), (FILE *) stdout);
        }
      }

    }

    {
      tmp___2 = ferror_unlocked(stdout);
    }
    if (tmp___2)
    {
      {
      }
    }

    lastout = lim;
    if (line_buffered)
    {
      {
      }
    }

    return;
  }
}

static void prpending(const char *lim)
{
  const char *nl;
  const char *tmp;
  size_t match_size;
  size_t tmp___0;
  {
    if (! lastout)
    {
      lastout = (const char *) bufbeg;
    }

    {
      while (1)
      {
        while_continue:
        ;

        if (pending > 0L)
        {
          if (! (((unsigned long) lastout) < ((unsigned long) lim)))
          {
          }

        }
        else
        {
          goto while_break;
        }

        {
        }
        if (outleft)
        {
        }
        else
        {
          {
          }
          if ((tmp___0 == 0xffffffffffffffffUL) == (! out_invert))
          {
          }

        }

      }

      while_break___0:
      ;

    }
    while_break:
    ;

    return;
  }
}

static _Bool used;
static void prtext(const char *beg, const char *lim)
{
  char eol;
  const char *p;
  const char *bp;
  const char *tmp;
  intmax_t i;
  const char *nl;
  const char *tmp___0;
  intmax_t n;
  const char *nl___0;
  const char *tmp___1;
  {
    eol = (char) eolbyte;
    if (! out_quiet)
    {
      if (pending > 0L)
      {
        {
        }
      }

    }

    p = beg;
    if (! out_quiet)
    {
      if (lastout)
      {
        tmp = lastout;
      }
      else
      {
        tmp = (const char *) bufbeg;
      }

      bp = tmp;
      i = (intmax_t) 0;
      {
        while (1)
        {
          while_continue:
          ;

          if (! (i < out_before))
          {
            goto while_break;
          }

          if (((unsigned long) p) > ((unsigned long) bp))
          {
                while_continue___0:
              while_break___4:
            while_break___0:
          }

        }

        while_break___3:
        ;

      }
      while_break:
      ;

      if (0L <= out_before)
      {
      }
      else
        if (0L <= out_after)
      {
        _L:
;        if (used)
        {
        }


      }


      {
        while (1)
        {
          while_continue___1:
          ;

          if (! (((unsigned long) p) < ((unsigned long) beg)))
          {
            goto while_break___1;
          }

          {
          }
        }

        while_break___5:
;        ;

      }
      while_break___1:
      ;

    }

    if (out_invert)
    {
      n = (intmax_t) 0;
      {
        while (1)
        {
          while_continue___2:
          ;

          if (((unsigned long) p) < ((unsigned long) lim))
          {
            if (! (n < outleft))
            {
            }

          }
          else
          {
            goto while_break___2;
          }

          {
            tmp___1 = (const char *) memchr((const void *) p, (int) eol, (size_t) (lim - p));
            nl___0 = tmp___1;
            nl___0++;
          }
          if (! out_quiet)
          {
            {
              prline(p, nl___0, ':');
            }
          }

          p = nl___0;
          n++;
        }

        while_break___6:
        ;

      }
      while_break___2:
      ;

    }
    else
    {
      if (! out_quiet)
      {
        {
          prline(beg, lim, ':');
        }
      }

      n = (intmax_t) 1;
      p = lim;
    }

    after_last_match = bufoffset - (buflim - ((char *) p));
    if (out_quiet)
    {
    }
    else
    {
      pending = out_after;
    }

    used = (_Bool) 1;
    outleft -= n;
    return;
  }
}

static size_t do_execute(const char *buf, size_t size, size_t *match_size, const char *start_ptr)
{
  size_t result;
  const char *line_next;
  size_t tmp;
  size_t tmp___0;
  const char *line_buf;
  const char *line_end;
  const char *tmp___1;
  {
    if (((unsigned long) execute) == ((unsigned long) (& Fexecute)))
    {
    }
    else
      if (((unsigned long) execute) == ((unsigned long) (& Pexecute)))
    {
      _L:
;      {
      }

      if (tmp___0 == 1UL)
      {
      }
      else
        if (! match_icase)
      {
      }


    }
    else
    {
      {
        tmp = (* execute)(buf, size, match_size, start_ptr);
      }
      return tmp;
    }


    {
      while (1)
      {
        while_continue:
;        ;

        if (! (((unsigned long) line_next) < ((unsigned long) (buf + size))))
        {
        }

        {
        }
        if (((unsigned long) line_end) == ((unsigned long) ((void *) 0)))
        {
        }

        if (start_ptr)
        {
        }

        {
        }
        if (result != 0xffffffffffffffffUL)
        {
        }

        __Cont:
;        ;

      }

      while_break___0:
;      ;

    }
    while_break:
;    ;

  }
}

static intmax_t grepbuf(const char *beg, const char *lim)
{
  intmax_t outleft0;
  const char *p;
  const char *endp;
  size_t match_size;
  size_t match_offset;
  size_t tmp;
  const char *b;
  const char *prbeg;
  const char *tmp___0;
  const char *prend;
  const char *tmp___1;
  {
    outleft0 = outleft;
    p = beg;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (((unsigned long) p) < ((unsigned long) lim)))
        {
          goto while_break;
        }

        {
          tmp = do_execute(p, (size_t) (lim - p), & match_size, (const char *) ((void *) 0));
          match_offset = tmp;
        }
        if (match_offset == 0xffffffffffffffffUL)
        {
          if (! out_invert)
          {
            goto while_break;
          }

          match_offset = (size_t) (lim - p);
          match_size = (size_t) 0;
        }

        b = p + match_offset;
        endp = b + match_size;
        if (! out_invert)
        {
          if (((unsigned long) b) == ((unsigned long) lim))
          {
          }

        }

        if (! out_invert)
        {
          goto _L___0;
        }
        else
          if (((unsigned long) p) < ((unsigned long) b))
        {
          _L___0:
          if (out_invert)
          {
            tmp___0 = p;
          }
          else
          {
            tmp___0 = b;
          }


          prbeg = tmp___0;
          if (out_invert)
          {
            tmp___1 = b;
          }
          else
          {
            tmp___1 = endp;
          }

          {
            prend = tmp___1;
            prtext(prbeg, prend);
          }
          if (! outleft)
          {
          }
          else
            if (done_on_match)
          {
            _L:
;            if (exit_on_match)
            {
            }


          }


        }


        p = endp;
      }

      while_break___0:
      ;

    }
    while_break:
    ;

    return outleft0 - outleft;
  }
}

static intmax_t grep(int fd, const struct stat *st)
{
  intmax_t nlines;
  intmax_t i;
  int not_text;
  size_t residue;
  size_t save;
  char oldc;
  char *beg;
  char *lim;
  char eol;
  int tmp;
  int *tmp___0;
  int tmp___1;
  int tmp___2;
  int tmp___3;
  intmax_t tmp___4;
  int *tmp___5;
  int tmp___6;
  char *tmp___7;
  intmax_t tmp___8;
  char *tmp___9;
  char *__cil_tmp25;
  {
    {
      eol = (char) eolbyte;
      tmp = reset(fd, st);
    }
    if (! tmp)
    {
    }

    {
      totalcc = (uintmax_t) 0;
      lastout = (const char *) 0;
      totalnl = (uintmax_t) 0;
      outleft = max_count;
      after_last_match = (off_t) 0;
      pending = (intmax_t) 0;
      nlines = (intmax_t) 0;
      residue = (size_t) 0;
      save = (size_t) 0;
      tmp___1 = fillbuf(save, st);
    }
    if (! tmp___1)
    {
      {
      }
    }

    if (((unsigned int) binary_files) == 0U)
    {
      if (! out_quiet)
      {
        goto _L;
      }

    }
      _L___0:
;    if (((unsigned int) binary_files) == 2U)
    {
      _L:
    }



    not_text = tmp___3;
    if (not_text)
    {
      if (((unsigned int) binary_files) == 2U)
      {
      }

    }

    done_on_match += not_text;
    out_quiet += not_text;
    {
      while (1)
      {
        while_continue:
        ;

        lastnl = (const char *) bufbeg;
        if (lastout)
        {
          lastout = (const char *) bufbeg;
        }

        beg = bufbeg + save;
        if (((unsigned long) beg) == ((unsigned long) buflim))
        {
          goto while_break;
        }

        {
          oldc = * (beg + (- 1));
          * (beg + (- 1)) = eol;
          lim = (char *) memrchr((const void *) (beg - 1), (int) eol, (size_t) ((buflim - beg) + 1L));
          lim++;
          * (beg + (- 1)) = oldc;
        }
        if (((unsigned long) lim) == ((unsigned long) beg))
        {
        }

        beg -= residue;
        residue = (size_t) (buflim - lim);
        if (((unsigned long) beg) < ((unsigned long) lim))
        {
          if (outleft)
          {
            {
              tmp___4 = grepbuf((const char *) beg, (const char *) lim);
              nlines += tmp___4;
            }
          }

          if (pending)
          {
            {
              prpending((const char *) lim);
            }
          }

          if (! outleft)
          {
            if (! pending)
            {
            }

          }
            _L___1:
;          if (nlines)
          {
            if (done_on_match)
            {
            }

          }



        }

        i = (intmax_t) 0;
        beg = lim;
        {
          while (1)
          {
            while_continue___0:
            ;

            if (i < out_before)
            {
              if (((unsigned long) beg) > ((unsigned long) bufbeg))
              {
              }

            }
            else
            {
              goto while_break___0;
            }

            {
              while (1)
              {
                while_continue___1:
;                ;

                if (! (((int) (* (beg + (- 1)))) != ((int) eol)))
                {
                }

              }

              while_break___4:
;              ;

            }
            while_break___1:
;            ;

          }

          while_break___3:
          ;

        }
        while_break___0:
        ;

        if (((unsigned long) beg) != ((unsigned long) lastout))
        {
          lastout = (const char *) 0;
        }

        save = (size_t) ((lim + residue) - beg);
        if (out_byte)
        {
          {
          }
        }

        if (out_line)
        {
          {
            nlscan((const char *) beg);
          }
        }

        {
          tmp___6 = fillbuf(save, st);
        }
        if (! tmp___6)
        {
          {
          }
        }

      }

      while_break___2:
      ;

    }
    while_break:
    ;

    if (residue)
    {
      if (outleft)
      {
      }

      if (pending)
      {
      }

    }

    finish_grep:
    done_on_match -= not_text;

    out_quiet -= not_text;
    if (not_text & (~ out_quiet))
    {
      if (nlines != 0L)
      {
      }

    }

    return nlines;
  }
}

static int grepdirent(FTS *fts, FTSENT *ent, int command_line)
{
}

static int grepfile(int dirdesc, const char *name, int follow, int command_line)
{
  int desc;
  int tmp;
  int tmp___0;
  int *tmp___1;
  int *tmp___2;
  int *tmp___3;
  int tmp___4;
  {
    if (follow)
    {
      tmp = 0;
    }

    {
      tmp___0 = openat_safer(dirdesc, name, tmp);
      desc = tmp___0;
    }
    if (desc < 0)
    {
      if (follow)
      {
      }
      else
      {
        {
        }
        if ((* tmp___2) != 40)
        {
        }

      }

    }

    {
      tmp___4 = grepdesc(desc, command_line);
    }
    return tmp___4;
  }
}

static int grepdesc(int desc, int command_line)
{
  intmax_t count;
  int status;
  struct stat st;
  int *tmp;
  int tmp___0;
  int tmp___1;
  FTS *fts;
  FTSENT *ent;
  int opts;
  int tmp___2;
  char *fts_arg[2];
  int *tmp___3;
  int tmp___4;
  int tmp___5;
  int *tmp___6;
  int *tmp___7;
  int *tmp___8;
  int tmp___9;
  int tmp___10;
  const char *tmp___11;
  char *tmp___12;
  int tmp___13;
  off_t required_offset;
  off_t tmp___14;
  int *tmp___15;
  __off_t tmp___16;
  int *tmp___17;
  int tmp___18;
  void *__cil_tmp34;
  void *__cil_tmp35;
  char *__cil_tmp36;
  {
    {
      status = 1;
      tmp___0 = fstat(desc, & st);
    }
    if (tmp___0 != 0)
    {
      {
      }
    }

    if (desc != 0)
    {
      if (command_line)
      {
        {
          tmp___1 = skipped_file(filename, 1, (st.st_mode & 61440U) == 16384U);
        }
        if (tmp___1)
        {
        }

      }

    }

    if (desc != 0)
    {
      if (((unsigned int) directories) == 3U)
      {
        if ((st.st_mode & 61440U) == 16384U)
        {
              while_continue:
            while_break___0:
          while_break:
        }

      }

    }

    if (desc != 0)
    {
      if (((unsigned int) directories) == 4U)
      {
        if ((st.st_mode & 61440U) == 16384U)
        {
        }

      }
        _L___0:
;      if (((unsigned int) devices) == 2U)
      {
      }
      else
        if (((unsigned int) devices) == 0U)
      {
        if (! command_line)
        {
          _L:
;          {
          }

          if (tmp___10)
          {
          }

        }

      }




    }

    if (! out_quiet)
    {
      if (list_files == 0)
      {
        if (1L < max_count)
        {
          if ((out_stat.st_mode & 61440U) == 32768U)
          {
            if (out_stat.st_ino)
            {
              if (st.st_ino == out_stat.st_ino)
              {
                if (st.st_dev == out_stat.st_dev)
                {
                }

              }

            }

          }

        }

      }

    }

    {
      tmp___13 = isatty(desc);
    }
    if (! tmp___13)
    {
      {
        set_binary_mode(desc, 0);
      }
    }

    {
      count = grep(desc, (const struct stat *) (& st));
    }
    if (count < 0L)
    {
    }
    else
    {
      if (count_matches)
      {
        if (out_file)
        {
        }

        {
        }
      }

      status = ! count;
      if (list_files == (1 - (2 * status)))
      {
        {
        }
      }

      if (desc == 0)
      {
        if (outleft)
        {
        }

        if (required_offset != bufoffset)
        {
        }

      }

    }

    closeout:
    if (desc != 0)
    {
      {
        tmp___18 = close(desc);
      }
      if (tmp___18 != 0)
      {
        {
        }
      }

    }


    return status;
  }
}

static int grep_command_line_arg(const char *arg)
{
  char *tmp;
  int tmp___0;
  int tmp___1;
  int tmp___2;
  char *__cil_tmp7;
  {
    {
      tmp___2 = strcmp(arg, "-");
    }
    if (tmp___2 == 0)
    {
      if (label)
      {
      }

      {
      }
    }
    else
    {
      {
        filename = arg;
        tmp___1 = grepfile(- 100, arg, 1, 1);
      }
      return tmp___1;
    }

  }
}

void usage(int status);
void usage(int status)
{
}

static void Gcompile(const char *pattern, size_t size)
{
  {
    {
      GEAcompile(pattern, size, (((((1UL << 1) | ((1UL << 1) << 1)) | ((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | ((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1));
    }
    return;
  }
}

static void Ecompile(const char *pattern, size_t size)
{
  {
    {
      GEAcompile(pattern, size, (((((((((((1UL << 1) << 1) | (((1UL << 1) << 1) << 1)) | ((((1UL << 1) << 1) << 1) << 1)) | ((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | ((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | ((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1));
    }
    return;
  }
}

static void Acompile(const char *pattern, size_t size)
{
}

static void GAcompile(const char *pattern, size_t size)
{
}

static void PAcompile(const char *pattern, size_t size)
{
}

static const struct matcher matchers[8] = {{{(const char) 'g', (const char) 'r', (const char) 'e', (const char) 'p', (const char) '\000'}, & Gcompile, & EGexecute}, {{(const char) 'e', (const char) 'g', (const char) 'r', (const char) 'e', (const char) 'p', (const char) '\000'}, & Ecompile, & EGexecute}, {{(const char) 'f', (const char) 'g', (const char) 'r', (const char) 'e', (const char) 'p', (const char) '\000'}, & Fcompile, & Fexecute}, {{(const char) 'a', (const char) 'w', (const char) 'k', (const char) '\000'}, & Acompile, & EGexecute}, {{(const char) 'g', (const char) 'a', (const char) 'w', (const char) 'k', (const char) '\000'}, & GAcompile, & EGexecute}, {{(const char) 'p', (const char) 'o', (const char) 's', (const char) 'i', (const char) 'x', (const char) 'a', (const char) 'w', (const char) 'k', (const char) '\000'}, & PAcompile, & EGexecute}, {{(const char) 'p', (const char) 'e', (const char) 'r', (const char) 'l', (const char) '\000'}, & Pcompile, & Pexecute}, {{(const char) '\000'}, (void (*)(const char *, size_t)) ((void *) 0), (size_t (*)(const char *, size_t, size_t *, const char *)) ((void *) 0)}};
static void setmatcher(const char *m)
{
  const struct matcher *p;
  char *tmp;
  int tmp___0;
  int tmp___1;
  char *tmp___2;
  char *__cil_tmp9;
  char *__cil_tmp10;
  {
    if (matcher)
    {
      {
      }
      if (! (tmp___0 == 0))
      {
      }

    }

    p = matchers;
    {
      while (1)
      {
        while_continue:
        ;

        if (! p->compile)
        {
        }

        {
          tmp___1 = strcmp(m, (const char *) p->name);
        }
        if (tmp___1 == 0)
        {
          matcher = (const char *) p->name;
          compile = (void (*)(const char *, size_t)) p->compile;
          execute = (size_t (*)(const char *, size_t, size_t *, const char *)) p->execute;
          return;
        }

        p++;
      }

      while_break___0:
;      ;

    }
    while_break:
;    {
    }

  }
}

static size_t prepend_args(const char *options, char *buf, char **argv)
{
}

static int prepend_default_options(const char *options, int *pargc, char ***pargv)
{
  char *buf;
  size_t tmp;
  char *tmp___0;
  size_t prepended;
  size_t tmp___1;
  int argc;
  char *const *argv;
  char **pp;
  char **tmp___2;
  char *const *tmp___3;
  size_t tmp___4;
  char **tmp___5;
  char *tmp___6;
  char *const *tmp___7;
  {
    if (options)
    {
      if (* options)
      {
            while_continue___0:
            while_continue:
          while_break___0:
        while_break:
      }

    }

    return 0;
  }
}

static int get_nondigit_option(int argc, char *const *argv, intmax_t *default_context);
static int prev_digit_optind = - 1;
static int get_nondigit_option(int argc, char *const *argv, intmax_t *default_context)
{
  int this_digit_optind;
  int was_digit;
  char buf[((((((((sizeof(intmax_t)) * 8UL) - 1UL) * 146UL) + 484UL) / 485UL) + 1UL) + 1UL) + 4UL];
  char *p;
  int opt;
  char *tmp;
  void *__cil_tmp12;
  char *__cil_tmp13;
  {
    p = buf;
    was_digit = 0;
    this_digit_optind = optind;
    {
      while (1)
      {
        while_continue:
        ;

        {
          opt = getopt_long(argc, (char *const *) ((char **) argv), short_options, long_options, (int *) ((void *) 0));
        }
        if (48 <= opt)
        {
          if (! (opt <= 57))
          {
            goto while_break;
          }

        }
        else
        {
          goto while_break;
        }

        if (prev_digit_optind != this_digit_optind)
        {
        }
        else
          if (! was_digit)
        {
        }


        if (((unsigned long) p) == ((unsigned long) ((buf + (sizeof(buf))) - 4)))
        {
        }

      }

      while_break___0:
      ;

    }
    while_break:
    ;

    if (((unsigned long) p) != ((unsigned long) buf))
    {
      {
      }
    }

    return opt;
  }
}

static void parse_grep_colors(void)
{
}

static _Bool contains_encoding_error(const char *pat, size_t patlen)
{
}

static void fgrep_to_grep_pattern(size_t len, const char *keys, size_t *new_len, char **new_keys)
{
}

int main(int argc, char **argv)
{
  char *keys;
  size_t keycc;
  size_t oldcc;
  size_t keyalloc;
  int with_filenames;
  size_t cc;
  int opt;
  int status;
  int prepended;
  int prev_optind;
  int last_recursive;
  int fread_errno;
  intmax_t default_context;
  FILE *fp;
  char *tmp;
  char *tmp___0;
  int tmp___1;
  int tmp___2;
  ptrdiff_t tmp___3;
  size_t tmp___4;
  FILE *tmp___6;
  int tmp___7;
  int *tmp___8;
  int *tmp___9;
  int tmp___10;
  size_t tmp___11;
  strtol_error tmp___12;
  char *tmp___13;
  char *tmp___14;
  int tmp___15;
  int tmp___16;
  int tmp___17;
  int tmp___18;
  int tmp___19;
  int tmp___20;
  int tmp___21;
  int tmp___22;
  int tmp___23;
  int tmp___24;
  int tmp___25;
  int tmp___26;
  int tmp___27;
  int *tmp___28;
  int tmp___29;
  int tmp___30;
  int tmp___31;
  int tmp___32;
  char *userval;
  char *tmp___33;
  char *tmp___34;
  const char *tmp___35;
  struct stat tmp_stat;
  int tmp___36;
  int tmp___37;
  size_t new_keycc;
  char *new_keys;
  size_t tmp___38;
  _Bool tmp___39;
  size_t tmp___40;
  int tmp___41;
  int tmp___42;
  int tmp___43;
  void *__cil_tmp89;
  char *__cil_tmp90;
  char *__cil_tmp91;
  char *__cil_tmp92;
  char *__cil_tmp93;
  char *__cil_tmp94;
  char *__cil_tmp95;
  char *__cil_tmp96;
  char *__cil_tmp97;
  char *__cil_tmp98;
  char *__cil_tmp99;
  char *__cil_tmp100;
  char *__cil_tmp101;
  char *__cil_tmp102;
  char *__cil_tmp103;
  char *__cil_tmp104;
  char *__cil_tmp105;
  char *__cil_tmp106;
  char *__cil_tmp107;
  char *__cil_tmp108;
  {
    {
      exit_failure = (volatile int) 2;
      set_program_name((const char *) (* (argv + 0)));
      program_name = (const char *) (* (argv + 0));
      keys = (char *) ((void *) 0);
      keycc = (size_t) 0;
      with_filenames = 0;
      eolbyte = (unsigned char) '\n';
      filename_mask = ~ 0;
      max_count = 9223372036854775807L;
      out_before = (intmax_t) (- 1);
      out_after = out_before;
      default_context = (intmax_t) (- 1);
      only_matching = 0;
      setlocale(6, "");
      bindtextdomain("grep", "/usr/local/share/locale");
      textdomain("grep");
      exit_failure = (volatile int) 2;
      atexit(& clean_up_stdout);
      last_recursive = 0;
      tmp = getenv("GREP_OPTIONS");
      prepended = prepend_default_options((const char *) tmp, & argc, & argv);
      compile = (void (*)(const char *, size_t)) matchers[0].compile;
      execute = (size_t (*)(const char *, size_t, size_t *, const char *)) matchers[0].execute;
    }
    {
      while (1)
      {
        while_continue:
        ;

        {
          prev_optind = optind;
          opt = get_nondigit_option(argc, (char *const *) argv, & default_context);
        }
        if (! (opt != (- 1)))
        {
          goto while_break;
        }

        if (opt == 65)
        {
        }

        if (opt == 66)
        {
        }

        if (opt == 67)
        {
        }

        if (opt == 68)
        {
        }

        if (opt == 69)
        {
          goto case_69;
        }

        if (opt == 70)
        {
        }

        if (opt == 80)
        {
        }

        if (opt == 71)
        {
        }

        if (opt == 88)
        {
        }

        if (opt == 72)
        {
        }

        if (opt == 73)
        {
        }

        if (opt == 84)
        {
        }

        if (opt == 85)
        {
        }

        if (opt == 117)
        {
        }

        if (opt == 86)
        {
        }

        if (opt == 97)
        {
        }

        if (opt == 98)
        {
        }

        if (opt == 99)
        {
        }

        if (opt == 100)
        {
        }

        if (opt == 101)
        {
        }

        if (opt == 102)
        {
        }

        if (opt == 104)
        {
        }

        if (opt == 105)
        {
          goto case_105;
        }

        if (opt == 121)
        {
        }

        if (opt == 76)
        {
        }

        if (opt == 108)
        {
        }

        if (opt == 109)
        {
        }

        if (opt == 110)
        {
          goto case_110;
        }

        if (opt == 111)
        {
          goto case_111;
        }

        if (opt == 113)
        {
        }

        if (opt == 82)
        {
        }

        if (opt == 114)
        {
        }

        if (opt == 115)
        {
        }

        if (opt == 118)
        {
          goto case_118;
        }

        if (opt == 119)
        {
          goto case_119;
        }

        if (opt == 120)
        {
          goto case_120;
        }

        if (opt == 90)
        {
        }

        if (opt == 122)
        {
        }

        if (opt == 128)
        {
        }

        if (opt == 129)
        {
        }

        if (opt == 131)
        {
        }

        if (opt == 130)
        {
        }

        if (opt == 132)
        {
        }

        if (opt == 135)
        {
        }

        if (opt == 136)
        {
        }

        if (opt == 133)
        {
        }

        if (opt == 134)
        {
        }

        if (opt == 0)
        {
        }

        case_65:
;        {
        }

        case_66:
;        {
        }

        case_67:
;        {
        }

        case_68:
;        {
        }

        if (tmp___2 == 0)
        {
        }
        else
        {
          {
          }
          if (tmp___1 == 0)
          {
          }

        }

        case_69:
        {
          setmatcher("egrep");
        }

        goto switch_break;
        case_70:
;        {
        }

        case_80:
;        {
        }

        case_71:
;        {
        }

        case_88:
;        {
        }

        case_72:
;        with_filenames = 1;

        case_73:
;        binary_files = (enum __anonenum_binary_files_72) 2;

        case_84:
;        align_tabs = 1;

        case_85:
;        {
        }

        case_117:
;        {
        }

        case_86:
;        show_version = 1;

        case_97:
;        binary_files = (enum __anonenum_binary_files_72) 1;

        case_98:
;        out_byte = 1;

        case_99:
;        count_matches = 1;

        case_100:
;        {
        }

        if (((unsigned int) directories) == 3U)
        {
        }

        case_101:
;        {
        }

        case_102:
;        {
        }

        if (tmp___7 == 0)
        {
        }

        if (! fp)
        {
        }

        {
          while (1)
          {
            while_continue___0:
;            ;

            if (! (keyalloc <= (keycc + 1UL)))
            {
            }

          }

          while_break___4:
;          ;

        }
        while_break___0:
;        {
        }

        {
          while (1)
          {
            while_continue___1:
;            ;

            {
            }
            if (! (cc != 0UL))
            {
            }

            if (keycc == (keyalloc - 1UL))
            {
            }

          }

          while_break___5:
;          ;

        }
        while_break___1:
;        {
        }

        if (tmp___10)
        {
        }

        if (((unsigned long) fp) != ((unsigned long) stdin))
        {
        }

        if (oldcc != keycc)
        {
        }

        case_104:
;        with_filenames = 0;

        case_105:
        match_icase = 1;

        goto switch_break;
        case_76:
;        list_files = - 1;

        case_108:
;        list_files = 1;

        case_109:
;        {
        }

        if (((unsigned int) tmp___12) == 0U)
        {
        }

        if (((unsigned int) tmp___12) == 1U)
        {
        }

        case_0:
;        goto switch_break___0;

        switch_default:
;        {
        }

        switch_break___0:
;        ;

        case_110:
        out_line = 1;

        goto switch_break;
        case_111:
        only_matching = 1;

        goto switch_break;
        case_113:
;        exit_on_match = 1;

        case_82:
;        fts_options = 778;

        case_114:
;        directories = (enum directories_type) 3;

        case_115:
;        suppress_errors = 1;

        case_118:
        out_invert = (_Bool) 1;

        goto switch_break;
        case_119:
        match_words = 1;

        goto switch_break;
        case_120:
        match_lines = 1;

        goto switch_break;
        case_90:
;        filename_mask = 0;

        case_122:
;        eolbyte = (unsigned char) '\000';

        case_128:
;        {
        }

        if (tmp___17 == 0)
        {
        }
        else
        {
          {
          }
          if (tmp___16 == 0)
          {
          }
          else
          {
            {
            }
            if (tmp___15 == 0)
            {
            }

          }

        }

        case_129:
;        if (optarg)
        {
        }


        case_131:
;        if (! excluded_patterns)
        {
        }


        if (opt == 130)
        {
        }

        {
        }
        case_132:
;        if (! excluded_patterns)
        {
        }


        {
        }
        if (tmp___29 != 0)
        {
        }

        case_135:
;        if (! excluded_directory_patterns)
        {
        }


        {
        }
        case_136:
;        group_separator = (const char *) optarg;

        case_133:
;        line_buffered = 1;

        case_134:
;        label = optarg;

        case_0___0:
;        goto switch_break;

        switch_default___0:
;        {
        }

        switch_break:
        ;

      }

      while_break___3:
      ;

    }
    while_break:
    ;

    if (color_option == 2)
    {
      {
      }
      if (tmp___30)
      {
      }

    }

    {
      init_colorize();
    }
    if (exit_on_match)
    {
    }

    if (exit_on_match | list_files)
    {
    }

    out_quiet = count_matches | done_on_match;
    if (out_after < 0L)
    {
      out_after = default_context;
    }

    if (out_before < 0L)
    {
      out_before = default_context;
    }

    if (color_option)
    {
      {
      }
      if (((unsigned long) userval) != ((unsigned long) ((void *) 0)))
      {
      }

      {
      }
    }

    if (show_version)
    {
      {
      }
    }

    if (show_help)
    {
      {
      }
    }

    {
      tmp___36 = fstat(1, & tmp_stat);
    }
    if (tmp___36 == 0)
    {
      if ((tmp_stat.st_mode & 61440U) == 32768U)
      {
        out_stat = tmp_stat;
      }

    }

    if (keys)
    {
      if (keycc == 0UL)
      {
      }

    }
    else
      if (optind < argc)
    {
      {
        keycc = strlen((const char *) (* (argv + optind)));
        tmp___37 = optind;
        optind++;
        keys = (char *) xmemdup((const void *) (* (argv + tmp___37)), keycc + 1UL);
      }
    }


    if (((unsigned long) compile) == ((unsigned long) (& Fcompile)))
    {
      {
      }
      if (tmp___38 > 1UL)
      {
            _L:
      }

    }

    {
      tmp___40 = __ctype_get_mb_cur_max();
    }
    if (tmp___40 > 1UL)
    {
      {
        build_mbclen_cache();
      }
    }

    {
      (* compile)((const char *) keys, keycc);
      free((void *) keys);
    }
    if ((argc - optind) > 1)
    {
      if (! no_filenames)
      {
      }

    }
      _L___0:
;    if (with_filenames)
    {
    }



    {
      tmp___41 = isatty(1);
    }
    if (! tmp___41)
    {
      {
        set_binary_mode(1, 0);
      }
    }

    if (max_count == 0L)
    {
      {
      }
    }

    if (fts_options & 2)
    {
      if (((unsigned int) devices) == 0U)
      {
      }

    }

    if (optind < argc)
    {
      status = 1;
      {
        while (1)
        {
          while_continue___2:
          ;

          {
            tmp___42 = grep_command_line_arg((const char *) (* (argv + optind)));
            status &= tmp___42;
            optind++;
          }
          if (! (optind < argc))
          {
            goto while_break___2;
          }

        }

        while_break___6:
        ;

      }
      while_break___2:
      ;

    }
    else
      if (((unsigned int) directories) == 3U)
    {
    }


    if (errseen)
    {
    }
    else
    {
      tmp___43 = status;
    }

    {
      exit(tmp___43);
    }
  }
}

