# 1 "temp/grep-2.19.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "temp/grep-2.19.c"
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
  {
    if ((* x) < (((- 0x7FFFFFFFFFFFFFFF) - 1) / ((long) scale_factor)))
    {
      * x = (- 0x7FFFFFFFFFFFFFFF) - 1;
      return (strtol_error) 1;
    }

    if ((9223372036854775807L / ((long) scale_factor)) < (* x))
    {
      * x = 9223372036854775807L;
      return (strtol_error) 1;
    }

    * x *= (intmax_t) scale_factor;
    return (strtol_error) 0;
  }
}

static strtol_error bkm_scale_by_power___1(intmax_t *x, int base, int power)
{
  strtol_error err;
  strtol_error tmp;
  int tmp___0;
  {
    err = (strtol_error) 0;
    {
      while (1)
      {
        while_continue:
        ;

        tmp___0 = power;
        power--;
        if (! tmp___0)
        {
          goto while_break;
        }

        {
          tmp = bkm_scale___1(x, base);
          err = (strtol_error) (((unsigned int) err) | ((unsigned int) tmp));
        }
      }

      while_break___0:
      ;

    }
    while_break:
    ;

    return err;
  }
}

strtol_error xstrtoimax(const char *s, char **ptr, int strtol_base, intmax_t *val, const char *valid_suffixes)
{
  char *t_ptr;
  char **p;
  intmax_t tmp;
  strtol_error err;
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
        {
          __assert_fail("0 <= strtol_base && strtol_base <= 36", "/home/khheo/project/benchmark/grep-2.19/lib/xstrtol.c", 96U, "xstrtoimax");
        }
      }

    }
    else
    {
      {
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "/home/khheo/project/benchmark/grep-2.19/lib/xstrtol.c", 96U, "xstrtoimax");
      }
    }

    if (ptr)
    {
      p = ptr;
    }
    else
    {
      p = & t_ptr;
    }

    {
      tmp___1 = __errno_location();
      * tmp___1 = 0;
      tmp = strtoimax((const char *) s, (char **) p, strtol_base);
    }
    if (((unsigned long) (* p)) == ((unsigned long) s))
    {
      if (valid_suffixes)
      {
        if (* (* p))
        {
          {
            tmp___2 = strchr(valid_suffixes, (int) (* (* p)));
          }
          if (tmp___2)
          {
            tmp = (intmax_t) 1;
          }
          else
          {
            return (strtol_error) 4;
          }

        }
        else
        {
          return (strtol_error) 4;
        }

      }
      else
      {
        return (strtol_error) 4;
      }

    }
    else
    {
      {
        tmp___4 = __errno_location();
      }
      if ((* tmp___4) != 0)
      {
        {
          tmp___3 = __errno_location();
        }
        if ((* tmp___3) != 34)
        {
          return (strtol_error) 4;
        }

        err = (strtol_error) 1;
      }

    }

    if (! valid_suffixes)
    {
      * val = tmp;
      return err;
    }

    if (((int) (* (* p))) != 0)
    {
      {
        base = 1024;
        suffixes = 1;
        tmp___5 = strchr(valid_suffixes, (int) (* (* p)));
      }
      if (! tmp___5)
      {
        * val = tmp;
        return (strtol_error) (((unsigned int) err) | 2U);
      }

      {
        tmp___6 = strchr(valid_suffixes, '0');
      }
      if (tmp___6)
      {
        if (((int) (* ((* (p + 0)) + 1))) == 105)
        {
          goto case_105;
        }

        if (((int) (* ((* (p + 0)) + 1))) == 66)
        {
          goto case_66;
        }

        if (((int) (* ((* (p + 0)) + 1))) == 68)
        {
          goto case_66;
        }

        goto switch_break;
        case_105:
        if (((int) (* ((* (p + 0)) + 2))) == 66)
        {
          suffixes += 2;
        }


        goto switch_break;
        case_66:
        base = 1000;

        suffixes++;
        goto switch_break;
        switch_break:
        ;

      }

      if (((int) (* (* p))) == 98)
      {
        goto case_98;
      }

      if (((int) (* (* p))) == 66)
      {
        goto case_66___0;
      }

      if (((int) (* (* p))) == 99)
      {
        goto case_99;
      }

      if (((int) (* (* p))) == 69)
      {
        goto case_69;
      }

      if (((int) (* (* p))) == 71)
      {
        goto case_71;
      }

      if (((int) (* (* p))) == 103)
      {
        goto case_71;
      }

      if (((int) (* (* p))) == 107)
      {
        goto case_107;
      }

      if (((int) (* (* p))) == 75)
      {
        goto case_107;
      }

      if (((int) (* (* p))) == 77)
      {
        goto case_77;
      }

      if (((int) (* (* p))) == 109)
      {
        goto case_77;
      }

      if (((int) (* (* p))) == 80)
      {
        goto case_80;
      }

      if (((int) (* (* p))) == 84)
      {
        goto case_84;
      }

      if (((int) (* (* p))) == 116)
      {
        goto case_84;
      }

      if (((int) (* (* p))) == 119)
      {
        goto case_119;
      }

      if (((int) (* (* p))) == 89)
      {
        goto case_89;
      }

      if (((int) (* (* p))) == 90)
      {
        goto case_90;
      }

      goto switch_default;
      case_98:
      {
        overflow = bkm_scale___1(& tmp, 512);
      }

      goto switch_break___0;
      case_66___0:
      {
        overflow = bkm_scale___1(& tmp, 1024);
      }

      goto switch_break___0;
      case_99:
      overflow = (strtol_error) 0;

      goto switch_break___0;
      case_69:
      {
        overflow = bkm_scale_by_power___1(& tmp, base, 6);
      }

      goto switch_break___0;
      case_71:
      {
        overflow = bkm_scale_by_power___1(& tmp, base, 3);
      }

      goto switch_break___0;
      case_107:
      {
        overflow = bkm_scale_by_power___1(& tmp, base, 1);
      }

      goto switch_break___0;
      case_77:
      {
        overflow = bkm_scale_by_power___1(& tmp, base, 2);
      }

      goto switch_break___0;
      case_80:
      {
        overflow = bkm_scale_by_power___1(& tmp, base, 5);
      }

      goto switch_break___0;
      case_84:
      {
        overflow = bkm_scale_by_power___1(& tmp, base, 4);
      }

      goto switch_break___0;
      case_119:
      {
        overflow = bkm_scale___1(& tmp, 2);
      }

      goto switch_break___0;
      case_89:
      {
        overflow = bkm_scale_by_power___1(& tmp, base, 8);
      }

      goto switch_break___0;
      case_90:
      {
        overflow = bkm_scale_by_power___1(& tmp, base, 7);
      }

      goto switch_break___0;
      switch_default:
      * val = tmp;

      return (strtol_error) (((unsigned int) err) | 2U);
      switch_break___0:
      err = (strtol_error) (((unsigned int) err) | ((unsigned int) overflow));

      * p += suffixes;
      if (* (* p))
      {
        err = (strtol_error) (((unsigned int) err) | 2U);
      }

    }

    * val = tmp;
    return err;
  }
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
        xalloc_die();
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
        xalloc_die();
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
          xalloc_die();
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
  void *tmp;
  void *tmp___0;
  void *tmp___1;
  {
    if ((sizeof(char)) == 1UL)
    {
      {
        tmp = xmalloc(n);
        tmp___1 = tmp;
      }
    }
    else
    {
      {
        tmp___0 = xnmalloc(n, sizeof(char));
        tmp___1 = tmp___0;
      }
    }

    return (char *) tmp___1;
  }
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
        {
          xalloc_die();
        }
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
        {
          free(p);
        }
        return (void *) 0;
      }

    }

    {
      p = realloc(p, n);
    }
    if (! p)
    {
      if (n)
      {
        {
          xalloc_die();
        }
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
        xalloc_die();
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
  char *tmp;
  char *__cil_tmp3;
  {
    {
      tmp = gettext("memory exhausted");
      error((int) exit_failure, 0, "%s", tmp);
      abort();
    }
  }
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
  char *tmp;
  char *tmp___0;
  char *tmp___1;
  char *tmp___2;
  char *tmp___3;
  char *tmp___4;
  char *tmp___5;
  char *tmp___6;
  char *tmp___7;
  char *tmp___8;
  char *tmp___9;
  char *tmp___10;
  char *__cil_tmp31;
  char *__cil_tmp32;
  char *__cil_tmp33;
  char *__cil_tmp34;
  char *__cil_tmp35;
  char *__cil_tmp36;
  char *__cil_tmp37;
  char *__cil_tmp38;
  char *__cil_tmp39;
  char *__cil_tmp40;
  char *__cil_tmp41;
  char *__cil_tmp42;
  {
    if (command_name)
    {
      {
        fprintf((FILE *) stream, (const char *) "%s (%s) %s\n", command_name, package, version);
      }
    }
    else
    {
      {
        fprintf((FILE *) stream, (const char *) "%s %s\n", package, version);
      }
    }

    {
      tmp = gettext("(C)");
      fprintf((FILE *) stream, (const char *) version_etc_copyright, tmp, 2014);
      tmp___0 = gettext("\nLicense GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n");
      fputs_unlocked((const char *) ((const char *) tmp___0), (FILE *) stream);
    }
    if (n_authors == 0UL)
    {
      goto case_0;
    }

    if (n_authors == 1UL)
    {
      goto case_1;
    }

    if (n_authors == 2UL)
    {
      goto case_2;
    }

    if (n_authors == 3UL)
    {
      goto case_3;
    }

    if (n_authors == 4UL)
    {
      goto case_4;
    }

    if (n_authors == 5UL)
    {
      goto case_5;
    }

    if (n_authors == 6UL)
    {
      goto case_6;
    }

    if (n_authors == 7UL)
    {
      goto case_7;
    }

    if (n_authors == 8UL)
    {
      goto case_8;
    }

    if (n_authors == 9UL)
    {
      goto case_9;
    }

    goto switch_default;
    case_0:
    {
      abort();
    }

    case_1:
    {
      tmp___1 = gettext("Written by %s.\n");
      fprintf((FILE *) stream, (const char *) ((const char *) tmp___1), * (authors + 0));
    }

    goto switch_break;
    case_2:
    {
      tmp___2 = gettext("Written by %s and %s.\n");
      fprintf((FILE *) stream, (const char *) ((const char *) tmp___2), * (authors + 0), * (authors + 1));
    }

    goto switch_break;
    case_3:
    {
      tmp___3 = gettext("Written by %s, %s, and %s.\n");
      fprintf((FILE *) stream, (const char *) ((const char *) tmp___3), * (authors + 0), * (authors + 1), * (authors + 2));
    }

    goto switch_break;
    case_4:
    {
      tmp___4 = gettext("Written by %s, %s, %s,\nand %s.\n");
      fprintf((FILE *) stream, (const char *) ((const char *) tmp___4), * (authors + 0), * (authors + 1), * (authors + 2), * (authors + 3));
    }

    goto switch_break;
    case_5:
    {
      tmp___5 = gettext("Written by %s, %s, %s,\n%s, and %s.\n");
      fprintf((FILE *) stream, (const char *) ((const char *) tmp___5), * (authors + 0), * (authors + 1), * (authors + 2), * (authors + 3), * (authors + 4));
    }

    goto switch_break;
    case_6:
    {
      tmp___6 = gettext("Written by %s, %s, %s,\n%s, %s, and %s.\n");
      fprintf((FILE *) stream, (const char *) ((const char *) tmp___6), * (authors + 0), * (authors + 1), * (authors + 2), * (authors + 3), * (authors + 4), * (authors + 5));
    }

    goto switch_break;
    case_7:
    {
      tmp___7 = gettext("Written by %s, %s, %s,\n%s, %s, %s, and %s.\n");
      fprintf((FILE *) stream, (const char *) ((const char *) tmp___7), * (authors + 0), * (authors + 1), * (authors + 2), * (authors + 3), * (authors + 4), * (authors + 5), * (authors + 6));
    }

    goto switch_break;
    case_8:
    {
      tmp___8 = gettext("Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n");
      fprintf((FILE *) stream, (const char *) ((const char *) tmp___8), * (authors + 0), * (authors + 1), * (authors + 2), * (authors + 3), * (authors + 4), * (authors + 5), * (authors + 6), * (authors + 7));
    }

    goto switch_break;
    case_9:
    {
      tmp___9 = gettext("Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n");
      fprintf((FILE *) stream, (const char *) ((const char *) tmp___9), * (authors + 0), * (authors + 1), * (authors + 2), * (authors + 3), * (authors + 4), * (authors + 5), * (authors + 6), * (authors + 7), * (authors + 8));
    }

    goto switch_break;
    switch_default:
    {
      tmp___10 = gettext("Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n");
      fprintf((FILE *) stream, (const char *) ((const char *) tmp___10), * (authors + 0), * (authors + 1), * (authors + 2), * (authors + 3), * (authors + 4), * (authors + 5), * (authors + 6), * (authors + 7), * (authors + 8));
    }

    goto switch_break;
    switch_break:
    ;

    return;
  }
}

void version_etc_va(FILE *stream, const char *command_name, const char *package, const char *version, va_list authors)
{
  size_t n_authors;
  const char *authtab[10];
  const char *tmp;
  void *__cil_tmp10;
  {
    n_authors = (size_t) 0;
    {
      while (1)
      {
        while_continue:
        ;

        if (n_authors < 10UL)
        {
          {
          }
          if (! (((unsigned long) tmp) != ((unsigned long) ((void *) 0))))
          {
            goto while_break;
          }

        }
        else
        {
          goto while_break;
        }

        n_authors++;
      }

      while_break___0:
      ;

    }
    while_break:
    {
      version_etc_arn(stream, command_name, package, version, (const char *const *) authtab, n_authors);
    }

    return;
  }
}

void version_etc(FILE *stream, const char *command_name, const char *package, const char *version, ...);
void version_etc(FILE *stream, const char *command_name, const char *package, const char *version, ...)
{
  va_list authors;
  {
    {
      __builtin_va_start(authors, version);
      version_etc_va(stream, command_name, package, version, authors);
      __builtin_va_end(authors);
    }
    return;
  }
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
  _Bool tmp;
  {
    if (((unsigned long) old_mbc->ptr) == ((unsigned long) (& old_mbc->buf[0])))
    {
      {
        memcpy((void *) ((void *) (& new_mbc->buf[0])), (const void *) ((const void *) (& old_mbc->buf[0])), (size_t) old_mbc->bytes);
        new_mbc->ptr = (const char *) (& new_mbc->buf[0]);
      }
    }
    else
    {
      new_mbc->ptr = (const char *) old_mbc->ptr;
    }

    new_mbc->bytes = (size_t) old_mbc->bytes;
    tmp = (_Bool) old_mbc->wc_valid;
    new_mbc->wc_valid = tmp;
    if (tmp)
    {
      new_mbc->wc = (wchar_t) old_mbc->wc;
    }

    return;
  }
}

const unsigned int is_basic_table[8];
_Bool is_basic(char c)
{
  {
    return (_Bool) ((is_basic_table[((int) ((unsigned char) c)) >> 5] >> (((int) ((unsigned char) c)) & 31)) & 1U);
  }
}

void mbiter_multi_next(struct mbiter_multi *iter)
{
  int tmp;
  int tmp___0;
  _Bool tmp___1;
  {
    if (iter->next_done)
    {
      return;
    }

    if (iter->in_shift)
    {
      goto with_shift;
    }

    {
      tmp___1 = is_basic((char) (* iter->cur.ptr));
    }
    if (tmp___1)
    {
      iter->cur.bytes = (size_t) 1;
      iter->cur.wc = (wchar_t) (* iter->cur.ptr);
      iter->cur.wc_valid = (_Bool) 1;
    }
    else
    {
      {
        tmp = mbsinit((const mbstate_t *) (& iter->state));
      }
      if (! tmp)
      {
        {
          __assert_fail("mbsinit (&iter->state)", "/home/khheo/project/benchmark/grep-2.19/lib/mbiter.h", 142U, "mbiter_multi_next");
        }
      }

      iter->in_shift = (_Bool) 1;
      with_shift:
      {
        iter->cur.bytes = mbrtowc((wchar_t *) (& iter->cur.wc), (const char *) iter->cur.ptr, (size_t) (iter->limit - iter->cur.ptr), (mbstate_t *) (& iter->state));
      }

      if (iter->cur.bytes == 0xffffffffffffffffUL)
      {
        iter->cur.bytes = (size_t) 1;
        iter->cur.wc_valid = (_Bool) 0;
      }
      else
        if (iter->cur.bytes == 0xfffffffffffffffeUL)
      {
        iter->cur.bytes = (size_t) (iter->limit - iter->cur.ptr);
        iter->cur.wc_valid = (_Bool) 0;
      }
      else
      {
        if (iter->cur.bytes == 0UL)
        {
          iter->cur.bytes = (size_t) 1;
          if (! (((const int) (* iter->cur.ptr)) == 0))
          {
            {
              __assert_fail("*iter->cur.ptr == \'\\0\'", "/home/khheo/project/benchmark/grep-2.19/lib/mbiter.h", 169U, "mbiter_multi_next");
            }
          }

          if (! (iter->cur.wc == 0))
          {
            {
              __assert_fail("iter->cur.wc == 0", "/home/khheo/project/benchmark/grep-2.19/lib/mbiter.h", 170U, "mbiter_multi_next");
            }
          }

        }

        {
          iter->cur.wc_valid = (_Bool) 1;
          tmp___0 = mbsinit((const mbstate_t *) (& iter->state));
        }
        if (tmp___0)
        {
          iter->in_shift = (_Bool) 0;
        }

      }


    }

    iter->next_done = (_Bool) 1;
    return;
  }
}

char *trim2(const char *s, int how)
{
  char *d;
  mbi_iterator_t i;
  size_t tmp;
  int tmp___0;
  size_t tmp___1;
  unsigned int state;
  char *r;
  size_t tmp___2;
  int tmp___3;
  int tmp___4;
  int tmp___5;
  int tmp___6;
  int tmp___7;
  char *p;
  const unsigned short **tmp___8;
  size_t tmp___9;
  size_t tmp___10;
  const unsigned short **tmp___11;
  size_t tmp___12;
  void *__cil_tmp24;
  void *__cil_tmp25;
  {
    {
      d = strdup(s);
    }
    if (! d)
    {
      {
        xalloc_die();
      }
    }

    {
      tmp___12 = __ctype_get_mb_cur_max();
    }
    if (tmp___12 > 1UL)
    {
      if (how != 0)
      {
        {
          i.cur.ptr = (const char *) d;
          tmp = strlen((const char *) d);
          i.limit = i.cur.ptr + tmp;
          i.in_shift = (_Bool) 0;
          memset((void *) (& i.state), '\000', sizeof(mbstate_t));
          i.next_done = (_Bool) 0;
        }
        {
          while (1)
          {
            while_continue:
            ;

            if (((unsigned long) i.cur.ptr) < ((unsigned long) i.limit))
            {
              {
                mbiter_multi_next(& i);
              }
              if (i.cur.wc_valid)
              {
                {
                  tmp___0 = iswspace((wint_t) i.cur.wc);
                }
                if (! tmp___0)
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

            i.cur.ptr += i.cur.bytes;
            i.next_done = (_Bool) 0;
          }

          while_break___3:
          ;

        }
        while_break:
        {
          tmp___1 = strlen(i.cur.ptr);
          memmove((void *) d, (const void *) i.cur.ptr, tmp___1 + 1UL);
        }

      }

      if (how != 1)
      {
        {
          state = 0U;
          i.cur.ptr = (const char *) d;
          tmp___2 = strlen((const char *) d);
          i.limit = i.cur.ptr + tmp___2;
          i.in_shift = (_Bool) 0;
          memset((void *) (& i.state), '\000', sizeof(mbstate_t));
          i.next_done = (_Bool) 0;
        }
        {
          while (1)
          {
            while_continue___0:
            ;

            if (((unsigned long) i.cur.ptr) < ((unsigned long) i.limit))
            {
              {
                mbiter_multi_next(& i);
              }
            }
            else
            {
              goto while_break___0;
            }

            if (state == 0U)
            {
              if (i.cur.wc_valid)
              {
                {
                  tmp___3 = iswspace((wint_t) i.cur.wc);
                }
                if (tmp___3)
                {
                  goto __Cont;
                }

              }

            }

            if (state == 0U)
            {
              if (i.cur.wc_valid)
              {
                {
                  tmp___4 = iswspace((wint_t) i.cur.wc);
                }
                if (! tmp___4)
                {
                  state = 1U;
                  goto __Cont;
                }

              }
              else
              {
                state = 1U;
                goto __Cont;
              }

            }

            if (state == 1U)
            {
              if (i.cur.wc_valid)
              {
                {
                  tmp___5 = iswspace((wint_t) i.cur.wc);
                }
                if (! tmp___5)
                {
                  goto __Cont;
                }

              }
              else
              {
                goto __Cont;
              }

            }

            if (state == 1U)
            {
              if (i.cur.wc_valid)
              {
                {
                  tmp___7 = iswspace((wint_t) i.cur.wc);
                }
                if (tmp___7)
                {
                  state = 2U;
                  r = (char *) i.cur.ptr;
                }
                else
                {
                  goto _L;
                }

              }
              else
              {
                goto _L;
              }

            }
            else
              _L:
            if (state == 2U)
            {
              if (i.cur.wc_valid)
              {
                {
                  tmp___6 = iswspace((wint_t) i.cur.wc);
                }
                if (! tmp___6)
                {
                  state = 1U;
                }

              }
              else
              {
                state = 1U;
              }

            }
            else
            {
              state = 1U;
            }



            __Cont:
            i.cur.ptr += i.cur.bytes;

            i.next_done = (_Bool) 0;
          }

          while_break___4:
          ;

        }
        while_break___0:
        ;

        if (state == 2U)
        {
          * r = (char) '\000';
        }

      }

    }
    else
    {
      if (how != 0)
      {
        p = d;
        {
          while (1)
          {
            while_continue___1:
            ;

            if (* p)
            {
              {
                tmp___8 = __ctype_b_loc();
              }
              if (! (((const int) (* ((* tmp___8) + ((int) ((unsigned char) (* p)))))) & 8192))
              {
                goto while_break___1;
              }

            }
            else
            {
              goto while_break___1;
            }

            p++;
          }

          while_break___5:
          ;

        }
        while_break___1:
        {
          tmp___9 = strlen((const char *) p);
          memmove((void *) d, (const void *) p, tmp___9 + 1UL);
        }

      }

      if (how != 1)
      {
        {
          tmp___10 = strlen((const char *) d);
          p = (d + tmp___10) - 1;
        }
        {
          while (1)
          {
            while_continue___2:
            ;

            if (((unsigned long) p) >= ((unsigned long) d))
            {
              {
                tmp___11 = __ctype_b_loc();
              }
              if (! (((const int) (* ((* tmp___11) + ((int) ((unsigned char) (* p)))))) & 8192))
              {
                goto while_break___2;
              }

            }
            else
            {
              goto while_break___2;
            }

            * p = (char) '\000';
            p--;
          }

          while_break___6:
          ;

        }
        while_break___2:
        ;

      }

    }

    return d;
  }
}

size_t strnlen1(const char *string, size_t maxlen);
extern void *memchr(const void *__s, int __c, size_t __n);
size_t strnlen1(const char *string, size_t maxlen);
size_t strnlen1(const char *string, size_t maxlen)
{
  const char *end;
  const char *tmp;
  {
    {
      tmp = (const char *) memchr((const void *) string, '\000', maxlen);
      end = tmp;
    }
    if (((unsigned long) end) != ((unsigned long) ((void *) 0)))
    {
      return (size_t) ((end - string) + 1L);
    }
    else
    {
      return maxlen;
    }

  }
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
            tmp___1 = __errno_location();
          }
          if ((* tmp___1) == 4)
          {
            goto __Cont;
          }
          else
          {
            {
              tmp___0 = __errno_location();
            }
            if ((* tmp___0) == 22)
            {
              if (2147475456UL < count)
              {
                count = (size_t) 2147475456;
              }
              else
              {
                return (size_t) result;
              }

            }
            else
            {
              return (size_t) result;
            }

          }

        }

        __Cont:
        ;

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
  unsigned char uc;
  unsigned int *p;
  struct quoting_options *tmp;
  int shift;
  int r;
  {
    uc = (unsigned char) c;
    if (o)
    {
      tmp = o;
    }
    else
    {
      tmp = & default_quoting_options;
    }

    p = tmp->quote_these_too + (((unsigned long) uc) / ((sizeof(int)) * 8UL));
    shift = (int) (((unsigned long) uc) % ((sizeof(int)) * 8UL));
    r = (int) (((* p) >> shift) & 1U);
    * p ^= (unsigned int) (((i & 1) ^ r) << shift);
    return r;
  }
}

static struct quoting_options quoting_options_from_style(enum quoting_style style)
{
  struct quoting_options o;
  unsigned int tmp;
  void *__cil_tmp5;
  {
    o.style = (enum quoting_style) 0;
    o.flags = 0;
    o.quote_these_too[0] = 0U;
    tmp = 1U;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (! (tmp >= 8U)))
        {
          goto while_break;
        }

        o.quote_these_too[tmp] = 0U;
        tmp++;
      }

      while_break___0:
      ;

    }
    while_break:
    o.left_quote = (const char *) ((void *) 0);

    o.right_quote = (const char *) ((void *) 0);
    if (((unsigned int) style) == 8U)
    {
      {
        abort();
      }
    }

    o.style = style;
    return o;
  }
}

static const char *gettext_quote(const char *msgid, enum quoting_style s)
{
  const char *translation;
  const char *tmp;
  const char *locale_code;
  const char *tmp___0;
  int tmp___1;
  const char *tmp___2;
  int tmp___3;
  const char *tmp___4;
  char *__cil_tmp20;
  char *__cil_tmp21;
  char *__cil_tmp22;
  char *__cil_tmp23;
  char *__cil_tmp24;
  char *__cil_tmp25;
  char *__cil_tmp26;
  char *__cil_tmp27;
  {
    {
      tmp = (const char *) gettext(msgid);
      translation = tmp;
    }
    if (((unsigned long) translation) != ((unsigned long) msgid))
    {
      return translation;
    }

    {
      locale_code = locale_charset();
      tmp___1 = c_strcasecmp(locale_code, "UTF-8");
    }
    if (tmp___1 == 0)
    {
      if (((const int) (* (msgid + 0))) == 96)
      {
        tmp___0 = "\342\200\230";
      }
      else
      {
        tmp___0 = "\342\200\231";
      }

      return tmp___0;
    }

    {
      tmp___3 = c_strcasecmp(locale_code, "GB18030");
    }
    if (tmp___3 == 0)
    {
      if (((const int) (* (msgid + 0))) == 96)
      {
        tmp___2 = "\241\ae";
      }
      else
      {
        tmp___2 = "\241\257";
      }

      return tmp___2;
    }

    if (((unsigned int) s) == 7U)
    {
      tmp___4 = "\"";
    }
    else
    {
      tmp___4 = "\'";
    }

    return tmp___4;
  }
}

static size_t quotearg_buffer_restyled(char *buffer___0, size_t buffersize, const char *arg, size_t argsize, enum quoting_style quoting_style, int flags, const unsigned int *quote_these_too, const char *left_quote, const char *right_quote)
{
  size_t i;
  size_t len;
  const char *quote_string;
  size_t quote_string_len;
  _Bool backslash_escapes;
  _Bool unibyte_locale;
  size_t tmp;
  _Bool elide_outer_quotes;
  unsigned char c;
  unsigned char esc;
  _Bool is_right_quote;
  size_t tmp___0;
  int tmp___1;
  int tmp___2;
  size_t m;
  _Bool printable;
  const unsigned short **tmp___3;
  mbstate_t mbstate;
  wchar_t w;
  size_t bytes;
  size_t tmp___4;
  size_t j;
  int tmp___5;
  int tmp___6;
  size_t ilim;
  int tmp___7;
  size_t tmp___8;
  void *__cil_tmp42;
  char *__cil_tmp43;
  char *__cil_tmp44;
  char *__cil_tmp45;
  char *__cil_tmp46;
  {
    {
      len = (size_t) 0;
      quote_string = (const char *) 0;
      quote_string_len = (size_t) 0;
      backslash_escapes = (_Bool) 0;
      tmp = __ctype_get_mb_cur_max();
      unibyte_locale = (_Bool) (tmp == 1UL);
      elide_outer_quotes = (_Bool) ((flags & 2) != 0);
    }
    if (((unsigned int) quoting_style) == 4U)
    {
      goto case_4;
    }

    if (((unsigned int) quoting_style) == 3U)
    {
      goto case_3;
    }

    if (((unsigned int) quoting_style) == 5U)
    {
      goto case_5;
    }

    if (((unsigned int) quoting_style) == 6U)
    {
      goto case_6;
    }

    if (((unsigned int) quoting_style) == 7U)
    {
      goto case_6;
    }

    if (((unsigned int) quoting_style) == 8U)
    {
      goto case_6;
    }

    if (((unsigned int) quoting_style) == 1U)
    {
      goto case_1;
    }

    if (((unsigned int) quoting_style) == 2U)
    {
      goto case_2;
    }

    if (((unsigned int) quoting_style) == 0U)
    {
      goto case_0;
    }

    goto switch_default;
    case_4:
    quoting_style = (enum quoting_style) 3;

    elide_outer_quotes = (_Bool) 1;
    case_3:
    if (! elide_outer_quotes)
    {
      {
        while (1)
        {
          while_continue:
          ;

          if (len < buffersize)
          {
            * (buffer___0 + len) = (char) '\"';
          }

          len++;
          goto while_break;
        }

        while_break___27:
        ;

      }
      while_break:
      ;

    }


    backslash_escapes = (_Bool) 1;
    quote_string = "\"";
    quote_string_len = (size_t) 1;
    goto switch_break;
    case_5:
    backslash_escapes = (_Bool) 1;

    elide_outer_quotes = (_Bool) 0;
    goto switch_break;
    case_6:
    if (((unsigned int) quoting_style) != 8U)
    {
      {
        left_quote = gettext_quote("`", quoting_style);
        right_quote = gettext_quote("\'", quoting_style);
      }
    }


    if (! elide_outer_quotes)
    {
      quote_string = left_quote;
      {
        while (1)
        {
          while_continue___0:
          ;

          if (! (* quote_string))
          {
            goto while_break___0;
          }

          {
            while (1)
            {
              while_continue___1:
              ;

              if (len < buffersize)
              {
                * (buffer___0 + len) = (char) (* quote_string);
              }

              len++;
              goto while_break___1;
            }

            while_break___29:
            ;

          }
          while_break___1:
          quote_string++;

        }

        while_break___28:
        ;

      }
      while_break___0:
      ;

    }

    {
      backslash_escapes = (_Bool) 1;
      quote_string = right_quote;
      quote_string_len = strlen(quote_string);
    }
    goto switch_break;
    case_1:
    quoting_style = (enum quoting_style) 2;

    elide_outer_quotes = (_Bool) 1;
    case_2:
    if (! elide_outer_quotes)
    {
      {
        while (1)
        {
          while_continue___2:
          ;

          if (len < buffersize)
          {
            * (buffer___0 + len) = (char) '\'';
          }

          len++;
          goto while_break___2;
        }

        while_break___30:
        ;

      }
      while_break___2:
      ;

    }


    quote_string = "\'";
    quote_string_len = (size_t) 1;
    goto switch_break;
    case_0:
    elide_outer_quotes = (_Bool) 0;

    goto switch_break;
    switch_default:
    {
      abort();
    }

    switch_break:
    i = (size_t) 0;

    {
      while (1)
      {
        while_continue___3:
        ;

        if (argsize == 0xffffffffffffffffUL)
        {
          tmp___7 = ((const int) (* (arg + i))) == 0;
        }
        else
        {
          tmp___7 = i == argsize;
        }

        if (tmp___7)
        {
          goto while_break___3;
        }

        is_right_quote = (_Bool) 0;
        if (backslash_escapes)
        {
          if (quote_string_len)
          {
            if (argsize == 0xffffffffffffffffUL)
            {
              if (1UL < quote_string_len)
              {
                {
                  argsize = strlen(arg);
                  tmp___0 = argsize;
                }
              }
              else
              {
                tmp___0 = argsize;
              }

            }
            else
            {
              tmp___0 = argsize;
            }

            if ((i + quote_string_len) <= tmp___0)
            {
              {
                tmp___1 = memcmp((const void *) (arg + i), (const void *) quote_string, quote_string_len);
              }
              if (tmp___1 == 0)
              {
                if (elide_outer_quotes)
                {
                  goto force_outer_quoting_style;
                }

                is_right_quote = (_Bool) 1;
              }

            }

          }

        }

        c = (unsigned char) (* (arg + i));
        if (((int) c) == 0)
        {
          goto case_0___0;
        }

        if (((int) c) == 63)
        {
          goto case_63;
        }

        if (((int) c) == 7)
        {
          goto case_7___0;
        }

        if (((int) c) == 8)
        {
          goto case_8___0;
        }

        if (((int) c) == 12)
        {
          goto case_12;
        }

        if (((int) c) == 10)
        {
          goto case_10;
        }

        if (((int) c) == 13)
        {
          goto case_13;
        }

        if (((int) c) == 9)
        {
          goto case_9;
        }

        if (((int) c) == 11)
        {
          goto case_11;
        }

        if (((int) c) == 92)
        {
          goto case_92;
        }

        if (((int) c) == 123)
        {
          goto case_123;
        }

        if (((int) c) == 125)
        {
          goto case_123;
        }

        if (((int) c) == 35)
        {
          goto case_35;
        }

        if (((int) c) == 126)
        {
          goto case_35;
        }

        if (((int) c) == 32)
        {
          goto case_32;
        }

        if (((int) c) == 33)
        {
          goto case_32;
        }

        if (((int) c) == 34)
        {
          goto case_32;
        }

        if (((int) c) == 36)
        {
          goto case_32;
        }

        if (((int) c) == 38)
        {
          goto case_32;
        }

        if (((int) c) == 40)
        {
          goto case_32;
        }

        if (((int) c) == 41)
        {
          goto case_32;
        }

        if (((int) c) == 42)
        {
          goto case_32;
        }

        if (((int) c) == 59)
        {
          goto case_32;
        }

        if (((int) c) == 60)
        {
          goto case_32;
        }

        if (((int) c) == 61)
        {
          goto case_32;
        }

        if (((int) c) == 62)
        {
          goto case_32;
        }

        if (((int) c) == 91)
        {
          goto case_32;
        }

        if (((int) c) == 94)
        {
          goto case_32;
        }

        if (((int) c) == 96)
        {
          goto case_32;
        }

        if (((int) c) == 124)
        {
          goto case_32;
        }

        if (((int) c) == 39)
        {
          goto case_39___0;
        }

        if (((int) c) == 37)
        {
          goto case_37;
        }

        if (((int) c) == 43)
        {
          goto case_37;
        }

        if (((int) c) == 44)
        {
          goto case_37;
        }

        if (((int) c) == 45)
        {
          goto case_37;
        }

        if (((int) c) == 46)
        {
          goto case_37;
        }

        if (((int) c) == 47)
        {
          goto case_37;
        }

        if (((int) c) == 48)
        {
          goto case_37;
        }

        if (((int) c) == 49)
        {
          goto case_37;
        }

        if (((int) c) == 50)
        {
          goto case_37;
        }

        if (((int) c) == 51)
        {
          goto case_37;
        }

        if (((int) c) == 52)
        {
          goto case_37;
        }

        if (((int) c) == 53)
        {
          goto case_37;
        }

        if (((int) c) == 54)
        {
          goto case_37;
        }

        if (((int) c) == 55)
        {
          goto case_37;
        }

        if (((int) c) == 56)
        {
          goto case_37;
        }

        if (((int) c) == 57)
        {
          goto case_37;
        }

        if (((int) c) == 58)
        {
          goto case_37;
        }

        if (((int) c) == 65)
        {
          goto case_37;
        }

        if (((int) c) == 66)
        {
          goto case_37;
        }

        if (((int) c) == 67)
        {
          goto case_37;
        }

        if (((int) c) == 68)
        {
          goto case_37;
        }

        if (((int) c) == 69)
        {
          goto case_37;
        }

        if (((int) c) == 70)
        {
          goto case_37;
        }

        if (((int) c) == 71)
        {
          goto case_37;
        }

        if (((int) c) == 72)
        {
          goto case_37;
        }

        if (((int) c) == 73)
        {
          goto case_37;
        }

        if (((int) c) == 74)
        {
          goto case_37;
        }

        if (((int) c) == 75)
        {
          goto case_37;
        }

        if (((int) c) == 76)
        {
          goto case_37;
        }

        if (((int) c) == 77)
        {
          goto case_37;
        }

        if (((int) c) == 78)
        {
          goto case_37;
        }

        if (((int) c) == 79)
        {
          goto case_37;
        }

        if (((int) c) == 80)
        {
          goto case_37;
        }

        if (((int) c) == 81)
        {
          goto case_37;
        }

        if (((int) c) == 82)
        {
          goto case_37;
        }

        if (((int) c) == 83)
        {
          goto case_37;
        }

        if (((int) c) == 84)
        {
          goto case_37;
        }

        if (((int) c) == 85)
        {
          goto case_37;
        }

        if (((int) c) == 86)
        {
          goto case_37;
        }

        if (((int) c) == 87)
        {
          goto case_37;
        }

        if (((int) c) == 88)
        {
          goto case_37;
        }

        if (((int) c) == 89)
        {
          goto case_37;
        }

        if (((int) c) == 90)
        {
          goto case_37;
        }

        if (((int) c) == 93)
        {
          goto case_37;
        }

        if (((int) c) == 95)
        {
          goto case_37;
        }

        if (((int) c) == 97)
        {
          goto case_37;
        }

        if (((int) c) == 98)
        {
          goto case_37;
        }

        if (((int) c) == 99)
        {
          goto case_37;
        }

        if (((int) c) == 100)
        {
          goto case_37;
        }

        if (((int) c) == 101)
        {
          goto case_37;
        }

        if (((int) c) == 102)
        {
          goto case_37;
        }

        if (((int) c) == 103)
        {
          goto case_37;
        }

        if (((int) c) == 104)
        {
          goto case_37;
        }

        if (((int) c) == 105)
        {
          goto case_37;
        }

        if (((int) c) == 106)
        {
          goto case_37;
        }

        if (((int) c) == 107)
        {
          goto case_37;
        }

        if (((int) c) == 108)
        {
          goto case_37;
        }

        if (((int) c) == 109)
        {
          goto case_37;
        }

        if (((int) c) == 110)
        {
          goto case_37;
        }

        if (((int) c) == 111)
        {
          goto case_37;
        }

        if (((int) c) == 112)
        {
          goto case_37;
        }

        if (((int) c) == 113)
        {
          goto case_37;
        }

        if (((int) c) == 114)
        {
          goto case_37;
        }

        if (((int) c) == 115)
        {
          goto case_37;
        }

        if (((int) c) == 116)
        {
          goto case_37;
        }

        if (((int) c) == 117)
        {
          goto case_37;
        }

        if (((int) c) == 118)
        {
          goto case_37;
        }

        if (((int) c) == 119)
        {
          goto case_37;
        }

        if (((int) c) == 120)
        {
          goto case_37;
        }

        if (((int) c) == 121)
        {
          goto case_37;
        }

        if (((int) c) == 122)
        {
          goto case_37;
        }

        goto switch_default___2;
        case_0___0:
        if (backslash_escapes)
        {
          if (elide_outer_quotes)
          {
            goto force_outer_quoting_style;
          }

          {
            while (1)
            {
              while_continue___4:
              ;

              if (len < buffersize)
              {
                * (buffer___0 + len) = (char) '\\';
              }

              len++;
              goto while_break___4;
            }

            while_break___32:
            ;

          }
          while_break___4:
          ;

          if ((i + 1UL) < argsize)
          {
            if (48 <= ((int) (* (arg + (i + 1UL)))))
            {
              if (((const int) (* (arg + (i + 1UL)))) <= 57)
              {
                {
                  while (1)
                  {
                    while_continue___5:
                    ;

                    if (len < buffersize)
                    {
                      * (buffer___0 + len) = (char) '0';
                    }

                    len++;
                    goto while_break___5;
                  }

                  while_break___33:
                  ;

                }
                while_break___5:
                ;

                {
                  while (1)
                  {
                    while_continue___6:
                    ;

                    if (len < buffersize)
                    {
                      * (buffer___0 + len) = (char) '0';
                    }

                    len++;
                    goto while_break___6;
                  }

                  while_break___34:
                  ;

                }
                while_break___6:
                ;

              }

            }

          }

          c = (unsigned char) '0';
        }
        else
          if (flags & 1)
        {
          goto __Cont;
        }



        goto switch_break___0;
        case_63:
        if (((unsigned int) quoting_style) == 2U)
        {
          goto case_2___0;
        }


        if (((unsigned int) quoting_style) == 3U)
        {
          goto case_3___0;
        }

        goto switch_default___1;
        case_2___0:
        if (elide_outer_quotes)
        {
          goto force_outer_quoting_style;
        }


        goto switch_break___1;
        case_3___0:
        if (flags & 4)
        {
          if ((i + 2UL) < argsize)
          {
            if (((const int) (* (arg + (i + 1UL)))) == 63)
            {
              if (((const int) (* (arg + (i + 2UL)))) == 33)
              {
                goto case_33;
              }

              if (((const int) (* (arg + (i + 2UL)))) == 39)
              {
                goto case_33;
              }

              if (((const int) (* (arg + (i + 2UL)))) == 40)
              {
                goto case_33;
              }

              if (((const int) (* (arg + (i + 2UL)))) == 41)
              {
                goto case_33;
              }

              if (((const int) (* (arg + (i + 2UL)))) == 45)
              {
                goto case_33;
              }

              if (((const int) (* (arg + (i + 2UL)))) == 47)
              {
                goto case_33;
              }

              if (((const int) (* (arg + (i + 2UL)))) == 60)
              {
                goto case_33;
              }

              if (((const int) (* (arg + (i + 2UL)))) == 61)
              {
                goto case_33;
              }

              if (((const int) (* (arg + (i + 2UL)))) == 62)
              {
                goto case_33;
              }

              goto switch_default___0;
              case_33:
              if (elide_outer_quotes)
              {
                goto force_outer_quoting_style;
              }


              c = (unsigned char) (* (arg + (i + 2UL)));
              i += 2UL;
              {
                while (1)
                {
                  while_continue___7:
                  ;

                  if (len < buffersize)
                  {
                    * (buffer___0 + len) = (char) '?';
                  }

                  len++;
                  goto while_break___7;
                }

                while_break___35:
                ;

              }
              while_break___7:
              ;

              {
                while (1)
                {
                  while_continue___8:
                  ;

                  if (len < buffersize)
                  {
                    * (buffer___0 + len) = (char) '\"';
                  }

                  len++;
                  goto while_break___8;
                }

                while_break___36:
                ;

              }
              while_break___8:
              ;

              {
                while (1)
                {
                  while_continue___9:
                  ;

                  if (len < buffersize)
                  {
                    * (buffer___0 + len) = (char) '\"';
                  }

                  len++;
                  goto while_break___9;
                }

                while_break___37:
                ;

              }
              while_break___9:
              ;

              {
                while (1)
                {
                  while_continue___10:
                  ;

                  if (len < buffersize)
                  {
                    * (buffer___0 + len) = (char) '?';
                  }

                  len++;
                  goto while_break___10;
                }

                while_break___38:
                ;

              }
              while_break___10:
              ;

              goto switch_break___2;
              switch_default___0:
              goto switch_break___2;

              switch_break___2:
              ;

            }

          }

        }


        goto switch_break___1;
        switch_default___1:
        goto switch_break___1;

        switch_break___1:
        ;

        goto switch_break___0;
        case_7___0:
        esc = (unsigned char) 'a';

        goto c_escape;
        case_8___0:
        esc = (unsigned char) 'b';

        goto c_escape;
        case_12:
        esc = (unsigned char) 'f';

        goto c_escape;
        case_10:
        esc = (unsigned char) 'n';

        goto c_and_shell_escape;
        case_13:
        esc = (unsigned char) 'r';

        goto c_and_shell_escape;
        case_9:
        esc = (unsigned char) 't';

        goto c_and_shell_escape;
        case_11:
        esc = (unsigned char) 'v';

        goto c_escape;
        case_92:
        esc = c;

        if (backslash_escapes)
        {
          if (elide_outer_quotes)
          {
            if (quote_string_len)
            {
              goto store_c;
            }

          }

        }

        c_and_shell_escape:
        if (((unsigned int) quoting_style) == 2U)
        {
          if (elide_outer_quotes)
          {
            goto force_outer_quoting_style;
          }

        }


        c_escape:
        if (backslash_escapes)
        {
          c = esc;
          goto store_escape;
        }


        goto switch_break___0;
        case_123:
        if (argsize == 0xffffffffffffffffUL)
        {
          tmp___2 = ((const int) (* (arg + 1))) == 0;
        }
        else
        {
          tmp___2 = argsize == 1UL;
        }


        if (! tmp___2)
        {
          goto switch_break___0;
        }

        case_35:
        if (i != 0UL)
        {
          goto switch_break___0;
        }


        case_32:
        if (((unsigned int) quoting_style) == 2U)
        {
          if (elide_outer_quotes)
          {
            goto force_outer_quoting_style;
          }

        }


        goto switch_break___0;
        case_39___0:
        if (((unsigned int) quoting_style) == 2U)
        {
          if (elide_outer_quotes)
          {
            goto force_outer_quoting_style;
          }

          {
            while (1)
            {
              while_continue___11:
              ;

              if (len < buffersize)
              {
                * (buffer___0 + len) = (char) '\'';
              }

              len++;
              goto while_break___11;
            }

            while_break___39:
            ;

          }
          while_break___11:
          ;

          {
            while (1)
            {
              while_continue___12:
              ;

              if (len < buffersize)
              {
                * (buffer___0 + len) = (char) '\\';
              }

              len++;
              goto while_break___12;
            }

            while_break___40:
            ;

          }
          while_break___12:
          ;

          {
            while (1)
            {
              while_continue___13:
              ;

              if (len < buffersize)
              {
                * (buffer___0 + len) = (char) '\'';
              }

              len++;
              goto while_break___13;
            }

            while_break___41:
            ;

          }
          while_break___13:
          ;

        }


        goto switch_break___0;
        case_37:
        goto switch_break___0;

        switch_default___2:
        if (unibyte_locale)
        {
          {
            m = (size_t) 1;
            tmp___3 = __ctype_b_loc();
            printable = (_Bool) ((((const int) (* ((* tmp___3) + ((int) c)))) & 16384) != 0);
          }
        }
        else
        {
          {
            memset((void *) (& mbstate), 0, sizeof(mbstate));
            m = (size_t) 0;
            printable = (_Bool) 1;
          }
          if (argsize == 0xffffffffffffffffUL)
          {
            {
              argsize = strlen(arg);
            }
          }

          {
            while (1)
            {
              while_continue___14:
              ;

              {
                tmp___4 = mbrtowc((wchar_t *) (& w), (const char *) (arg + (i + m)), argsize - (i + m), (mbstate_t *) (& mbstate));
                bytes = tmp___4;
              }
              if (bytes == 0UL)
              {
                goto while_break___14;
              }
              else
                if (bytes == 0xffffffffffffffffUL)
              {
                printable = (_Bool) 0;
                goto while_break___14;
              }
              else
                if (bytes == 0xfffffffffffffffeUL)
              {
                printable = (_Bool) 0;
                {
                  while (1)
                  {
                    while_continue___15:
                    ;

                    if ((i + m) < argsize)
                    {
                      if (! (* (arg + (i + m))))
                      {
                        goto while_break___15;
                      }

                    }
                    else
                    {
                      goto while_break___15;
                    }

                    m++;
                  }

                  while_break___43:
                  ;

                }
                while_break___15:
                ;

                goto while_break___14;
              }
              else
              {
                if (elide_outer_quotes)
                {
                  if (((unsigned int) quoting_style) == 2U)
                  {
                    j = (size_t) 1;
                    {
                      while (1)
                      {
                        while_continue___16:
                        ;

                        if (! (j < bytes))
                        {
                          goto while_break___16;
                        }

                        if (((const int) (* (arg + ((i + m) + j)))) == 91)
                        {
                          goto case_91___0;
                        }

                        if (((const int) (* (arg + ((i + m) + j)))) == 92)
                        {
                          goto case_91___0;
                        }

                        if (((const int) (* (arg + ((i + m) + j)))) == 94)
                        {
                          goto case_91___0;
                        }

                        if (((const int) (* (arg + ((i + m) + j)))) == 96)
                        {
                          goto case_91___0;
                        }

                        if (((const int) (* (arg + ((i + m) + j)))) == 124)
                        {
                          goto case_91___0;
                        }

                        goto switch_default___3;
                        case_91___0:
                        goto force_outer_quoting_style;

                        switch_default___3:
                        goto switch_break___3;

                        switch_break___3:
                        j++;

                      }

                      while_break___44:
                      ;

                    }
                    while_break___16:
                    ;

                  }

                }

                {
                  tmp___5 = iswprint((wint_t) w);
                }
                if (! tmp___5)
                {
                  printable = (_Bool) 0;
                }

                m += bytes;
              }



              {
                tmp___6 = mbsinit((const mbstate_t *) (& mbstate));
              }
              if (tmp___6)
              {
                goto while_break___14;
              }

            }

            while_break___42:
            ;

          }
          while_break___14:
          ;

        }


        if (1UL < m)
        {
          goto _L___0;
        }
        else
          if (backslash_escapes)
        {
          if (! printable)
          {
            _L___0:
            ilim = i + m;

            {
              while (1)
              {
                while_continue___17:
                ;

                if (backslash_escapes)
                {
                  if (! printable)
                  {
                    if (elide_outer_quotes)
                    {
                      goto force_outer_quoting_style;
                    }

                    {
                      while (1)
                      {
                        while_continue___18:
                        ;

                        if (len < buffersize)
                        {
                          * (buffer___0 + len) = (char) '\\';
                        }

                        len++;
                        goto while_break___18;
                      }

                      while_break___46:
                      ;

                    }
                    while_break___18:
                    ;

                    {
                      while (1)
                      {
                        while_continue___19:
                        ;

                        if (len < buffersize)
                        {
                          * (buffer___0 + len) = (char) (48 + (((int) c) >> 6));
                        }

                        len++;
                        goto while_break___19;
                      }

                      while_break___47:
                      ;

                    }
                    while_break___19:
                    ;

                    {
                      while (1)
                      {
                        while_continue___20:
                        ;

                        if (len < buffersize)
                        {
                          * (buffer___0 + len) = (char) (48 + ((((int) c) >> 3) & 7));
                        }

                        len++;
                        goto while_break___20;
                      }

                      while_break___48:
                      ;

                    }
                    while_break___20:
                    c = (unsigned char) (48 + (((int) c) & 7));

                  }
                  else
                  {
                    goto _L;
                  }

                }
                else
                  _L:
                if (is_right_quote)
                {
                  {
                    while (1)
                    {
                      while_continue___21:
                      ;

                      if (len < buffersize)
                      {
                        * (buffer___0 + len) = (char) '\\';
                      }

                      len++;
                      goto while_break___21;
                    }

                    while_break___49:
                    ;

                  }
                  while_break___21:
                  is_right_quote = (_Bool) 0;

                }



                if (ilim <= (i + 1UL))
                {
                  goto while_break___17;
                }

                {
                  while (1)
                  {
                    while_continue___22:
                    ;

                    if (len < buffersize)
                    {
                      * (buffer___0 + len) = (char) c;
                    }

                    len++;
                    goto while_break___22;
                  }

                  while_break___50:
                  ;

                }
                while_break___22:
                i++;

                c = (unsigned char) (* (arg + i));
              }

              while_break___45:
              ;

            }
            while_break___17:
            ;

            goto store_c;
          }

        }


        switch_break___0:
        ;

        if (backslash_escapes)
        {
          goto _L___3;
        }
        else
          if (elide_outer_quotes)
        {
          _L___3:
          if (quote_these_too)
          {
            if (! (((* (quote_these_too + (((unsigned long) c) / ((sizeof(int)) * 8UL)))) >> (((unsigned long) c) % ((sizeof(int)) * 8UL))) & 1U))
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
          _L___2:
        if (! is_right_quote)
        {
          goto store_c;
        }




        store_escape:
        if (elide_outer_quotes)
        {
          goto force_outer_quoting_style;
        }


        {
          while (1)
          {
            while_continue___23:
            ;

            if (len < buffersize)
            {
              * (buffer___0 + len) = (char) '\\';
            }

            len++;
            goto while_break___23;
          }

          while_break___51:
          ;

        }
        while_break___23:
        ;

        store_c:
        {
          while (1)
          {
            while_continue___24:
            ;

            if (len < buffersize)
            {
              * (buffer___0 + len) = (char) c;
            }

            len++;
            goto while_break___24;
          }

          while_break___52:
          ;

        }

        while_break___24:
        ;

        __Cont:
        i++;

      }

      while_break___31:
      ;

    }
    while_break___3:
    ;

    if (len == 0UL)
    {
      if (((unsigned int) quoting_style) == 2U)
      {
        if (elide_outer_quotes)
        {
          goto force_outer_quoting_style;
        }

      }

    }

    if (quote_string)
    {
      if (! elide_outer_quotes)
      {
        {
          while (1)
          {
            while_continue___25:
            ;

            if (! (* quote_string))
            {
              goto while_break___25;
            }

            {
              while (1)
              {
                while_continue___26:
                ;

                if (len < buffersize)
                {
                  * (buffer___0 + len) = (char) (* quote_string);
                }

                len++;
                goto while_break___26;
              }

              while_break___54:
              ;

            }
            while_break___26:
            quote_string++;

          }

          while_break___53:
          ;

        }
        while_break___25:
        ;

      }

    }

    if (len < buffersize)
    {
      * (buffer___0 + len) = (char) '\000';
    }

    return len;
    force_outer_quoting_style:
    {
      tmp___8 = quotearg_buffer_restyled(buffer___0, buffersize, arg, argsize, quoting_style, flags & (- 3), (const unsigned int *) ((void *) 0), left_quote, right_quote);
    }

    return tmp___8;
  }
}

static char slot0[256];
static unsigned int nslots = 1U;
static struct slotvec slotvec0 = {sizeof(slot0), slot0};
static struct slotvec *slotvec = & slotvec0;
static char *quotearg_n_options(int n, const char *arg, size_t argsize, const struct quoting_options *options)
{
  int e;
  int *tmp;
  unsigned int n0;
  struct slotvec *sv;
  size_t n1;
  _Bool preallocated;
  int tmp___0;
  struct slotvec *tmp___1;
  size_t size;
  char *val;
  int flags;
  size_t qsize;
  size_t tmp___2;
  int *tmp___3;
  {
    {
      tmp = __errno_location();
      e = * tmp;
      n0 = (unsigned int) n;
      sv = slotvec;
    }
    if (n < 0)
    {
      {
        abort();
      }
    }

    if (nslots <= n0)
    {
      n1 = (size_t) (n0 + 1U);
      preallocated = (_Bool) (((unsigned long) sv) == ((unsigned long) (& slotvec0)));
      if ((sizeof(ptrdiff_t)) <= (sizeof(size_t)))
      {
        tmp___0 = - 1;
      }
      else
      {
        tmp___0 = - 2;
      }

      if ((((size_t) tmp___0) / (sizeof(* sv))) < n1)
      {
        {
          xalloc_die();
        }
      }

      if (preallocated)
      {
        tmp___1 = (struct slotvec *) ((void *) 0);
      }
      else
      {
        tmp___1 = sv;
      }

      {
        sv = (struct slotvec *) xrealloc((void *) tmp___1, n1 * (sizeof(* sv)));
        slotvec = sv;
      }
      if (preallocated)
      {
        * sv = slotvec0;
      }

      {
        memset((void *) (sv + nslots), 0, (n1 - ((size_t) nslots)) * (sizeof(* sv)));
        nslots = (unsigned int) n1;
      }
    }

    {
      size = (sv + n)->size;
      val = (sv + n)->val;
      flags = (int) (options->flags | 1);
      tmp___2 = quotearg_buffer_restyled(val, size, arg, argsize, (enum quoting_style) options->style, flags, (const unsigned int *) options->quote_these_too, (const char *) options->left_quote, (const char *) options->right_quote);
      qsize = tmp___2;
    }
    if (size <= qsize)
    {
      size = qsize + 1UL;
      (sv + n)->size = size;
      if (((unsigned long) val) != ((unsigned long) slot0))
      {
        {
          free((void *) val);
        }
      }

      {
        val = xcharalloc(size);
        (sv + n)->val = val;
        quotearg_buffer_restyled(val, size, arg, argsize, (enum quoting_style) options->style, flags, (const unsigned int *) options->quote_these_too, (const char *) options->left_quote, (const char *) options->right_quote);
      }
    }

    {
      tmp___3 = __errno_location();
      * tmp___3 = e;
    }
    return val;
  }
}

char *quotearg_n_style(int n, enum quoting_style s, const char *arg)
{
  struct quoting_options o;
  struct quoting_options tmp;
  char *tmp___0;
  void *__cil_tmp9;
  void *__cil_tmp10;
  {
    {
      tmp = quoting_options_from_style(s);
      o = tmp;
      tmp___0 = quotearg_n_options(n, arg, (size_t) (- 1), (const struct quoting_options *) (& o));
    }
    return tmp___0;
  }
}

char *quotearg_char_mem(const char *arg, size_t argsize, char ch)
{
  struct quoting_options options;
  char *tmp;
  void *__cil_tmp7;
  {
    {
      options = default_quoting_options;
      set_char_quoting(& options, ch, 1);
      tmp = quotearg_n_options(0, arg, argsize, (const struct quoting_options *) (& options));
    }
    return tmp;
  }
}

char *quotearg_char(const char *arg, char ch)
{
  char *tmp;
  {
    {
      tmp = quotearg_char_mem(arg, (size_t) (- 1), ch);
    }
    return tmp;
  }
}

char *quotearg_colon(const char *arg)
{
  char *tmp;
  {
    {
      tmp = quotearg_char(arg, (char) ':');
    }
    return tmp;
  }
}

struct quoting_options quote_quoting_options = {(enum quoting_style) 6, 0, {0U}, (const char *) ((void *) 0), (const char *) ((void *) 0)};
const char *quote_n_mem(int n, const char *arg, size_t argsize)
{
  const char *tmp;
  {
    {
      tmp = (const char *) quotearg_n_options(n, arg, argsize, (const struct quoting_options *) (& quote_quoting_options));
    }
    return tmp;
  }
}

const char *quote_n(int n, const char *arg)
{
  const char *tmp;
  {
    {
      tmp = quote_n_mem(n, arg, (size_t) (- 1));
    }
    return tmp;
  }
}

const char *quote(const char *arg)
{
  const char *tmp;
  {
    {
      tmp = quote_n(0, arg);
    }
    return tmp;
  }
}

const char *proper_name(const char *name);
extern int sprintf(char *__restrict __s, const char *__restrict __format, ...);
char *mbsstr(const char *haystack, const char *needle);
extern int iswalnum(wint_t __wc);
void mbuiter_multi_next(struct mbuiter_multi *iter)
{
  int tmp;
  size_t tmp___0;
  size_t tmp___1;
  int tmp___2;
  _Bool tmp___3;
  {
    if (iter->next_done)
    {
      return;
    }

    if (iter->in_shift)
    {
      goto with_shift;
    }

    {
      tmp___3 = is_basic((char) (* iter->cur.ptr));
    }
    if (tmp___3)
    {
      iter->cur.bytes = (size_t) 1;
      iter->cur.wc = (wchar_t) (* iter->cur.ptr);
      iter->cur.wc_valid = (_Bool) 1;
    }
    else
    {
      {
        tmp = mbsinit((const mbstate_t *) (& iter->state));
      }
      if (! tmp)
      {
        {
          __assert_fail("mbsinit (&iter->state)", "/home/khheo/project/benchmark/grep-2.19/lib/mbuiter.h", 150U, "mbuiter_multi_next");
        }
      }

      iter->in_shift = (_Bool) 1;
      with_shift:
      {
        tmp___0 = __ctype_get_mb_cur_max();
        tmp___1 = strnlen1(iter->cur.ptr, tmp___0);
        iter->cur.bytes = mbrtowc((wchar_t *) (& iter->cur.wc), (const char *) iter->cur.ptr, tmp___1, (mbstate_t *) (& iter->state));
      }

      if (iter->cur.bytes == 0xffffffffffffffffUL)
      {
        iter->cur.bytes = (size_t) 1;
        iter->cur.wc_valid = (_Bool) 0;
      }
      else
        if (iter->cur.bytes == 0xfffffffffffffffeUL)
      {
        {
          iter->cur.bytes = strlen(iter->cur.ptr);
          iter->cur.wc_valid = (_Bool) 0;
        }
      }
      else
      {
        if (iter->cur.bytes == 0UL)
        {
          iter->cur.bytes = (size_t) 1;
          if (! (((const int) (* iter->cur.ptr)) == 0))
          {
            {
              __assert_fail("*iter->cur.ptr == \'\\0\'", "/home/khheo/project/benchmark/grep-2.19/lib/mbuiter.h", 178U, "mbuiter_multi_next");
            }
          }

          if (! (iter->cur.wc == 0))
          {
            {
              __assert_fail("iter->cur.wc == 0", "/home/khheo/project/benchmark/grep-2.19/lib/mbuiter.h", 179U, "mbuiter_multi_next");
            }
          }

        }

        {
          iter->cur.wc_valid = (_Bool) 1;
          tmp___2 = mbsinit((const mbstate_t *) (& iter->state));
        }
        if (tmp___2)
        {
          iter->in_shift = (_Bool) 0;
        }

      }


    }

    iter->next_done = (_Bool) 1;
    return;
  }
}

static _Bool mbsstr_trimmed_wordbounded(const char *string, const char *sub)
{
  char *tsub;
  char *tmp;
  _Bool found;
  const char *tsub_in_string;
  const char *tmp___0;
  mbui_iterator_t string_iter;
  _Bool word_boundary_before;
  _Bool word_boundary_after;
  mbchar_t last_char_before_tsub;
  int tmp___1;
  int tmp___2;
  mbui_iterator_t tsub_iter;
  int tmp___3;
  int tmp___4;
  mbchar_t first_char_after_tsub;
  int tmp___5;
  int tmp___6;
  int tmp___7;
  _Bool word_boundary_before___0;
  const char *p;
  _Bool word_boundary_after___0;
  const unsigned short **tmp___8;
  size_t tmp___9;
  const unsigned short **tmp___10;
  size_t tmp___11;
  void *__cil_tmp35;
  void *__cil_tmp36;
  void *__cil_tmp37;
  void *__cil_tmp38;
  void *__cil_tmp39;
  void *__cil_tmp40;
  {
    {
      tmp = trim2(sub, 2);
      tsub = tmp;
      found = (_Bool) 0;
    }
    {
      while (1)
      {
        while_continue:
        ;

        if (! (((const int) (* string)) != 0))
        {
          goto while_break;
        }

        {
          tmp___0 = (const char *) mbsstr(string, (const char *) tsub);
          tsub_in_string = tmp___0;
        }
        if (((unsigned long) tsub_in_string) == ((unsigned long) ((void *) 0)))
        {
          goto while_break;
        }
        else
        {
          {
            tmp___11 = __ctype_get_mb_cur_max();
          }
          if (tmp___11 > 1UL)
          {
            {
              string_iter.cur.ptr = string;
              string_iter.in_shift = (_Bool) 0;
              memset((void *) (& string_iter.state), '\000', sizeof(mbstate_t));
              string_iter.next_done = (_Bool) 0;
              word_boundary_before = (_Bool) 1;
            }
            if (((unsigned long) string_iter.cur.ptr) < ((unsigned long) tsub_in_string))
            {
              {
                while (1)
                {
                  while_continue___0:
                  ;

                  {
                    mbuiter_multi_next(& string_iter);
                  }
                  if (string_iter.cur.wc_valid)
                  {
                    if (string_iter.cur.wc == 0)
                    {
                      tmp___1 = 0;
                    }
                    else
                    {
                      tmp___1 = 1;
                    }

                  }
                  else
                  {
                    tmp___1 = 1;
                  }

                  if (! tmp___1)
                  {
                    {
                      abort();
                    }
                  }

                  last_char_before_tsub = string_iter.cur;
                  string_iter.cur.ptr += string_iter.cur.bytes;
                  string_iter.next_done = (_Bool) 0;
                  if (! (((unsigned long) string_iter.cur.ptr) < ((unsigned long) tsub_in_string)))
                  {
                    goto while_break___0;
                  }

                }

                while_break___3:
                ;

              }
              while_break___0:
              ;

              if (last_char_before_tsub.wc_valid)
              {
                {
                  tmp___2 = iswalnum((wint_t) last_char_before_tsub.wc);
                }
                if (tmp___2)
                {
                  word_boundary_before = (_Bool) 0;
                }

              }

            }

            {
              string_iter.cur.ptr = tsub_in_string;
              string_iter.in_shift = (_Bool) 0;
              memset((void *) (& string_iter.state), '\000', sizeof(mbstate_t));
              string_iter.next_done = (_Bool) 0;
              tsub_iter.cur.ptr = (const char *) tsub;
              tsub_iter.in_shift = (_Bool) 0;
              memset((void *) (& tsub_iter.state), '\000', sizeof(mbstate_t));
              tsub_iter.next_done = (_Bool) 0;
            }
            {
              while (1)
              {
                while_continue___1:
                ;

                {
                  mbuiter_multi_next(& tsub_iter);
                }
                if (tsub_iter.cur.wc_valid)
                {
                  if (tsub_iter.cur.wc == 0)
                  {
                    tmp___4 = 0;
                  }
                  else
                  {
                    tmp___4 = 1;
                  }

                }
                else
                {
                  tmp___4 = 1;
                }

                if (! tmp___4)
                {
                  goto while_break___1;
                }

                {
                  mbuiter_multi_next(& string_iter);
                }
                if (string_iter.cur.wc_valid)
                {
                  if (string_iter.cur.wc == 0)
                  {
                    tmp___3 = 0;
                  }
                  else
                  {
                    tmp___3 = 1;
                  }

                }
                else
                {
                  tmp___3 = 1;
                }

                if (! tmp___3)
                {
                  {
                    abort();
                  }
                }

                string_iter.cur.ptr += string_iter.cur.bytes;
                string_iter.next_done = (_Bool) 0;
                tsub_iter.cur.ptr += tsub_iter.cur.bytes;
                tsub_iter.next_done = (_Bool) 0;
              }

              while_break___4:
              ;

            }
            while_break___1:
            {
              word_boundary_after = (_Bool) 1;
              mbuiter_multi_next(& string_iter);
            }

            if (string_iter.cur.wc_valid)
            {
              if (string_iter.cur.wc == 0)
              {
                tmp___6 = 0;
              }
              else
              {
                tmp___6 = 1;
              }

            }
            else
            {
              tmp___6 = 1;
            }

            if (tmp___6)
            {
              first_char_after_tsub = string_iter.cur;
              if (first_char_after_tsub.wc_valid)
              {
                {
                  tmp___5 = iswalnum((wint_t) first_char_after_tsub.wc);
                }
                if (tmp___5)
                {
                  word_boundary_after = (_Bool) 0;
                }

              }

            }

            if (word_boundary_before)
            {
              if (word_boundary_after)
              {
                found = (_Bool) 1;
                goto while_break;
              }

            }

            {
              string_iter.cur.ptr = tsub_in_string;
              string_iter.in_shift = (_Bool) 0;
              memset((void *) (& string_iter.state), '\000', sizeof(mbstate_t));
              string_iter.next_done = (_Bool) 0;
              mbuiter_multi_next(& string_iter);
            }
            if (string_iter.cur.wc_valid)
            {
              if (string_iter.cur.wc == 0)
              {
                tmp___7 = 0;
              }
              else
              {
                tmp___7 = 1;
              }

            }
            else
            {
              tmp___7 = 1;
            }

            if (! tmp___7)
            {
              goto while_break;
            }

            string = tsub_in_string + string_iter.cur.bytes;
          }
          else
          {
            word_boundary_before___0 = (_Bool) 1;
            if (((unsigned long) string) < ((unsigned long) tsub_in_string))
            {
              {
                tmp___8 = __ctype_b_loc();
              }
              if (((const int) (* ((* tmp___8) + ((int) ((unsigned char) (* (tsub_in_string + (- 1)))))))) & 8)
              {
                word_boundary_before___0 = (_Bool) 0;
              }

            }

            {
              tmp___9 = strlen((const char *) tsub);
              p = tsub_in_string + tmp___9;
              word_boundary_after___0 = (_Bool) 1;
            }
            if (((const int) (* p)) != 0)
            {
              {
                tmp___10 = __ctype_b_loc();
              }
              if (((const int) (* ((* tmp___10) + ((int) ((unsigned char) (* p)))))) & 8)
              {
                word_boundary_after___0 = (_Bool) 0;
              }

            }

            if (word_boundary_before___0)
            {
              if (word_boundary_after___0)
              {
                found = (_Bool) 1;
                goto while_break;
              }

            }

            if (((const int) (* tsub_in_string)) == 0)
            {
              goto while_break;
            }

            string = tsub_in_string + 1;
          }

        }

      }

      while_break___2:
      ;

    }
    while_break:
    {
      free((void *) tsub);
    }

    return found;
  }
}

const char *proper_name(const char *name)
{
  const char *translation;
  const char *tmp;
  char *result;
  size_t tmp___0;
  size_t tmp___1;
  void *tmp___2;
  size_t tmp___3;
  size_t tmp___4;
  void *tmp___5;
  void *tmp___6;
  _Bool tmp___7;
  char *__cil_tmp15;
  {
    {
      tmp = (const char *) gettext(name);
      translation = tmp;
    }
    if (((unsigned long) translation) != ((unsigned long) name))
    {
      {
        tmp___7 = mbsstr_trimmed_wordbounded(translation, name);
      }
      if (tmp___7)
      {
        return translation;
      }
      else
      {
        if ((sizeof(char)) == 1UL)
        {
          {
            tmp___0 = strlen(translation);
            tmp___1 = strlen(name);
            tmp___2 = xmalloc((((tmp___0 + 2UL) + tmp___1) + 1UL) + 1UL);
            tmp___6 = tmp___2;
          }
        }
        else
        {
          {
            tmp___3 = strlen(translation);
            tmp___4 = strlen(name);
            tmp___5 = xnmalloc((((tmp___3 + 2UL) + tmp___4) + 1UL) + 1UL, sizeof(char));
            tmp___6 = tmp___5;
          }
        }

        {
          result = (char *) tmp___6;
          sprintf((char *) result, (const char *) "%s (%s)", translation, name);
        }
        return (const char *) result;
      }

    }
    else
    {
      return name;
    }

  }
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
        fputs((const char *) "A NULL argv[0] was passed through an exec system call.\n", (FILE *) stderr);
        abort();
      }
    }

    {
      slash = (const char *) strrchr(argv0, '/');
    }
    if (((unsigned long) slash) != ((unsigned long) ((void *) 0)))
    {
      base = slash + 1;
    }
    else
    {
      base = argv0;
    }

    if ((base - argv0) >= 7L)
    {
      {
        tmp___0 = strncmp(base - 7, "/.libs/", (size_t) 7);
      }
      if (tmp___0 == 0)
      {
        {
          argv0 = base;
          tmp = strncmp(base, "lt-", (size_t) 3);
        }
        if (tmp == 0)
        {
          argv0 = base + 3;
          program_invocation_short_name = (char *) argv0;
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
      tmp = open(file, flags, mode___0);
      tmp___0 = fd_safer(tmp);
    }
    return tmp___0;
  }
}

void *memchr2(const void *s, int c1_in, int c2_in, size_t n);
void *memchr2(const void *s, int c1_in, int c2_in, size_t n);
void *memchr2(const void *s, int c1_in, int c2_in, size_t n)
{
  const unsigned char *char_ptr;
  const void *void_ptr;
  const longword *longword_ptr;
  longword repeated_one;
  longword repeated_c1;
  longword repeated_c2;
  unsigned char c1;
  unsigned char c2;
  void *tmp;
  size_t i;
  longword longword1;
  longword longword2;
  {
    c1 = (unsigned char) c1_in;
    c2 = (unsigned char) c2_in;
    if (((int) c1) == ((int) c2))
    {
      {
        tmp = memchr(s, (int) c1, n);
      }
      return tmp;
    }

    void_ptr = s;
    {
      while (1)
      {
        while_continue:
        ;

        if (n > 0UL)
        {
          if (! ((((uintptr_t) void_ptr) % (sizeof(longword))) != 0UL))
          {
            goto while_break;
          }

        }
        else
        {
          goto while_break;
        }

        char_ptr = (const unsigned char *) void_ptr;
        if (((const int) (* char_ptr)) == ((const int) c1))
        {
          return (void *) void_ptr;
        }
        else
          if (((const int) (* char_ptr)) == ((const int) c2))
        {
          return (void *) void_ptr;
        }


        void_ptr = (const void *) (char_ptr + 1);
        n--;
      }

      while_break___3:
      ;

    }
    while_break:
    longword_ptr = (const longword *) void_ptr;

    repeated_one = (longword) 16843009;
    repeated_c1 = (longword) (((int) c1) | (((int) c1) << 8));
    repeated_c2 = (longword) (((int) c2) | (((int) c2) << 8));
    repeated_c1 |= repeated_c1 << 16;
    repeated_c2 |= repeated_c2 << 16;
    repeated_one |= (repeated_one << 31) << 1;
    repeated_c1 |= (repeated_c1 << 31) << 1;
    repeated_c2 |= (repeated_c2 << 31) << 1;
    if (8UL < (sizeof(longword)))
    {
      i = (size_t) 64;
      {
        while (1)
        {
          while_continue___0:
          ;

          if (! (i < ((sizeof(longword)) * 8UL)))
          {
            goto while_break___0;
          }

          repeated_one |= repeated_one << i;
          repeated_c1 |= repeated_c1 << i;
          repeated_c2 |= repeated_c2 << i;
          i *= 2UL;
        }

        while_break___4:
        ;

      }
      while_break___0:
      ;

    }

    {
      while (1)
      {
        while_continue___1:
        ;

        if (! (n >= (sizeof(longword))))
        {
          goto while_break___1;
        }

        longword1 = (longword) ((* longword_ptr) ^ ((const unsigned long) repeated_c1));
        longword2 = (longword) ((* longword_ptr) ^ ((const unsigned long) repeated_c2));
        if (((((longword1 - repeated_one) & (~ longword1)) | ((longword2 - repeated_one) & (~ longword2))) & (repeated_one << 7)) != 0UL)
        {
          goto while_break___1;
        }

        longword_ptr++;
        n -= sizeof(longword);
      }

      while_break___5:
      ;

    }
    while_break___1:
    char_ptr = (const unsigned char *) longword_ptr;

    {
      while (1)
      {
        while_continue___2:
        ;

        if (! (n > 0UL))
        {
          goto while_break___2;
        }

        if (((const int) (* char_ptr)) == ((const int) c1))
        {
          return (void *) char_ptr;
        }
        else
          if (((const int) (* char_ptr)) == ((const int) c2))
        {
          return (void *) char_ptr;
        }


        n--;
        char_ptr++;
      }

      while_break___6:
      ;

    }
    while_break___2:
    ;

    return (void *) 0;
  }
}

extern size_t strnlen(const char *__string, size_t __maxlen);
size_t mbslen(const char *string);
void *mmalloca(size_t n);
void freea(void *p);
static _Bool knuth_morris_pratt(const unsigned char *haystack, const unsigned char *needle, size_t needle_len, const unsigned char **resultp)
{
  size_t m;
  size_t *table;
  void *tmp___0;
  void *tmp___1;
  void *tmp___2;
  void *tmp___3;
  int tmp___4;
  size_t i;
  size_t j;
  unsigned char b;
  size_t j___0;
  const unsigned char *rhaystack;
  const unsigned char *phaystack;
  {
    m = needle_len;
    if ((sizeof(ptrdiff_t)) <= (sizeof(size_t)))
    {
      tmp___4 = - 1;
    }
    else
    {
      tmp___4 = - 2;
    }

    if (m > (((size_t) tmp___4) / (sizeof(size_t))))
    {
      tmp___3 = (void *) 0;
    }
    else
    {
      if ((m * (sizeof(size_t))) < 4016UL)
      {
        {
          tmp___0 = __builtin_alloca((m * (sizeof(size_t))) + 16UL);
          tmp___2 = (void *) (((char *) tmp___0) + 16);
        }
      }
      else
      {
        {
          tmp___1 = mmalloca(m * (sizeof(size_t)));
          tmp___2 = tmp___1;
        }
      }

      tmp___3 = tmp___2;
    }

    table = (size_t *) tmp___3;
    if (((unsigned long) table) == ((unsigned long) ((void *) 0)))
    {
      return (_Bool) 0;
    }

    * (table + 1) = (size_t) 1;
    j = (size_t) 0;
    i = (size_t) 2;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (i < m))
        {
          goto while_break;
        }

        b = (unsigned char) (* (needle + (i - 1UL)));
        {
          while (1)
          {
            while_continue___0:
            ;

            if (((int) b) == ((int) (* (needle + j))))
            {
              j++;
              * (table + i) = i - j;
              goto while_break___0;
            }

            if (j == 0UL)
            {
              * (table + i) = i;
              goto while_break___0;
            }

            j -= * (table + j);
          }

          while_break___3:
          ;

        }
        while_break___0:
        i++;

      }

      while_break___2:
      ;

    }
    while_break:
    * resultp = (const unsigned char *) ((void *) 0);

    j___0 = (size_t) 0;
    rhaystack = haystack;
    phaystack = haystack;
    {
      while (1)
      {
        while_continue___1:
        ;

        if (! (((const int) (* phaystack)) != 0))
        {
          goto while_break___1;
        }

        if (((const int) (* (needle + j___0))) == ((const int) (* phaystack)))
        {
          j___0++;
          phaystack++;
          if (j___0 == m)
          {
            * resultp = rhaystack;
            goto while_break___1;
          }

        }
        else
          if (j___0 > 0UL)
        {
          rhaystack += * (table + j___0);
          j___0 -= * (table + j___0);
        }
        else
        {
          rhaystack++;
          phaystack++;
        }


      }

      while_break___4:
      ;

    }
    while_break___1:
    {
      freea((void *) table);
    }

    return (_Bool) 1;
  }
}

static _Bool knuth_morris_pratt_multibyte(const char *haystack, const char *needle, const char **resultp)
{
  size_t m;
  size_t tmp;
  mbchar_t *needle_mbchars;
  size_t *table;
  void *memory;
  void *tmp___1;
  void *tmp___2;
  void *tmp___3;
  void *tmp___4;
  int tmp___5;
  void *table_memory;
  mbui_iterator_t iter;
  size_t j;
  int tmp___6;
  size_t i;
  size_t j___0;
  mbchar_t *b;
  int tmp___7;
  int tmp___8;
  int tmp___9;
  size_t j___1;
  mbui_iterator_t rhaystack;
  mbui_iterator_t phaystack;
  size_t count;
  int tmp___10;
  int tmp___11;
  int tmp___12;
  int tmp___13;
  int tmp___14;
  int tmp___15;
  void *__cil_tmp40;
  void *__cil_tmp41;
  void *__cil_tmp42;
  void *__cil_tmp43;
  void *__cil_tmp44;
  void *__cil_tmp45;
  {
    {
      tmp = mbslen(needle);
      m = tmp;
    }
    if ((sizeof(ptrdiff_t)) <= (sizeof(size_t)))
    {
      tmp___5 = - 1;
    }
    else
    {
      tmp___5 = - 2;
    }

    if (m > (((size_t) tmp___5) / ((sizeof(mbchar_t)) + (sizeof(size_t)))))
    {
      tmp___4 = (void *) 0;
    }
    else
    {
      if ((m * ((sizeof(mbchar_t)) + (sizeof(size_t)))) < 4016UL)
      {
        {
          tmp___1 = __builtin_alloca((m * ((sizeof(mbchar_t)) + (sizeof(size_t)))) + 16UL);
          tmp___3 = (void *) (((char *) tmp___1) + 16);
        }
      }
      else
      {
        {
          tmp___2 = mmalloca(m * ((sizeof(mbchar_t)) + (sizeof(size_t))));
          tmp___3 = tmp___2;
        }
      }

      tmp___4 = tmp___3;
    }

    memory = tmp___4;
    if (((unsigned long) memory) == ((unsigned long) ((void *) 0)))
    {
      return (_Bool) 0;
    }

    {
      needle_mbchars = (mbchar_t *) memory;
      table_memory = (void *) (needle_mbchars + m);
      table = (size_t *) table_memory;
      j = (size_t) 0;
      iter.cur.ptr = needle;
      iter.in_shift = (_Bool) 0;
      memset((void *) (& iter.state), '\000', sizeof(mbstate_t));
      iter.next_done = (_Bool) 0;
    }
    {
      while (1)
      {
        while_continue:
        ;

        {
          mbuiter_multi_next(& iter);
        }
        if (iter.cur.wc_valid)
        {
          if (iter.cur.wc == 0)
          {
            tmp___6 = 0;
          }
          else
          {
            tmp___6 = 1;
          }

        }
        else
        {
          tmp___6 = 1;
        }

        if (! tmp___6)
        {
          goto while_break;
        }

        {
          mb_copy(needle_mbchars + j, (const mbchar_t *) (& iter.cur));
          iter.cur.ptr += iter.cur.bytes;
          iter.next_done = (_Bool) 0;
          j++;
        }
      }

      while_break___4:
      ;

    }
    while_break:
    * (table + 1) = (size_t) 1;

    j___0 = (size_t) 0;
    i = (size_t) 2;
    {
      while (1)
      {
        while_continue___0:
        ;

        if (! (i < m))
        {
          goto while_break___0;
        }

        b = needle_mbchars + (i - 1UL);
        {
          while (1)
          {
            while_continue___1:
            ;

            if (b->wc_valid)
            {
              if ((needle_mbchars + j___0)->wc_valid)
              {
                tmp___9 = b->wc == (needle_mbchars + j___0)->wc;
              }
              else
              {
                goto _L;
              }

            }
            else
            {
              _L:
              if (b->bytes == (needle_mbchars + j___0)->bytes)
              {
                {
                  tmp___7 = memcmp((const void *) b->ptr, (const void *) (needle_mbchars + j___0)->ptr, b->bytes);
                }
                if (tmp___7 == 0)
                {
                  tmp___8 = 1;
                }
                else
                {
                  tmp___8 = 0;
                }

              }
              else
              {
                tmp___8 = 0;
              }


              tmp___9 = tmp___8;
            }

            if (tmp___9)
            {
              j___0++;
              * (table + i) = i - j___0;
              goto while_break___1;
            }

            if (j___0 == 0UL)
            {
              * (table + i) = i;
              goto while_break___1;
            }

            j___0 -= * (table + j___0);
          }

          while_break___6:
          ;

        }
        while_break___1:
        i++;

      }

      while_break___5:
      ;

    }
    while_break___0:
    {
      * resultp = (const char *) ((void *) 0);
      j___1 = (size_t) 0;
      rhaystack.cur.ptr = haystack;
      rhaystack.in_shift = (_Bool) 0;
      memset((void *) (& rhaystack.state), '\000', sizeof(mbstate_t));
      rhaystack.next_done = (_Bool) 0;
      phaystack.cur.ptr = haystack;
      phaystack.in_shift = (_Bool) 0;
      memset((void *) (& phaystack.state), '\000', sizeof(mbstate_t));
      phaystack.next_done = (_Bool) 0;
    }

    {
      while (1)
      {
        while_continue___2:
        ;

        {
          mbuiter_multi_next(& phaystack);
        }
        if (phaystack.cur.wc_valid)
        {
          if (phaystack.cur.wc == 0)
          {
            tmp___15 = 0;
          }
          else
          {
            tmp___15 = 1;
          }

        }
        else
        {
          tmp___15 = 1;
        }

        if (! tmp___15)
        {
          goto while_break___2;
        }

        if ((needle_mbchars + j___1)->wc_valid)
        {
          if (phaystack.cur.wc_valid)
          {
            tmp___14 = (needle_mbchars + j___1)->wc == phaystack.cur.wc;
          }
          else
          {
            goto _L___0;
          }

        }
        else
        {
          _L___0:
          if ((needle_mbchars + j___1)->bytes == phaystack.cur.bytes)
          {
            {
              tmp___12 = memcmp((const void *) (needle_mbchars + j___1)->ptr, (const void *) phaystack.cur.ptr, (needle_mbchars + j___1)->bytes);
            }
            if (tmp___12 == 0)
            {
              tmp___13 = 1;
            }
            else
            {
              tmp___13 = 0;
            }

          }
          else
          {
            tmp___13 = 0;
          }


          tmp___14 = tmp___13;
        }

        if (tmp___14)
        {
          j___1++;
          phaystack.cur.ptr += phaystack.cur.bytes;
          phaystack.next_done = (_Bool) 0;
          if (j___1 == m)
          {
            * resultp = rhaystack.cur.ptr;
            goto while_break___2;
          }

        }
        else
          if (j___1 > 0UL)
        {
          count = * (table + j___1);
          j___1 -= count;
          {
            while (1)
            {
              while_continue___3:
              ;

              if (! (count > 0UL))
              {
                goto while_break___3;
              }

              {
                mbuiter_multi_next(& rhaystack);
              }
              if (rhaystack.cur.wc_valid)
              {
                if (rhaystack.cur.wc == 0)
                {
                  tmp___10 = 0;
                }
                else
                {
                  tmp___10 = 1;
                }

              }
              else
              {
                tmp___10 = 1;
              }

              if (! tmp___10)
              {
                {
                  abort();
                }
              }

              rhaystack.cur.ptr += rhaystack.cur.bytes;
              rhaystack.next_done = (_Bool) 0;
              count--;
            }

            while_break___8:
            ;

          }
          while_break___3:
          ;

        }
        else
        {
          {
            mbuiter_multi_next(& rhaystack);
          }
          if (rhaystack.cur.wc_valid)
          {
            if (rhaystack.cur.wc == 0)
            {
              tmp___11 = 0;
            }
            else
            {
              tmp___11 = 1;
            }

          }
          else
          {
            tmp___11 = 1;
          }

          if (! tmp___11)
          {
            {
              abort();
            }
          }

          rhaystack.cur.ptr += rhaystack.cur.bytes;
          rhaystack.next_done = (_Bool) 0;
          phaystack.cur.ptr += phaystack.cur.bytes;
          phaystack.next_done = (_Bool) 0;
        }


      }

      while_break___7:
      ;

    }
    while_break___2:
    {
      freea(memory);
    }

    return (_Bool) 1;
  }
}

char *mbsstr(const char *haystack, const char *needle);
char *mbsstr(const char *haystack, const char *needle)
{
  mbui_iterator_t iter_needle;
  _Bool try_kmp;
  size_t outer_loop_count;
  size_t comparison_count;
  size_t last_ccount;
  mbui_iterator_t iter_needle_last_ccount;
  mbui_iterator_t iter_haystack;
  int tmp;
  size_t count;
  int tmp___0;
  const char *result;
  _Bool success;
  _Bool tmp___1;
  int tmp___2;
  mbui_iterator_t rhaystack;
  mbui_iterator_t rneedle;
  int tmp___3;
  int tmp___4;
  int tmp___5;
  int tmp___6;
  int tmp___7;
  int tmp___8;
  int tmp___9;
  int tmp___10;
  int tmp___11;
  int tmp___12;
  _Bool try_kmp___0;
  size_t outer_loop_count___0;
  size_t comparison_count___0;
  size_t last_ccount___0;
  const char *needle_last_ccount;
  char b;
  const char *tmp___13;
  size_t tmp___14;
  const unsigned char *result___0;
  _Bool success___0;
  size_t tmp___15;
  _Bool tmp___16;
  const char *rhaystack___0;
  const char *rneedle___0;
  size_t tmp___17;
  void *__cil_tmp54;
  void *__cil_tmp55;
  void *__cil_tmp56;
  void *__cil_tmp57;
  void *__cil_tmp58;
  void *__cil_tmp59;
  void *__cil_tmp60;
  void *__cil_tmp61;
  void *__cil_tmp62;
  void *__cil_tmp63;
  {
    {
      tmp___17 = __ctype_get_mb_cur_max();
    }
    if (tmp___17 > 1UL)
    {
      {
        iter_needle.cur.ptr = needle;
        iter_needle.in_shift = (_Bool) 0;
        memset((void *) (& iter_needle.state), '\000', sizeof(mbstate_t));
        iter_needle.next_done = (_Bool) 0;
        mbuiter_multi_next(& iter_needle);
      }
      if (iter_needle.cur.wc_valid)
      {
        if (iter_needle.cur.wc == 0)
        {
          tmp___12 = 0;
        }
        else
        {
          tmp___12 = 1;
        }

      }
      else
      {
        tmp___12 = 1;
      }

      if (tmp___12)
      {
        {
          try_kmp = (_Bool) 1;
          outer_loop_count = (size_t) 0;
          comparison_count = (size_t) 0;
          last_ccount = (size_t) 0;
          iter_needle_last_ccount.cur.ptr = needle;
          iter_needle_last_ccount.in_shift = (_Bool) 0;
          memset((void *) (& iter_needle_last_ccount.state), '\000', sizeof(mbstate_t));
          iter_needle_last_ccount.next_done = (_Bool) 0;
          iter_haystack.cur.ptr = haystack;
          iter_haystack.in_shift = (_Bool) 0;
          memset((void *) (& iter_haystack.state), '\000', sizeof(mbstate_t));
          iter_haystack.next_done = (_Bool) 0;
        }
        {
          while (1)
          {
            while_continue:
            ;

            {
              mbuiter_multi_next(& iter_haystack);
            }
            if (iter_haystack.cur.wc_valid)
            {
              if (iter_haystack.cur.wc == 0)
              {
                tmp = 0;
              }
              else
              {
                tmp = 1;
              }

            }
            else
            {
              tmp = 1;
            }

            if (! tmp)
            {
              return (char *) ((void *) 0);
            }

            if (try_kmp)
            {
              if (outer_loop_count >= 10UL)
              {
                if (comparison_count >= (5UL * outer_loop_count))
                {
                  count = comparison_count - last_ccount;
                  {
                    while (1)
                    {
                      while_continue___0:
                      ;

                      if (count > 0UL)
                      {
                        {
                          mbuiter_multi_next(& iter_needle_last_ccount);
                        }
                        if (iter_needle_last_ccount.cur.wc_valid)
                        {
                          if (iter_needle_last_ccount.cur.wc == 0)
                          {
                            tmp___0 = 0;
                          }
                          else
                          {
                            tmp___0 = 1;
                          }

                        }
                        else
                        {
                          tmp___0 = 1;
                        }

                        if (! tmp___0)
                        {
                          goto while_break___0;
                        }

                      }
                      else
                      {
                        goto while_break___0;
                      }

                      iter_needle_last_ccount.cur.ptr += iter_needle_last_ccount.cur.bytes;
                      iter_needle_last_ccount.next_done = (_Bool) 0;
                      count--;
                    }

                    while_break___4:
                    ;

                  }
                  while_break___0:
                  {
                    last_ccount = comparison_count;
                    mbuiter_multi_next(& iter_needle_last_ccount);
                  }

                  if (iter_needle_last_ccount.cur.wc_valid)
                  {
                    if (iter_needle_last_ccount.cur.wc == 0)
                    {
                      tmp___2 = 0;
                    }
                    else
                    {
                      tmp___2 = 1;
                    }

                  }
                  else
                  {
                    tmp___2 = 1;
                  }

                  if (! tmp___2)
                  {
                    {
                      tmp___1 = knuth_morris_pratt_multibyte(haystack, needle, & result);
                      success = tmp___1;
                    }
                    if (success)
                    {
                      return (char *) result;
                    }

                    try_kmp = (_Bool) 0;
                  }

                }

              }

            }

            outer_loop_count++;
            comparison_count++;
            if (iter_haystack.cur.wc_valid)
            {
              if (iter_needle.cur.wc_valid)
              {
                tmp___11 = iter_haystack.cur.wc == iter_needle.cur.wc;
              }
              else
              {
                goto _L___0;
              }

            }
            else
            {
              _L___0:
              if (iter_haystack.cur.bytes == iter_needle.cur.bytes)
              {
                {
                  tmp___9 = memcmp((const void *) iter_haystack.cur.ptr, (const void *) iter_needle.cur.ptr, iter_haystack.cur.bytes);
                }
                if (tmp___9 == 0)
                {
                  tmp___10 = 1;
                }
                else
                {
                  tmp___10 = 0;
                }

              }
              else
              {
                tmp___10 = 0;
              }


              tmp___11 = tmp___10;
            }

            if (tmp___11)
            {
              {
                memcpy((void *) ((void *) (& rhaystack)), (const void *) ((const void *) (& iter_haystack)), sizeof(mbui_iterator_t));
                rhaystack.cur.ptr += rhaystack.cur.bytes;
                rhaystack.next_done = (_Bool) 0;
                rneedle.cur.ptr = needle;
                rneedle.in_shift = (_Bool) 0;
                memset((void *) (& rneedle.state), '\000', sizeof(mbstate_t));
                rneedle.next_done = (_Bool) 0;
                mbuiter_multi_next(& rneedle);
              }
              if (rneedle.cur.wc_valid)
              {
                if (rneedle.cur.wc == 0)
                {
                  tmp___3 = 0;
                }
                else
                {
                  tmp___3 = 1;
                }

              }
              else
              {
                tmp___3 = 1;
              }

              if (! tmp___3)
              {
                {
                  abort();
                }
              }

              rneedle.cur.ptr += rneedle.cur.bytes;
              rneedle.next_done = (_Bool) 0;
              {
                while (1)
                {
                  while_continue___1:
                  ;

                  {
                    mbuiter_multi_next(& rneedle);
                  }
                  if (rneedle.cur.wc_valid)
                  {
                    if (rneedle.cur.wc == 0)
                    {
                      tmp___4 = 0;
                    }
                    else
                    {
                      tmp___4 = 1;
                    }

                  }
                  else
                  {
                    tmp___4 = 1;
                  }

                  if (! tmp___4)
                  {
                    return (char *) iter_haystack.cur.ptr;
                  }

                  {
                    mbuiter_multi_next(& rhaystack);
                  }
                  if (rhaystack.cur.wc_valid)
                  {
                    if (rhaystack.cur.wc == 0)
                    {
                      tmp___5 = 0;
                    }
                    else
                    {
                      tmp___5 = 1;
                    }

                  }
                  else
                  {
                    tmp___5 = 1;
                  }

                  if (! tmp___5)
                  {
                    return (char *) ((void *) 0);
                  }

                  comparison_count++;
                  if (rhaystack.cur.wc_valid)
                  {
                    if (rneedle.cur.wc_valid)
                    {
                      tmp___8 = rhaystack.cur.wc == rneedle.cur.wc;
                    }
                    else
                    {
                      goto _L;
                    }

                  }
                  else
                  {
                    _L:
                    if (rhaystack.cur.bytes == rneedle.cur.bytes)
                    {
                      {
                        tmp___6 = memcmp((const void *) rhaystack.cur.ptr, (const void *) rneedle.cur.ptr, rhaystack.cur.bytes);
                      }
                      if (tmp___6 == 0)
                      {
                        tmp___7 = 1;
                      }
                      else
                      {
                        tmp___7 = 0;
                      }

                    }
                    else
                    {
                      tmp___7 = 0;
                    }


                    tmp___8 = tmp___7;
                  }

                  if (! tmp___8)
                  {
                    goto while_break___1;
                  }

                  rhaystack.cur.ptr += rhaystack.cur.bytes;
                  rhaystack.next_done = (_Bool) 0;
                  rneedle.cur.ptr += rneedle.cur.bytes;
                  rneedle.next_done = (_Bool) 0;
                }

                while_break___5:
                ;

              }
              while_break___1:
              ;

            }

            iter_haystack.cur.ptr += iter_haystack.cur.bytes;
            iter_haystack.next_done = (_Bool) 0;
          }

          while_break:
          ;

        }
      }
      else
      {
        return (char *) haystack;
      }

    }
    else
      if (((const int) (* needle)) != 0)
    {
      try_kmp___0 = (_Bool) 1;
      outer_loop_count___0 = (size_t) 0;
      comparison_count___0 = (size_t) 0;
      last_ccount___0 = (size_t) 0;
      needle_last_ccount = needle;
      tmp___13 = needle;
      needle++;
      b = (char) (* tmp___13);
      {
        while (1)
        {
          while_continue___2:
          ;

          if (((const int) (* haystack)) == 0)
          {
            return (char *) ((void *) 0);
          }

          if (try_kmp___0)
          {
            if (outer_loop_count___0 >= 10UL)
            {
              if (comparison_count___0 >= (5UL * outer_loop_count___0))
              {
                if (((unsigned long) needle_last_ccount) != ((unsigned long) ((void *) 0)))
                {
                  {
                    tmp___14 = strnlen(needle_last_ccount, comparison_count___0 - last_ccount___0);
                    needle_last_ccount += tmp___14;
                  }
                  if (((const int) (* needle_last_ccount)) == 0)
                  {
                    needle_last_ccount = (const char *) ((void *) 0);
                  }

                  last_ccount___0 = comparison_count___0;
                }

                if (((unsigned long) needle_last_ccount) == ((unsigned long) ((void *) 0)))
                {
                  {
                    tmp___15 = strlen(needle - 1);
                    tmp___16 = knuth_morris_pratt((const unsigned char *) haystack, (const unsigned char *) (needle - 1), tmp___15, & result___0);
                    success___0 = tmp___16;
                  }
                  if (success___0)
                  {
                    return (char *) result___0;
                  }

                  try_kmp___0 = (_Bool) 0;
                }

              }

            }

          }

          outer_loop_count___0++;
          comparison_count___0++;
          if (((const int) (* haystack)) == ((const int) b))
          {
            rhaystack___0 = haystack + 1;
            rneedle___0 = needle;
            {
              while (1)
              {
                while_continue___3:
                ;

                if (((const int) (* rneedle___0)) == 0)
                {
                  return (char *) haystack;
                }

                if (((const int) (* rhaystack___0)) == 0)
                {
                  return (char *) ((void *) 0);
                }

                comparison_count___0++;
                if (((const int) (* rhaystack___0)) != ((const int) (* rneedle___0)))
                {
                  goto while_break___3;
                }

                rhaystack___0++;
                rneedle___0++;
              }

              while_break___7:
              ;

            }
            while_break___3:
            ;

          }

          haystack++;
        }

        while_break___6:
        ;

      }
    }
    else
    {
      return (char *) haystack;
    }


    return (char *) 0;
  }
}

size_t mbslen(const char *string);
size_t mbslen(const char *string)
{
  size_t count;
  mbui_iterator_t iter;
  int tmp;
  size_t tmp___0;
  size_t tmp___1;
  void *__cil_tmp9;
  void *__cil_tmp10;
  {
    {
      tmp___1 = __ctype_get_mb_cur_max();
    }
    if (tmp___1 > 1UL)
    {
      {
        count = (size_t) 0;
        iter.cur.ptr = string;
        iter.in_shift = (_Bool) 0;
        memset((void *) (& iter.state), '\000', sizeof(mbstate_t));
        iter.next_done = (_Bool) 0;
      }
      {
        while (1)
        {
          while_continue:
          ;

          {
            mbuiter_multi_next(& iter);
          }
          if (iter.cur.wc_valid)
          {
            if (iter.cur.wc == 0)
            {
              tmp = 0;
            }
            else
            {
              tmp = 1;
            }

          }
          else
          {
            tmp = 1;
          }

          if (! tmp)
          {
            goto while_break;
          }

          count++;
          iter.cur.ptr += iter.cur.bytes;
          iter.next_done = (_Bool) 0;
        }

        while_break___0:
        ;

      }
      while_break:
      ;

      return count;
    }
    else
    {
      {
        tmp___0 = strlen(string);
      }
      return tmp___0;
    }

  }
}

int mbscasecmp(const char *s1, const char *s2);
extern int tolower(int __c);
extern wint_t towlower(wint_t __wc);
int mbscasecmp(const char *s1, const char *s2);
int mbscasecmp(const char *s1, const char *s2)
{
  mbui_iterator_t iter1;
  mbui_iterator_t iter2;
  int cmp;
  wint_t tmp;
  wint_t tmp___0;
  int tmp___1;
  int tmp___2;
  int tmp___4;
  int tmp___5;
  int tmp___7;
  int tmp___8;
  int tmp___9;
  int tmp___10;
  int tmp___11;
  int tmp___12;
  int tmp___13;
  int tmp___14;
  int tmp___15;
  int tmp___16;
  const unsigned char *p1;
  const unsigned char *p2;
  unsigned char c1;
  unsigned char c2;
  int tmp___18;
  const unsigned short **tmp___19;
  int tmp___21;
  const unsigned short **tmp___22;
  size_t tmp___25;
  void *__cil_tmp35;
  void *__cil_tmp36;
  void *__cil_tmp37;
  void *__cil_tmp38;
  {
    if (((unsigned long) s1) == ((unsigned long) s2))
    {
      return 0;
    }

    {
      tmp___25 = __ctype_get_mb_cur_max();
    }
    if (tmp___25 > 1UL)
    {
      {
        iter1.cur.ptr = s1;
        iter1.in_shift = (_Bool) 0;
        memset((void *) (& iter1.state), '\000', sizeof(mbstate_t));
        iter1.next_done = (_Bool) 0;
        iter2.cur.ptr = s2;
        iter2.in_shift = (_Bool) 0;
        memset((void *) (& iter2.state), '\000', sizeof(mbstate_t));
        iter2.next_done = (_Bool) 0;
      }
      {
        while (1)
        {
          while_continue:
          ;

          {
            mbuiter_multi_next(& iter1);
          }
          if (iter1.cur.wc_valid)
          {
            if (iter1.cur.wc == 0)
            {
              tmp___13 = 0;
            }
            else
            {
              tmp___13 = 1;
            }

          }
          else
          {
            tmp___13 = 1;
          }

          if (tmp___13)
          {
            {
              mbuiter_multi_next(& iter2);
            }
            if (iter2.cur.wc_valid)
            {
              if (iter2.cur.wc == 0)
              {
                tmp___14 = 0;
              }
              else
              {
                tmp___14 = 1;
              }

            }
            else
            {
              tmp___14 = 1;
            }

            if (! tmp___14)
            {
              goto while_break;
            }

          }
          else
          {
            goto while_break;
          }

          if (iter1.cur.wc_valid)
          {
            if (iter2.cur.wc_valid)
            {
              {
                tmp = towlower((wint_t) iter1.cur.wc);
                tmp___0 = towlower((wint_t) iter2.cur.wc);
                tmp___1 = ((int) tmp) - ((int) tmp___0);
              }
            }
            else
            {
              tmp___1 = - 1;
            }

            tmp___12 = tmp___1;
          }
          else
          {
            if (iter2.cur.wc_valid)
            {
              tmp___11 = 1;
            }
            else
            {
              if (iter1.cur.bytes == iter2.cur.bytes)
              {
                {
                  tmp___2 = memcmp((const void *) iter1.cur.ptr, (const void *) iter2.cur.ptr, iter1.cur.bytes);
                  tmp___10 = tmp___2;
                }
              }
              else
              {
                if (iter1.cur.bytes < iter2.cur.bytes)
                {
                  {
                    tmp___5 = memcmp((const void *) iter1.cur.ptr, (const void *) iter2.cur.ptr, iter1.cur.bytes);
                  }
                  if (tmp___5 > 0)
                  {
                    tmp___4 = 1;
                  }
                  else
                  {
                    tmp___4 = - 1;
                  }

                  tmp___9 = tmp___4;
                }
                else
                {
                  {
                    tmp___8 = memcmp((const void *) iter1.cur.ptr, (const void *) iter2.cur.ptr, iter2.cur.bytes);
                  }
                  if (tmp___8 >= 0)
                  {
                    tmp___7 = 1;
                  }
                  else
                  {
                    tmp___7 = - 1;
                  }

                  tmp___9 = tmp___7;
                }

                tmp___10 = tmp___9;
              }

              tmp___11 = tmp___10;
            }

            tmp___12 = tmp___11;
          }

          cmp = tmp___12;
          if (cmp != 0)
          {
            return cmp;
          }

          iter1.cur.ptr += iter1.cur.bytes;
          iter1.next_done = (_Bool) 0;
          iter2.cur.ptr += iter2.cur.bytes;
          iter2.next_done = (_Bool) 0;
        }

        while_break___1:
        ;

      }
      while_break:
      {
        mbuiter_multi_next(& iter1);
      }

      if (iter1.cur.wc_valid)
      {
        if (iter1.cur.wc == 0)
        {
          tmp___15 = 0;
        }
        else
        {
          tmp___15 = 1;
        }

      }
      else
      {
        tmp___15 = 1;
      }

      if (tmp___15)
      {
        return 1;
      }

      {
        mbuiter_multi_next(& iter2);
      }
      if (iter2.cur.wc_valid)
      {
        if (iter2.cur.wc == 0)
        {
          tmp___16 = 0;
        }
        else
        {
          tmp___16 = 1;
        }

      }
      else
      {
        tmp___16 = 1;
      }

      if (tmp___16)
      {
        return - 1;
      }

      return 0;
    }
    else
    {
      p1 = (const unsigned char *) s1;
      p2 = (const unsigned char *) s2;
      {
        while (1)
        {
          while_continue___0:
          ;

          {
            tmp___19 = __ctype_b_loc();
          }
          if (((const int) (* ((* tmp___19) + ((int) (* p1))))) & 256)
          {
            {
              tmp___18 = tolower((int) (* p1));
              c1 = (unsigned char) tmp___18;
            }
          }
          else
          {
            c1 = (unsigned char) (* p1);
          }

          {
            tmp___22 = __ctype_b_loc();
          }
          if (((const int) (* ((* tmp___22) + ((int) (* p2))))) & 256)
          {
            {
              tmp___21 = tolower((int) (* p2));
              c2 = (unsigned char) tmp___21;
            }
          }
          else
          {
            c2 = (unsigned char) (* p2);
          }

          if (((int) c1) == 0)
          {
            goto while_break___0;
          }

          p1++;
          p2++;
          if (! (((int) c1) == ((int) c2)))
          {
            goto while_break___0;
          }

        }

        while_break___2:
        ;

      }
      while_break___0:
      ;

      return ((int) c1) - ((int) c2);
    }

  }
}

const unsigned int is_basic_table[8] = {(const unsigned int) 6656, (const unsigned int) 4294967279U, (const unsigned int) 4294967294U, (const unsigned int) 2147483646};
static void *mmalloca_results[257];
void *mmalloca(size_t n)
{
  size_t nplus;
  void *p;
  void *tmp;
  size_t slot;
  union header *h;
  {
    nplus = n + (((((sizeof(struct preliminary_header)) + 16UL) - 1UL) / 16UL) * 16UL);
    if (nplus >= n)
    {
      {
        tmp = malloc(nplus);
        p = tmp;
      }
      if (((unsigned long) p) != ((unsigned long) ((void *) 0)))
      {
        h = (union header *) p;
        p = (void *) (h + 1);
        h->magic.word = 336984906;
        slot = ((uintptr_t) p) % 257UL;
        h->next = mmalloca_results[slot];
        mmalloca_results[slot] = p;
        return p;
      }

    }

    return (void *) 0;
  }
}

void freea(void *p)
{
  size_t slot;
  void **chain;
  union header *h;
  union header *p_begin;
  {
    if (((unsigned long) p) != ((unsigned long) ((void *) 0)))
    {
      if ((* (((int *) p) + (- 1))) == 336984906)
      {
        slot = ((uintptr_t) p) % 257UL;
        chain = & mmalloca_results[slot];
        {
          while (1)
          {
            while_continue:
            ;

            if (! (((unsigned long) (* chain)) != ((unsigned long) ((void *) 0))))
            {
              goto while_break;
            }

            h = (union header *) p;
            if (((unsigned long) (* chain)) == ((unsigned long) p))
            {
              {
                p_begin = h - 1;
                * chain = p_begin->next;
                free((void *) p_begin);
              }
              return;
            }

            h = (union header *) (* chain);
            chain = & (h + (- 1))->next;
          }

          while_break___0:
          ;

        }
        while_break:
        ;

      }

    }

    return;
  }
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
  const char *cp;
  const char *dir;
  const char *base;
  char *file_name___1;
  size_t dir_len___0;
  size_t tmp;
  size_t base_len___0;
  size_t tmp___0;
  int add_slash;
  int tmp___1;
  int fd;
  FILE *fp;
  char *res_ptr;
  size_t res_size;
  int c;
  char buf1[51];
  char buf2[51];
  size_t l1;
  size_t l2;
  char *old_res_ptr;
  int tmp___3;
  void *__cil_tmp36;
  void *__cil_tmp37;
  char *__cil_tmp38;
  char *__cil_tmp39;
  char *__cil_tmp40;
  char *__cil_tmp41;
  char *__cil_tmp42;
  char *__cil_tmp43;
  char *__cil_tmp44;
  char *__cil_tmp45;
  {
    cp = (const char *) charset_aliases;
    if (((unsigned long) cp) == ((unsigned long) ((void *) 0)))
    {
      {
        base = "charset.alias";
        dir = (const char *) getenv("CHARSETALIASDIR");
      }
      if (((unsigned long) dir) == ((unsigned long) ((void *) 0)))
      {
        dir = "/usr/local/lib";
      }
      else
        if (((const int) (* (dir + 0))) == 0)
      {
        dir = "/usr/local/lib";
      }


      {
        tmp = strlen(dir);
        dir_len___0 = tmp;
        tmp___0 = strlen(base);
        base_len___0 = tmp___0;
      }
      if (dir_len___0 > 0UL)
      {
        if (! (((const int) (* (dir + (dir_len___0 - 1UL)))) == 47))
        {
          tmp___1 = 1;
        }
        else
        {
          tmp___1 = 0;
        }

      }
      else
      {
        tmp___1 = 0;
      }

      {
        add_slash = tmp___1;
        file_name___1 = (char *) malloc(((dir_len___0 + ((size_t) add_slash)) + base_len___0) + 1UL);
      }
      if (((unsigned long) file_name___1) != ((unsigned long) ((void *) 0)))
      {
        {
          memcpy((void *) ((void *) file_name___1), (const void *) ((const void *) dir), dir_len___0);
        }
        if (add_slash)
        {
          * (file_name___1 + dir_len___0) = (char) '/';
        }

        {
          memcpy((void *) ((void *) ((file_name___1 + dir_len___0) + add_slash)), (const void *) ((const void *) base), base_len___0 + 1UL);
        }
      }

      if (((unsigned long) file_name___1) == ((unsigned long) ((void *) 0)))
      {
        cp = "";
      }
      else
      {
        {
          fd = open((const char *) file_name___1, 131072);
        }
        if (fd < 0)
        {
          cp = "";
        }
        else
        {
          {
            fp = fdopen(fd, "r");
          }
          if (((unsigned long) fp) == ((unsigned long) ((void *) 0)))
          {
            {
              close(fd);
              cp = "";
            }
          }
          else
          {
            res_ptr = (char *) ((void *) 0);
            res_size = (size_t) 0;
            {
              while (1)
              {
                while_continue:
                ;

                {
                  c = getc_unlocked(fp);
                }
                if (c == (- 1))
                {
                  goto while_break;
                }

                if (c == 10)
                {
                  goto __Cont;
                }
                else
                  if (c == 32)
                {
                  goto __Cont;
                }
                else
                  if (c == 9)
                {
                  goto __Cont;
                }



                if (c == 35)
                {
                  {
                    while (1)
                    {
                      while_continue___0:
                      ;

                      {
                        c = getc_unlocked(fp);
                      }
                      if (c == (- 1))
                      {
                        goto while_break___0;
                      }
                      else
                        if (c == 10)
                      {
                        goto while_break___0;
                      }


                    }

                    while_break___2:
                    ;

                  }
                  while_break___0:
                  ;

                  if (c == (- 1))
                  {
                    goto while_break;
                  }

                  goto __Cont;
                }

                {
                  ungetc(c, fp);
                  tmp___3 = fscanf((FILE *) fp, (const char *) "%50s %50s", buf1, buf2);
                }
                if (tmp___3 < 2)
                {
                  goto while_break;
                }

                {
                  l1 = strlen((const char *) buf1);
                  l2 = strlen((const char *) buf2);
                  old_res_ptr = res_ptr;
                }
                if (res_size == 0UL)
                {
                  {
                    res_size = ((l1 + 1UL) + l2) + 1UL;
                    res_ptr = (char *) malloc(res_size + 1UL);
                  }
                }
                else
                {
                  {
                    res_size += ((l1 + 1UL) + l2) + 1UL;
                    res_ptr = (char *) realloc((void *) res_ptr, res_size + 1UL);
                  }
                }

                if (((unsigned long) res_ptr) == ((unsigned long) ((void *) 0)))
                {
                  {
                    res_size = (size_t) 0;
                    free((void *) old_res_ptr);
                  }
                  goto while_break;
                }

                {
                  strcpy((char *) (((res_ptr + res_size) - (l2 + 1UL)) - (l1 + 1UL)), (const char *) ((const char *) buf1));
                  strcpy((char *) ((res_ptr + res_size) - (l2 + 1UL)), (const char *) ((const char *) buf2));
                }
                __Cont:
                ;

              }

              while_break___1:
              ;

            }
            while_break:
            {
              fclose(fp);
            }

            if (res_size == 0UL)
            {
              cp = "";
            }
            else
            {
              * (res_ptr + res_size) = (char) '\000';
              cp = (const char *) res_ptr;
            }

          }

        }

        {
          free((void *) file_name___1);
        }
      }

      charset_aliases = (const char *) cp;
    }

    return cp;
  }
}

const char *locale_charset(void)
{
  const char *codeset;
  const char *aliases;
  size_t tmp;
  size_t tmp___0;
  size_t tmp___1;
  int tmp___2;
  char *__cil_tmp10;
  char *__cil_tmp11;
  {
    {
      codeset = (const char *) nl_langinfo(14);
    }
    if (((unsigned long) codeset) == ((unsigned long) ((void *) 0)))
    {
      codeset = "";
    }

    {
      aliases = get_charset_aliases();
    }
    {
      while (1)
      {
        while_continue:
        ;

        if (! (((const int) (* aliases)) != 0))
        {
          goto while_break;
        }

        {
          tmp___2 = strcmp(codeset, aliases);
        }
        if (tmp___2 == 0)
        {
          {
            tmp___1 = strlen(aliases);
            codeset = (aliases + tmp___1) + 1;
          }
          goto while_break;
        }
        else
          if (((const int) (* (aliases + 0))) == 42)
        {
          if (((const int) (* (aliases + 1))) == 0)
          {
            {
              tmp___1 = strlen(aliases);
              codeset = (aliases + tmp___1) + 1;
            }
            goto while_break;
          }

        }


        {
          tmp = strlen(aliases);
          aliases += tmp + 1UL;
          tmp___0 = strlen(aliases);
          aliases += tmp___0 + 1UL;
        }
      }

      while_break___0:
      ;

    }
    while_break:
    ;

    if (((const int) (* (codeset + 0))) == 0)
    {
      codeset = "ASCII";
    }

    return codeset;
  }
}

void i_ring_init(I_ring *ir, int default_val);
int i_ring_push(I_ring *ir, int val);
int i_ring_pop(I_ring *ir);
_Bool i_ring_empty(const I_ring *ir);
void i_ring_init(I_ring *ir, int default_val)
{
  int i;
  {
    ir->ir_empty = (_Bool) 1;
    ir->ir_front = 0U;
    ir->ir_back = 0U;
    i = 0;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (i < 4))
        {
          goto while_break;
        }

        ir->ir_data[i] = default_val;
        i++;
      }

      while_break___0:
      ;

    }
    while_break:
    ir->ir_default_val = default_val;

    return;
  }
}

_Bool i_ring_empty(const I_ring *ir);
_Bool i_ring_empty(const I_ring *ir)
{
  {
    return (_Bool) ir->ir_empty;
  }
}

int i_ring_push(I_ring *ir, int val)
{
  unsigned int dest_idx;
  int old_val;
  {
    dest_idx = (ir->ir_front + ((unsigned int) (! ir->ir_empty))) % 4U;
    old_val = ir->ir_data[dest_idx];
    ir->ir_data[dest_idx] = val;
    ir->ir_front = dest_idx;
    if (dest_idx == ir->ir_back)
    {
      ir->ir_back = (ir->ir_back + ((unsigned int) (! ir->ir_empty))) % 4U;
    }

    ir->ir_empty = (_Bool) 0;
    return old_val;
  }
}

int i_ring_pop(I_ring *ir)
{
  int top_val;
  _Bool tmp;
  {
    {
      tmp = i_ring_empty((const I_ring *) ir);
    }
    if (tmp)
    {
      {
        abort();
      }
    }

    top_val = ir->ir_data[ir->ir_front];
    ir->ir_data[ir->ir_front] = ir->ir_default_val;
    if (ir->ir_front == ir->ir_back)
    {
      ir->ir_empty = (_Bool) 1;
    }
    else
    {
      ir->ir_front = ((ir->ir_front + 4U) - 1U) % 4U;
    }

    return top_val;
  }
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
  {
    return ((x >> n) | (x << ((8UL * (sizeof(x))) - ((unsigned long) n)))) & 0xffffffffffffffffUL;
  }
}

static const struct hash_tuning default_tuning = {0.0f, 1.0f, 0.8f, 1.414f, (_Bool) 0};
static struct hash_entry *safe_hasher(const Hash_table *table, const void *key)
{
  size_t n;
  size_t tmp;
  {
    {
      tmp = (* table->hasher)(key, (size_t) table->n_buckets);
      n = tmp;
    }
    if (! (n < ((size_t) table->n_buckets)))
    {
      {
        abort();
      }
    }

    return (struct hash_entry *) (table->bucket + n);
  }
}

void *hash_lookup(const Hash_table *table, const void *entry)
{
  const struct hash_entry *bucket;
  const struct hash_entry *tmp;
  const struct hash_entry *cursor;
  _Bool tmp___0;
  {
    {
      tmp = (const struct hash_entry *) safe_hasher(table, entry);
      bucket = tmp;
    }
    if (((unsigned long) bucket->data) == ((unsigned long) ((void *) 0)))
    {
      return (void *) 0;
    }

    cursor = bucket;
    {
      while (1)
      {
        while_continue:
        ;

        if (! cursor)
        {
          goto while_break;
        }

        if (((unsigned long) entry) == ((unsigned long) cursor->data))
        {
          return (void *) cursor->data;
        }
        else
        {
          {
            tmp___0 = (* table->comparator)(entry, (const void *) cursor->data);
          }
          if (tmp___0)
          {
            return (void *) cursor->data;
          }

        }

        cursor = (const struct hash_entry *) cursor->next;
      }

      while_break___0:
      ;

    }
    while_break:
    ;

    return (void *) 0;
  }
}

size_t hash_string(const char *string, size_t n_buckets);
size_t hash_string(const char *string, size_t n_buckets)
{
  size_t value;
  unsigned char ch;
  {
    value = (size_t) 0;
    {
      while (1)
      {
        while_continue:
        ;

        ch = (unsigned char) (* string);
        if (! ch)
        {
          goto while_break;
        }

        value = ((value * 31UL) + ((size_t) ch)) % n_buckets;
        string++;
      }

      while_break___0:
      ;

    }
    while_break:
    ;

    return value;
  }
}

static _Bool is_prime(size_t candidate);
static _Bool is_prime(size_t candidate);
static _Bool is_prime(size_t candidate)
{
  size_t divisor;
  size_t square;
  int tmp;
  {
    divisor = (size_t) 3;
    square = divisor * divisor;
    {
      while (1)
      {
        while_continue:
        ;

        if (square < candidate)
        {
          if (! (candidate % divisor))
          {
            goto while_break;
          }

        }
        else
        {
          goto while_break;
        }

        divisor++;
        square += 4UL * divisor;
        divisor++;
      }

      while_break___0:
      ;

    }
    while_break:
    ;

    if (candidate % divisor)
    {
      tmp = 1;
    }
    else
    {
      tmp = 0;
    }

    return (_Bool) tmp;
  }
}

static size_t next_prime(size_t candidate);
static size_t next_prime(size_t candidate);
static size_t next_prime(size_t candidate)
{
  _Bool tmp;
  {
    if (candidate < 10UL)
    {
      candidate = (size_t) 10;
    }

    candidate |= 1UL;
    {
      while (1)
      {
        while_continue:
        ;

        if (0xffffffffffffffffUL != candidate)
        {
          {
            tmp = is_prime(candidate);
          }
          if (tmp)
          {
            goto while_break;
          }

        }
        else
        {
          goto while_break;
        }

        candidate += 2UL;
      }

      while_break___0:
      ;

    }
    while_break:
    ;

    return candidate;
  }
}

static size_t raw_hasher(const void *data, size_t n)
{
  size_t val;
  size_t tmp;
  {
    {
      tmp = rotr_sz((size_t) data, 3);
      val = tmp;
    }
    return val % n;
  }
}

static _Bool raw_comparator(const void *a, const void *b)
{
  {
    return (_Bool) (((unsigned long) a) == ((unsigned long) b));
  }
}

static _Bool check_tuning(Hash_table *table)
{
  const Hash_tuning *tuning;
  float epsilon;
  {
    tuning = table->tuning;
    if (((unsigned long) tuning) == ((unsigned long) (& default_tuning)))
    {
      return (_Bool) 1;
    }

    epsilon = 0.1f;
    if (epsilon < ((float) tuning->growth_threshold))
    {
      if (tuning->growth_threshold < ((const float) (((float) 1) - epsilon)))
      {
        if ((((float) 1) + epsilon) < ((float) tuning->growth_factor))
        {
          if (((const float) 0) <= tuning->shrink_threshold)
          {
            if ((tuning->shrink_threshold + ((const float) epsilon)) < tuning->shrink_factor)
            {
              if (tuning->shrink_factor <= ((const float) 1))
              {
                if ((tuning->shrink_threshold + ((const float) epsilon)) < tuning->growth_threshold)
                {
                  return (_Bool) 1;
                }

              }

            }

          }

        }

      }

    }

    table->tuning = & default_tuning;
    return (_Bool) 0;
  }
}

static size_t compute_bucket_size(size_t candidate, const Hash_tuning *tuning)
{
  float new_candidate;
  int tmp;
  {
    if (! tuning->is_n_buckets)
    {
      new_candidate = (float) (((const float) candidate) / tuning->growth_threshold);
      if (((float) 0xffffffffffffffffUL) <= new_candidate)
      {
        return (size_t) 0;
      }

      candidate = (size_t) new_candidate;
    }

    {
      candidate = next_prime(candidate);
    }
    if ((sizeof(ptrdiff_t)) <= (sizeof(size_t)))
    {
      tmp = - 1;
    }
    else
    {
      tmp = - 2;
    }

    if ((((size_t) tmp) / (sizeof(struct hash_entry *))) < candidate)
    {
      return (size_t) 0;
    }

    return (size_t) candidate;
  }
}

Hash_table *hash_initialize(size_t candidate, const Hash_tuning *tuning, size_t (*hasher)(const void *, size_t), _Bool (*comparator)(const void *, const void *), void (*data_freer)(void *))
{
  Hash_table *table;
  _Bool tmp;
  {
    if (((unsigned long) hasher) == ((unsigned long) ((void *) 0)))
    {
      hasher = & raw_hasher;
    }

    if (((unsigned long) comparator) == ((unsigned long) ((void *) 0)))
    {
      comparator = & raw_comparator;
    }

    {
      table = (Hash_table *) malloc(sizeof(* table));
    }
    if (((unsigned long) table) == ((unsigned long) ((void *) 0)))
    {
      return (Hash_table *) ((void *) 0);
    }

    if (! tuning)
    {
      tuning = & default_tuning;
    }

    {
      table->tuning = tuning;
      tmp = check_tuning(table);
    }
    if (! tmp)
    {
      goto fail;
    }

    {
      table->n_buckets = (size_t) compute_bucket_size(candidate, tuning);
    }
    if (! table->n_buckets)
    {
      goto fail;
    }

    {
      table->bucket = (struct hash_entry *) calloc(table->n_buckets, sizeof(* table->bucket));
    }
    if (((unsigned long) table->bucket) == ((unsigned long) ((void *) 0)))
    {
      goto fail;
    }

    table->bucket_limit = (const struct hash_entry *) (table->bucket + table->n_buckets);
    table->n_buckets_used = (size_t) 0;
    table->n_entries = (size_t) 0;
    table->hasher = hasher;
    table->comparator = comparator;
    table->data_freer = data_freer;
    table->free_entry_list = (struct hash_entry *) ((void *) 0);
    return table;
    fail:
    {
      free((void *) table);
    }

    return (Hash_table *) ((void *) 0);
  }
}

void hash_free(Hash_table *table)
{
  struct hash_entry *bucket;
  struct hash_entry *cursor;
  struct hash_entry *next;
  {
    if (table->data_freer)
    {
      if (table->n_entries)
      {
        bucket = table->bucket;
        {
          while (1)
          {
            while_continue:
            ;

            if (! (((unsigned long) bucket) < ((unsigned long) table->bucket_limit)))
            {
              goto while_break;
            }

            if (bucket->data)
            {
              cursor = bucket;
              {
                while (1)
                {
                  while_continue___0:
                  ;

                  if (! cursor)
                  {
                    goto while_break___0;
                  }

                  {
                    (* table->data_freer)(cursor->data);
                    cursor = cursor->next;
                  }
                }

                while_break___5:
                ;

              }
              while_break___0:
              ;

            }

            bucket++;
          }

          while_break___4:
          ;

        }
        while_break:
        ;

      }

    }

    bucket = table->bucket;
    {
      while (1)
      {
        while_continue___1:
        ;

        if (! (((unsigned long) bucket) < ((unsigned long) table->bucket_limit)))
        {
          goto while_break___1;
        }

        cursor = bucket->next;
        {
          while (1)
          {
            while_continue___2:
            ;

            if (! cursor)
            {
              goto while_break___2;
            }

            {
              next = cursor->next;
              free((void *) cursor);
              cursor = next;
            }
          }

          while_break___7:
          ;

        }
        while_break___2:
        bucket++;

      }

      while_break___6:
      ;

    }
    while_break___1:
    cursor = table->free_entry_list;

    {
      while (1)
      {
        while_continue___3:
        ;

        if (! cursor)
        {
          goto while_break___3;
        }

        {
          next = cursor->next;
          free((void *) cursor);
          cursor = next;
        }
      }

      while_break___8:
      ;

    }
    while_break___3:
    {
      free((void *) table->bucket);
      free((void *) table);
    }

    return;
  }
}

static struct hash_entry *allocate_entry(Hash_table *table)
{
  struct hash_entry *new;
  {
    if (table->free_entry_list)
    {
      new = table->free_entry_list;
      table->free_entry_list = new->next;
    }
    else
    {
      {
        new = (struct hash_entry *) malloc(sizeof(* new));
      }
    }

    return new;
  }
}

static void free_entry(Hash_table *table, struct hash_entry *entry)
{
  {
    entry->data = (void *) 0;
    entry->next = table->free_entry_list;
    table->free_entry_list = entry;
    return;
  }
}

static void *hash_find_entry(Hash_table *table, const void *entry, struct hash_entry **bucket_head, _Bool delete___0)
{
  struct hash_entry *bucket;
  struct hash_entry *tmp;
  struct hash_entry *cursor;
  void *data;
  struct hash_entry *next;
  _Bool tmp___0;
  void *data___0;
  struct hash_entry *next___0;
  _Bool tmp___1;
  {
    {
      tmp = safe_hasher((const Hash_table *) table, entry);
      bucket = tmp;
      * bucket_head = bucket;
    }
    if (((unsigned long) bucket->data) == ((unsigned long) ((void *) 0)))
    {
      return (void *) 0;
    }

    if (((unsigned long) entry) == ((unsigned long) bucket->data))
    {
      goto _L;
    }
    else
    {
      {
        tmp___0 = (* table->comparator)(entry, (const void *) bucket->data);
      }
      if (tmp___0)
      {
        _L:
        data = bucket->data;

        if (delete___0)
        {
          if (bucket->next)
          {
            {
              next = bucket->next;
              * bucket = * next;
              free_entry(table, next);
            }
          }
          else
          {
            bucket->data = (void *) 0;
          }

        }

        return data;
      }

    }

    cursor = bucket;
    {
      while (1)
      {
        while_continue:
        ;

        if (! cursor->next)
        {
          goto while_break;
        }

        if (((unsigned long) entry) == ((unsigned long) cursor->next->data))
        {
          goto _L___0;
        }
        else
        {
          {
            tmp___1 = (* table->comparator)(entry, (const void *) cursor->next->data);
          }
          if (tmp___1)
          {
            _L___0:
            data___0 = cursor->next->data;

            if (delete___0)
            {
              {
                next___0 = cursor->next;
                cursor->next = next___0->next;
                free_entry(table, next___0);
              }
            }

            return data___0;
          }

        }

        cursor = cursor->next;
      }

      while_break___0:
      ;

    }
    while_break:
    ;

    return (void *) 0;
  }
}

static _Bool transfer_entries(Hash_table *dst, Hash_table *src, _Bool safe)
{
  struct hash_entry *bucket;
  struct hash_entry *cursor;
  struct hash_entry *next;
  void *data;
  struct hash_entry *new_bucket;
  struct hash_entry *new_entry;
  struct hash_entry *tmp;
  {
    bucket = src->bucket;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (((unsigned long) bucket) < ((unsigned long) src->bucket_limit)))
        {
          goto while_break;
        }

        if (bucket->data)
        {
          cursor = bucket->next;
          {
            while (1)
            {
              while_continue___0:
              ;

              if (! cursor)
              {
                goto while_break___0;
              }

              {
                data = cursor->data;
                new_bucket = safe_hasher((const Hash_table *) dst, (const void *) data);
                next = cursor->next;
              }
              if (new_bucket->data)
              {
                cursor->next = new_bucket->next;
                new_bucket->next = cursor;
              }
              else
              {
                {
                  new_bucket->data = data;
                  dst->n_buckets_used++;
                  free_entry(dst, cursor);
                }
              }

              cursor = next;
            }

            while_break___2:
            ;

          }
          while_break___0:
          data = bucket->data;

          bucket->next = (struct hash_entry *) ((void *) 0);
          if (safe)
          {
            goto __Cont;
          }

          {
            new_bucket = safe_hasher((const Hash_table *) dst, (const void *) data);
          }
          if (new_bucket->data)
          {
            {
              tmp = allocate_entry(dst);
              new_entry = tmp;
            }
            if (((unsigned long) new_entry) == ((unsigned long) ((void *) 0)))
            {
              return (_Bool) 0;
            }

            new_entry->data = data;
            new_entry->next = new_bucket->next;
            new_bucket->next = new_entry;
          }
          else
          {
            new_bucket->data = data;
            dst->n_buckets_used++;
          }

          bucket->data = (void *) 0;
          src->n_buckets_used--;
        }

        __Cont:
        bucket++;

      }

      while_break___1:
      ;

    }
    while_break:
    ;

    return (_Bool) 1;
  }
}

_Bool hash_rehash(Hash_table *table, size_t candidate)
{
  Hash_table storage;
  Hash_table *new_table;
  size_t new_size;
  size_t tmp;
  _Bool tmp___0;
  _Bool tmp___1;
  _Bool tmp___2;
  {
    {
      tmp = (size_t) compute_bucket_size(candidate, table->tuning);
      new_size = tmp;
    }
    if (! new_size)
    {
      return (_Bool) 0;
    }

    if (new_size == table->n_buckets)
    {
      return (_Bool) 1;
    }

    {
      new_table = & storage;
      new_table->bucket = (struct hash_entry *) calloc(new_size, sizeof(* new_table->bucket));
    }
    if (((unsigned long) new_table->bucket) == ((unsigned long) ((void *) 0)))
    {
      return (_Bool) 0;
    }

    {
      new_table->n_buckets = new_size;
      new_table->bucket_limit = (const struct hash_entry *) (new_table->bucket + new_size);
      new_table->n_buckets_used = (size_t) 0;
      new_table->n_entries = (size_t) 0;
      new_table->tuning = table->tuning;
      new_table->hasher = table->hasher;
      new_table->comparator = table->comparator;
      new_table->data_freer = table->data_freer;
      new_table->free_entry_list = table->free_entry_list;
      tmp___0 = transfer_entries(new_table, table, (_Bool) 0);
    }
    if (tmp___0)
    {
      {
        free((void *) table->bucket);
        table->bucket = new_table->bucket;
        table->bucket_limit = new_table->bucket_limit;
        table->n_buckets = new_table->n_buckets;
        table->n_buckets_used = new_table->n_buckets_used;
        table->free_entry_list = new_table->free_entry_list;
      }
      return (_Bool) 1;
    }

    {
      table->free_entry_list = new_table->free_entry_list;
      tmp___1 = transfer_entries(table, new_table, (_Bool) 1);
    }
    if (tmp___1)
    {
      {
        tmp___2 = transfer_entries(table, new_table, (_Bool) 0);
      }
      if (! tmp___2)
      {
        {
          abort();
        }
      }

    }
    else
    {
      {
        abort();
      }
    }

    {
      free((void *) new_table->bucket);
    }
    return (_Bool) 0;
  }
}

int hash_insert_if_absent(Hash_table *table, const void *entry, const void **matched_ent)
{
  void *data;
  struct hash_entry *bucket;
  const Hash_tuning *tuning;
  float candidate;
  float tmp;
  _Bool tmp___0;
  void *tmp___1;
  struct hash_entry *new_entry;
  struct hash_entry *tmp___2;
  {
    if (! entry)
    {
      {
        abort();
      }
    }

    {
      data = hash_find_entry(table, entry, & bucket, (_Bool) 0);
    }
    if (((unsigned long) data) != ((unsigned long) ((void *) 0)))
    {
      if (matched_ent)
      {
        * matched_ent = (const void *) data;
      }

      return 0;
    }

    if (((const float) table->n_buckets_used) > (table->tuning->growth_threshold * ((const float) table->n_buckets)))
    {
      {
        check_tuning(table);
      }
      if (((const float) table->n_buckets_used) > (table->tuning->growth_threshold * ((const float) table->n_buckets)))
      {
        tuning = table->tuning;
        if (tuning->is_n_buckets)
        {
          tmp = (float) (((const float) table->n_buckets) * tuning->growth_factor);
        }
        else
        {
          tmp = (float) ((((const float) table->n_buckets) * tuning->growth_factor) * tuning->growth_threshold);
        }

        candidate = tmp;
        if (((float) 0xffffffffffffffffUL) <= candidate)
        {
          return - 1;
        }

        {
          tmp___0 = hash_rehash(table, (size_t) candidate);
        }
        if (! tmp___0)
        {
          return - 1;
        }

        {
          tmp___1 = hash_find_entry(table, entry, & bucket, (_Bool) 0);
        }
        if (((unsigned long) tmp___1) != ((unsigned long) ((void *) 0)))
        {
          {
            abort();
          }
        }

      }

    }

    if (bucket->data)
    {
      {
        tmp___2 = allocate_entry(table);
        new_entry = tmp___2;
      }
      if (((unsigned long) new_entry) == ((unsigned long) ((void *) 0)))
      {
        return - 1;
      }

      new_entry->data = (void *) entry;
      new_entry->next = bucket->next;
      bucket->next = new_entry;
      table->n_entries++;
      return 1;
    }

    bucket->data = (void *) entry;
    table->n_entries++;
    table->n_buckets_used++;
    return 1;
  }
}

void *hash_insert(Hash_table *table, const void *entry)
{
  const void *matched_ent;
  int err;
  int tmp;
  const void *tmp___0;
  void *tmp___1;
  {
    {
      tmp = hash_insert_if_absent(table, entry, & matched_ent);
      err = tmp;
    }
    if (err == (- 1))
    {
      tmp___1 = (void *) 0;
    }
    else
    {
      if (err == 0)
      {
        tmp___0 = matched_ent;
      }
      else
      {
        tmp___0 = entry;
      }

      tmp___1 = (void *) tmp___0;
    }

    return tmp___1;
  }
}

void *hash_delete(Hash_table *table, const void *entry)
{
  void *data;
  struct hash_entry *bucket;
  const Hash_tuning *tuning;
  size_t candidate;
  float tmp;
  struct hash_entry *cursor;
  struct hash_entry *next;
  _Bool tmp___0;
  {
    {
      data = hash_find_entry(table, entry, & bucket, (_Bool) 1);
    }
    if (! data)
    {
      return (void *) 0;
    }

    table->n_entries--;
    if (! bucket->data)
    {
      table->n_buckets_used--;
      if (((const float) table->n_buckets_used) < (table->tuning->shrink_threshold * ((const float) table->n_buckets)))
      {
        {
          check_tuning(table);
        }
        if (((const float) table->n_buckets_used) < (table->tuning->shrink_threshold * ((const float) table->n_buckets)))
        {
          tuning = table->tuning;
          if (tuning->is_n_buckets)
          {
            tmp = (float) (((const float) table->n_buckets) * tuning->shrink_factor);
          }
          else
          {
            tmp = (float) ((((const float) table->n_buckets) * tuning->shrink_factor) * tuning->growth_threshold);
          }

          {
            candidate = (size_t) tmp;
            tmp___0 = hash_rehash(table, candidate);
          }
          if (! tmp___0)
          {
            cursor = table->free_entry_list;
            {
              while (1)
              {
                while_continue:
                ;

                if (! cursor)
                {
                  goto while_break;
                }

                {
                  next = cursor->next;
                  free((void *) cursor);
                  cursor = next;
                }
              }

              while_break___0:
              ;

            }
            while_break:
            table->free_entry_list = (struct hash_entry *) ((void *) 0);

          }

        }

      }

    }

    return data;
  }
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
  const struct Active_dir *ax;
  const struct Active_dir *ay;
  int tmp;
  {
    ax = (const struct Active_dir *) x;
    ay = (const struct Active_dir *) y;
    if (ax->ino == ay->ino)
    {
      if (ax->dev == ay->dev)
      {
        tmp = 1;
      }
      else
      {
        tmp = 0;
      }

    }
    else
    {
      tmp = 0;
    }

    return (_Bool) tmp;
  }
}

static size_t AD_hash(const void *x, size_t table_size)
{
  const struct Active_dir *ax;
  {
    ax = (const struct Active_dir *) x;
    return ((uintmax_t) ax->ino) % table_size;
  }
}

static _Bool setup_dir(FTS *fts)
{
  {
    if (fts->fts_options & 258)
    {
      {
        fts->fts_cycle.ht = hash_initialize((size_t) 31, (const Hash_tuning *) ((void *) 0), & AD_hash, & AD_compare, & free);
      }
      if (! fts->fts_cycle.ht)
      {
        return (_Bool) 0;
      }

    }
    else
    {
      {
        fts->fts_cycle.state = (struct cycle_check_state *) malloc(sizeof(* fts->fts_cycle.state));
      }
      if (! fts->fts_cycle.state)
      {
        return (_Bool) 0;
      }

      {
        cycle_check_init(fts->fts_cycle.state);
      }
    }

    return (_Bool) 1;
  }
}

static _Bool enter_dir(FTS *fts, FTSENT *ent)
{
  const struct stat *st;
  struct Active_dir *ad;
  struct Active_dir *tmp;
  struct Active_dir *ad_from_table;
  _Bool tmp___0;
  {
    if (fts->fts_options & 258)
    {
      {
        st = (const struct stat *) ent->fts_statp;
        tmp = (struct Active_dir *) malloc(sizeof(* ad));
        ad = tmp;
      }
      if (! ad)
      {
        return (_Bool) 0;
      }

      {
        ad->dev = (dev_t) st->st_dev;
        ad->ino = (ino_t) st->st_ino;
        ad->fts_ent = ent;
        ad_from_table = (struct Active_dir *) hash_insert(fts->fts_cycle.ht, (const void *) ad);
      }
      if (((unsigned long) ad_from_table) != ((unsigned long) ad))
      {
        {
          free((void *) ad);
        }
        if (! ad_from_table)
        {
          return (_Bool) 0;
        }

        ent->fts_cycle = ad_from_table->fts_ent;
        ent->fts_info = (unsigned short) 2;
      }

    }
    else
    {
      {
        tmp___0 = cycle_check(fts->fts_cycle.state, (const struct stat *) ent->fts_statp);
      }
      if (tmp___0)
      {
        ent->fts_cycle = ent;
        ent->fts_info = (unsigned short) 2;
      }

    }

    return (_Bool) 1;
  }
}

static void leave_dir(FTS *fts, FTSENT *ent)
{
  const struct stat *st;
  struct Active_dir obj;
  void *found;
  FTSENT *parent;
  {
    st = (const struct stat *) ent->fts_statp;
    if (fts->fts_options & 258)
    {
      {
        obj.dev = (dev_t) st->st_dev;
        obj.ino = (ino_t) st->st_ino;
        found = hash_delete(fts->fts_cycle.ht, (const void *) (& obj));
      }
      if (! found)
      {
        {
          abort();
        }
      }

      {
        free(found);
      }
    }
    else
    {
      parent = ent->fts_parent;
      if (((unsigned long) parent) != ((unsigned long) ((void *) 0)))
      {
        if (0L <= parent->fts_level)
        {
          {
            while (1)
            {
              while_continue:
              ;

              if (fts->fts_cycle.state->chdir_counter == 0UL)
              {
                {
                  abort();
                }
              }

              if (fts->fts_cycle.state->dev_ino.st_ino == ((ino_t) st->st_ino))
              {
                if (fts->fts_cycle.state->dev_ino.st_dev == ((dev_t) st->st_dev))
                {
                  fts->fts_cycle.state->dev_ino.st_dev = parent->fts_statp[0].st_dev;
                  fts->fts_cycle.state->dev_ino.st_ino = parent->fts_statp[0].st_ino;
                }

              }

              goto while_break;
            }

            while_break___0:
            ;

          }
          while_break:
          ;

        }

      }

    }

    return;
  }
}

static void free_dir(FTS *sp)
{
  {
    if (sp->fts_options & 258)
    {
      if (sp->fts_cycle.ht)
      {
        {
          hash_free(sp->fts_cycle.ht);
        }
      }

    }
    else
    {
      {
        free((void *) sp->fts_cycle.state);
      }
    }

    return;
  }
}

static void fd_ring_clear(I_ring *fd_ring)
{
  int fd;
  int tmp;
  _Bool tmp___0;
  {
    {
      while (1)
      {
        while_continue:
        ;

        {
          tmp___0 = i_ring_empty((const I_ring *) fd_ring);
        }
        if (tmp___0)
        {
          goto while_break;
        }

        {
          tmp = i_ring_pop(fd_ring);
          fd = tmp;
        }
        if (0 <= fd)
        {
          {
            close(fd);
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

static void fts_set_stat_required(FTSENT *p, _Bool required)
{
  {
    {
      while (1)
      {
        while_continue:
        ;

        if (! (((int) p->fts_info) == 11))
        {
          {
            abort();
          }
        }

        goto while_break;
      }

      while_break___0:
      ;

    }
    while_break:
    ;

    if (required)
    {
      p->fts_statp[0].st_size = (__off_t) 2;
    }
    else
    {
      p->fts_statp[0].st_size = (__off_t) 1;
    }

    return;
  }
}

static DIR *opendirat(int fd, const char *dir, int extra_flags, int *pdir_fd)
{
  int new_fd;
  int tmp;
  DIR *dirp;
  int saved_errno;
  int *tmp___0;
  int *tmp___1;
  {
    {
      tmp = openat_safer(fd, dir, 67840 | extra_flags);
      new_fd = tmp;
    }
    if (new_fd < 0)
    {
      return (DIR *) ((void *) 0);
    }

    {
      set_cloexec_flag(new_fd, (_Bool) 1);
      dirp = fdopendir(new_fd);
    }
    if (dirp)
    {
      * pdir_fd = new_fd;
    }
    else
    {
      {
        tmp___0 = __errno_location();
        saved_errno = * tmp___0;
        close(new_fd);
        tmp___1 = __errno_location();
        * tmp___1 = saved_errno;
      }
    }

    return dirp;
  }
}

static void cwd_advance_fd(FTS *sp, int fd, _Bool chdir_down_one)
{
  int old;
  int prev_fd_in_slot;
  int tmp;
  {
    old = sp->fts_cwd_fd;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (old != fd))
        {
          if (! (old == (- 100)))
          {
            {
              abort();
            }
          }

        }

        goto while_break;
      }

      while_break___0:
      ;

    }
    while_break:
    ;

    if (chdir_down_one)
    {
      {
        tmp = i_ring_push(& sp->fts_fd_ring, old);
        prev_fd_in_slot = tmp;
      }
      if (0 <= prev_fd_in_slot)
      {
        {
          close(prev_fd_in_slot);
        }
      }

    }
    else
      if (! (sp->fts_options & 4))
    {
      if (0 <= old)
      {
        {
          close(old);
        }
      }

    }


    sp->fts_cwd_fd = fd;
    return;
  }
}

static int restore_initial_cwd(FTS *sp)
{
  int fail;
  int tmp;
  int tmp___0;
  int tmp___1;
  int tmp___2;
  int tmp___3;
  {
    if (! (sp->fts_options & 4))
    {
      if (sp->fts_options & 512)
      {
        if (sp->fts_options & 512)
        {
          tmp = - 100;
        }
        else
        {
          tmp = sp->fts_rfd;
        }

        {
          cwd_advance_fd(sp, tmp, (_Bool) 1);
          tmp___2 = 0;
        }
      }
      else
      {
        if (sp->fts_options & 512)
        {
          tmp___0 = - 100;
        }
        else
        {
          tmp___0 = sp->fts_rfd;
        }

        {
          tmp___1 = fchdir(tmp___0);
          tmp___2 = tmp___1;
        }
      }

      if (tmp___2)
      {
        tmp___3 = 1;
      }
      else
      {
        tmp___3 = 0;
      }

    }
    else
    {
      tmp___3 = 0;
    }

    {
      fail = tmp___3;
      fd_ring_clear(& sp->fts_fd_ring);
    }
    return fail;
  }
}

static int diropen(const FTS *sp, const char *dir)
{
  int open_flags;
  int tmp;
  int tmp___0;
  int fd;
  int tmp___1;
  int tmp___2;
  int tmp___3;
  {
    if (sp->fts_options & 16)
    {
      tmp = 131072;
    }
    else
    {
      tmp = 0;
    }

    if (sp->fts_options & 2048)
    {
      tmp___0 = 262144;
    }
    else
    {
      tmp___0 = 0;
    }

    open_flags = (67840 | tmp) | tmp___0;
    if (sp->fts_options & 512)
    {
      {
        tmp___1 = openat_safer((int) sp->fts_cwd_fd, dir, open_flags);
        tmp___3 = tmp___1;
      }
    }
    else
    {
      {
        tmp___2 = open_safer(dir, open_flags);
        tmp___3 = tmp___2;
      }
    }

    fd = tmp___3;
    if (0 <= fd)
    {
      {
        set_cloexec_flag(fd, (_Bool) 1);
      }
    }

    return fd;
  }
}

FTS *fts_open(char *const *argv, int options, int (*compar)(const FTSENT **, const FTSENT **));
FTS *fts_open(char *const *argv, int options, int (*compar)(const FTSENT **, const FTSENT **))
{
  register FTS *sp;
  register FTSENT *p;
  register FTSENT *root;
  register size_t nitems;
  FTSENT *parent;
  FTSENT *tmp;
  _Bool defer_stat;
  int *tmp___0;
  int *tmp___1;
  int *tmp___2;
  size_t maxarglen;
  size_t tmp___5;
  size_t tmp___6;
  _Bool tmp___7;
  int tmp___8;
  size_t len;
  size_t tmp___9;
  const char *v;
  struct _ftsent *tmp___10;
  _Bool tmp___11;
  int tmp___12;
  void *__cil_tmp31;
  char *__cil_tmp32;
  char *__cil_tmp33;
  char *__cil_tmp34;
  {
    parent = (FTSENT *) ((void *) 0);
    tmp = (FTSENT *) ((void *) 0);
    if (options & (- 8192))
    {
      {
        tmp___0 = __errno_location();
        * tmp___0 = 22;
      }
      return (FTS *) ((void *) 0);
    }

    if (options & 4)
    {
      if (options & 512)
      {
        {
          tmp___1 = __errno_location();
          * tmp___1 = 22;
        }
        return (FTS *) ((void *) 0);
      }

    }

    if (! (options & 18))
    {
      {
        tmp___2 = __errno_location();
        * tmp___2 = 22;
      }
      return (FTS *) ((void *) 0);
    }

    {
      sp = (FTS *) malloc(sizeof(FTS));
    }
    if (((unsigned long) sp) == ((unsigned long) ((void *) 0)))
    {
      return (FTS *) ((void *) 0);
    }

    {
      memset((void *) sp, 0, sizeof(FTS));
      sp->fts_compar = compar;
      sp->fts_options = options;
    }
    if (sp->fts_options & 2)
    {
      sp->fts_options |= 4;
      sp->fts_options &= - 513;
    }

    {
      sp->fts_cwd_fd = - 100;
      tmp___5 = (size_t) fts_maxarglen(argv);
      maxarglen = tmp___5;
    }
    if (maxarglen > 4096UL)
    {
      tmp___6 = maxarglen;
    }
    else
    {
      tmp___6 = (size_t) 4096;
    }

    {
      tmp___7 = fts_palloc(sp, tmp___6);
    }
    if (! tmp___7)
    {
      goto mem1;
    }

    if (((unsigned long) (* argv)) != ((unsigned long) ((void *) 0)))
    {
      {
        parent = fts_alloc(sp, "", (size_t) 0);
      }
      if (((unsigned long) parent) == ((unsigned long) ((void *) 0)))
      {
        goto mem2;
      }

      parent->fts_level = (ptrdiff_t) (- 1);
    }

    if (((unsigned long) compar) == ((unsigned long) ((void *) 0)))
    {
      tmp___8 = 1;
    }
    else
      if (sp->fts_options & 1024)
    {
      tmp___8 = 1;
    }
    else
    {
      tmp___8 = 0;
    }


    defer_stat = (_Bool) tmp___8;
    root = (FTSENT *) ((void *) 0);
    nitems = (size_t) 0;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (((unsigned long) (* argv)) != ((unsigned long) ((void *) 0))))
        {
          goto while_break;
        }

        {
          tmp___9 = strlen((const char *) (* argv));
          len = tmp___9;
        }
        if (! (options & 4096))
        {
          v = (const char *) (* argv);
          if (2UL < len)
          {
            if (((const int) (* (v + (len - 1UL)))) == 47)
            {
              {
                while (1)
                {
                  while_continue___0:
                  ;

                  if (1UL < len)
                  {
                    if (! (((const int) (* (v + (len - 2UL)))) == 47))
                    {
                      goto while_break___0;
                    }

                  }
                  else
                  {
                    goto while_break___0;
                  }

                  len--;
                }

                while_break___2:
                ;

              }
              while_break___0:
              ;

            }

          }

        }

        {
          p = fts_alloc(sp, (const char *) (* argv), len);
        }
        if (((unsigned long) p) == ((unsigned long) ((void *) 0)))
        {
          goto mem3;
        }

        p->fts_level = (ptrdiff_t) 0;
        p->fts_parent = parent;
        p->fts_accpath = p->fts_name;
        if (defer_stat)
        {
          if (((unsigned long) root) != ((unsigned long) ((void *) 0)))
          {
            {
              p->fts_info = (unsigned short) 11;
              fts_set_stat_required(p, (_Bool) 1);
            }
          }
          else
          {
            {
              p->fts_info = fts_stat(sp, p, (_Bool) 0);
            }
          }

        }
        else
        {
          {
            p->fts_info = fts_stat(sp, p, (_Bool) 0);
          }
        }

        if (compar)
        {
          p->fts_link = root;
          root = p;
        }
        else
        {
          p->fts_link = (struct _ftsent *) ((void *) 0);
          if (((unsigned long) root) == ((unsigned long) ((void *) 0)))
          {
            root = p;
            tmp = root;
          }
          else
          {
            tmp->fts_link = p;
            tmp = p;
          }

        }

        argv++;
        nitems++;
      }

      while_break___1:
      ;

    }
    while_break:
    ;

    if (compar)
    {
      if (nitems > 1UL)
      {
        {
          root = fts_sort(sp, root, nitems);
        }
      }

    }

    {
      tmp___10 = fts_alloc(sp, "", (size_t) 0);
      sp->fts_cur = tmp___10;
    }
    if (((unsigned long) tmp___10) == ((unsigned long) ((void *) 0)))
    {
      goto mem3;
    }

    {
      sp->fts_cur->fts_link = root;
      sp->fts_cur->fts_info = (unsigned short) 9;
      tmp___11 = setup_dir(sp);
    }
    if (! tmp___11)
    {
      goto mem3;
    }

    if (! (sp->fts_options & 4))
    {
      if (! (sp->fts_options & 512))
      {
        {
          tmp___12 = diropen((const FTS *) sp, ".");
          sp->fts_rfd = tmp___12;
        }
        if (tmp___12 < 0)
        {
          sp->fts_options |= 4;
        }

      }

    }

    {
      i_ring_init(& sp->fts_fd_ring, - 1);
    }
    return sp;
    mem3:
    {
      fts_lfree(root);
      free((void *) parent);
    }

    mem2:
    {
      free((void *) sp->fts_path);
    }

    mem1:
    {
      free((void *) sp);
    }

    return (FTS *) ((void *) 0);
  }
}

static void fts_load(FTS *sp, FTSENT *p)
{
  register size_t len;
  register char *cp;
  size_t tmp;
  char *tmp___0;
  {
    {
      tmp = p->fts_namelen;
      p->fts_pathlen = tmp;
      len = tmp;
      memmove((void *) sp->fts_path, (const void *) p->fts_name, len + 1UL);
      cp = strrchr((const char *) p->fts_name, '/');
    }
    if (cp)
    {
      if (((unsigned long) cp) != ((unsigned long) p->fts_name))
      {
        {
          cp++;
          len = strlen((const char *) cp);
          memmove((void *) p->fts_name, (const void *) cp, len + 1UL);
          p->fts_namelen = len;
        }
      }
      else
        if (* (cp + 1))
      {
        {
          cp++;
          len = strlen((const char *) cp);
          memmove((void *) p->fts_name, (const void *) cp, len + 1UL);
          p->fts_namelen = len;
        }
      }


    }

    tmp___0 = sp->fts_path;
    p->fts_path = tmp___0;
    p->fts_accpath = tmp___0;
    return;
  }
}

int fts_close(FTS *sp);
int fts_close(FTS *sp)
{
  register FTSENT *freep;
  register FTSENT *p;
  int saved_errno;
  int *tmp;
  int tmp___0;
  int *tmp___1;
  int tmp___2;
  int *tmp___3;
  int tmp___4;
  int *tmp___5;
  {
    saved_errno = 0;
    if (sp->fts_cur)
    {
      p = sp->fts_cur;
      {
        while (1)
        {
          while_continue:
          ;

          if (! (p->fts_level >= 0L))
          {
            goto while_break;
          }

          freep = p;
          if (((unsigned long) p->fts_link) != ((unsigned long) ((void *) 0)))
          {
            p = p->fts_link;
          }
          else
          {
            p = p->fts_parent;
          }

          {
            free((void *) freep);
          }
        }

        while_break___0:
        ;

      }
      while_break:
      {
        free((void *) p);
      }

    }

    if (sp->fts_child)
    {
      {
        fts_lfree(sp->fts_child);
      }
    }

    {
      free((void *) sp->fts_array);
      free((void *) sp->fts_path);
    }
    if (sp->fts_options & 512)
    {
      if (0 <= sp->fts_cwd_fd)
      {
        {
          tmp___0 = close(sp->fts_cwd_fd);
        }
        if (tmp___0)
        {
          {
            tmp = __errno_location();
            saved_errno = * tmp;
          }
        }

      }

    }
    else
      if (! (sp->fts_options & 4))
    {
      {
        tmp___2 = fchdir(sp->fts_rfd);
      }
      if (tmp___2)
      {
        {
          tmp___1 = __errno_location();
          saved_errno = * tmp___1;
        }
      }

      {
        tmp___4 = close(sp->fts_rfd);
      }
      if (tmp___4)
      {
        if (saved_errno == 0)
        {
          {
            tmp___3 = __errno_location();
            saved_errno = * tmp___3;
          }
        }

      }

    }


    {
      fd_ring_clear(& sp->fts_fd_ring);
    }
    if (sp->fts_leaf_optimization_works_ht)
    {
      {
        hash_free(sp->fts_leaf_optimization_works_ht);
      }
    }

    {
      free_dir(sp);
      free((void *) sp);
    }
    if (saved_errno)
    {
      {
        tmp___5 = __errno_location();
        * tmp___5 = saved_errno;
      }
      return - 1;
    }

    return 0;
  }
}

extern int fstatfs(int __fildes, struct statfs *__buf);
static _Bool dirent_inode_sort_may_be_useful(int dir_fd)
{
  struct statfs fs_buf;
  int tmp;
  void *__cil_tmp6;
  void *__cil_tmp7;
  {
    {
      tmp = fstatfs(dir_fd, & fs_buf);
    }
    if (tmp != 0)
    {
      return (_Bool) 1;
    }

    if (fs_buf.f_type == 16914836L)
    {
      goto case_16914836;
    }

    if (fs_buf.f_type == 26985L)
    {
      goto case_16914836;
    }

    goto switch_default;
    case_16914836:
    return (_Bool) 0;

    switch_default:
    return (_Bool) 1;

    return (_Bool) 0;
  }
}

static _Bool leaf_optimization_applies(int dir_fd)
{
  struct statfs fs_buf;
  int tmp;
  void *__cil_tmp6;
  void *__cil_tmp7;
  {
    {
      tmp = fstatfs(dir_fd, & fs_buf);
    }
    if (tmp != 0)
    {
      return (_Bool) 0;
    }

    if (fs_buf.f_type == 1382369651L)
    {
      goto case_1382369651;
    }

    goto switch_default;
    case_1382369651:
    return (_Bool) 1;

    switch_default:
    return (_Bool) 0;

    return (_Bool) 0;
  }
}

static size_t LCO_hash(const void *x, size_t table_size)
{
  const struct LCO_ent *ax;
  {
    ax = (const struct LCO_ent *) x;
    return ((uintmax_t) ax->st_dev) % table_size;
  }
}

static _Bool LCO_compare(const void *x, const void *y)
{
  const struct LCO_ent *ax;
  const struct LCO_ent *ay;
  {
    ax = (const struct LCO_ent *) x;
    ay = (const struct LCO_ent *) y;
    return (_Bool) (ax->st_dev == ay->st_dev);
  }
}

static _Bool link_count_optimize_ok(const FTSENT *p)
{
  FTS *sp;
  Hash_table *h;
  struct LCO_ent tmp;
  struct LCO_ent *ent;
  _Bool opt_ok;
  struct LCO_ent *t2;
  struct hash_table *tmp___0;
  {
    sp = (FTS *) p->fts_fts;
    h = sp->fts_leaf_optimization_works_ht;
    if (! (sp->fts_options & 512))
    {
      return (_Bool) 0;
    }

    if (((unsigned long) h) == ((unsigned long) ((void *) 0)))
    {
      {
        tmp___0 = hash_initialize((size_t) 13, (const Hash_tuning *) ((void *) 0), & LCO_hash, & LCO_compare, & free);
        sp->fts_leaf_optimization_works_ht = tmp___0;
        h = tmp___0;
      }
      if (((unsigned long) h) == ((unsigned long) ((void *) 0)))
      {
        return (_Bool) 0;
      }

    }

    {
      tmp.st_dev = (dev_t) p->fts_statp[0].st_dev;
      ent = (struct LCO_ent *) hash_lookup((const Hash_table *) h, (const void *) (& tmp));
    }
    if (ent)
    {
      return ent->opt_ok;
    }

    {
      t2 = (struct LCO_ent *) malloc(sizeof(* t2));
    }
    if (((unsigned long) t2) == ((unsigned long) ((void *) 0)))
    {
      return (_Bool) 0;
    }

    {
      opt_ok = leaf_optimization_applies(sp->fts_cwd_fd);
      t2->opt_ok = opt_ok;
      t2->st_dev = (dev_t) p->fts_statp[0].st_dev;
      ent = (struct LCO_ent *) hash_insert(h, (const void *) t2);
    }
    if (((unsigned long) ent) == ((unsigned long) ((void *) 0)))
    {
      {
        free((void *) t2);
      }
      return (_Bool) 0;
    }

    {
      while (1)
      {
        while_continue:
        ;

        if (! (((unsigned long) ent) == ((unsigned long) t2)))
        {
          {
            abort();
          }
        }

        goto while_break;
      }

      while_break___0:
      ;

    }
    while_break:
    ;

    return opt_ok;
  }
}

FTSENT *fts_read(FTS *sp);
FTSENT *fts_read(FTS *sp)
{
  register FTSENT *p;
  register FTSENT *tmp;
  register unsigned short instr;
  register char *t;
  int *tmp___0;
  int tmp___1;
  int *tmp___2;
  int tmp___3;
  struct _ftsent *tmp___4;
  int tmp___5;
  int *tmp___6;
  int tmp___7;
  size_t tmp___8;
  char *tmp___9;
  FTSENT *parent;
  _Bool tmp___10;
  int *tmp___11;
  _Bool tmp___12;
  int *tmp___13;
  struct _ftsent *tmp___14;
  int *tmp___15;
  int tmp___16;
  int saved_errno;
  int *tmp___17;
  int *tmp___18;
  int *tmp___19;
  int tmp___20;
  int tmp___21;
  int *tmp___22;
  int tmp___23;
  FTSENT *tmp___24;
  char *__cil_tmp36;
  char *__cil_tmp37;
  char *__cil_tmp38;
  {
    if (((unsigned long) sp->fts_cur) == ((unsigned long) ((void *) 0)))
    {
      return (FTSENT *) ((void *) 0);
    }
    else
      if (sp->fts_options & 16384)
    {
      return (FTSENT *) ((void *) 0);
    }


    p = sp->fts_cur;
    instr = p->fts_instr;
    p->fts_instr = (unsigned short) 3;
    if (((int) instr) == 1)
    {
      {
        p->fts_info = fts_stat(sp, p, (_Bool) 0);
      }
      return p;
    }

    if (((int) instr) == 2)
    {
      if (((int) p->fts_info) == 12)
      {
        goto _L;
      }
      else
        if (((int) p->fts_info) == 13)
      {
        _L:
        {
          p->fts_info = fts_stat(sp, p, (_Bool) 1);
        }

        if (((int) p->fts_info) == 1)
        {
          if (! (sp->fts_options & 4))
          {
            {
              tmp___1 = diropen((const FTS *) sp, ".");
              p->fts_symfd = tmp___1;
            }
            if (tmp___1 < 0)
            {
              {
                tmp___0 = __errno_location();
                p->fts_errno = * tmp___0;
                p->fts_info = (unsigned short) 7;
              }
            }
            else
            {
              p->fts_flags = (unsigned short) (((int) p->fts_flags) | 2);
            }

          }

        }

        goto check_for_dir;
      }


    }

    if (((int) p->fts_info) == 1)
    {
      if (((int) instr) == 4)
      {
        goto _L___0;
      }
      else
        if (sp->fts_options & 64)
      {
        if (p->fts_statp[0].st_dev != sp->fts_dev)
        {
          _L___0:
          if (((int) p->fts_flags) & 2)
          {
            {
              close(p->fts_symfd);
            }
          }


          if (sp->fts_child)
          {
            {
              fts_lfree(sp->fts_child);
              sp->fts_child = (struct _ftsent *) ((void *) 0);
            }
          }

          p->fts_info = (unsigned short) 6;
          {
            while (1)
            {
              while_continue:
              ;

              {
                leave_dir(sp, p);
              }
              goto while_break;
            }

            while_break___5:
            ;

          }
          while_break:
          ;

          return p;
        }

      }


      if (((unsigned long) sp->fts_child) != ((unsigned long) ((void *) 0)))
      {
        if (sp->fts_options & 8192)
        {
          {
            sp->fts_options &= - 8193;
            fts_lfree(sp->fts_child);
            sp->fts_child = (struct _ftsent *) ((void *) 0);
          }
        }

      }

      if (((unsigned long) sp->fts_child) != ((unsigned long) ((void *) 0)))
      {
        {
          tmp___3 = fts_safe_changedir(sp, p, - 1, (const char *) p->fts_accpath);
        }
        if (tmp___3)
        {
          {
            tmp___2 = __errno_location();
            p->fts_errno = * tmp___2;
            p->fts_flags = (unsigned short) (((int) p->fts_flags) | 1);
            p = sp->fts_child;
          }
          {
            while (1)
            {
              while_continue___0:
              ;

              if (! (((unsigned long) p) != ((unsigned long) ((void *) 0))))
              {
                goto while_break___0;
              }

              p->fts_accpath = p->fts_parent->fts_accpath;
              p = p->fts_link;
            }

            while_break___6:
            ;

          }
          while_break___0:
          ;

        }

      }
      else
      {
        {
          tmp___4 = fts_build(sp, 3);
          sp->fts_child = tmp___4;
        }
        if (((unsigned long) tmp___4) == ((unsigned long) ((void *) 0)))
        {
          if (sp->fts_options & 16384)
          {
            return (FTSENT *) ((void *) 0);
          }

          if (p->fts_errno)
          {
            if (((int) p->fts_info) != 4)
            {
              p->fts_info = (unsigned short) 7;
            }

          }

          {
            while (1)
            {
              while_continue___1:
              ;

              {
                leave_dir(sp, p);
              }
              goto while_break___1;
            }

            while_break___7:
            ;

          }
          while_break___1:
          ;

          return p;
        }

      }

      p = sp->fts_child;
      sp->fts_child = (struct _ftsent *) ((void *) 0);
      goto name;
    }

    next:
    tmp = p;

    if (((unsigned long) p->fts_link) == ((unsigned long) ((void *) 0)))
    {
      if (p->fts_parent->fts_dirp)
      {
        {
          p = tmp->fts_parent;
          sp->fts_cur = p;
          * (sp->fts_path + p->fts_pathlen) = (char) '\000';
          p = fts_build(sp, 3);
        }
        if (((unsigned long) p) == ((unsigned long) ((void *) 0)))
        {
          if (sp->fts_options & 16384)
          {
            return (FTSENT *) ((void *) 0);
          }

          goto cd_dot_dot;
        }

        {
          free((void *) tmp);
        }
        goto name;
      }

    }

    p = p->fts_link;
    if (((unsigned long) p) != ((unsigned long) ((void *) 0)))
    {
      {
        sp->fts_cur = p;
        free((void *) tmp);
      }
      if (p->fts_level == 0L)
      {
        {
          tmp___5 = restore_initial_cwd(sp);
        }
        if (tmp___5)
        {
          sp->fts_options |= 16384;
          return (FTSENT *) ((void *) 0);
        }

        {
          free_dir(sp);
          fts_load(sp, p);
          setup_dir(sp);
        }
        goto check_for_dir;
      }

      if (((int) p->fts_instr) == 4)
      {
        goto next;
      }

      if (((int) p->fts_instr) == 2)
      {
        {
          p->fts_info = fts_stat(sp, p, (_Bool) 1);
        }
        if (((int) p->fts_info) == 1)
        {
          if (! (sp->fts_options & 4))
          {
            {
              tmp___7 = diropen((const FTS *) sp, ".");
              p->fts_symfd = tmp___7;
            }
            if (tmp___7 < 0)
            {
              {
                tmp___6 = __errno_location();
                p->fts_errno = * tmp___6;
                p->fts_info = (unsigned short) 7;
              }
            }
            else
            {
              p->fts_flags = (unsigned short) (((int) p->fts_flags) | 2);
            }

          }

        }

        p->fts_instr = (unsigned short) 3;
      }

      name:
      if (((int) (* (p->fts_parent->fts_path + (p->fts_parent->fts_pathlen - 1UL)))) == 47)
      {
        tmp___8 = p->fts_parent->fts_pathlen - 1UL;
      }
      else
      {
        tmp___8 = p->fts_parent->fts_pathlen;
      }


      {
        t = sp->fts_path + tmp___8;
        tmp___9 = t;
        t++;
        * tmp___9 = (char) '/';
        memmove((void *) t, (const void *) p->fts_name, p->fts_namelen + 1UL);
      }
      check_for_dir:
      sp->fts_cur = p;

      if (((int) p->fts_info) == 11)
      {
        if (p->fts_statp[0].st_size == 2L)
        {
          parent = p->fts_parent;
          if (0L < p->fts_level)
          {
            if (parent->fts_n_dirs_remaining == 0UL)
            {
              if (sp->fts_options & 8)
              {
                if (sp->fts_options & 16)
                {
                  {
                    tmp___10 = link_count_optimize_ok((const FTSENT *) parent);
                  }
                  if (! tmp___10)
                  {
                    goto _L___4;
                  }

                }
                else
                {
                  goto _L___4;
                }

              }
              else
              {
                goto _L___4;
              }

            }
            else
            {
              goto _L___4;
            }

          }
          else
          {
            _L___4:
            {
              p->fts_info = fts_stat(sp, p, (_Bool) 0);
            }

            if ((p->fts_statp[0].st_mode & 61440U) == 16384U)
            {
              if (p->fts_level != 0L)
              {
                if (parent->fts_n_dirs_remaining)
                {
                  parent->fts_n_dirs_remaining--;
                }

              }

            }

          }

        }
        else
        {
          {
            while (1)
            {
              while_continue___2:
              ;

              if (! (p->fts_statp[0].st_size == 1L))
              {
                {
                  abort();
                }
              }

              goto while_break___2;
            }

            while_break___8:
            ;

          }
          while_break___2:
          ;

        }

      }

      if (((int) p->fts_info) == 1)
      {
        if (p->fts_level == 0L)
        {
          sp->fts_dev = p->fts_statp[0].st_dev;
        }

        {
          tmp___12 = enter_dir(sp, p);
        }
        if (! tmp___12)
        {
          {
            tmp___11 = __errno_location();
            * tmp___11 = 12;
          }
          return (FTSENT *) ((void *) 0);
        }

      }

      return p;
    }

    cd_dot_dot:
    {
      p = tmp->fts_parent;
      sp->fts_cur = p;
      free((void *) tmp);
    }

    if (p->fts_level == (- 1L))
    {
      {
        free((void *) p);
        tmp___13 = __errno_location();
        * tmp___13 = 0;
        tmp___14 = (struct _ftsent *) ((void *) 0);
        sp->fts_cur = tmp___14;
      }
      return tmp___14;
    }

    {
      while (1)
      {
        while_continue___3:
        ;

        if (! (((int) p->fts_info) != 11))
        {
          {
            abort();
          }
        }

        goto while_break___3;
      }

      while_break___9:
      ;

    }
    while_break___3:
    * (sp->fts_path + p->fts_pathlen) = (char) '\000';

    if (p->fts_level == 0L)
    {
      {
        tmp___16 = restore_initial_cwd(sp);
      }
      if (tmp___16)
      {
        {
          tmp___15 = __errno_location();
          p->fts_errno = * tmp___15;
          sp->fts_options |= 16384;
        }
      }

    }
    else
      if (((int) p->fts_flags) & 2)
    {
      if (! (sp->fts_options & 4))
      {
        if (sp->fts_options & 512)
        {
          {
            cwd_advance_fd(sp, p->fts_symfd, (_Bool) 1);
            tmp___21 = 0;
          }
        }
        else
        {
          {
            tmp___20 = fchdir(p->fts_symfd);
            tmp___21 = tmp___20;
          }
        }

        if (tmp___21)
        {
          {
            tmp___17 = __errno_location();
            saved_errno = * tmp___17;
            close(p->fts_symfd);
            tmp___18 = __errno_location();
            * tmp___18 = saved_errno;
            tmp___19 = __errno_location();
            p->fts_errno = * tmp___19;
            sp->fts_options |= 16384;
          }
        }

      }

      {
        close(p->fts_symfd);
      }
    }
    else
      if (! (((int) p->fts_flags) & 1))
    {
      {
        tmp___23 = fts_safe_changedir(sp, p->fts_parent, - 1, "..");
      }
      if (tmp___23)
      {
        {
          tmp___22 = __errno_location();
          p->fts_errno = * tmp___22;
          sp->fts_options |= 16384;
        }
      }

    }



    if (p->fts_errno)
    {
      p->fts_info = (unsigned short) 7;
    }
    else
    {
      p->fts_info = (unsigned short) 6;
    }

    if (p->fts_errno == 0)
    {
      {
        while (1)
        {
          while_continue___4:
          ;

          {
            leave_dir(sp, p);
          }
          goto while_break___4;
        }

        while_break___10:
        ;

      }
      while_break___4:
      ;

    }

    if (sp->fts_options & 16384)
    {
      tmp___24 = (FTSENT *) ((void *) 0);
    }
    else
    {
      tmp___24 = p;
    }

    return tmp___24;
  }
}

int fts_set(FTS *sp, FTSENT *p, int instr);
int fts_set(FTS *sp, FTSENT *p, int instr)
{
  int *tmp;
  {
    if (instr != 0)
    {
      if (instr != 1)
      {
        if (instr != 2)
        {
          if (instr != 3)
          {
            if (instr != 4)
            {
              {
                tmp = __errno_location();
                * tmp = 22;
              }
              return 1;
            }

          }

        }

      }

    }

    p->fts_instr = (unsigned short) instr;
    return 0;
  }
}

static int fts_compare_ino(const struct _ftsent **a, const struct _ftsent **b)
{
  int tmp;
  int tmp___0;
  {
    if ((* (a + 0))->fts_statp[0].st_ino < (* (b + 0))->fts_statp[0].st_ino)
    {
      tmp___0 = - 1;
    }
    else
    {
      if ((* (b + 0))->fts_statp[0].st_ino < (* (a + 0))->fts_statp[0].st_ino)
      {
        tmp = 1;
      }
      else
      {
        tmp = 0;
      }

      tmp___0 = tmp;
    }

    return tmp___0;
  }
}

static void set_stat_type(struct stat *st, unsigned int dtype)
{
  mode_t type;
  {
    if (dtype == 6U)
    {
      goto case_6;
    }

    if (dtype == 2U)
    {
      goto case_2;
    }

    if (dtype == 4U)
    {
      goto case_4;
    }

    if (dtype == 1U)
    {
      goto case_1;
    }

    if (dtype == 10U)
    {
      goto case_10;
    }

    if (dtype == 8U)
    {
      goto case_8;
    }

    if (dtype == 12U)
    {
      goto case_12;
    }

    goto switch_default;
    case_6:
    type = (mode_t) 24576;

    goto switch_break;
    case_2:
    type = (mode_t) 8192;

    goto switch_break;
    case_4:
    type = (mode_t) 16384;

    goto switch_break;
    case_1:
    type = (mode_t) 4096;

    goto switch_break;
    case_10:
    type = (mode_t) 40960;

    goto switch_break;
    case_8:
    type = (mode_t) 32768;

    goto switch_break;
    case_12:
    type = (mode_t) 49152;

    goto switch_break;
    switch_default:
    type = (mode_t) 0;

    switch_break:
    st->st_mode = type;

    return;
  }
}

static FTSENT *fts_build(FTS *sp, int type)
{
  register FTSENT *p;
  register FTSENT *head;
  register size_t nitems;
  FTSENT *tail;
  void *oldaddr;
  int saved_errno;
  _Bool descend;
  _Bool doadjust;
  ptrdiff_t level;
  nlink_t nlinks;
  _Bool nostat;
  size_t len;
  size_t maxlen;
  size_t new_len;
  char *cp;
  int dir_fd;
  FTSENT *cur;
  _Bool continue_readdir;
  DIR *dp;
  int *tmp;
  int *tmp___0;
  DIR *tmp___1;
  int tmp___2;
  int tmp___3;
  int tmp___4;
  int *tmp___5;
  _Bool tmp___6;
  size_t max_entries;
  unsigned long tmp___7;
  int tmp___8;
  int *tmp___9;
  int tmp___10;
  char *tmp___11;
  _Bool is_dir;
  size_t d_namelen;
  struct dirent *dp___0;
  struct dirent *tmp___12;
  int *tmp___13;
  int *tmp___14;
  _Bool tmp___15;
  int *tmp___16;
  _Bool skip_stat;
  int tmp___17;
  int tmp___18;
  int tmp___19;
  int tmp___20;
  int tmp___21;
  int tmp___22;
  _Bool tmp___23;
  char *__cil_tmp53;
  {
    cur = sp->fts_cur;
    continue_readdir = (_Bool) (! (! cur->fts_dirp));
    if (continue_readdir)
    {
      {
        dp = cur->fts_dirp;
        dir_fd = dirfd(dp);
      }
      if (dir_fd < 0)
      {
        {
          while (1)
          {
            while_continue:
            ;

            {
              closedir(cur->fts_dirp);
              cur->fts_dirp = (DIR *) ((void *) 0);
            }
            goto while_break;
          }

          while_break___6:
          ;

        }
        while_break:
        ;

        if (type == 3)
        {
          {
            cur->fts_info = (unsigned short) 4;
            tmp = __errno_location();
            cur->fts_errno = * tmp;
          }
        }

        return (FTSENT *) ((void *) 0);
      }

    }
    else
    {
      if (sp->fts_options & 16)
      {
        if (sp->fts_options & 1)
        {
          if (cur->fts_level == 0L)
          {
            tmp___2 = 0;
          }
          else
          {
            tmp___2 = 131072;
          }

        }
        else
        {
          tmp___2 = 131072;
        }

      }
      else
      {
        tmp___2 = 0;
      }

      if (sp->fts_options & 2048)
      {
        tmp___3 = 262144;
      }
      else
      {
        tmp___3 = 0;
      }

      if (! (sp->fts_options & 4))
      {
        if (sp->fts_options & 512)
        {
          tmp___4 = sp->fts_cwd_fd;
        }
        else
        {
          tmp___4 = - 100;
        }

      }
      else
      {
        tmp___4 = - 100;
      }

      {
        tmp___1 = opendirat(tmp___4, (const char *) cur->fts_accpath, tmp___2 | tmp___3, & dir_fd);
        cur->fts_dirp = tmp___1;
      }
      if (((unsigned long) tmp___1) == ((unsigned long) ((void *) 0)))
      {
        if (type == 3)
        {
          {
            cur->fts_info = (unsigned short) 4;
            tmp___0 = __errno_location();
            cur->fts_errno = * tmp___0;
          }
        }

        return (FTSENT *) ((void *) 0);
      }

      if (((int) cur->fts_info) == 11)
      {
        {
          cur->fts_info = fts_stat(sp, cur, (_Bool) 0);
        }
      }
      else
        if (sp->fts_options & 256)
      {
        {
          while (1)
          {
            while_continue___3:
            ;

            {
              leave_dir(sp, cur);
            }
            goto while_break___0;
          }

          while_break___7:
          ;

        }
        while_break___0:
        {
          fts_stat(sp, cur, (_Bool) 0);
          tmp___6 = enter_dir(sp, cur);
        }

        if (! tmp___6)
        {
          {
            tmp___5 = __errno_location();
            * tmp___5 = 12;
          }
          return (FTSENT *) ((void *) 0);
        }

      }


    }

    if (((unsigned long) sp->fts_compar) == ((unsigned long) ((void *) 0)))
    {
      tmp___7 = 100000UL;
    }
    else
    {
      tmp___7 = 0xffffffffffffffffUL;
    }

    max_entries = tmp___7;
    if (type == 2)
    {
      nlinks = (nlink_t) 0;
      nostat = (_Bool) 0;
    }
    else
      if (sp->fts_options & 8)
    {
      if (sp->fts_options & 16)
      {
        if (sp->fts_options & 32)
        {
          tmp___8 = 0;
        }
        else
        {
          tmp___8 = 2;
        }

        nlinks = cur->fts_statp[0].st_nlink - ((__nlink_t) tmp___8);
        nostat = (_Bool) 1;
      }
      else
      {
        nlinks = (nlink_t) (- 1);
        nostat = (_Bool) 0;
      }

    }
    else
    {
      nlinks = (nlink_t) (- 1);
      nostat = (_Bool) 0;
    }


    if (continue_readdir)
    {
      descend = (_Bool) 1;
    }
    else
      if (nlinks)
    {
      goto _L___0;
    }
    else
      if (type == 3)
    {
      _L___0:
      if (sp->fts_options & 512)
      {
        {
          dir_fd = dup_safer(dir_fd);
        }
        if (0 <= dir_fd)
        {
          {
            set_cloexec_flag(dir_fd, (_Bool) 1);
          }
        }

      }


      if (dir_fd < 0)
      {
        goto _L;
      }
      else
      {
        {
          tmp___10 = fts_safe_changedir(sp, cur, dir_fd, (const char *) ((void *) 0));
        }
        if (tmp___10)
        {
          _L:
          if (nlinks)
          {
            if (type == 3)
            {
              {
                tmp___9 = __errno_location();
                cur->fts_errno = * tmp___9;
              }
            }

          }


          cur->fts_flags = (unsigned short) (((int) cur->fts_flags) | 1);
          descend = (_Bool) 0;
          {
            while (1)
            {
              while_continue___4:
              ;

              {
                closedir(cur->fts_dirp);
                cur->fts_dirp = (DIR *) ((void *) 0);
              }
              goto while_break___1;
            }

            while_break___8:
            ;

          }
          while_break___1:
          ;

          if (sp->fts_options & 512)
          {
            if (0 <= dir_fd)
            {
              {
                close(dir_fd);
              }
            }

          }

          cur->fts_dirp = (DIR *) ((void *) 0);
        }
        else
        {
          descend = (_Bool) 1;
        }

      }

    }
    else
    {
      descend = (_Bool) 0;
    }



    if (((int) (* (cur->fts_path + (cur->fts_pathlen - 1UL)))) == 47)
    {
      len = cur->fts_pathlen - 1UL;
    }
    else
    {
      len = cur->fts_pathlen;
    }

    if (sp->fts_options & 4)
    {
      cp = sp->fts_path + len;
      tmp___11 = cp;
      cp++;
      * tmp___11 = (char) '/';
    }
    else
    {
      cp = (char *) ((void *) 0);
    }

    len++;
    maxlen = sp->fts_pathlen - len;
    level = cur->fts_level + 1L;
    doadjust = (_Bool) 0;
    head = (FTSENT *) ((void *) 0);
    tail = (FTSENT *) ((void *) 0);
    nitems = (size_t) 0;
    {
      while (1)
      {
        while_continue___5:
        ;

        while_continue___2:
        ;

        if (! cur->fts_dirp)
        {
          goto while_break___2;
        }

        {
          tmp___12 = readdir(cur->fts_dirp);
          dp___0 = tmp___12;
        }
        if (((unsigned long) dp___0) == ((unsigned long) ((void *) 0)))
        {
          goto while_break___2;
        }

        if (! (sp->fts_options & 32))
        {
          if (((int) dp___0->d_name[0]) == 46)
          {
            if (! dp___0->d_name[1])
            {
              goto while_continue___2;
            }
            else
              if (((int) dp___0->d_name[1]) == 46)
            {
              if (! dp___0->d_name[2])
              {
                goto while_continue___2;
              }

            }


          }

        }

        {
          d_namelen = strlen((const char *) dp___0->d_name);
          p = fts_alloc(sp, (const char *) dp___0->d_name, d_namelen);
        }
        if (! p)
        {
          goto mem1;
        }

        if (d_namelen >= maxlen)
        {
          {
            oldaddr = (void *) sp->fts_path;
            tmp___15 = fts_palloc(sp, (d_namelen + len) + 1UL);
          }
          if (! tmp___15)
          {
            mem1:
            {
              tmp___13 = __errno_location();
              saved_errno = * tmp___13;
              free((void *) p);
              fts_lfree(head);
            }

            {
              while (1)
              {
                while_continue___6:
                ;

                {
                  closedir(cur->fts_dirp);
                  cur->fts_dirp = (DIR *) ((void *) 0);
                }
                goto while_break___3;
              }

              while_break___10:
              ;

            }
            while_break___3:
            {
              cur->fts_info = (unsigned short) 7;
              sp->fts_options |= 16384;
              tmp___14 = __errno_location();
              * tmp___14 = saved_errno;
            }

            return (FTSENT *) ((void *) 0);
          }

          if (((unsigned long) oldaddr) != ((unsigned long) sp->fts_path))
          {
            doadjust = (_Bool) 1;
            if (sp->fts_options & 4)
            {
              cp = sp->fts_path + len;
            }

          }

          maxlen = sp->fts_pathlen - len;
        }

        new_len = len + d_namelen;
        if (new_len < len)
        {
          {
            free((void *) p);
            fts_lfree(head);
          }
          {
            while (1)
            {
              while_continue___7:
              ;

              {
                closedir(cur->fts_dirp);
                cur->fts_dirp = (DIR *) ((void *) 0);
              }
              goto while_break___4;
            }

            while_break___11:
            ;

          }
          while_break___4:
          {
            cur->fts_info = (unsigned short) 7;
            sp->fts_options |= 16384;
            tmp___16 = __errno_location();
            * tmp___16 = 36;
          }

          return (FTSENT *) ((void *) 0);
        }

        p->fts_level = level;
        p->fts_parent = sp->fts_cur;
        p->fts_pathlen = new_len;
        p->fts_statp[0].st_ino = dp___0->d_ino;
        if (sp->fts_options & 4)
        {
          {
            p->fts_accpath = p->fts_path;
            memmove((void *) cp, (const void *) p->fts_name, p->fts_namelen + 1UL);
          }
        }
        else
        {
          p->fts_accpath = p->fts_name;
        }

        if (((unsigned long) sp->fts_compar) == ((unsigned long) ((void *) 0)))
        {
          goto _L___1;
        }
        else
          if (sp->fts_options & 1024)
        {
          _L___1:
          if (sp->fts_options & 16)
          {
            if (sp->fts_options & 8)
            {
              if (((int) dp___0->d_type) != 0)
              {
                if (! (((int) dp___0->d_type) == 4))
                {
                  tmp___17 = 1;
                }
                else
                {
                  tmp___17 = 0;
                }

              }
              else
              {
                tmp___17 = 0;
              }

            }
            else
            {
              tmp___17 = 0;
            }

          }
          else
          {
            tmp___17 = 0;
          }


          {
            skip_stat = (_Bool) tmp___17;
            p->fts_info = (unsigned short) 11;
            set_stat_type(p->fts_statp, (unsigned int) dp___0->d_type);
            fts_set_stat_required(p, (_Bool) (! skip_stat));
          }
          if (sp->fts_options & 16)
          {
            if (((int) dp___0->d_type) == 4)
            {
              tmp___18 = 1;
            }
            else
            {
              tmp___18 = 0;
            }

          }
          else
          {
            tmp___18 = 0;
          }

          is_dir = (_Bool) tmp___18;
        }
        else
        {
          {
            p->fts_info = fts_stat(sp, p, (_Bool) 0);
          }
          if (((int) p->fts_info) == 1)
          {
            tmp___19 = 1;
          }
          else
            if (((int) p->fts_info) == 2)
          {
            tmp___19 = 1;
          }
          else
            if (((int) p->fts_info) == 5)
          {
            tmp___19 = 1;
          }
          else
          {
            tmp___19 = 0;
          }



          is_dir = (_Bool) tmp___19;
        }


        if (nlinks > 0UL)
        {
          if (is_dir)
          {
            nlinks -= (nlink_t) nostat;
          }

        }

        p->fts_link = (struct _ftsent *) ((void *) 0);
        if (((unsigned long) head) == ((unsigned long) ((void *) 0)))
        {
          tail = p;
          head = tail;
        }
        else
        {
          tail->fts_link = p;
          tail = p;
        }

        nitems++;
        if (max_entries <= nitems)
        {
          goto break_without_closedir;
        }

      }

      while_break___9:
      ;

    }
    while_break___2:
    ;

    if (cur->fts_dirp)
    {
      {
        while (1)
        {
          while_continue___8:
          ;

          {
            closedir(cur->fts_dirp);
            cur->fts_dirp = (DIR *) ((void *) 0);
          }
          goto while_break___5;
        }

        while_break___12:
        ;

      }
      while_break___5:
      ;

    }

    break_without_closedir:
    if (doadjust)
    {
      {
        fts_padjust(sp, head);
      }
    }


    if (sp->fts_options & 4)
    {
      if (len == sp->fts_pathlen)
      {
        cp--;
      }
      else
        if (nitems == 0UL)
      {
        cp--;
      }


      * cp = (char) '\000';
    }

    if (! continue_readdir)
    {
      if (descend)
      {
        if (type == 1)
        {
          goto _L___2;
        }
        else
          if (! nitems)
        {
          _L___2:
          if (cur->fts_level == 0L)
          {
            {
              tmp___20 = restore_initial_cwd(sp);
              tmp___22 = tmp___20;
            }
          }
          else
          {
            {
              tmp___21 = fts_safe_changedir(sp, cur->fts_parent, - 1, "..");
              tmp___22 = tmp___21;
            }
          }


          if (tmp___22)
          {
            {
              cur->fts_info = (unsigned short) 7;
              sp->fts_options |= 16384;
              fts_lfree(head);
            }
            return (FTSENT *) ((void *) 0);
          }

        }


      }

    }

    if (! nitems)
    {
      if (type == 3)
      {
        cur->fts_info = (unsigned short) 6;
      }

      {
        fts_lfree(head);
      }
      return (FTSENT *) ((void *) 0);
    }

    if (nitems > 10000UL)
    {
      if (! sp->fts_compar)
      {
        if (sp->fts_options & 512)
        {
          {
            tmp___23 = dirent_inode_sort_may_be_useful(sp->fts_cwd_fd);
          }
          if (tmp___23)
          {
            {
              sp->fts_compar = & fts_compare_ino;
              head = fts_sort(sp, head, nitems);
              sp->fts_compar = (int (*)(const struct _ftsent **, const struct _ftsent **)) ((void *) 0);
            }
          }

        }

      }

    }

    if (sp->fts_compar)
    {
      if (nitems > 1UL)
      {
        {
          head = fts_sort(sp, head, nitems);
        }
      }

    }

    return head;
  }
}

static unsigned short fts_stat(FTS *sp, FTSENT *p, _Bool follow)
{
  struct stat *sbp;
  int saved_errno;
  int *tmp;
  int *tmp___0;
  int *tmp___1;
  int tmp___2;
  int tmp___3;
  int *tmp___4;
  int tmp___5;
  int tmp___6;
  int tmp___7;
  {
    sbp = p->fts_statp;
    if (p->fts_level == 0L)
    {
      if (sp->fts_options & 1)
      {
        follow = (_Bool) 1;
      }

    }

    if (sp->fts_options & 2)
    {
      goto _L;
    }
    else
      if (follow)
    {
      _L:
      {
        tmp___3 = stat((const char *) ((const char *) p->fts_accpath), (struct stat *) sbp);
      }

      if (tmp___3)
      {
        {
          tmp = __errno_location();
          saved_errno = * tmp;
          tmp___1 = __errno_location();
        }
        if ((* tmp___1) == 2)
        {
          {
            tmp___2 = lstat((const char *) ((const char *) p->fts_accpath), (struct stat *) sbp);
          }
          if (tmp___2 == 0)
          {
            {
              tmp___0 = __errno_location();
              * tmp___0 = 0;
            }
            return (unsigned short) 13;
          }

        }

        p->fts_errno = saved_errno;
        goto err;
      }

    }
    else
    {
      {
        tmp___5 = fstatat(sp->fts_cwd_fd, (const char *) ((const char *) p->fts_accpath), (struct stat *) sbp, 256);
      }
      if (tmp___5)
      {
        {
          tmp___4 = __errno_location();
          p->fts_errno = * tmp___4;
        }
        err:
        {
          memset((void *) sbp, 0, sizeof(struct stat));
        }

        return (unsigned short) 10;
      }

    }


    if ((sbp->st_mode & 61440U) == 16384U)
    {
      if (sp->fts_options & 32)
      {
        tmp___6 = 0;
      }
      else
      {
        tmp___6 = 2;
      }

      p->fts_n_dirs_remaining = sbp->st_nlink - ((__nlink_t) tmp___6);
      if (((int) p->fts_name[0]) == 46)
      {
        if (! p->fts_name[1])
        {
          goto _L___0;
        }
        else
          if (((int) p->fts_name[1]) == 46)
        {
          if (! p->fts_name[2])
          {
            _L___0:
            if (p->fts_level == 0L)
            {
              tmp___7 = 1;
            }
            else
            {
              tmp___7 = 5;
            }


            return (unsigned short) tmp___7;
          }

        }


      }

      return (unsigned short) 1;
    }

    if ((sbp->st_mode & 61440U) == 40960U)
    {
      return (unsigned short) 12;
    }

    if ((sbp->st_mode & 61440U) == 32768U)
    {
      return (unsigned short) 8;
    }

    return (unsigned short) 3;
  }
}

static int fts_compar(const void *a, const void *b)
{
  const FTSENT **pa;
  const FTSENT **pb;
  int tmp;
  {
    {
      pa = (const FTSENT **) a;
      pb = (const FTSENT **) b;
      tmp = (* (* (pa + 0))->fts_fts->fts_compar)(pa, pb);
    }
    return tmp;
  }
}

static FTSENT *fts_sort(FTS *sp, FTSENT *head, size_t nitems)
{
  register FTSENT **ap;
  register FTSENT *p;
  FTSENT *dummy;
  int (*compare)(const void *, const void *);
  int (*tmp)(const void *, const void *);
  FTSENT **a;
  FTSENT **tmp___0;
  {
    if ((sizeof(& dummy)) == (sizeof(void *)))
    {
      if (((long) (& dummy)) == ((long) ((void *) (& dummy))))
      {
        tmp = (int (*)(const void *, const void *)) sp->fts_compar;
      }
      else
      {
        tmp = & fts_compar;
      }

    }
    else
    {
      tmp = & fts_compar;
    }

    compare = tmp;
    if (nitems > sp->fts_nitems)
    {
      sp->fts_nitems = nitems + 40UL;
      if ((0xffffffffffffffffUL / (sizeof(* a))) < sp->fts_nitems)
      {
        {
          free((void *) sp->fts_array);
          sp->fts_array = (struct _ftsent **) ((void *) 0);
          sp->fts_nitems = (size_t) 0;
        }
        return head;
      }
      else
      {
        {
          a = (FTSENT **) realloc((void *) sp->fts_array, sp->fts_nitems * (sizeof(* a)));
        }
        if (! a)
        {
          {
            free((void *) sp->fts_array);
            sp->fts_array = (struct _ftsent **) ((void *) 0);
            sp->fts_nitems = (size_t) 0;
          }
          return head;
        }

      }

      sp->fts_array = a;
    }

    ap = sp->fts_array;
    p = head;
    {
      while (1)
      {
        while_continue:
        ;

        if (! p)
        {
          goto while_break;
        }

        tmp___0 = ap;
        ap++;
        * tmp___0 = p;
        p = p->fts_link;
      }

      while_break___1:
      ;

    }
    while_break:
    {
      qsort((void *) sp->fts_array, nitems, sizeof(FTSENT *), compare);
      ap = sp->fts_array;
      head = * ap;
    }

    {
      while (1)
      {
        while_continue___0:
        ;

        nitems--;
        if (! nitems)
        {
          goto while_break___0;
        }

        (* (ap + 0))->fts_link = * (ap + 1);
        ap++;
      }

      while_break___2:
      ;

    }
    while_break___0:
    (* (ap + 0))->fts_link = (struct _ftsent *) ((void *) 0);

    return head;
  }
}

static FTSENT *fts_alloc(FTS *sp, const char *name, size_t namelen)
{
  register FTSENT *p;
  size_t len;
  {
    {
      len = (sizeof(FTSENT)) + namelen;
      p = (FTSENT *) malloc(len);
    }
    if (((unsigned long) p) == ((unsigned long) ((void *) 0)))
    {
      return (FTSENT *) ((void *) 0);
    }

    {
      memcpy((void *) ((void *) p->fts_name), (const void *) ((const void *) name), namelen);
      p->fts_name[namelen] = (char) '\000';
      p->fts_namelen = namelen;
      p->fts_fts = sp;
      p->fts_path = sp->fts_path;
      p->fts_errno = 0;
      p->fts_dirp = (DIR *) ((void *) 0);
      p->fts_flags = (unsigned short) 0;
      p->fts_instr = (unsigned short) 3;
      p->fts_number = 0L;
      p->fts_pointer = (void *) 0;
    }
    return p;
  }
}

static void fts_lfree(FTSENT *head)
{
  register FTSENT *p;
  {
    {
      while (1)
      {
        while_continue:
        ;

        p = head;
        if (! p)
        {
          goto while_break;
        }

        head = head->fts_link;
        if (p->fts_dirp)
        {
          {
            closedir(p->fts_dirp);
          }
        }

        {
          free((void *) p);
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

static _Bool fts_palloc(FTS *sp, size_t more)
{
  char *p;
  size_t new_len;
  int *tmp;
  {
    new_len = (sp->fts_pathlen + more) + 256UL;
    if (new_len < sp->fts_pathlen)
    {
      {
        free((void *) sp->fts_path);
        sp->fts_path = (char *) ((void *) 0);
        tmp = __errno_location();
        * tmp = 36;
      }
      return (_Bool) 0;
    }

    {
      sp->fts_pathlen = new_len;
      p = (char *) realloc((void *) sp->fts_path, sp->fts_pathlen);
    }
    if (((unsigned long) p) == ((unsigned long) ((void *) 0)))
    {
      {
        free((void *) sp->fts_path);
        sp->fts_path = (char *) ((void *) 0);
      }
      return (_Bool) 0;
    }

    sp->fts_path = p;
    return (_Bool) 1;
  }
}

static void fts_padjust(FTS *sp, FTSENT *head)
{
  FTSENT *p;
  char *addr;
  {
    addr = sp->fts_path;
    p = sp->fts_child;
    {
      while (1)
      {
        while_continue:
        ;

        if (! p)
        {
          goto while_break;
        }

        {
          while (1)
          {
            while_continue___0:
            ;

            if (((unsigned long) p->fts_accpath) != ((unsigned long) p->fts_name))
            {
              p->fts_accpath = addr + (p->fts_accpath - p->fts_path);
            }

            p->fts_path = addr;
            goto while_break___0;
          }

          while_break___4:
          ;

        }
        while_break___0:
        p = p->fts_link;

      }

      while_break___3:
      ;

    }
    while_break:
    p = head;

    {
      while (1)
      {
        while_continue___1:
        ;

        if (! (p->fts_level >= 0L))
        {
          goto while_break___1;
        }

        {
          while (1)
          {
            while_continue___2:
            ;

            if (((unsigned long) p->fts_accpath) != ((unsigned long) p->fts_name))
            {
              p->fts_accpath = addr + (p->fts_accpath - p->fts_path);
            }

            p->fts_path = addr;
            goto while_break___2;
          }

          while_break___6:
          ;

        }
        while_break___2:
        ;

        if (p->fts_link)
        {
          p = p->fts_link;
        }
        else
        {
          p = p->fts_parent;
        }

      }

      while_break___5:
      ;

    }
    while_break___1:
    ;

    return;
  }
}

static size_t fts_maxarglen(char *const *argv)
{
  size_t len;
  size_t max;
  {
    max = (size_t) 0;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (* argv))
        {
          goto while_break;
        }

        {
          len = strlen((const char *) (* argv));
        }
        if (len > max)
        {
          max = len;
        }

        argv++;
      }

      while_break___0:
      ;

    }
    while_break:
    ;

    return (size_t) (max + 1UL);
  }
}

static int fts_safe_changedir(FTS *sp, FTSENT *p, int fd, const char *dir)
{
  int ret;
  _Bool is_dotdot;
  int tmp;
  int tmp___0;
  int newfd;
  int parent_fd;
  _Bool tmp___1;
  struct stat sb;
  int tmp___2;
  int *tmp___3;
  int tmp___4;
  int oerrno;
  int *tmp___5;
  int *tmp___6;
  void *__cil_tmp20;
  {
    if (dir)
    {
      {
        tmp = strcmp(dir, "..");
      }
      if (tmp == 0)
      {
        tmp___0 = 1;
      }
      else
      {
        tmp___0 = 0;
      }

    }
    else
    {
      tmp___0 = 0;
    }

    is_dotdot = (_Bool) tmp___0;
    if (sp->fts_options & 4)
    {
      if (sp->fts_options & 512)
      {
        if (0 <= fd)
        {
          {
            close(fd);
          }
        }

      }

      return 0;
    }

    if (fd < 0)
    {
      if (is_dotdot)
      {
        if (sp->fts_options & 512)
        {
          {
            tmp___1 = i_ring_empty((const I_ring *) (& sp->fts_fd_ring));
          }
          if (! tmp___1)
          {
            {
              parent_fd = i_ring_pop(& sp->fts_fd_ring);
              is_dotdot = (_Bool) 1;
            }
            if (0 <= parent_fd)
            {
              fd = parent_fd;
              dir = (const char *) ((void *) 0);
            }

          }

        }

      }

    }

    newfd = fd;
    if (fd < 0)
    {
      {
        newfd = diropen((const FTS *) sp, dir);
      }
      if (newfd < 0)
      {
        return - 1;
      }

    }

    if (sp->fts_options & 2)
    {
      goto _L;
    }
    else
      if (dir)
    {
      {
        tmp___4 = strcmp(dir, "..");
      }
      if (tmp___4 == 0)
      {
        _L:
        {
          tmp___2 = fstat(newfd, & sb);
        }

        if (tmp___2)
        {
          ret = - 1;
          goto bail;
        }

        if (p->fts_statp[0].st_dev != sb.st_dev)
        {
          {
            tmp___3 = __errno_location();
            * tmp___3 = 2;
            ret = - 1;
          }
          goto bail;
        }
        else
          if (p->fts_statp[0].st_ino != sb.st_ino)
        {
          {
            tmp___3 = __errno_location();
            * tmp___3 = 2;
            ret = - 1;
          }
          goto bail;
        }


      }

    }


    if (sp->fts_options & 512)
    {
      {
        cwd_advance_fd(sp, newfd, (_Bool) (! is_dotdot));
      }
      return 0;
    }

    {
      ret = fchdir(newfd);
    }
    bail:
    if (fd < 0)
    {
      {
        tmp___5 = __errno_location();
        oerrno = * tmp___5;
        close(newfd);
        tmp___6 = __errno_location();
        * tmp___6 = oerrno;
      }
    }


    return ret;
  }
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
          tmp = dup_safer(fd);
          f = tmp;
          tmp___0 = __errno_location();
          e = * tmp___0;
          close(fd);
          tmp___1 = __errno_location();
          * tmp___1 = e;
          fd = f;
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
  va_list arg;
  int result;
  int target;
  int tmp;
  int *tmp___0;
  int flags;
  int tmp___1;
  int saved_errno;
  int *tmp___2;
  int *tmp___3;
  int tmp___4;
  void *p;
  void *tmp___5;
  {
    {
      result = - 1;
      __builtin_va_start(arg, action);
    }
    if (action == 1030)
    {
      goto case_1030;
    }

    goto switch_default;
    case_1030:
    {


    }

    if (0 <= have_dupfd_cloexec)
    {
      {
        result = fcntl(fd, action, target);
      }
      if (0 <= result)
      {
        have_dupfd_cloexec = 1;
      }
      else
      {
        {
          tmp___0 = __errno_location();
        }
        if ((* tmp___0) != 22)
        {
          have_dupfd_cloexec = 1;
        }
        else
        {
          {
            result = rpl_fcntl(fd, 0, target);
          }
          if (result < 0)
          {
            goto switch_break;
          }

          have_dupfd_cloexec = - 1;
        }

      }

    }
    else
    {
      {
        result = rpl_fcntl(fd, 0, target);
      }
    }

    if (0 <= result)
    {
      if (have_dupfd_cloexec == (- 1))
      {
        {
          tmp___1 = fcntl(result, 1);
          flags = tmp___1;
        }
        if (flags < 0)
        {
          goto _L;
        }
        else
        {
          {
            tmp___4 = fcntl(result, 2, flags | 1);
          }
          if (tmp___4 == (- 1))
          {
            _L:
            {
              tmp___2 = __errno_location();
              saved_errno = * tmp___2;
              close(result);
              tmp___3 = __errno_location();
              * tmp___3 = saved_errno;
              result = - 1;
            }

          }

        }

      }

    }

    goto switch_break;
    switch_default:
    {



    }

    goto switch_break;
    switch_break:
    {
      __builtin_va_end(arg);
    }

    return result;
  }
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
  struct pattern_buffer *pbuf;
  struct pattern_buffer *tmp;
  {
    {
      tmp = (struct pattern_buffer *) xmalloc(sizeof(* pbuf));
      pbuf = tmp;
      pbuf->base = buf;
      pbuf->next = ex->patbuf;
      ex->patbuf = pbuf;
    }
    return;
  }
}

_Bool fnmatch_pattern_has_wildcards(const char *str, int options);
_Bool fnmatch_pattern_has_wildcards(const char *str, int options)
{
  const char *tmp;
  int tmp___0;
  {
    {
      while (1)
      {
        while_continue___0:
        ;

        while_continue:
        tmp = str;

        str++;
        if (((const int) (* tmp)) == 46)
        {
          goto case_46;
        }

        if (((const int) (* tmp)) == 123)
        {
          goto case_46;
        }

        if (((const int) (* tmp)) == 125)
        {
          goto case_46;
        }

        if (((const int) (* tmp)) == 40)
        {
          goto case_46;
        }

        if (((const int) (* tmp)) == 41)
        {
          goto case_46;
        }

        if (((const int) (* tmp)) == 92)
        {
          goto case_92;
        }

        if (((const int) (* tmp)) == 43)
        {
          goto case_43;
        }

        if (((const int) (* tmp)) == 64)
        {
          goto case_43;
        }

        if (((const int) (* tmp)) == 33)
        {
          goto case_43;
        }

        if (((const int) (* tmp)) == 63)
        {
          goto case_63;
        }

        if (((const int) (* tmp)) == 42)
        {
          goto case_63;
        }

        if (((const int) (* tmp)) == 91)
        {
          goto case_63;
        }

        if (((const int) (* tmp)) == 0)
        {
          goto case_0;
        }

        goto switch_break;
        case_46:
        if (options & (1 << 27))
        {
          return (_Bool) 1;
        }


        goto switch_break;
        case_92:
        if (options & (1 << 27))
        {
          goto while_continue;
        }
        else
        {
          if (! (options & (1 << 1)))
          {
            if (* str)
            {
              tmp___0 = 1;
            }
            else
            {
              tmp___0 = 0;
            }

          }
          else
          {
            tmp___0 = 0;
          }

          str += tmp___0;
        }


        goto switch_break;
        case_43:
        if (options & (1 << 5))
        {
          if (((const int) (* str)) == 40)
          {
            return (_Bool) 1;
          }

        }


        goto switch_break;
        case_63:
        return (_Bool) 1;

        case_0:
        return (_Bool) 0;

        switch_break:
        ;

      }

      while_break:
      ;

    }
    return (_Bool) 0;
  }
}

static void unescape_pattern(char *str)
{
  const char *q;
  int tmp;
  char *tmp___0;
  char tmp___1;
  const char *tmp___2;
  {
    q = (const char *) str;
    {
      while (1)
      {
        while_continue:
        ;

        if (((const int) (* q)) == 92)
        {
          if (* (q + 1))
          {
            tmp = 1;
          }
          else
          {
            tmp = 0;
          }

        }
        else
        {
          tmp = 0;
        }

        q += tmp;
        tmp___0 = str;
        str++;
        tmp___2 = q;
        q++;
        tmp___1 = (char) (* tmp___2);
        * tmp___0 = tmp___1;
        if (! tmp___1)
        {
          goto while_break;
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

struct exclude *new_exclude(void)
{
  struct exclude *tmp;
  struct exclude *tmp___0;
  {
    {
      tmp___0 = (struct exclude *) xzalloc(sizeof(* tmp));
    }
    return tmp___0;
  }
}

static size_t string_hasher(const void *data, size_t n_buckets)
{
  const char *p;
  size_t tmp;
  {
    {
      p = (const char *) data;
      tmp = hash_string(p, n_buckets);
    }
    return tmp;
  }
}

static size_t string_hasher_ci(const void *data, size_t n_buckets)
{
  const char *p;
  mbui_iterator_t iter;
  size_t value;
  mbchar_t m;
  wchar_t wc;
  int tmp;
  void *__cil_tmp13;
  void *__cil_tmp14;
  void *__cil_tmp15;
  {
    {
      p = (const char *) data;
      value = (size_t) 0;
      iter.cur.ptr = p;
      iter.in_shift = (_Bool) 0;
      memset((void *) (& iter.state), '\000', sizeof(mbstate_t));
      iter.next_done = (_Bool) 0;
    }
    {
      while (1)
      {
        while_continue:
        ;

        {
          mbuiter_multi_next(& iter);
        }
        if (iter.cur.wc_valid)
        {
          if (iter.cur.wc == 0)
          {
            tmp = 0;
          }
          else
          {
            tmp = 1;
          }

        }
        else
        {
          tmp = 1;
        }

        if (! tmp)
        {
          goto while_break;
        }

        m = iter.cur;
        if (m.wc_valid)
        {
          {
            wc = (wchar_t) towlower((wint_t) m.wc);
          }
        }
        else
        {
          wc = (wchar_t) (* m.ptr);
        }

        value = ((value * 31UL) + ((size_t) wc)) % n_buckets;
        iter.cur.ptr += iter.cur.bytes;
        iter.next_done = (_Bool) 0;
      }

      while_break___0:
      ;

    }
    while_break:
    ;

    return value;
  }
}

static _Bool string_compare(const void *data1, const void *data2)
{
  const char *p1;
  const char *p2;
  int tmp;
  {
    {
      p1 = (const char *) data1;
      p2 = (const char *) data2;
      tmp = strcmp(p1, p2);
    }
    return (_Bool) (tmp == 0);
  }
}

static _Bool string_compare_ci(const void *data1, const void *data2)
{
  const char *p1;
  const char *p2;
  int tmp;
  {
    {
      p1 = (const char *) data1;
      p2 = (const char *) data2;
      tmp = mbscasecmp(p1, p2);
    }
    return (_Bool) (tmp == 0);
  }
}

static void string_free(void *data)
{
  {
    {
      free(data);
    }
    return;
  }
}

static void new_exclude_segment(struct exclude *ex, enum exclude_type type, int options)
{
  struct exclude_segment *sp;
  struct exclude_segment *tmp;
  _Bool (*tmp___0)(const void *data1, const void *data2);
  size_t (*tmp___1)(const void *data, size_t n_buckets);
  {
    {
      tmp = (struct exclude_segment *) xzalloc(sizeof(struct exclude_segment));
      sp = tmp;
      sp->type = type;
      sp->options = options;
    }
    if (((unsigned int) type) == 1U)
    {
      goto case_1;
    }

    if (((unsigned int) type) == 0U)
    {
      goto case_0;
    }

    goto switch_break;
    case_1:
    goto switch_break;

    case_0:
    if (options & (1 << 4))
    {
      tmp___0 = & string_compare_ci;
    }
    else
    {
      tmp___0 = & string_compare;
    }


    if (options & (1 << 4))
    {
      tmp___1 = & string_hasher_ci;
    }
    else
    {
      tmp___1 = & string_hasher;
    }

    {
      sp->v.table = hash_initialize((size_t) 0, (const Hash_tuning *) ((void *) 0), tmp___1, tmp___0, & string_free);
    }
    goto switch_break;
    switch_break:
    sp->next = ex->head;

    ex->head = sp;
    return;
  }
}

static int fnmatch_no_wildcards(const char *pattern, const char *f, int options)
{
  int tmp;
  int tmp___0;
  int tmp___1;
  size_t patlen;
  size_t tmp___2;
  int r;
  int tmp___3;
  char *fcopy;
  char *tmp___4;
  char *p;
  int r___0;
  char *tmp___5;
  {
    if (! (options & (1 << 3)))
    {
      if (options & (1 << 4))
      {
        {
          tmp = mbscasecmp(pattern, f);
          tmp___1 = tmp;
        }
      }
      else
      {
        {
          tmp___0 = strcmp(pattern, f);
          tmp___1 = tmp___0;
        }
      }

      return tmp___1;
    }
    else
      if (! (options & (1 << 4)))
    {
      {
        tmp___2 = strlen(pattern);
        patlen = tmp___2;
        tmp___3 = strncmp(pattern, f, patlen);
        r = tmp___3;
      }
      if (! r)
      {
        r = (int) (* (f + patlen));
        if (r == 47)
        {
          r = 0;
        }

      }

      return r;
    }
    else
    {
      {
        tmp___4 = xstrdup(f);
        fcopy = tmp___4;
        p = fcopy;
      }
      {
        while (1)
        {
          while_continue:
          ;

          {
            p = strchr((const char *) p, '/');
          }
          if (p)
          {
            * p = (char) '\000';
          }

          {
            r___0 = mbscasecmp(pattern, (const char *) fcopy);
          }
          if (! p)
          {
            goto while_break;
          }
          else
            if (r___0 <= 0)
          {
            goto while_break;
          }


          tmp___5 = p;
          p++;
          * tmp___5 = (char) '/';
        }

        while_break___0:
        ;

      }
      while_break:
      {
        free((void *) fcopy);
      }

      return r___0;
    }


  }
}

_Bool exclude_fnmatch(const char *pattern, const char *f, int options)
{
  int (*matcher___0)(const char *, const char *, int);
  int (*tmp)(const char *__pattern, const char *__name, int __flags);
  _Bool matched;
  int tmp___0;
  const char *p;
  int tmp___1;
  {
    if (options & (1 << 28))
    {
      tmp = & fnmatch;
    }
    else
    {
      tmp = & fnmatch_no_wildcards;
    }

    {
      matcher___0 = tmp;
      tmp___0 = (* matcher___0)(pattern, f, options);
      matched = (_Bool) (tmp___0 == 0);
    }
    if (! (options & (1 << 30)))
    {
      p = f;
      {
        while (1)
        {
          while_continue:
          ;

          if (* p)
          {
            if (! (! matched))
            {
              goto while_break;
            }

          }
          else
          {
            goto while_break;
          }

          if (((const int) (* p)) == 47)
          {
            if (((const int) (* (p + 1))) != 47)
            {
              {
                tmp___1 = (* matcher___0)(pattern, p + 1, options);
                matched = (_Bool) (tmp___1 == 0);
              }
            }

          }

          p++;
        }

        while_break___0:
        ;

      }
      while_break:
      ;

    }

    return matched;
  }
}

_Bool exclude_patopts(const struct patopts *opts, const char *f)
{
  int options;
  int tmp;
  _Bool tmp___0;
  int tmp___1;
  {
    options = (int) opts->options;
    if (options & (1 << 27))
    {
      {
        tmp = regexec((const regex_t *) (& opts->v.re), (const char *) f, (size_t) 0, (regmatch_t *) ((regmatch_t *) ((void *) 0)), 0);
        tmp___1 = tmp == 0;
      }
    }
    else
    {
      {
        tmp___0 = exclude_fnmatch((const char *) opts->v.pattern, f, options);
        tmp___1 = (int) tmp___0;
      }
    }

    return (_Bool) tmp___1;
  }
}

static _Bool file_pattern_matches(const struct exclude_segment *seg, const char *f)
{
  size_t exclude_count;
  const struct patopts *exclude;
  size_t i;
  _Bool tmp;
  {
    exclude_count = (size_t) seg->v.pat.exclude_count;
    exclude = (const struct patopts *) seg->v.pat.exclude;
    i = (size_t) 0;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (i < exclude_count))
        {
          goto while_break;
        }

        {
          tmp = exclude_patopts(exclude + i, f);
        }
        if (tmp)
        {
          return (_Bool) 1;
        }

        i++;
      }

      while_break___0:
      ;

    }
    while_break:
    ;

    return (_Bool) 0;
  }
}

static _Bool file_name_matches(const struct exclude_segment *seg, const char *f, char *buffer___0)
{
  int options;
  Hash_table *table;
  void *tmp;
  char *p;
  char *tmp___0;
  {
    options = (int) seg->options;
    table = (Hash_table *) seg->v.table;
    {
      while (1)
      {
        while_continue:
        ;

        {
          strcpy((char *) buffer___0, (const char *) f);
        }
        {
          while (1)
          {
            while_continue___1:
            ;

            while_continue___0:
            {
              tmp = hash_lookup((const Hash_table *) table, (const void *) buffer___0);
            }

            if (tmp)
            {
              return (_Bool) 1;
            }

            if (options & (1 << 3))
            {
              {
                tmp___0 = strrchr((const char *) buffer___0, '/');
                p = tmp___0;
              }
              if (p)
              {
                * p = (char) 0;
                goto while_continue___0;
              }

            }

            goto while_break___0;
          }

          while_break___2:
          ;

        }
        while_break___0:
        ;

        if (! (options & (1 << 30)))
        {
          {
            f = (const char *) strchr(f, '/');
          }
          if (f)
          {
            f++;
          }

        }
        else
        {
          goto while_break;
        }

        if (! f)
        {
          goto while_break;
        }

      }

      while_break___1:
      ;

    }
    while_break:
    ;

    return (_Bool) 0;
  }
}

_Bool excluded_file_name(const struct exclude *ex, const char *f)
{
  struct exclude_segment *seg;
  _Bool invert;
  char *filename___0;
  size_t tmp;
  _Bool tmp___0;
  _Bool tmp___1;
  {
    invert = (_Bool) 0;
    filename___0 = (char *) ((void *) 0);
    if (! ex->head)
    {
      return (_Bool) 0;
    }

    seg = (struct exclude_segment *) ex->head;
    {
      while (1)
      {
        while_continue:
        ;

        if (((unsigned int) seg->type) == 0U)
        {
          if (! filename___0)
          {
            {
              tmp = strlen(f);
              filename___0 = (char *) xmalloc(tmp + 1UL);
            }
          }

          {
            tmp___0 = file_name_matches((const struct exclude_segment *) seg, f, filename___0);
          }
          if (tmp___0)
          {
            goto while_break;
          }

        }
        else
        {
          {
            tmp___1 = file_pattern_matches((const struct exclude_segment *) seg, f);
          }
          if (tmp___1)
          {
            goto while_break;
          }

        }

        if (! seg->next)
        {
          invert = (_Bool) 1;
          goto while_break;
        }

        seg = seg->next;
      }

      while_break___0:
      ;

    }
    while_break:
    {
      free((void *) filename___0);
    }

    return (_Bool) (((int) invert) ^ (! (seg->options & (1 << 29))));
  }
}

void add_exclude(struct exclude *ex, const char *pattern, int options)
{
  struct exclude_segment *seg;
  struct exclude_pattern *pat;
  struct patopts *patopts;
  size_t tmp;
  int rc;
  int cflags;
  int tmp___0;
  char *tmp___1;
  size_t len;
  size_t tmp___2;
  char *str;
  char *p;
  int exclude_hash_flags;
  _Bool tmp___3;
  char *__cil_tmp23;
  {
    if (options & ((1 << 27) | (1 << 28)))
    {
      {
        tmp___3 = fnmatch_pattern_has_wildcards(pattern, options);
      }
      if (tmp___3)
      {
        if (ex->head)
        {
          if (((unsigned int) ex->head->type) == 1U)
          {
            if (! ((ex->head->options & (1 << 29)) == (options & (1 << 29))))
            {
              {
                new_exclude_segment(ex, (enum exclude_type) 1, options);
              }
            }

          }
          else
          {
            {
              new_exclude_segment(ex, (enum exclude_type) 1, options);
            }
          }

        }
        else
        {
          {
            new_exclude_segment(ex, (enum exclude_type) 1, options);
          }
        }

        seg = ex->head;
        pat = & seg->v.pat;
        if (pat->exclude_count == pat->exclude_alloc)
        {
          {
            pat->exclude = (struct patopts *) x2nrealloc((void *) pat->exclude, & pat->exclude_alloc, sizeof(* pat->exclude));
          }
        }

        tmp = pat->exclude_count;
        pat->exclude_count++;
        patopts = pat->exclude + tmp;
        patopts->options = options;
        if (options & (1 << 27))
        {
          if (options & (1 << 4))
          {
            tmp___0 = 1 << 1;
          }
          else
          {
            tmp___0 = 0;
          }

          cflags = ((1 << 3) | 1) | tmp___0;
          if (options & (1 << 3))
          {
            {
              tmp___2 = strlen(pattern);
              len = tmp___2;
            }
            {
              while (1)
              {
                while_continue:
                ;

                if (len > 0UL)
                {
                  if (! (((const int) (* (pattern + (len - 1UL)))) == 47))
                  {
                    goto while_break;
                  }

                }
                else
                {
                  goto while_break;
                }

                len--;
              }

              while_break___0:
              ;

            }
            while_break:
            ;

            if (len == 0UL)
            {
              rc = 1;
            }
            else
            {
              {
                tmp___1 = (char *) xmalloc(len + 7UL);
                memcpy((void *) ((void *) tmp___1), (const void *) ((const void *) pattern), len);
                strcpy((char *) (tmp___1 + len), (const char *) "(/.*)?");
                rc = regcomp((regex_t *) (& patopts->v.re), (const char *) ((const char *) tmp___1), cflags);
                free((void *) tmp___1);
              }
            }

          }
          else
          {
            {
              rc = regcomp((regex_t *) (& patopts->v.re), (const char *) pattern, cflags);
            }
          }

          if (rc)
          {
            pat->exclude_count--;
            return;
          }

        }
        else
        {
          if (options & (1 << 26))
          {
            {
              pattern = (const char *) xstrdup(pattern);
              exclude_add_pattern_buffer(ex, (char *) pattern);
            }
          }

          patopts->v.pattern = pattern;
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
      exclude_hash_flags = (((1 << 29) | (1 << 30)) | (1 << 3)) | (1 << 4);

      if (ex->head)
      {
        if (((unsigned int) ex->head->type) == 0U)
        {
          if (! ((ex->head->options & exclude_hash_flags) == (options & exclude_hash_flags)))
          {
            {
              new_exclude_segment(ex, (enum exclude_type) 0, options);
            }
          }

        }
        else
        {
          {
            new_exclude_segment(ex, (enum exclude_type) 0, options);
          }
        }

      }
      else
      {
        {
          new_exclude_segment(ex, (enum exclude_type) 0, options);
        }
      }

      {
        seg = ex->head;
        str = xstrdup(pattern);
      }
      if ((options & ((1 << 28) | (1 << 1))) == (1 << 28))
      {
        {
          unescape_pattern(str);
        }
      }

      {
        p = (char *) hash_insert(seg->v.table, (const void *) str);
      }
      if (((unsigned long) p) != ((unsigned long) str))
      {
        {
          free((void *) str);
        }
      }

    }

    return;
  }
}

int add_exclude_fp(void (*add_func)(struct exclude *, const char *, int, void *), struct exclude *ex, FILE *fp, int options, char line_end, void *data)
{
  char *buf;
  char *p;
  char *pattern;
  const char *lim;
  size_t buf_alloc;
  size_t buf_count;
  int c;
  int e;
  size_t tmp;
  int *tmp___0;
  int tmp___1;
  int tmp___2;
  char *pattern_end;
  const unsigned short **tmp___3;
  const unsigned short **tmp___4;
  int *tmp___5;
  int tmp___6;
  {
    buf = (char *) ((void *) 0);
    buf_alloc = (size_t) 0;
    buf_count = (size_t) 0;
    e = 0;
    {
      while (1)
      {
        while_continue:
        ;

        {
          c = getc_unlocked(fp);
        }
        if (! (c != (- 1)))
        {
          goto while_break;
        }

        if (buf_count == buf_alloc)
        {
          {
            buf = (char *) x2realloc((void *) buf, & buf_alloc);
          }
        }

        tmp = buf_count;
        buf_count++;
        * (buf + tmp) = (char) c;
      }

      while_break___2:
      ;

    }
    while_break:
    {
      tmp___1 = ferror_unlocked(fp);
    }

    if (tmp___1)
    {
      {
        tmp___0 = __errno_location();
        e = * tmp___0;
      }
    }

    {
      buf = (char *) xrealloc((void *) buf, buf_count + 1UL);
      * (buf + buf_count) = line_end;
    }
    if (buf_count == 0UL)
    {
      tmp___2 = 0;
    }
    else
      if (((int) (* (buf + (buf_count - 1UL)))) == ((int) line_end))
    {
      tmp___2 = 0;
    }
    else
    {
      tmp___2 = 1;
    }


    {
      lim = (const char *) ((buf + buf_count) + tmp___2);
      exclude_add_pattern_buffer(ex, buf);
      pattern = buf;
      p = buf;
    }
    {
      while (1)
      {
        while_continue___0:
        ;

        if (! (((unsigned long) p) < ((unsigned long) lim)))
        {
          goto while_break___0;
        }

        if (((int) (* p)) == ((int) line_end))
        {
          {
            pattern_end = p;
            tmp___4 = __ctype_b_loc();
          }
          if (((const int) (* ((* tmp___4) + ((int) ((unsigned char) line_end))))) & 8192)
          {
            {
              while (1)
              {
                while_continue___1:
                ;

                if (((unsigned long) pattern_end) == ((unsigned long) pattern))
                {
                  goto next_pattern;
                }
                else
                {
                  {
                    tmp___3 = __ctype_b_loc();
                  }
                  if (! (((const int) (* ((* tmp___3) + ((int) ((unsigned char) (* (pattern_end + (- 1)))))))) & 8192))
                  {
                    goto while_break___1;
                  }

                }

                pattern_end--;
              }

              while_break___4:
              ;

            }
            while_break___1:
            ;

          }

          {
            * pattern_end = (char) '\000';
            (* add_func)(ex, (const char *) pattern, options, data);
          }
          next_pattern:
          pattern = p + 1;

        }

        p++;
      }

      while_break___3:
      ;

    }
    while_break___0:
    {
      tmp___5 = __errno_location();
      * tmp___5 = e;
    }

    if (e)
    {
      tmp___6 = - 1;
    }
    else
    {
      tmp___6 = 0;
    }

    return tmp___6;
  }
}

static void call_addfn(struct exclude *ex, const char *pattern, int options, void *data)
{
  void (**addfnptr)(struct exclude *, const char *, int);
  {
    {
      addfnptr = (void (**)(struct exclude *, const char *, int)) data;
      (* (* addfnptr))(ex, pattern, options);
    }
    return;
  }
}

int add_exclude_file(void (*add_func)(struct exclude *, const char *, int), struct exclude *ex, const char *file_name___1, int options, char line_end)
{
  _Bool use_stdin;
  int tmp;
  FILE *in;
  int rc;
  int tmp___0;
  {
    if (((const int) (* (file_name___1 + 0))) == 45)
    {
      if (! (* (file_name___1 + 1)))
      {
        tmp = 1;
      }
      else
      {
        tmp = 0;
      }

    }
    else
    {
      tmp = 0;
    }

    use_stdin = (_Bool) tmp;
    rc = 0;
    if (use_stdin)
    {
      in = stdin;
    }
    else
    {
      {
        in = fopen((const char *) file_name___1, (const char *) "r");
      }
      if (! in)
      {
        return - 1;
      }

    }

    {
      rc = add_exclude_fp(& call_addfn, ex, in, options, line_end, (void *) (& add_func));
    }
    if (! use_stdin)
    {
      {
        tmp___0 = fclose(in);
      }
      if (tmp___0 != 0)
      {
        rc = - 1;
      }

    }

    return rc;
  }
}

int dup_safer(int fd)
{
  int tmp;
  {
    {
      tmp = rpl_fcntl(fd, 0, 3);
    }
    return tmp;
  }
}

static _Bool is_zero_or_power_of_two(uintmax_t i)
{
  {
    return (_Bool) ((i & (i - 1UL)) == 0UL);
  }
}

void cycle_check_init(struct cycle_check_state *state)
{
  {
    state->chdir_counter = (uintmax_t) 0;
    state->magic = 9827862;
    return;
  }
}

_Bool cycle_check(struct cycle_check_state *state, const struct stat *sb)
{
  _Bool tmp;
  {
    if (! (state->magic == 9827862))
    {
      {
        __assert_fail("state->magic == 9827862", "/home/khheo/project/benchmark/grep-2.19/lib/cycle-check.c", 60U, "cycle_check");
      }
    }

    if (state->chdir_counter)
    {
      if (sb->st_ino == ((const __ino_t) state->dev_ino.st_ino))
      {
        if (sb->st_dev == ((const __dev_t) state->dev_ino.st_dev))
        {
          return (_Bool) 1;
        }

      }

    }

    {
      state->chdir_counter++;
      tmp = is_zero_or_power_of_two(state->chdir_counter);
    }
    if (tmp)
    {
      if (state->chdir_counter == 0UL)
      {
        return (_Bool) 1;
      }

      state->dev_ino.st_dev = (dev_t) sb->st_dev;
      state->dev_ino.st_ino = (ino_t) sb->st_ino;
    }

    return (_Bool) 0;
  }
}

int should_colorize(void);
void init_colorize(void);
void print_start_colorize(const char *sgr_start___0, const char *sgr_seq);
void print_end_colorize(const char *sgr_end___0);
int should_colorize(void)
{
  const char *t;
  const char *tmp;
  int tmp___0;
  int tmp___1;
  char *__cil_tmp7;
  {
    {
      tmp = (const char *) getenv("TERM");
      t = tmp;
    }
    if (t)
    {
      {
        tmp___0 = strcmp(t, "dumb");
      }
      if (tmp___0 != 0)
      {
        tmp___1 = 1;
      }
      else
      {
        tmp___1 = 0;
      }

    }
    else
    {
      tmp___1 = 0;
    }

    return tmp___1;
  }
}

void init_colorize(void)
{
  {
    return;
  }
}

void print_start_colorize(const char *sgr_start___0, const char *sgr_seq)
{
  {
    {
      printf((const char *) sgr_start___0, sgr_seq);
    }
    return;
  }
}

void print_end_colorize(const char *sgr_end___0)
{
  {
    {
      fputs((const char *) sgr_end___0, (FILE *) stdout);
    }
    return;
  }
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
        {
          tmp___4 = __errno_location();
        }
        if (! ((* tmp___4) == 32))
        {
          goto _L;
        }

      }
      else
      {
        _L:
        {
          tmp = (const char *) gettext("write error");
          write_error = tmp;
        }

        if (file_name)
        {
          {
            tmp___0 = quotearg_colon(file_name);
            tmp___1 = __errno_location();
            error(0, * tmp___1, "%s: %s", tmp___0, write_error);
          }
        }
        else
        {
          {
            tmp___2 = __errno_location();
            error(0, * tmp___2, "%s", write_error);
          }
        }

        {
          _exit((int) exit_failure);
        }
      }

    }

    {
      tmp___5 = close_stream(stderr);
    }
    if (tmp___5 != 0)
    {
      {
        _exit((int) exit_failure);
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
      goto _L___0;
    }
    else
      if (fclose_fail)
    {
      if (some_pending)
      {
        goto _L___0;
      }
      else
      {
        {
          tmp___3 = __errno_location();
        }
        if ((* tmp___3) != 9)
        {
          _L___0:
          if (! fclose_fail)
          {
            {
              tmp___2 = __errno_location();
              * tmp___2 = 0;
            }
          }


          return - 1;
        }

      }

    }


    return 0;
  }
}

int set_cloexec_flag(int desc, _Bool value)
{
  int flags;
  int tmp;
  int newflags;
  int tmp___0;
  int tmp___1;
  {
    {
      tmp = rpl_fcntl(desc, 1, 0);
      flags = tmp;
    }
    if (0 <= flags)
    {
      if (value)
      {
        tmp___0 = flags | 1;
      }
      else
      {
        tmp___0 = flags & (- 2);
      }

      newflags = tmp___0;
      if (flags == newflags)
      {
        return 0;
      }
      else
      {
        {
          tmp___1 = rpl_fcntl(desc, 2, newflags);
        }
        if (tmp___1 != (- 1))
        {
          return 0;
        }

      }

    }

    return - 1;
  }
}

extern void *memrchr(const void *__s, int __c, size_t __n);
int c_tolower(int c);
int c_strcasecmp(const char *s1, const char *s2);
int c_strcasecmp(const char *s1, const char *s2)
{
  register const unsigned char *p1;
  register const unsigned char *p2;
  unsigned char c1;
  unsigned char c2;
  {
    p1 = (const unsigned char *) s1;
    p2 = (const unsigned char *) s2;
    if (((unsigned long) p1) == ((unsigned long) p2))
    {
      return 0;
    }

    {
      while (1)
      {
        while_continue:
        ;

        {
          c1 = (unsigned char) c_tolower((int) (* p1));
          c2 = (unsigned char) c_tolower((int) (* p2));
        }
        if (((int) c1) == 0)
        {
          goto while_break;
        }

        p1++;
        p2++;
        if (! (((int) c1) == ((int) c2)))
        {
          goto while_break;
        }

      }

      while_break___0:
      ;

    }
    while_break:
    ;

    return ((int) c1) - ((int) c2);
  }
}

_Bool c_isspace(int c);
_Bool c_isspace(int c);
_Bool c_isspace(int c)
{
  int tmp;
  {
    if (c == 32)
    {
      tmp = 1;
    }
    else
      if (c == 9)
    {
      tmp = 1;
    }
    else
      if (c == 10)
    {
      tmp = 1;
    }
    else
      if (c == 11)
    {
      tmp = 1;
    }
    else
      if (c == 12)
    {
      tmp = 1;
    }
    else
      if (c == 13)
    {
      tmp = 1;
    }
    else
    {
      tmp = 0;
    }






    return (_Bool) tmp;
  }
}

int c_tolower(int c);
int c_tolower(int c)
{
  int tmp;
  {
    if (c >= 65)
    {
      if (c <= 90)
      {
        tmp = (c - 65) + 97;
      }
      else
      {
        tmp = c;
      }

    }
    else
    {
      tmp = c;
    }

    return tmp;
  }
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
  {
    {
      usage(1);
    }
    return;
  }
}

void (*argmatch_die)(void) = & __argmatch_die;
ptrdiff_t argmatch(const char *arg, const char *const *arglist, const char *vallist, size_t valsize);
ptrdiff_t argmatch(const char *arg, const char *const *arglist, const char *vallist, size_t valsize)
{
  size_t i;
  size_t arglen;
  ptrdiff_t matchind;
  _Bool ambiguous;
  int tmp;
  size_t tmp___0;
  int tmp___1;
  {
    {
      matchind = (ptrdiff_t) (- 1);
      ambiguous = (_Bool) 0;
      arglen = strlen(arg);
      i = (size_t) 0;
    }
    {
      while (1)
      {
        while_continue:
        ;

        if (! (* (arglist + i)))
        {
          goto while_break;
        }

        {
          tmp___1 = strncmp((const char *) (* (arglist + i)), arg, arglen);
        }
        if (! tmp___1)
        {
          {
            tmp___0 = strlen((const char *) (* (arglist + i)));
          }
          if (tmp___0 == arglen)
          {
            return (ptrdiff_t) i;
          }
          else
            if (matchind == (- 1L))
          {
            matchind = (ptrdiff_t) i;
          }
          else
            if (((unsigned long) vallist) == ((unsigned long) ((void *) 0)))
          {
            ambiguous = (_Bool) 1;
          }
          else
          {
            {
              tmp = memcmp((const void *) (vallist + (valsize * ((size_t) matchind))), (const void *) (vallist + (valsize * i)), valsize);
            }
            if (tmp)
            {
              ambiguous = (_Bool) 1;
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

    if (ambiguous)
    {
      return (ptrdiff_t) (- 2);
    }
    else
    {
      return matchind;
    }

  }
}

void argmatch_invalid(const char *context, const char *value, ptrdiff_t problem)
{
  const char *format;
  char *tmp;
  char *tmp___0;
  char *tmp___1;
  const char *tmp___2;
  char *tmp___3;
  char *__cil_tmp12;
  char *__cil_tmp13;
  {
    if (problem == (- 1L))
    {
      {
        tmp = gettext("invalid argument %s for %s");
        tmp___1 = tmp;
      }
    }
    else
    {
      {
        tmp___0 = gettext("ambiguous argument %s for %s");
        tmp___1 = tmp___0;
      }
    }

    {
      format = (const char *) tmp___1;
      tmp___2 = quote_n(1, context);
      tmp___3 = quotearg_n_style(0, (enum quoting_style) 6, value);
      error(0, 0, format, tmp___3, tmp___2);
    }
    return;
  }
}

void argmatch_valid(const char *const *arglist, const char *vallist, size_t valsize)
{
  size_t i;
  const char *last_val;
  char *tmp;
  const char *tmp___0;
  const char *tmp___1;
  int tmp___2;
  char *__cil_tmp11;
  {
    {
      last_val = (const char *) ((void *) 0);
      tmp = gettext("Valid arguments are:");
      fputs_unlocked((const char *) ((const char *) tmp), (FILE *) stderr);
      i = (size_t) 0;
    }
    {
      while (1)
      {
        while_continue:
        ;

        if (! (* (arglist + i)))
        {
          goto while_break;
        }

        if (i == 0UL)
        {
          {
            tmp___0 = quote((const char *) (* (arglist + i)));
            fprintf((FILE *) stderr, (const char *) "\n  - %s", tmp___0);
            last_val = vallist + (valsize * i);
          }
        }
        else
        {
          {
            tmp___2 = memcmp((const void *) last_val, (const void *) (vallist + (valsize * i)), valsize);
          }
          if (tmp___2)
          {
            {
              tmp___0 = quote((const char *) (* (arglist + i)));
              fprintf((FILE *) stderr, (const char *) "\n  - %s", tmp___0);
              last_val = vallist + (valsize * i);
            }
          }
          else
          {
            {
              tmp___1 = quote((const char *) (* (arglist + i)));
              fprintf((FILE *) stderr, (const char *) ", %s", tmp___1);
            }
          }

        }

        i++;
      }

      while_break___0:
      ;

    }
    while_break:
    {
      putc_unlocked('\n', stderr);
    }

    return;
  }
}

ptrdiff_t __xargmatch_internal(const char *context, const char *arg, const char *const *arglist, const char *vallist, size_t valsize, void (*exit_fn)(void))
{
  ptrdiff_t res;
  ptrdiff_t tmp;
  {
    {
      tmp = argmatch(arg, arglist, vallist, valsize);
      res = tmp;
    }
    if (res >= 0L)
    {
      return res;
    }

    {
      argmatch_invalid(context, arg, res);
      argmatch_valid(arglist, vallist, valsize);
      (* exit_fn)();
    }
    return (ptrdiff_t) (- 1);
  }
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
  int e = 0;
  const char *ep = 0;
  char *re;
  char *tmp;
  int flags;
  int tmp___0;
  int tmp___2;
  int tmp___3;
  const char *patlim;
  char *n;
  const char *p;
  const char *pnul;
  char *tmp___4;
  void *tmp___5;
  size_t tmp___6;
  const unsigned char *tmp___7;
  char *tmp___8;
  int tmp___9;
  char *tmp___10;
  char *__cil_tmp32;
  char *__cil_tmp33;
  char *__cil_tmp34;
  char *__cil_tmp35;
  char *__cil_tmp36;
  char *__cil_tmp37;
  char *__cil_tmp38;
  char *__cil_tmp39;
  {
    {
      tmp = (char *) xnmalloc((size_t) 4, size + 7UL);
      re = tmp;
    }
    if (match_icase)
    {
      tmp___0 = 1;
    }
    else
    {
      tmp___0 = 0;
    }

    {
      tmp___3 = using_utf8();
    }
    if (tmp___3)
    {
      tmp___2 = 2048;
    }
    else
    {
      tmp___2 = 0;
    }

    {
      flags = (2 | tmp___0) | tmp___2;
      patlim = pattern + size;
      n = re;
      tmp___5 = memchr((const void *) pattern, '\n', size);
    }
    if (tmp___5)
    {
      {
        tmp___4 = gettext("the -P option only supports a single pattern");
        error(2, 0, (const char *) tmp___4);
      }
    }

    * n = (char) '\000';
    if (match_lines)
    {
      {
        strcpy((char *) n, (const char *) "^(?:");
      }
    }

    if (match_words)
    {
      {
        strcpy((char *) n, (const char *) "(?<!\\w)(?:");
      }
    }

    {
      tmp___6 = strlen((const char *) n);
      n += tmp___6;
      p = pattern;
    }
    {
      while (1)
      {
        while_continue:
        ;

        {
          pnul = (const char *) memchr((const void *) p, '\000', (size_t) (patlim - p));
        }
        if (! pnul)
        {
          goto while_break;
        }

        {
          memcpy((void *) ((void *) n), (const void *) ((const void *) p), (size_t) (pnul - p));
          n += pnul - p;
          p = pnul;
        }
        {
          while (1)
          {
            while_continue___0:
            ;

            if (((unsigned long) pattern) < ((unsigned long) p))
            {
              if (! (((const int) (* (p + (- 1)))) == 92))
              {
                goto while_break___0;
              }

            }
            else
            {
              goto while_break___0;
            }

            goto __Cont;
            __Cont:
            p--;

          }

          while_break___2:
          ;

        }
        while_break___0:
        {
          n -= (pnul - p) & 1L;
          strcpy((char *) n, (const char *) "\\000");
          n += 4;
          p = pnul + 1;
        }

      }

      while_break___1:
      ;

    }
    while_break:
    {
      memcpy((void *) ((void *) n), (const void *) ((const void *) p), (size_t) (patlim - p));
      n += patlim - p;
      * n = (char) '\000';
    }

    if (match_words)
    {
      {
        strcpy((char *) n, (const char *) ")(?!\\w)");
      }
    }

    if (match_lines)
    {
      {
        strcpy((char *) n, (const char *) ")$");
      }
    }

    {
      tmp___7 = pcre_maketables();
      cre = pcre_compile((const char *) re, flags, & ep, & e, tmp___7);
    }
    if (! cre)
    {
      {
        error(2, 0, "%s", ep);
      }
    }

    {
      extra = pcre_study((const pcre *) cre, 1, & ep);
    }
    if (ep)
    {
      {
        error(2, 0, "%s", ep);
      }
    }

    {
      tmp___9 = pcre_fullinfo((const pcre *) cre, (const pcre_extra *) extra, 16, (void *) (& e));
    }
    if (tmp___9)
    {
      {
        tmp___8 = gettext("internal error (should never happen)");
        error(2, 0, (const char *) tmp___8);
      }
    }

    if (e)
    {
      {
        jit_stack = pcre_jit_stack_alloc(32768, 524288);
      }
      if (! jit_stack)
      {
        {
          tmp___10 = gettext("failed to allocate memory for the PCRE JIT stack");
          error(2, 0, (const char *) tmp___10);
        }
      }

      {
        pcre_assign_jit_stack(extra, (pcre_jit_stack *(*)(void *)) ((void *) 0), (void *) jit_stack);
      }
    }

    {
      free((void *) re);
    }
    return;
  }
}

size_t Pexecute(const char *buf, size_t size, size_t *match_size, const char *start_ptr)
{
  int sub[300] = {0};
  const char *line_buf;
  const char *line_end;
  const char *line_next;
  int e;
  ptrdiff_t start_ofs;
  long tmp;
  char *tmp___0;
  ptrdiff_t tmp___1;
  char *tmp___2;
  char *tmp___3;
  char *tmp___4;
  char *tmp___5;
  const char *beg;
  const char *end;
  const char *buflim___0;
  char eol;
  void *__cil_tmp30;
  char *__cil_tmp31;
  char *__cil_tmp32;
  char *__cil_tmp33;
  char *__cil_tmp34;
  char *__cil_tmp35;
  {
    e = - 1;
    if (start_ptr)
    {
      tmp = start_ptr - buf;
    }
    else
    {
      tmp = 0L;
    }

    start_ofs = tmp;
    line_next = buf;
    {
      while (1)
      {
        while_continue:
        ;

        if (e == (- 1))
        {
          if (! (((unsigned long) line_next) < ((unsigned long) (buf + size))))
          {
            goto while_break;
          }

        }
        else
        {
          goto while_break;
        }

        {
          line_buf = line_next;
          line_end = (const char *) memchr((const void *) line_buf, (int) eolbyte, (size_t) ((buf + size) - line_buf));
        }
        if (((unsigned long) line_end) == ((unsigned long) ((void *) 0)))
        {
          line_end = buf + size;
          line_next = line_end;
        }
        else
        {
          line_next = line_end + 1;
        }

        if (start_ptr)
        {
          if (((unsigned long) start_ptr) >= ((unsigned long) line_end))
          {
            goto __Cont;
          }

        }

        if (2147483647L < (line_end - line_buf))
        {
          {
            tmp___0 = gettext("exceeded PCRE\'s line length limit");
            error(2, 0, (const char *) tmp___0);
          }
        }

        if (start_ofs < 0L)
        {
          tmp___1 = (ptrdiff_t) 0;
        }
        else
        {
          tmp___1 = start_ofs;
        }

        {
          e = pcre_exec((const pcre *) cre, (const pcre_extra *) extra, line_buf, (int) (line_end - line_buf), (int) tmp___1, 0, sub, (int) ((sizeof(sub)) / (sizeof(sub[0]))));
        }
        __Cont:
        start_ofs -= line_next - line_buf;

      }

      while_break___1:
      ;

    }
    while_break:
    ;

    if (e <= 0)
    {
      if (e == (- 1))
      {
        goto case_neg_1;
      }

      if (e == (- 6))
      {
        goto case_neg_6;
      }

      if (e == (- 8))
      {
        goto case_neg_8;
      }

      if (e == (- 10))
      {
        goto case_neg_10;
      }

      goto switch_default;
      case_neg_1:
      return (size_t) (- 1);

      case_neg_6:
      {
        tmp___2 = gettext("memory exhausted");
        error(2, 0, (const char *) tmp___2);
      }

      case_neg_8:
      {
        tmp___3 = gettext("exceeded PCRE\'s backtracking limit");
        error(2, 0, (const char *) tmp___3);
      }

      case_neg_10:
      {
        tmp___4 = gettext("invalid UTF-8 byte sequence in input");
        error(2, 0, (const char *) tmp___4);
      }

      switch_default:
      {
        tmp___5 = gettext("internal PCRE error: %d");
        error(2, 0, (const char *) tmp___5, e);
      }

      return (size_t) (- 1);
    }
    else
    {
      beg = line_buf + sub[0];
      end = line_buf + sub[1];
      buflim___0 = buf + size;
      eol = (char) eolbyte;
      if (! start_ptr)
      {
        {
          end = (const char *) memchr((const void *) end, (int) eol, (size_t) (buflim___0 - end));
        }
        if (end)
        {
          end++;
        }
        else
        {
          end = buflim___0;
        }

        {
          while (1)
          {
            while_continue___0:
            ;

            if (((unsigned long) buf) < ((unsigned long) beg))
            {
              if (! (((const int) (* (beg + (- 1)))) != ((const int) eol)))
              {
                goto while_break___0;
              }

            }
            else
            {
              goto while_break___0;
            }

            beg--;
          }

          while_break___2:
          ;

        }
        while_break___0:
        ;

      }

      * match_size = (size_t) (end - beg);
      return (size_t) (beg - buf);
    }

  }
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
  int tmp;
  int tmp___0;
  {
    if (wc == 95U)
    {
      tmp___0 = 1;
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

static kwset_t kwset;
void Fcompile(const char *pattern, size_t size)
{
  size_t total;
  mb_len_map_t *map;
  const char *pat;
  char *tmp___0;
  const char *tmp___1;
  size_t tmp___2;
  const char *p;
  size_t len;
  const char *sep;
  const char *tmp___3;
  char *buf;
  {
    total = size;
    map = (mb_len_map_t *) ((void *) 0);
    if (match_icase)
    {
      {
        tmp___2 = __ctype_get_mb_cur_max();
      }
      if (tmp___2 > 1UL)
      {
        {
          tmp___0 = mbtoupper(pattern, & total, & map);
          tmp___1 = (const char *) tmp___0;
        }
      }
      else
      {
        tmp___1 = pattern;
      }

    }
    else
    {
      tmp___1 = pattern;
    }

    {
      pat = tmp___1;
      kwsinit(& kwset);
      p = pat;
    }
    {
      while (1)
      {
        while_continue:
        ;

        {
          tmp___3 = (const char *) memchr((const void *) p, '\n', total);
          sep = tmp___3;
        }
        if (sep)
        {
          len = (size_t) (sep - p);
          sep++;
          total -= len + 1UL;
        }
        else
        {
          len = total;
          total = (size_t) 0;
        }

        buf = (char *) ((void *) 0);
        if (match_lines)
        {
          {
            buf = (char *) xmalloc(len + 2UL);
            * (buf + 0) = (char) eolbyte;
            memcpy((void *) ((void *) (buf + 1)), (const void *) ((const void *) p), len);
            * (buf + (len + 1UL)) = (char) eolbyte;
            p = (const char *) buf;
            len += 2UL;
          }
        }

        {
          kwsincr(kwset, p, len);
          free((void *) buf);
          p = sep;
        }
        if (! p)
        {
          goto while_break;
        }

      }

      while_break___0:
      ;

    }
    while_break:
    {
      kwsprep(kwset);
    }

    return;
  }
}

static void mb_case_map_apply(const mb_len_map_t *map, size_t *off, size_t *len)
{
  size_t off_incr;
  size_t len_incr;
  size_t k;
  {
    if (map)
    {
      off_incr = (size_t) 0;
      len_incr = (size_t) 0;
      k = (size_t) 0;
      {
        while (1)
        {
          while_continue:
          ;

          if (! (k < (* off)))
          {
            goto while_break;
          }

          off_incr += (size_t) (* (map + k));
          k++;
        }

        while_break___1:
        ;

      }
      while_break:
      ;

      {
        while (1)
        {
          while_continue___0:
          ;

          if (! (k < ((* off) + (* len))))
          {
            goto while_break___0;
          }

          len_incr += (size_t) (* (map + k));
          k++;
        }

        while_break___2:
        ;

      }
      while_break___0:
      * off += off_incr;

      * len += len_incr;
    }

    return;
  }
}

size_t Fexecute(const char *buf, size_t size, size_t *match_size, const char *start_ptr)
{
  const char *beg;
  const char *try;
  const char *end;
  const char *mb_start;
  size_t len;
  char eol;
  struct kwsmatch kwsmatch;
  size_t ret_val;
  mb_len_map_t *map;
  char *case_buf;
  char *tmp;
  size_t tmp___0;
  size_t offset;
  size_t tmp___1;
  size_t tmp___2;
  int tmp___3;
  ptrdiff_t tmp___4;
  wint_t tmp___5;
  _Bool tmp___6;
  wint_t tmp___7;
  _Bool tmp___8;
  size_t off;
  void *__cil_tmp30;
  void *__cil_tmp31;
  {
    {
      eol = (char) eolbyte;
      map = (mb_len_map_t *) ((void *) 0);
      tmp___0 = __ctype_get_mb_cur_max();
    }
    if (tmp___0 > 1UL)
    {
      if (match_icase)
      {
        {
          tmp = mbtoupper(buf, & size, & map);
          case_buf = tmp;
        }
        if (start_ptr)
        {
          start_ptr = (const char *) (case_buf + (start_ptr - buf));
        }

        buf = (const char *) case_buf;
      }

    }

    if (start_ptr)
    {
      beg = start_ptr;
    }
    else
    {
      beg = buf;
    }

    mb_start = beg;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (((unsigned long) beg) <= ((unsigned long) (buf + size))))
        {
          goto while_break;
        }

        {
          tmp___1 = kwsexec(kwset, beg - match_lines, (size_t) (((buf + size) - beg) + ((long) match_lines)), & kwsmatch);
          offset = tmp___1;
        }
        if (offset == 0xffffffffffffffffUL)
        {
          goto failure;
        }

        len = kwsmatch.size[0] - ((size_t) match_lines);
        if (! match_lines)
        {
          {
            tmp___2 = __ctype_get_mb_cur_max();
          }
          if (tmp___2 > 1UL)
          {
            {
              tmp___3 = using_utf8();
            }
            if (! tmp___3)
            {
              {
                tmp___4 = mb_goback(& mb_start, beg + offset, buf + size);
              }
              if (tmp___4 != 0L)
              {
                beg = mb_start;
                goto __Cont;
              }

            }

          }

        }

        beg += offset;
        if (start_ptr)
        {
          if (! match_words)
          {
            goto success_in_beg_and_len;
          }

        }

        if (match_lines)
        {
          goto success_in_beg_and_len;
        }

        if (match_words)
        {
          try = beg;
          {
            while (1)
            {
              while_continue___0:
              ;

              {
                tmp___5 = mb_prev_wc(buf, try, buf + size);
                tmp___6 = wordchar(tmp___5);
              }
              if (tmp___6)
              {
                goto while_break___0;
              }

              {
                tmp___7 = mb_next_wc(try + len, buf + size);
                tmp___8 = wordchar(tmp___7);
              }
              if (tmp___8)
              {
                if (! len)
                {
                  goto while_break___0;
                }

                {
                  len--;
                  offset = kwsexec(kwset, beg, len, & kwsmatch);
                }
                if (offset == 0xffffffffffffffffUL)
                {
                  goto while_break___0;
                }

                try = beg + offset;
                len = kwsmatch.size[0];
              }
              else
                if (! start_ptr)
              {
                goto success;
              }
              else
              {
                goto success_in_beg_and_len;
              }


            }

            while_break___3:
            ;

          }
          while_break___0:
          ;

        }
        else
        {
          goto success;
        }

        __Cont:
        beg++;

      }

      while_break___2:
      ;

    }
    while_break:
    ;

    failure:
    return (size_t) (- 1);

    success:
    {
      end = (const char *) memchr((const void *) (beg + len), (int) eol, (size_t) ((buf + size) - (beg + len)));
    }

    if (((unsigned long) end) != ((unsigned long) ((void *) 0)))
    {
      end++;
    }
    else
    {
      end = buf + size;
    }

    {
      while (1)
      {
        while_continue___1:
        ;

        if (((unsigned long) buf) < ((unsigned long) beg))
        {
          if (! (((const int) (* (beg + (- 1)))) != ((const int) eol)))
          {
            goto while_break___1;
          }

        }
        else
        {
          goto while_break___1;
        }

        beg--;
      }

      while_break___4:
      ;

    }
    while_break___1:
    len = (size_t) (end - beg);

    success_in_beg_and_len:
    {
      off = (size_t) (beg - buf);
      mb_case_map_apply((const mb_len_map_t *) map, & off, & len);
      * match_size = len;
      ret_val = off;
    }

    return ret_val;
  }
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
        tmp = to_uchar(c);
        tmp___0 = (int) (* (trans___0 + ((int) tmp)));
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
        _obstack_newchunk(__o, __len);
      }
    }

    __o->next_free += __len;
    __o1 = __h;
    __value = (void *) __o1->object_base;
    if (((unsigned long) __o1->next_free) == ((unsigned long) __value))
    {
      __o1->maybe_empty_object = 1U;
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
      __o1->next_free = __o1->chunk_limit;
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
          tmp = (int) (* (trans___0 + ((int) uc)));
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
                goto while_break___0;
              }

            }
            else
            {
              goto while_break___0;
            }

            links[depth___0] = kwset_link;
            if (((int) label___0) < ((int) kwset_link->label))
            {
              tmp___0 = depth___0;
              depth___0++;
              dirs[tmp___0] = (enum __anonenum_dirs_58) 0;
              kwset_link = kwset_link->llink;
            }
            else
            {
              tmp___1 = depth___0;
              depth___0++;
              dirs[tmp___1] = (enum __anonenum_dirs_58) 1;
              kwset_link = kwset_link->rlink;
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
              _obstack_newchunk(__o, __len);
            }
          }

          __o->next_free += __len;
          __o1 = __h;
          __value = (void *) __o1->object_base;
          if (((unsigned long) __o1->next_free) == ((unsigned long) __value))
          {
            __o1->maybe_empty_object = 1U;
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
            __o1->next_free = __o1->chunk_limit;
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
              _obstack_newchunk(__o___0, __len___0);
            }
          }

          __o___0->next_free += __len___0;
          __o1___0 = __h___0;
          __value___0 = (void *) __o1___0->object_base;
          if (((unsigned long) __o1___0->next_free) == ((unsigned long) __value___0))
          {
            __o1___0->maybe_empty_object = 1U;
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
            __o1___0->next_free = __o1___0->chunk_limit;
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
          else
          {
            links[depth___0]->rlink = kwset_link;
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
                  goto while_break___1;
                }

              }
              else
              {
                goto while_break___1;
              }

              if (((unsigned int) dirs[depth___0]) == 0U)
              {
                links[depth___0]->balance = (char) (((int) links[depth___0]->balance) - 1);
              }
              else
              {
                links[depth___0]->balance = (char) (((int) links[depth___0]->balance) + 1);
              }

              depth___0--;
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
              links[depth___0]->balance = (char) (((int) links[depth___0]->balance) - 1);
              if (links[depth___0]->balance)
              {
                goto _L;
              }
              else
              {
                goto _L___0;
              }

            }
            else
              _L___0:
            if (((unsigned int) dirs[depth___0]) == 1U)
            {
              links[depth___0]->balance = (char) (((int) links[depth___0]->balance) + 1);
              if (links[depth___0]->balance)
              {
                _L:
                if (((int) links[depth___0]->balance) == (- 2))
                {
                  goto case_neg_2;
                }


                if (((int) links[depth___0]->balance) == 2)
                {
                  goto case_2;
                }

                goto switch_default___1;
                case_neg_2:
                if (((unsigned int) dirs[depth___0 + 1]) == 0U)
                {
                  goto case_0;
                }


                if (((unsigned int) dirs[depth___0 + 1]) == 1U)
                {
                  goto case_1;
                }

                goto switch_default;
                case_0:
                r = links[depth___0];

                t = r->llink;
                rl = t->rlink;
                t->rlink = r;
                r->llink = rl;
                tmp___6 = (char) 0;
                r->balance = tmp___6;
                t->balance = tmp___6;
                goto switch_break___0;
                case_1:
                r = links[depth___0];

                l = r->llink;
                t = l->rlink;
                rl = t->rlink;
                lr = t->llink;
                t->llink = l;
                l->rlink = lr;
                t->rlink = r;
                r->llink = rl;
                if (((int) t->balance) != 1)
                {
                  l->balance = (char) 0;
                }
                else
                {
                  l->balance = (char) (- 1);
                }

                if (((int) t->balance) != (- 1))
                {
                  r->balance = (char) 0;
                }
                else
                {
                  r->balance = (char) 1;
                }

                t->balance = (char) 0;
                goto switch_break___0;
                switch_default:
                {
                  abort();
                }

                switch_break___0:
                ;

                goto switch_break;
                case_2:
                if (((unsigned int) dirs[depth___0 + 1]) == 1U)
                {
                  goto case_1___0;
                }


                if (((unsigned int) dirs[depth___0 + 1]) == 0U)
                {
                  goto case_0___0;
                }

                goto switch_default___0;
                case_1___0:
                l = links[depth___0];

                t = l->rlink;
                lr = t->llink;
                t->llink = l;
                l->rlink = lr;
                tmp___7 = (char) 0;
                l->balance = tmp___7;
                t->balance = tmp___7;
                goto switch_break___1;
                case_0___0:
                l = links[depth___0];

                r = l->rlink;
                t = r->llink;
                lr = t->llink;
                rl = t->rlink;
                t->llink = l;
                l->rlink = lr;
                t->rlink = r;
                r->llink = rl;
                if (((int) t->balance) != 1)
                {
                  l->balance = (char) 0;
                }
                else
                {
                  l->balance = (char) (- 1);
                }

                if (((int) t->balance) != (- 1))
                {
                  r->balance = (char) 0;
                }
                else
                {
                  r->balance = (char) 1;
                }

                t->balance = (char) 0;
                goto switch_break___1;
                switch_default___0:
                {
                  abort();
                }

                switch_break___1:
                ;

                goto switch_break;
                switch_default___1:
                {
                  abort();
                }

                switch_break:
                ;

                if (((unsigned int) dirs[depth___0 - 1]) == 0U)
                {
                  links[depth___0 - 1]->llink = t;
                }
                else
                {
                  links[depth___0 - 1]->rlink = t;
                }

              }

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
      return (int) 0;
    }

    {
      tmp___0 = hasevery(a, (const struct tree *) b->rlink);
    }
    if (! tmp___0)
    {
      return (int) 0;
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
      tmp = deltabuf;
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
    else
    {
      tmp___0 = 255;
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
      tmp___2 = nextbuf;
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
      i = 0;
      {
        while (1)
        {
          while_continue___2:
          ;

          if (! (i < 256))
          {
            goto while_break___2;
          }

          {
            tmp___3 = to_uchar((char) (* (trans___0 + i)));
            kwset___1->next[i] = * (next + ((int) tmp___3));
            i++;
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
          _obstack_newchunk(__o, __len);
        }
      }

      __o->next_free += __len;
      __o1 = __h;
      __value = (void *) __o1->object_base;
      if (((unsigned long) __o1->next_free) == ((unsigned long) __value))
      {
        __o1->maybe_empty_object = 1U;
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
        __o1->next_free = __o1->chunk_limit;
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
            _obstack_newchunk(__o___0, __len___0);
          }
        }

        __o___0->next_free += __len___0;
        __o1___0 = __h___0;
        __value___0 = (void *) __o1___0->object_base;
        if (((unsigned long) __o1___0->next_free) == ((unsigned long) __value___0))
        {
          __o1___0->maybe_empty_object = 1U;
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
          __o1___0->next_free = __o1___0->chunk_limit;
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
          tmp___9 = (const char *) memchr((const void *) trans___0, (int) gc1, (size_t) 256);
          equiv1 = tmp___9;
          tmp___10 = (const char *) memchr((const void *) (equiv1 + 1), (int) gc1, (size_t) ((trans___0 + 256) - (equiv1 + 1)));
          equiv2 = tmp___10;
        }
        if (equiv2)
        {
          {
            tmp___13 = memchr((const void *) (equiv2 + 1), (int) gc1, (size_t) ((trans___0 + 256) - (equiv2 + 1)));
          }
          if (tmp___13)
          {
            gc1help = 256;
          }
          else
          {
            {
              tmp___12 = to_uchar(gc1);
              gc1help = (int) ((((long) tmp___12) ^ (equiv1 - trans___0)) ^ (equiv2 - trans___0));
            }
          }

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
      i = 0;
      {
        while (1)
        {
          while_continue___5:
          ;

          if (! (i < 256))
          {
            goto while_break___5;
          }

          {
            tmp___14 = to_uchar((char) (* (trans___0 + i)));
            kwset___1->delta[i] = * (delta + ((int) tmp___14));
            i++;
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

    small_heuristic = 2;
    small = (int) (((- ((uintptr_t) s)) % (sizeof(long))) + (((unsigned long) small_heuristic) * (sizeof(long))));
    if (kwset___1->gc1help < 256)
    {
      if (((size_t) small) < n)
      {
        tmp___0 = (size_t) small;
      }
      else
      {
        tmp___0 = n;
      }

    }
    else
    {
      tmp___0 = n;
    }

    ntrans = tmp___0;
    slim = s + ntrans;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (((unsigned long) s) < ((unsigned long) slim)))
        {
          goto while_break;
        }

        {
          tmp___1 = to_uchar((char) (* s));
        }
        if (((const int) (* (kwset___1->trans + ((int) tmp___1)))) == ((const int) kwset___1->gc1))
        {
          return s;
        }

        s++;
      }

      while_break___0:
      ;

    }
    while_break:
    n -= ntrans;

    if (n == 0UL)
    {
      tmp___3 = (void *) 0;
    }
    else
    {
      {
        tmp___2 = memchr2((const void *) s, (int) kwset___1->gc1, kwset___1->gc1help, n);
        tmp___3 = tmp___2;
      }
    }

    return (const char *) tmp___3;
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
      return (size_t) 0;
    }

    if (((size_t) len) > size)
    {
      return (size_t) (- 1);
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
                  goto big_advance;
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
        tmp = bmexec_trans(kwset___1, text, size);
        tmp___1 = tmp;
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
  struct trie *const *next;
  const struct trie *trie;
  const struct trie *accept;
  const char *beg;
  const char *lim;
  const char *mch;
  const char *lmch;
  unsigned char c;
  const unsigned char *delta;
  int d;
  const char *end;
  const char *qlim;
  const struct tree *tree;
  const char *trans___0;
  unsigned char tmp;
  unsigned char tmp___0;
  unsigned char uc;
  unsigned char uc___0;
  {
    if (len < ((size_t) kwset___1->mind))
    {
      return (size_t) (- 1);
    }

    next = (struct trie *const *) kwset___1->next;
    delta = (const unsigned char *) kwset___1->delta;
    trans___0 = kwset___1->trans;
    lim = text + len;
    end = text;
    d = kwset___1->mind;
    if (d != 0)
    {
      mch = (const char *) ((void *) 0);
    }
    else
    {
      mch = text;
      accept = (const struct trie *) kwset___1->trie;
      goto match;
    }

    if (len >= ((size_t) (4 * kwset___1->mind)))
    {
      qlim = lim - (4 * kwset___1->mind);
    }
    else
    {
      qlim = (const char *) ((void *) 0);
    }

    {
      while (1)
      {
        while_continue___4:
        ;

        while_continue:
        ;

        if (! ((lim - end) >= ((long) d)))
        {
          goto while_break;
        }

        if (qlim)
        {
          if (((unsigned long) end) <= ((unsigned long) qlim))
          {
            end += d - 1;
            {
              while (1)
              {
                while_continue___5:
                ;

                c = (unsigned char) (* end);
                d = (int) (* (delta + ((int) c)));
                if (d)
                {
                  if (! (((unsigned long) end) < ((unsigned long) qlim)))
                  {
                    goto while_break___0;
                  }

                }
                else
                {
                  goto while_break___0;
                }

                {
                  end += d;
                  tmp = to_uchar((char) (* end));
                  end += (const int) (* (delta + ((int) tmp)));
                  tmp___0 = to_uchar((char) (* end));
                  end += (const int) (* (delta + ((int) tmp___0)));
                }
              }

              while_break___7:
              ;

            }
            while_break___0:
            end++;

          }
          else
          {
            end += d;
            c = (unsigned char) (* (end + (- 1)));
            d = (int) (* (delta + ((int) c)));
          }

        }
        else
        {
          end += d;
          c = (unsigned char) (* (end + (- 1)));
          d = (int) (* (delta + ((int) c)));
        }

        if (d)
        {
          goto while_continue;
        }

        beg = end - 1;
        trie = (const struct trie *) (* (next + ((int) c)));
        if (trie->accepting)
        {
          mch = beg;
          accept = trie;
        }

        d = (int) trie->shift;
        {
          while (1)
          {
            while_continue___6:
            ;

            if (! (((unsigned long) beg) > ((unsigned long) text)))
            {
              goto while_break___1;
            }

            beg--;
            uc = (unsigned char) (* beg);
            if (trans___0)
            {
              c = (unsigned char) (* (trans___0 + ((int) uc)));
            }
            else
            {
              c = uc;
            }

            tree = (const struct tree *) trie->links;
            {
              while (1)
              {
                while_continue___7:
                ;

                if (tree)
                {
                  if (! (((int) c) != ((int) tree->label)))
                  {
                    goto while_break___2;
                  }

                }
                else
                {
                  goto while_break___2;
                }

                if (((int) c) < ((int) tree->label))
                {
                  tree = (const struct tree *) tree->llink;
                }
                else
                {
                  tree = (const struct tree *) tree->rlink;
                }

              }

              while_break___9:
              ;

            }
            while_break___2:
            ;

            if (tree)
            {
              trie = (const struct trie *) tree->trie;
              if (trie->accepting)
              {
                mch = beg;
                accept = trie;
              }

            }
            else
            {
              goto while_break___1;
            }

            d = (int) trie->shift;
          }

          while_break___8:
          ;

        }
        while_break___1:
        ;

        if (mch)
        {
          goto match;
        }

      }

      while_break___6:
      ;

    }
    while_break:
    ;

    return (size_t) (- 1);
    match:
    if ((lim - mch) > ((long) kwset___1->maxd))
    {
      lim = mch + kwset___1->maxd;
    }


    lmch = (const char *) 0;
    d = 1;
    {
      while (1)
      {
        while_continue___8:
        ;

        while_continue___3:
        ;

        if (! ((lim - end) >= ((long) d)))
        {
          goto while_break___3;
        }

        end += d;
        c = (unsigned char) (* (end + (- 1)));
        d = (int) (* (delta + ((int) c)));
        if (d != 0)
        {
          goto while_continue___3;
        }

        beg = end - 1;
        trie = (const struct trie *) (* (next + ((int) c)));
        if (! trie)
        {
          d = 1;
          goto while_continue___3;
        }

        if (trie->accepting)
        {
          if (((unsigned long) beg) <= ((unsigned long) mch))
          {
            lmch = beg;
            accept = trie;
          }

        }

        d = (int) trie->shift;
        {
          while (1)
          {
            while_continue___9:
            ;

            if (! (((unsigned long) beg) > ((unsigned long) text)))
            {
              goto while_break___4;
            }

            beg--;
            uc___0 = (unsigned char) (* beg);
            if (trans___0)
            {
              c = (unsigned char) (* (trans___0 + ((int) uc___0)));
            }
            else
            {
              c = uc___0;
            }

            tree = (const struct tree *) trie->links;
            {
              while (1)
              {
                while_continue___10:
                ;

                if (tree)
                {
                  if (! (((int) c) != ((int) tree->label)))
                  {
                    goto while_break___5;
                  }

                }
                else
                {
                  goto while_break___5;
                }

                if (((int) c) < ((int) tree->label))
                {
                  tree = (const struct tree *) tree->llink;
                }
                else
                {
                  tree = (const struct tree *) tree->rlink;
                }

              }

              while_break___12:
              ;

            }
            while_break___5:
            ;

            if (tree)
            {
              trie = (const struct trie *) tree->trie;
              if (trie->accepting)
              {
                if (((unsigned long) beg) <= ((unsigned long) mch))
                {
                  lmch = beg;
                  accept = trie;
                }

              }

            }
            else
            {
              goto while_break___4;
            }

            d = (int) trie->shift;
          }

          while_break___11:
          ;

        }
        while_break___4:
        ;

        if (lmch)
        {
          mch = lmch;
          goto match;
        }

        if (! d)
        {
          d = 1;
        }

      }

      while_break___10:
      ;

    }
    while_break___3:
    kwsmatch->index = (size_t) (accept->accepting / 2UL);

    kwsmatch->offset[0] = (size_t) (mch - text);
    kwsmatch->size[0] = (size_t) accept->depth;
    return (size_t) (mch - text);
  }
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
    else
    {
      {
        tmp___0 = cwexec(kwset___1, text, size, kwsmatch);
      }
      return tmp___0;
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
      tmp___0 = 1;
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
  {
    {
      error(2, 0, "%s", mesg);
      abort();
    }
  }
}

static enum __anonenum_mode_60 mode;
void dfawarn(const char *mesg)
{
  char *tmp___0;
  char *__cil_tmp4;
  {
    if (((unsigned int) mode) == 0U)
    {
      {
        tmp___0 = getenv("POSIXLY_CORRECT");
      }
      if (tmp___0)
      {
        mode = (enum __anonenum_mode_60) 1;
      }
      else
      {
        mode = (enum __anonenum_mode_60) 2;
      }

    }

    if (((unsigned int) mode) == 2U)
    {
      {
        dfaerror(mesg);
      }
    }

    return;
  }
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
          len = (size_t) (sep - p);
          sep++;
          total -= len + 1UL;
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
            error(2, 0, "%s", err);
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
        else
        {
          tmp___2 = line_beg_no_bk;
        }

        tmp___4 = tmp___2;
      }
      else
      {
        if (bk)
        {
          tmp___3 = word_beg_bk;
        }
        else
        {
          tmp___3 = word_beg_no_bk;
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
        else
        {
          tmp___5 = line_end_no_bk;
        }

        tmp___7 = tmp___5;
      }
      else
      {
        if (bk)
        {
          tmp___6 = word_end_bk;
        }
        else
        {
          tmp___6 = word_end_no_bk;
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
                else
                {
                  tmp___5 = buflim___0;
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
            else
            {
              end = buflim___0;
            }

            if (exact_kwset_match)
            {
              {
                tmp___8 = __ctype_get_mb_cur_max();
              }
              if (tmp___8 == 1UL)
              {
                goto success;
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
                mb_start = beg;
              }

              {
                tmp___10 = mb_goback(& mb_start, match, buflim___0);
              }
              if (tmp___10 == 0L)
              {
                goto success;
              }

              dfa_beg = mb_start;
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
                    else
                    {
                      goto while_break___0;
                    }

                  }
                  else
                  {
                    goto while_break___0;
                  }

                  {
                    count = (size_t) 0;
                    beg = (const char *) memrchr((const void *) buf, (int) eol, (size_t) (next_beg - buf));
                    beg++;
                    dfa_beg = beg;
                  }
                }

                while_break___4:
                ;

              }
              while_break___0:
              ;

              if (((unsigned long) next_beg) == ((unsigned long) ((void *) 0)))
              {
                goto __Cont;
              }
              else
                if (((unsigned long) next_beg) == ((unsigned long) end))
              {
                goto __Cont;
              }


              {
                end = (const char *) memchr((const void *) next_beg, (int) eol, (size_t) (buflim___0 - next_beg));
              }
              if (end)
              {
                end++;
              }
              else
              {
                end = buflim___0;
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
          else
          {
            end = buflim___0;
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
            xalloc_die();
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
                xalloc_die();
              }
            }
            else
              if (0 <= start)
            {
              len = (size_t) ((* ((patterns + i)->regs.end + 0)) - start);
              match = beg + start;
              if (((unsigned long) match) > ((unsigned long) best_match))
              {
                goto __Cont___0;
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
              else
                _L:
              if (match_lines)
              {
                if (len == ((size_t) ((end - ptr) - 1L)))
                {
                  match = ptr;
                  len = (size_t) (end - ptr);
                  goto assess_pattern_match;
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
                      goto while_break___2;
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
                          xalloc_die();
                        }
                      }

                    }

                    if (0 < shorter_len)
                    {
                      len = (size_t) shorter_len;
                    }
                    else
                    {
                      if (((unsigned long) match) == ((unsigned long) (end - 1)))
                      {
                        goto while_break___2;
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
                            xalloc_die();
                          }
                        }

                        goto while_break___2;
                      }

                      len = (size_t) ((* ((patterns + i)->regs.end + 0)) - start);
                      match = beg + start;
                    }

                  }

                  while_break___6:
                  ;

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
                if (len > best_len)
                {
                  best_match = match;
                  best_len = len;
                }

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
        tmp = mbrtowc((wchar_t *) (& wch), (const char *) s, n, (mbstate_t *) (& d->mbs));
        nbytes = tmp;
      }
      if (0UL < nbytes)
      {
        if (nbytes < 0xfffffffffffffffeUL)
        {
          * pwc = (wint_t) wch;
          return nbytes;
        }

      }

      {
        memset((void *) (& d->mbs), 0, sizeof(d->mbs));
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
  int tmp;
  {
    if (wc == ((wint_t) ((wchar_t) eolbyte___0)))
    {
      return 4;
    }
    else
      if (wc == 0U)
    {
      return 4;
    }


    if (wc == 95U)
    {
      return 2;
    }
    else
    {
      {
        tmp = iswalnum(wc);
      }
      if (tmp)
      {
        return 2;
      }

    }

    return 1;
  }
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
      return (_Bool) 0;
    }

    {
      setbit((unsigned int) b, c);
    }
    return (_Bool) 1;
  }
}

static void setbit_case_fold_c(int b, charclass_word *c)
{
  int ub;
  int tmp;
  int i;
  int tmp___0;
  {
    {
      tmp = toupper(b);
      ub = tmp;
      i = 0;
    }
    {
      while (1)
      {
        while_continue:
        ;

        if (! (i < 256))
        {
          goto while_break;
        }

        {
          tmp___0 = toupper(i);
        }
        if (tmp___0 == ub)
        {
          {
            setbit((unsigned int) i, c);
          }
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
        else
        {
          tmp___0 = 0;
        }

      }
      else
      {
        tmp___0 = 0;
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
        {
          tmp = (const char *) setlocale(6, (const char *) ((void *) 0));
          locale = tmp;
        }
        if (! locale)
        {
          tmp___2 = 1;
        }
        else
        {
          {
            tmp___0 = strcmp(locale, "C");
          }
          if (tmp___0 == 0)
          {
            tmp___2 = 1;
          }
          else
          {
            {
              tmp___1 = strcmp(locale, "POSIX");
            }
            if (tmp___1 == 0)
            {
              tmp___2 = 1;
            }
            else
            {
              tmp___2 = 0;
            }

          }

        }

        unibyte_c = tmp___2;
      }

      return (_Bool) unibyte_c;
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
          goto while_break;
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
    else
    {
      work_mbc = (struct mb_char_classes *) ((void *) 0);
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
            tmp___1 = gettext("unbalanced [");
          }
          if (((unsigned long) tmp___1) != ((unsigned long) ((char *) 0)))
          {
            {
              tmp___0 = gettext("unbalanced [");
              dfaerror((const char *) tmp___0);
            }
          }
          else
          {
            lasttok = (token) (- 1);
            return lasttok;
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
          else
          {
            c = - 1;
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
              tmp___5 = gettext("unbalanced [");
            }
            if (((unsigned long) tmp___5) != ((unsigned long) ((char *) 0)))
            {
              {
                tmp___4 = gettext("unbalanced [");
                dfaerror((const char *) tmp___4);
              }
            }
            else
            {
              lasttok = (token) (- 1);
              return lasttok;
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
            else
            {
              c = - 1;
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
                  tmp___9 = gettext("unbalanced [");
                }
                if (((unsigned long) tmp___9) != ((unsigned long) ((char *) 0)))
                {
                  {
                    tmp___8 = gettext("unbalanced [");
                    dfaerror((const char *) tmp___8);
                  }
                }
                else
                {
                  lasttok = (token) (- 1);
                  return lasttok;
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
                else
                {
                  c1 = - 1;
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
            else
            {
              goto _L___1;
            }

          }
          else
            _L___1:
          if (c1 == 46)
          {
            goto _L___0;
          }
          else
            if (c1 == 61)
          {
            _L___0:
            len = (size_t) 0;

            {
              while (1)
              {
                while_continue___3:
                ;

                {
                  while (1)
                  {
                    while_continue___4:
                    ;

                    if (! lexleft)
                    {
                      {
                        tmp___13 = gettext("unbalanced [");
                      }
                      if (((unsigned long) tmp___13) != ((unsigned long) ((char *) 0)))
                      {
                        {
                          tmp___12 = gettext("unbalanced [");
                          dfaerror((const char *) tmp___12);
                        }
                      }
                      else
                      {
                        lasttok = (token) (- 1);
                        return lasttok;
                      }

                    }
                    else
                    {
                      {
                        tmp___14 = mbs_to_wchar(& _wc___2, lexptr, lexleft, dfa___0);
                        nbytes___2 = tmp___14;
                        cur_mb_len = (int) nbytes___2;
                        wc = _wc___2;
                      }
                      if (nbytes___2 == 1UL)
                      {
                        {
                          tmp___15 = to_uchar___0((char) (* lexptr));
                          c = (int) tmp___15;
                        }
                      }
                      else
                      {
                        c = - 1;
                      }

                      lexptr += nbytes___2;
                      lexleft -= nbytes___2;
                    }

                    goto while_break___4;
                  }

                  while_break___21:
                  ;

                }
                while_break___4:
                ;

                if (c == c1)
                {
                  if (((const int) (* lexptr)) == 93)
                  {
                    goto while_break___3;
                  }
                  else
                  {
                    goto _L;
                  }

                }
                else
                  _L:
                if (lexleft == 0UL)
                {
                  goto while_break___3;
                }



                if (len < 32UL)
                {
                  tmp___16 = len;
                  len++;
                  str[tmp___16] = (char) c;
                }
                else
                {
                  str[0] = (char) '\000';
                }

              }

              while_break___20:
              ;

            }
            while_break___3:
            str[len] = (char) '\000';

            {
              while (1)
              {
                while_continue___5:
                ;

                if (! lexleft)
                {
                  {
                    tmp___18 = gettext("unbalanced [");
                  }
                  if (((unsigned long) tmp___18) != ((unsigned long) ((char *) 0)))
                  {
                    {
                      tmp___17 = gettext("unbalanced [");
                      dfaerror((const char *) tmp___17);
                    }
                  }
                  else
                  {
                    lasttok = (token) (- 1);
                    return lasttok;
                  }

                }
                else
                {
                  {
                    tmp___19 = mbs_to_wchar(& _wc___3, lexptr, lexleft, dfa___0);
                    nbytes___3 = tmp___19;
                    cur_mb_len = (int) nbytes___3;
                    wc = _wc___3;
                  }
                  if (nbytes___3 == 1UL)
                  {
                    {
                      tmp___20 = to_uchar___0((char) (* lexptr));
                      c = (int) tmp___20;
                    }
                  }
                  else
                  {
                    c = - 1;
                  }

                  lexptr += nbytes___3;
                  lexleft -= nbytes___3;
                }

                goto while_break___5;
              }

              while_break___22:
              ;

            }
            while_break___5:
            ;

            if (c1 == 58)
            {
              if (case_fold)
              {
                {
                  tmp___24 = strcmp((const char *) str, "upper");
                }
                if (tmp___24 == 0)
                {
                  tmp___23 = "alpha";
                }
                else
                {
                  {
                    tmp___25 = strcmp((const char *) str, "lower");
                  }
                  if (tmp___25 == 0)
                  {
                    tmp___23 = "alpha";
                  }
                  else
                  {
                    tmp___23 = (const char *) str;
                  }

                }

              }
              else
              {
                tmp___23 = (const char *) str;
              }

              {
                class = tmp___23;
                tmp___26 = (const struct dfa_ctype *) find_pred(class);
                pred = tmp___26;
              }
              if (! pred)
              {
                {
                  tmp___27 = gettext("invalid character class");
                  dfaerror((const char *) tmp___27);
                }
              }

              if (dfa___0->multibyte)
              {
                if (! pred->single_byte_only)
                {
                  {
                    tmp___28 = wctype(class);
                    wt = tmp___28;
                    work_mbc->ch_classes = (wctype_t *) maybe_realloc((void *) work_mbc->ch_classes, work_mbc->nch_classes, & ch_classes_al, sizeof(* work_mbc->ch_classes));
                    tmp___29 = work_mbc->nch_classes;
                    work_mbc->nch_classes++;
                    * (work_mbc->ch_classes + tmp___29) = wt;
                  }
                }

              }

              c2 = 0;
              {
                while (1)
                {
                  while_continue___6:
                  ;

                  if (! (c2 < 256))
                  {
                    goto while_break___6;
                  }

                  {
                    tmp___30 = (* pred->func)(c2);
                  }
                  if (tmp___30)
                  {
                    {
                      setbit((unsigned int) c2, ccl);
                    }
                  }

                  c2++;
                }

                while_break___23:
                ;

              }
              while_break___6:
              ;

            }
            else
            {
              known_bracket_exp = (_Bool) 0;
            }

            colon_warning_state |= 8;
            {
              while (1)
              {
                while_continue___7:
                ;

                if (! lexleft)
                {
                  {
                    tmp___32 = gettext("unbalanced [");
                  }
                  if (((unsigned long) tmp___32) != ((unsigned long) ((char *) 0)))
                  {
                    {
                      tmp___31 = gettext("unbalanced [");
                      dfaerror((const char *) tmp___31);
                    }
                  }
                  else
                  {
                    lasttok = (token) (- 1);
                    return lasttok;
                  }

                }
                else
                {
                  {
                    tmp___33 = mbs_to_wchar(& _wc___4, lexptr, lexleft, dfa___0);
                    nbytes___4 = tmp___33;
                    cur_mb_len = (int) nbytes___4;
                    wc1 = _wc___4;
                  }
                  if (nbytes___4 == 1UL)
                  {
                    {
                      tmp___34 = to_uchar___0((char) (* lexptr));
                      c1 = (int) tmp___34;
                    }
                  }
                  else
                  {
                    c1 = - 1;
                  }

                  lexptr += nbytes___4;
                  lexleft -= nbytes___4;
                }

                goto while_break___7;
              }

              while_break___24:
              ;

            }
            while_break___7:
            ;

            goto __Cont;
          }




        }

        if (c == 92)
        {
          if (syntax_bits & 1UL)
          {
            {
              while (1)
              {
                while_continue___8:
                ;

                if (! lexleft)
                {
                  {
                    tmp___36 = gettext("unbalanced [");
                  }
                  if (((unsigned long) tmp___36) != ((unsigned long) ((char *) 0)))
                  {
                    {
                      tmp___35 = gettext("unbalanced [");
                      dfaerror((const char *) tmp___35);
                    }
                  }
                  else
                  {
                    lasttok = (token) (- 1);
                    return lasttok;
                  }

                }
                else
                {
                  {
                    tmp___37 = mbs_to_wchar(& _wc___5, lexptr, lexleft, dfa___0);
                    nbytes___5 = tmp___37;
                    cur_mb_len = (int) nbytes___5;
                    wc = _wc___5;
                  }
                  if (nbytes___5 == 1UL)
                  {
                    {
                      tmp___38 = to_uchar___0((char) (* lexptr));
                      c = (int) tmp___38;
                    }
                  }
                  else
                  {
                    c = - 1;
                  }

                  lexptr += nbytes___5;
                  lexleft -= nbytes___5;
                }

                goto while_break___8;
              }

              while_break___25:
              ;

            }
            while_break___8:
            ;

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
                  tmp___40 = gettext("unbalanced [");
                }
                if (((unsigned long) tmp___40) != ((unsigned long) ((char *) 0)))
                {
                  {
                    tmp___39 = gettext("unbalanced [");
                    dfaerror((const char *) tmp___39);
                  }
                }
                else
                {
                  lasttok = (token) (- 1);
                  return lasttok;
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
                else
                {
                  c1 = - 1;
                }

                lexptr += nbytes___6;
                lexleft -= nbytes___6;
              }

              goto while_break___9;
            }

            while_break___26:
            ;

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
                  tmp___44 = gettext("unbalanced [");
                }
                if (((unsigned long) tmp___44) != ((unsigned long) ((char *) 0)))
                {
                  {
                    tmp___43 = gettext("unbalanced [");
                    dfaerror((const char *) tmp___43);
                  }
                }
                else
                {
                  lasttok = (token) (- 1);
                  return lasttok;
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
                else
                {
                  c2 = - 1;
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
              known_bracket_exp = (_Bool) 0;
              c2 = ']';
            }

          }

          if (c2 != 93)
          {
            if (c2 == 92)
            {
              if (syntax_bits & 1UL)
              {
                {
                  while (1)
                  {
                    while_continue___11:
                    ;

                    if (! lexleft)
                    {
                      {
                        tmp___48 = gettext("unbalanced [");
                      }
                      if (((unsigned long) tmp___48) != ((unsigned long) ((char *) 0)))
                      {
                        {
                          tmp___47 = gettext("unbalanced [");
                          dfaerror((const char *) tmp___47);
                        }
                      }
                      else
                      {
                        lasttok = (token) (- 1);
                        return lasttok;
                      }

                    }
                    else
                    {
                      {
                        tmp___49 = mbs_to_wchar(& _wc___8, lexptr, lexleft, dfa___0);
                        nbytes___8 = tmp___49;
                        cur_mb_len = (int) nbytes___8;
                        wc2 = _wc___8;
                      }
                      if (nbytes___8 == 1UL)
                      {
                        {
                          tmp___50 = to_uchar___0((char) (* lexptr));
                          c2 = (int) tmp___50;
                        }
                      }
                      else
                      {
                        c2 = - 1;
                      }

                      lexptr += nbytes___8;
                      lexleft -= nbytes___8;
                    }

                    goto while_break___11;
                  }

                  while_break___28:
                  ;

                }
                while_break___11:
                ;

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
                      tmp___51 = towlower(wc);
                      (work_mbc->ranges + work_mbc->nranges)->beg = (wchar_t) tmp___51;
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
                      tmp___53 = towlower(wc2);
                      (work_mbc->ranges + tmp___52)->end = (wchar_t) tmp___53;
                    }
                  }
                  else
                  {
                    (work_mbc->ranges + tmp___52)->end = (wchar_t) wc2;
                  }

                  if (case_fold)
                  {
                    {
                      tmp___55 = iswalpha(wc);
                    }
                    if (tmp___55)
                    {
                      {
                        (work_mbc->ranges + work_mbc->nranges)->beg = (wchar_t) towupper(wc);
                        tmp___54 = work_mbc->nranges;
                        work_mbc->nranges++;
                        (work_mbc->ranges + tmp___54)->end = (wchar_t) towupper(wc2);
                      }
                    }
                    else
                    {
                      {
                        tmp___56 = iswalpha(wc2);
                      }
                      if (tmp___56)
                      {
                        {
                          (work_mbc->ranges + work_mbc->nranges)->beg = (wchar_t) towupper(wc);
                          tmp___54 = work_mbc->nranges;
                          work_mbc->nranges++;
                          (work_mbc->ranges + tmp___54)->end = (wchar_t) towupper(wc2);
                        }
                      }

                    }

                  }

                }

              }

            }
            else
            {
              {
                tmp___60 = using_simple_locale();
              }
              if (tmp___60)
              {
                c1 = c;
                {
                  while (1)
                  {
                    while_continue___12:
                    ;

                    if (! (c1 <= c2))
                    {
                      goto while_break___12;
                    }

                    {
                      setbit((unsigned int) c1, ccl);
                      c1++;
                    }
                  }

                  while_break___29:
                  ;

                }
                while_break___12:
                ;

                if (case_fold)
                {
                  {
                    tmp___57 = toupper(c);
                    uc = tmp___57;
                    tmp___58 = toupper(c2);
                    uc2 = tmp___58;
                    c1 = 0;
                  }
                  {
                    while (1)
                    {
                      while_continue___13:
                      ;

                      if (! (c1 < 256))
                      {
                        goto while_break___13;
                      }

                      {
                        tmp___59 = toupper(c1);
                        uc1 = tmp___59;
                      }
                      if (uc <= uc1)
                      {
                        if (uc1 <= uc2)
                        {
                          {
                            setbit((unsigned int) c1, ccl);
                          }
                        }

                      }

                      c1++;
                    }

                    while_break___30:
                    ;

                  }
                  while_break___13:
                  ;

                }

              }
              else
              {
                known_bracket_exp = (_Bool) 0;
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
                    tmp___62 = gettext("unbalanced [");
                  }
                  if (((unsigned long) tmp___62) != ((unsigned long) ((char *) 0)))
                  {
                    {
                      tmp___61 = gettext("unbalanced [");
                      dfaerror((const char *) tmp___61);
                    }
                  }
                  else
                  {
                    lasttok = (token) (- 1);
                    return lasttok;
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
                  else
                  {
                    c1 = - 1;
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

          lexptr -= cur_mb_len;
          lexleft += (size_t) cur_mb_len;
        }

        if (c == 58)
        {
          tmp___65 = 2;
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
            {
              setbit_case_fold_c(c, ccl);
            }
          }
          else
          {
            {
              setbit((unsigned int) c, ccl);
            }
          }

          goto __Cont;
        }

        if (wc == 4294967295U)
        {
          known_bracket_exp = (_Bool) 0;
        }
        else
        {
          if (case_fold)
          {
            {
              tmp___66 = case_folded_counterparts((wchar_t) wc, folded + 1);
              tmp___67 = tmp___66 + 1;
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
                  work_mbc->chars = (wchar_t *) maybe_realloc((void *) work_mbc->chars, work_mbc->nchars, & chars_al, sizeof(* work_mbc->chars));
                  tmp___68 = work_mbc->nchars;
                  work_mbc->nchars++;
                  * (work_mbc->chars + tmp___68) = folded[i];
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
        tmp___70 = gettext("character class syntax is [[:space:]], not [:space:]");
        dfawarn((const char *) tmp___70);
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
      if (! (! dfa___0->multibyte))
      {
        {
          __assert_fail("!dfa->multibyte", "/home/khheo/project/benchmark/grep-2.19/src/dfa.c", 1232U, "parse_bracket_exp");
        }
      }

      {
        notset(ccl);
      }
      if (syntax_bits & ((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
      {
        {
          clrbit((unsigned int) eolbyte___0, ccl);
        }
      }

    }

    {
      tmp___74 = charclass_index((charclass_word *) ccl);
    }
    return (token) (275UL + tmp___74);
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
          goto while_break;
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
              else
              {
                c = - 1;
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
          goto case_49;
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
          goto case_49;
        }

        if (c == 53)
        {
          goto case_49;
        }

        if (c == 54)
        {
          goto case_49;
        }

        if (c == 55)
        {
          goto case_49;
        }

        if (c == 56)
        {
          goto case_49;
        }

        if (c == 57)
        {
          goto case_49;
        }

        if (c == 96)
        {
          goto case_96;
        }

        if (c == 39)
        {
          goto case_39;
        }

        if (c == 60)
        {
          goto case_60;
        }

        if (c == 62)
        {
          goto case_62;
        }

        if (c == 98)
        {
          goto case_98;
        }

        if (c == 66)
        {
          goto case_66;
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
          goto case_123;
        }

        if (c == 124)
        {
          goto case_124;
        }

        if (c == 10)
        {
          goto case_10;
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
          goto case_119;
        }

        if (c == 87)
        {
          goto case_119;
        }

        if (c == 91)
        {
          goto case_91;
        }

        goto normal_char;
        case_92:
        if (backslash)
        {
          goto normal_char;
        }


        if (lexleft == 0UL)
        {
          {
            tmp___1 = gettext("unfinished \\ escape");
            dfaerror((const char *) tmp___1);
          }
        }

        backslash = (_Bool) 1;
        goto switch_break;
        case_94:
        if (backslash)
        {
          goto normal_char;
        }


        if (syntax_bits & (((1UL << 1) << 1) << 1))
        {
          lasttok = (token) 258;
          return lasttok;
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
          lasttok = (token) 258;
          return lasttok;
        }




        goto normal_char;
        case_36:
        if (backslash)
        {
          goto normal_char;
        }


        if (syntax_bits & (((1UL << 1) << 1) << 1))
        {
          lasttok = (token) 259;
          return lasttok;
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
              if (((const int) (* lexptr)) == 41)
              {
                tmp___2 = 1;
              }
              else
              {
                tmp___2 = 0;
              }

            }
            else
            {
              tmp___2 = 0;
            }

            tmp___4 = tmp___2;
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
                else
                {
                  tmp___3 = 0;
                }

              }
              else
              {
                tmp___3 = 0;
              }

            }
            else
            {
              tmp___3 = 0;
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
              if (lexleft > 0UL)
              {
                if (((const int) (* lexptr)) == 124)
                {
                  tmp___5 = 1;
                }
                else
                {
                  tmp___5 = 0;
                }

              }
              else
              {
                tmp___5 = 0;
              }

              tmp___7 = tmp___5;
            }
            else
            {
              if (lexleft > 1UL)
              {
                if (((const int) (* (lexptr + 0))) == 92)
                {
                  if (((const int) (* (lexptr + 1))) == 124)
                  {
                    tmp___6 = 1;
                  }
                  else
                  {
                    tmp___6 = 0;
                  }

                }
                else
                {
                  tmp___6 = 0;
                }

              }
              else
              {
                tmp___6 = 0;
              }

              tmp___7 = tmp___6;
            }

            if (tmp___7)
            {
              lasttok = (token) 259;
              return lasttok;
            }
            else
              if (syntax_bits & (((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
            {
              if (lexleft > 0UL)
              {
                if (((const int) (* lexptr)) == 10)
                {
                  lasttok = (token) 259;
                  return lasttok;
                }

              }

            }


          }

        }


        goto normal_char;
        case_49:
        if (backslash)
        {
          if (! (syntax_bits & ((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
          {
            laststart = (_Bool) 0;
            lasttok = (token) 257;
            return lasttok;
          }

        }


        goto normal_char;
        case_96:
        if (backslash)
        {
          if (! (syntax_bits & (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
          {
            lasttok = (token) 258;
            return lasttok;
          }

        }


        goto normal_char;
        case_39:
        if (backslash)
        {
          if (! (syntax_bits & (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
          {
            lasttok = (token) 259;
            return lasttok;
          }

        }


        goto normal_char;
        case_60:
        if (backslash)
        {
          if (! (syntax_bits & (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
          {
            lasttok = (token) 260;
            return lasttok;
          }

        }


        goto normal_char;
        case_62:
        if (backslash)
        {
          if (! (syntax_bits & (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
          {
            lasttok = (token) 261;
            return lasttok;
          }

        }


        goto normal_char;
        case_98:
        if (backslash)
        {
          if (! (syntax_bits & (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
          {
            lasttok = (token) 262;
            return lasttok;
          }

        }


        goto normal_char;
        case_66:
        if (backslash)
        {
          if (! (syntax_bits & (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
          {
            lasttok = (token) 263;
            return lasttok;
          }

        }


        goto normal_char;
        case_63:
        if (syntax_bits & ((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
        {
          goto normal_char;
        }


        if (((int) backslash) != ((syntax_bits & (1UL << 1)) != 0UL))
        {
          goto normal_char;
        }

        if (! (syntax_bits & ((((1UL << 1) << 1) << 1) << 1)))
        {
          if (laststart)
          {
            goto normal_char;
          }

        }

        lasttok = (token) 264;
        return lasttok;
        case_42:
        if (backslash)
        {
          goto normal_char;
        }


        if (! (syntax_bits & ((((1UL << 1) << 1) << 1) << 1)))
        {
          if (laststart)
          {
            goto normal_char;
          }

        }

        lasttok = (token) 265;
        return lasttok;
        case_43:
        if (syntax_bits & ((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
        {
          goto normal_char;
        }


        if (((int) backslash) != ((syntax_bits & (1UL << 1)) != 0UL))
        {
          goto normal_char;
        }

        if (! (syntax_bits & ((((1UL << 1) << 1) << 1) << 1)))
        {
          if (laststart)
          {
            goto normal_char;
          }

        }

        lasttok = (token) 266;
        return lasttok;
        case_123:
        if (! (syntax_bits & (((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
        {
          goto normal_char;
        }


        if (((int) backslash) != ((syntax_bits & ((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) == 0UL))
        {
          goto normal_char;
        }

        if (! (syntax_bits & ((((1UL << 1) << 1) << 1) << 1)))
        {
          if (laststart)
          {
            goto normal_char;
          }

        }

        p = lexptr;
        lim = p + lexleft;
        maxrep = - 1;
        minrep = maxrep;
        {
          while (1)
          {
            while_continue___1:
            ;

            if (((unsigned long) p) != ((unsigned long) lim))
            {
              if (! ((((unsigned int) (* p)) - 48U) <= 9U))
              {
                goto while_break___1;
              }

            }
            else
            {
              goto while_break___1;
            }

            if (minrep < 0)
            {
              minrep = (int) (((const int) (* p)) - 48);
            }
            else
              if (32768 < (((minrep * 10) + ((int) (* p))) - 48))
            {
              minrep = 32768;
            }
            else
            {
              minrep = ((minrep * 10) + ((int) (* p))) - 48;
            }


            p++;
          }

          while_break___8:
          ;

        }
        while_break___1:
        ;

        if (((unsigned long) p) != ((unsigned long) lim))
        {
          if (((const int) (* p)) != 44)
          {
            maxrep = minrep;
          }
          else
          {
            if (minrep < 0)
            {
              minrep = 0;
            }

            {
              while (1)
              {
                while_continue___2:
                ;

                p++;
                if (((unsigned long) p) != ((unsigned long) lim))
                {
                  if (! ((((unsigned int) (* p)) - 48U) <= 9U))
                  {
                    goto while_break___2;
                  }

                }
                else
                {
                  goto while_break___2;
                }

                if (maxrep < 0)
                {
                  maxrep = (int) (((const int) (* p)) - 48);
                }
                else
                  if (32768 < (((maxrep * 10) + ((int) (* p))) - 48))
                {
                  maxrep = 32768;
                }
                else
                {
                  maxrep = ((maxrep * 10) + ((int) (* p))) - 48;
                }


              }

              while_break___9:
              ;

            }
            while_break___2:
            ;

          }

        }

        if (! backslash)
        {
          goto _L___3;
        }
        else
          if (((unsigned long) p) != ((unsigned long) lim))
        {
          tmp___9 = p;
          p++;
          if (((const int) (* tmp___9)) == 92)
          {
            _L___3:
            if (((unsigned long) p) != ((unsigned long) lim))
            {
              tmp___10 = p;
              p++;
              if (((const int) (* tmp___10)) == 125)
              {
                if (0 <= minrep)
                {
                  if (! (maxrep < 0))
                  {
                    if (! (minrep <= maxrep))
                    {
                      goto _L___4;
                    }

                  }

                }
                else
                {
                  goto _L___4;
                }

              }
              else
              {
                goto _L___4;
              }

            }
            else
            {
              goto _L___4;
            }


          }
          else
          {
            goto _L___4;
          }

        }
        else
        {
          _L___4:
          if (syntax_bits & (((((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
          {
            goto normal_char;
          }


          {
            tmp___8 = gettext("Invalid content of \\{\\}");
            dfaerror((const char *) tmp___8);
          }
        }


        if (32767 < maxrep)
        {
          {
            tmp___11 = gettext("Regular expression too big");
            dfaerror((const char *) tmp___11);
          }
        }

        lexptr = p;
        lexleft = (size_t) (lim - p);
        laststart = (_Bool) 0;
        lasttok = (token) 267;
        return lasttok;
        case_124:
        if (syntax_bits & ((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
        {
          goto normal_char;
        }


        if (((int) backslash) != ((syntax_bits & (((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) == 0UL))
        {
          goto normal_char;
        }

        laststart = (_Bool) 1;
        lasttok = (token) 269;
        return lasttok;
        case_10:
        if (syntax_bits & ((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
        {
          goto normal_char;
        }
        else
          if (backslash)
        {
          goto normal_char;
        }
        else
          if (! (syntax_bits & (((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
        {
          goto normal_char;
        }




        laststart = (_Bool) 1;
        lasttok = (token) 269;
        return lasttok;
        case_40:
        if (((int) backslash) != ((syntax_bits & (((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) == 0UL))
        {
          goto normal_char;
        }


        parens++;
        laststart = (_Bool) 1;
        lasttok = (token) 270;
        return lasttok;
        case_41:
        if (((int) backslash) != ((syntax_bits & (((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) == 0UL))
        {
          goto normal_char;
        }


        if (parens == 0UL)
        {
          if (syntax_bits & (((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
          {
            goto normal_char;
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
          zeroset(ccl);
          notset(ccl);
        }
        if (! (syntax_bits & ((((((1UL << 1) << 1) << 1) << 1) << 1) << 1)))
        {
          {
            clrbit((unsigned int) eolbyte___0, ccl);
          }
        }

        if (syntax_bits & (((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1))
        {
          {
            clrbit((unsigned int) '\000', ccl);
          }
        }

        {
          laststart = (_Bool) 0;
          tmp___12 = charclass_index((charclass_word *) ccl);
          lasttok = (token) (275UL + tmp___12);
        }
        return lasttok;
        case_115:
        if (! backslash)
        {
          goto normal_char;
        }
        else
          if (syntax_bits & (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
        {
          goto normal_char;
        }



        if (! dfa___0->multibyte)
        {
          {
            zeroset(ccl);
            c2 = 0;
          }
          {
            while (1)
            {
              while_continue___3:
              ;

              if (! (c2 < 256))
              {
                goto while_break___3;
              }

              {
                tmp___13 = __ctype_b_loc();
              }
              if (((const int) (* ((* tmp___13) + c2))) & 8192)
              {
                {
                  setbit((unsigned int) c2, ccl);
                }
              }

              c2++;
            }

            while_break___10:
            ;

          }
          while_break___3:
          ;

          if (c == 83)
          {
            {
              notset(ccl);
            }
          }

          {
            laststart = (_Bool) 0;
            tmp___14 = charclass_index((charclass_word *) ccl);
            lasttok = (token) (275UL + tmp___14);
          }
          return lasttok;
        }

        {
          while (1)
          {
            while_continue___4:
            ;

            lexptr_saved = lexptr;
            lexleft_saved = lexleft;
            if (c == 115)
            {
              lexptr = "[:space:]]";
            }
            else
            {
              lexptr = "^[:space:]]";
            }

            {
              lexleft = strlen(lexptr);
              lasttok = parse_bracket_exp();
              lexptr = lexptr_saved;
              lexleft = lexleft_saved;
            }
            goto while_break___4;
          }

          while_break___11:
          ;

        }
        while_break___4:
        laststart = (_Bool) 0;

        return lasttok;
        case_119:
        if (! backslash)
        {
          goto normal_char;
        }
        else
          if (syntax_bits & (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
        {
          goto normal_char;
        }



        {
          zeroset(ccl);
          c2 = 0;
        }
        {
          while (1)
          {
            while_continue___5:
            ;

            if (! (c2 < 256))
            {
              goto while_break___5;
            }

            {
              tmp___15 = __ctype_b_loc();
            }
            if (((const int) (* ((* tmp___15) + c2))) & 8)
            {
              {
                setbit((unsigned int) c2, ccl);
              }
            }
            else
              if (c2 == 95)
            {
              {
                setbit((unsigned int) c2, ccl);
              }
            }


            c2++;
          }

          while_break___12:
          ;

        }
        while_break___5:
        ;

        if (c == 87)
        {
          {
            notset(ccl);
          }
        }

        {
          laststart = (_Bool) 0;
          tmp___16 = charclass_index((charclass_word *) ccl);
          lasttok = (token) (275UL + tmp___16);
        }
        return lasttok;
        case_91:
        if (backslash)
        {
          goto normal_char;
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
          {
            tmp___18 = __ctype_b_loc();
          }
          if (((const int) (* ((* tmp___18) + c))) & 1024)
          {
            {
              zeroset(ccl);
              setbit_case_fold_c(c, ccl);
              tmp___17 = charclass_index((charclass_word *) ccl);
              lasttok = (token) (275UL + tmp___17);
            }
            return lasttok;
          }

        }

        lasttok = (token) c;
        return lasttok;
        switch_break:
        i++;

      }

      while_break___6:
      ;

    }
    while_break:
    {
      abort();
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
      goto case_256;
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
                addtok_wc((wint_t) (* (work_mbc->chars + i)));
              }
              if (need_or)
              {
                {
                  addtok((token) 269);
                }
              }

              need_or = (_Bool) 1;
              i++;
            }

            while_break___0:
            ;

          }
          while_break:
          work_mbc->nchars = (size_t) 0;

        }

        if (work_mbc->invert)
        {
          goto _L;
        }
        else
          if (work_mbc->nch_classes != 0UL)
        {
          goto _L;
        }
        else
          if (work_mbc->nranges != 0UL)
        {
          goto _L;
        }
        else
          if (work_mbc->nequivs != 0UL)
        {
          goto _L;
        }
        else
          if (work_mbc->ncoll_elems != 0UL)
        {
          _L:
          {
            addtok_mb((token) 273, (int) (((dfa___0->nmbcsets - 1UL) << 2) + 3UL));
          }

          if (need_or)
          {
            {
              addtok((token) 269);
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
              addtok((token) 269);
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
    else
    {
      {
        addtok_mb(t, 3);
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
    else
    {
      cur_mb_len = 1;
      buf[0] = (unsigned char) 0;
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
        else
        {
          tmp___1 = 0;
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
                clrbit((unsigned int) '\000', c);
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
        ;

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
          addtok((token) 257);
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
      else
      {
        goto _L___0;
      }

    }
    else
      _L___0:
    if (tok >= 0L)
    {
      if (tok < 256L)
      {
        {
          addtok(tok);
          tok = lex();
        }
      }
      else
      {
        goto _L;
      }

    }
    else
      _L:
    if (tok >= 275L)
    {
      {
        addtok(tok);
        tok = lex();
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
        addtok(tok);
        tok = lex();
      }
    }
    else
      if (tok == 272L)
    {
      {
        addtok(tok);
        tok = lex();
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
        addtok(tok);
        tok = lex();
      }
    }
    else
      if (tok == 262L)
    {
      {
        addtok(tok);
        tok = lex();
      }
    }
    else
      if (tok == 263L)
    {
      {
        addtok(tok);
        tok = lex();
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
          tmp___0 = gettext("unbalanced (");
          dfaerror((const char *) tmp___0);
        }
      }

      {
        tok = lex();
      }
    }
    else
    {
      {
        addtok((token) 256);
      }
    }
# 22260 "temp/grep-2.19.c"
    return;
  }
}

static size_t nsubtoks(size_t tindex)
{
  size_t ntoks1;
  size_t tmp;
  size_t tmp___0;
  {
    if ((* (dfa___0->tokens + (tindex - 1UL))) == 264L)
    {
      goto case_264;
    }

    if ((* (dfa___0->tokens + (tindex - 1UL))) == 265L)
    {
      goto case_264;
    }

    if ((* (dfa___0->tokens + (tindex - 1UL))) == 266L)
    {
      goto case_264;
    }

    if ((* (dfa___0->tokens + (tindex - 1UL))) == 268L)
    {
      goto case_268;
    }

    if ((* (dfa___0->tokens + (tindex - 1UL))) == 269L)
    {
      goto case_268;
    }

    goto switch_default;
    switch_default:
    return (size_t) 1;

    case_264:
    {
      tmp = nsubtoks(tindex - 1UL);
    }

    return ((size_t) 1) + tmp;
    case_268:
    {
      ntoks1 = (size_t) nsubtoks(tindex - 1UL);
      tmp___0 = nsubtoks((tindex - 1UL) - ntoks1);
    }

    return (size_t) ((1UL + ntoks1) + ((size_t) tmp___0));
    return (unsigned long) 0;
  }
}

static void copytoks(size_t tindex, size_t ntokens)
{
  size_t i;
  {
    if (dfa___0->multibyte)
    {
      i = (size_t) 0;
      {
        while (1)
        {
          while_continue:
          ;

          if (! (i < ntokens))
          {
            goto while_break;
          }

          {
            addtok_mb(* (dfa___0->tokens + (tindex + i)), * (dfa___0->multibyte_prop + (tindex + i)));
            i++;
          }
        }

        while_break___1:
        ;

      }
      while_break:
      ;

    }
    else
    {
      i = (size_t) 0;
      {
        while (1)
        {
          while_continue___0:
          ;

          if (! (i < ntokens))
          {
            goto while_break___0;
          }

          {
            addtok_mb(* (dfa___0->tokens + (tindex + i)), 3);
            i++;
          }
        }

        while_break___2:
        ;

      }
      while_break___0:
      ;

    }

    return;
  }
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
            goto _L___0;
          }
          else
            if (maxrep)
          {
            _L___0:
            {
              ntokens = (size_t) nsubtoks(dfa___0->tindex);
              tindex = dfa___0->tindex - ntokens;
            }

            if (maxrep < 0)
            {
              {
                addtok((token) 266);
              }
            }

            if (minrep == 0)
            {
              {
                addtok((token) 264);
              }
            }

            i = 1;
            {
              while (1)
              {
                while_continue___0:
                ;

                if (! (i < minrep))
                {
                  goto while_break___0;
                }

                {
                  copytoks(tindex, ntokens);
                  addtok((token) 268);
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

                if (! (i < maxrep))
                {
                  goto while_break___1;
                }

                {
                  copytoks(tindex, ntokens);
                  addtok((token) 264);
                  addtok((token) 268);
                  i++;
                }
              }

              while_break___4:
              ;

            }
            while_break___1:
            {
              tok = lex();
            }

          }
          else
          {
            goto _L;
          }


        }
        else
          _L:
        if (tok == 267L)
        {
          {
            tmp = nsubtoks(dfa___0->tindex);
            dfa___0->tindex -= (size_t) tmp;
            tok = lex();
            closure();
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
        tmp = gettext("no syntax specified");
        dfaerror((const char *) tmp);
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
        tmp___0 = gettext("unbalanced )");
        dfaerror((const char *) tmp___0);
      }
    }

    {
      addtok((token) (0xffffffffffffffffUL - d->nregexps));
      addtok((token) 268);
    }
    if (d->nregexps)
    {
      {
        addtok((token) 269);
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

        * (s->elems + i) = * (s->elems + (i - 1UL));
        i--;
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
        free((void *) m->elems);
        m->elems = (position *) maybe_realloc((void *) 0, (size_t) (s1->nelem + s2->nelem), & m->alloc, sizeof(* m->elems));
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
          goto while_break;
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
        ;

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
          goto __Cont;
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
              goto while_break___1;
            }
            else
              if ((s->elems + j)->index != ((d->states + i)->elems.elems + j)->index)
            {
              goto while_break___1;
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
        i++;

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
                    i--;
                    goto __Cont;
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
                    goto case_260;
                  }

                  if ((* (d->tokens + old.index)) == 261L)
                  {
                    goto case_261;
                  }

                  if ((* (d->tokens + old.index)) == 262L)
                  {
                    goto case_262;
                  }

                  if ((* (d->tokens + old.index)) == 263L)
                  {
                    goto case_263;
                  }

                  goto switch_default;
                  case_258:
                  p.constraint &= 1092U;

                  goto switch_break;
                  case_259:
                  p.constraint &= 1792U;

                  goto switch_break;
                  case_260:
                  p.constraint &= 80U;

                  goto switch_break;
                  case_261:
                  p.constraint &= 514U;

                  goto switch_break;
                  case_262:
                  p.constraint &= 594U;

                  goto switch_break;
                  case_263:
                  p.constraint &= 1317U;

                  goto switch_break;
                  switch_default:
                  goto switch_break;

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
          separate_contexts |= 2;
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
          goto case_256;
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
        stk->nullable = (_Bool) 1;

        tmp___3 = (size_t) 0;
        stk->nlastpos = tmp___3;
        stk->nfirstpos = tmp___3;
        stk++;
        goto switch_break;
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
            copy((const position_set *) (d->follows + i), & merged);
            epsclosure(& merged, (const struct dfa *) d, visited);
            copy((const position_set *) (& merged), d->follows + i);
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
        else
          _L___0:
        if ((* (d->tokens + pos.index)) >= 275L)
        {
          {
            copyset((charclass_word *) (* (d->charclasses + ((* (d->tokens + pos.index)) - 275L))), matches);
          }
        }
        else
        {
          if ((* (d->tokens + pos.index)) == 273L)
          {
            goto _L;
          }
          else
            if ((* (d->tokens + pos.index)) == 272L)
          {
            _L:
            if ((* (d->tokens + pos.index)) == 273L)
            {
              (d->states + s)->has_mbcset = (_Bool) 1;
            }


            if ((d->states + s)->mbps.nelem == 0UL)
            {
              {
                alloc_position_set(& (d->states + s)->mbps, (size_t) 1);
              }
            }

            {
              insert(pos, & (d->states + s)->mbps);
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
          state_letter = state_index(d, (const position_set *) (& follows), 2);
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
      i = (size_t) 0;
      {
        while (1)
        {
          while_continue___8:
          ;

          if (! (i < 256UL))
          {
            goto while_break___8;
          }

          * (trans___0 + i) = (ptrdiff_t) (- 1);
          i++;
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
          next_isnt_1st_byte = (_Bool) 0;
          j = (size_t) 0;
          {
            while (1)
            {
              while_continue___12:
              ;

              if (! (j < follows.nelem))
              {
                goto while_break___12;
              }

              if (! ((* (d->multibyte_prop + (follows.elems + j)->index)) & 1))
              {
                next_isnt_1st_byte = (_Bool) 1;
                goto while_break___12;
              }

              j++;
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
            {
              merge((const position_set *) (& (d->states + 0)->elems), (const position_set *) (& follows), & tmp);
              copy((const position_set *) (& tmp), & follows);
            }
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
        else
        {
          state = (state_num) (- 1);
        }

        if ((separate_contexts & possible_contexts) & 4)
        {
          {
            state_newline = state_index(d, (const position_set *) (& follows), 4);
          }
        }
        else
        {
          state_newline = state;
        }

        if ((separate_contexts & possible_contexts) & 2)
        {
          {
            state_letter = state_index(d, (const position_set *) (& follows), 2);
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
      i = (state_num) 0;
      {
        while (1)
        {
          while_continue:
          ;

          if (! (i < d->tralloc))
          {
            goto while_break;
          }

          {
            free((void *) (* (d->trans + i)));
            free((void *) (* (d->fails + i)));
            tmp = (state_num *) ((void *) 0);
            * (d->fails + i) = tmp;
            * (d->trans + i) = tmp;
            i++;
          }
        }

        while_break___1:
        ;

      }
      while_break:
      d->trcount = 0;

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
  state_num *t;
  state_num works;
  status_transit_state rval;
  {
    works = s;
    rval = (status_transit_state) 0;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (((unsigned int) rval) == 0U))
        {
          goto while_break;
        }

        t = * (d->trans + works);
        if (((unsigned long) t) != ((unsigned long) ((void *) 0)))
        {
          works = * (t + ((const int) (* p)));
          rval = (status_transit_state) 1;
          if (works < 0L)
          {
            works = (state_num) 0;
          }

        }
        else
          if (works < 0L)
        {
          works = (state_num) 0;
        }
        else
          if (* (d->fails + works))
        {
          works = * ((* (d->fails + works)) + ((const int) (* p)));
          rval = (status_transit_state) 1;
        }
        else
        {
          {
            build_state(works, d);
          }
        }



      }

      while_break___0:
      ;

    }
    while_break:
    * next_state = works;

    return rval;
  }
}

static int match_anychar(struct dfa *d, state_num s, position pos, wint_t wc, size_t mbclen)
{
  int context;
  unsigned int tmp;
  unsigned int tmp___0;
  unsigned int tmp___1;
  {
    if (wc == ((wint_t) ((wchar_t) eolbyte___0)))
    {
      if (! (syntax_bits & ((((((1UL << 1) << 1) << 1) << 1) << 1) << 1)))
      {
        return 0;
      }

    }
    else
      if (wc == 0U)
    {
      if (syntax_bits & (((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1))
      {
        return 0;
      }

    }
    else
      if (wc == 4294967295U)
    {
      return 0;
    }



    {
      context = wchar_context(wc);
    }
    if (context & 1)
    {
      tmp = pos.constraint & 15U;
    }
    else
    {
      tmp = 0U;
    }

    if (context & 2)
    {
      tmp___0 = (pos.constraint >> 4) & 15U;
    }
    else
    {
      tmp___0 = 0U;
    }

    if (context & 4)
    {
      tmp___1 = (pos.constraint >> 8) & 15U;
    }
    else
    {
      tmp___1 = 0U;
    }

    if (! (((tmp | tmp___0) | tmp___1) & ((unsigned int) (d->states + s)->context)))
    {
      return 0;
    }

    return (int) mbclen;
  }
}

static int match_mb_charset(struct dfa *d, state_num s, position pos, const char *p, wint_t wc, size_t match_len)
{
  size_t i;
  _Bool match;
  int op_len;
  char buffer___0[128];
  struct mb_char_classes *work_mbc;
  int context;
  unsigned int tmp;
  unsigned int tmp___0;
  unsigned int tmp___1;
  unsigned char tmp___2;
  _Bool tmp___3;
  int tmp___4;
  int tmp___5;
  int tmp___6;
  size_t tmp___7;
  void *__cil_tmp25;
  {
    if (wc == ((wint_t) ((wchar_t) eolbyte___0)))
    {
      if (! (syntax_bits & ((((((1UL << 1) << 1) << 1) << 1) << 1) << 1)))
      {
        return 0;
      }

    }
    else
      if (wc == 0U)
    {
      if (syntax_bits & (((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1))
      {
        return 0;
      }

    }
    else
      if (wc == 4294967295U)
    {
      return 0;
    }



    {
      context = wchar_context(wc);
    }
    if (context & 1)
    {
      tmp = pos.constraint & 15U;
    }
    else
    {
      tmp = 0U;
    }

    if (context & 2)
    {
      tmp___0 = (pos.constraint >> 4) & 15U;
    }
    else
    {
      tmp___0 = 0U;
    }

    if (context & 4)
    {
      tmp___1 = (pos.constraint >> 8) & 15U;
    }
    else
    {
      tmp___1 = 0U;
    }

    if (! (((tmp | tmp___0) | tmp___1) & ((unsigned int) (d->states + s)->context)))
    {
      return 0;
    }

    work_mbc = d->mbcsets + ((* (d->multibyte_prop + pos.index)) >> 2);
    match = (_Bool) (! work_mbc->invert);
    if (wc < 256U)
    {
      if (work_mbc->cset != (- 1L))
      {
        {
          tmp___2 = to_uchar___0((char) wc);
          tmp___3 = tstbit((unsigned int) tmp___2, (charclass_word *) (* (d->charclasses + work_mbc->cset)));
        }
        if (tmp___3)
        {
          goto charset_matched;
        }

      }

    }

    i = (size_t) 0;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (i < work_mbc->nch_classes))
        {
          goto while_break;
        }

        {
          tmp___4 = iswctype(wc, * (work_mbc->ch_classes + i));
        }
        if (tmp___4)
        {
          goto charset_matched;
        }

        i++;
      }

      while_break___4:
      ;

    }
    while_break:
    {
      strncpy((char *) buffer___0, (const char *) p, match_len);
      buffer___0[match_len] = (char) '\000';
      i = (size_t) 0;
    }

    {
      while (1)
      {
        while_continue___0:
        ;

        if (! (i < work_mbc->nequivs))
        {
          goto while_break___0;
        }

        {
          op_len = (int) strlen((const char *) (* (work_mbc->equivs + i)));
          strncpy((char *) buffer___0, (const char *) p, (size_t) op_len);
          buffer___0[op_len] = (char) '\000';
          tmp___5 = strcoll((const char *) (* (work_mbc->equivs + i)), (const char *) buffer___0);
        }
        if (tmp___5 == 0)
        {
          match_len = (size_t) op_len;
          goto charset_matched;
        }

        i++;
      }

      while_break___5:
      ;

    }
    while_break___0:
    i = (size_t) 0;

    {
      while (1)
      {
        while_continue___1:
        ;

        if (! (i < work_mbc->ncoll_elems))
        {
          goto while_break___1;
        }

        {
          op_len = (int) strlen((const char *) (* (work_mbc->coll_elems + i)));
          strncpy((char *) buffer___0, (const char *) p, (size_t) op_len);
          buffer___0[op_len] = (char) '\000';
          tmp___6 = strcoll((const char *) (* (work_mbc->coll_elems + i)), (const char *) buffer___0);
        }
        if (tmp___6 == 0)
        {
          match_len = (size_t) op_len;
          goto charset_matched;
        }

        i++;
      }

      while_break___6:
      ;

    }
    while_break___1:
    i = (size_t) 0;

    {
      while (1)
      {
        while_continue___2:
        ;

        if (! (i < work_mbc->nranges))
        {
          goto while_break___2;
        }

        if (((wint_t) (work_mbc->ranges + i)->beg) <= wc)
        {
          if (wc <= ((wint_t) (work_mbc->ranges + i)->end))
          {
            goto charset_matched;
          }

        }

        i++;
      }

      while_break___7:
      ;

    }
    while_break___2:
    i = (size_t) 0;

    {
      while (1)
      {
        while_continue___3:
        ;

        if (! (i < work_mbc->nchars))
        {
          goto while_break___3;
        }

        if (wc == ((wint_t) (* (work_mbc->chars + i))))
        {
          goto charset_matched;
        }

        i++;
      }

      while_break___8:
      ;

    }
    while_break___3:
    match = (_Bool) (! match);

    charset_matched:
    if (match)
    {
      tmp___7 = match_len;
    }
    else
    {
      tmp___7 = (size_t) 0;
    }


    return (int) tmp___7;
  }
}

static int *check_matching_with_multibyte_ops(struct dfa *d, state_num s, const char *p, wint_t wc, size_t mbclen)
{
  size_t i;
  int *rarray;
  position pos;
  {
    rarray = d->mb_match_lens;
    i = (size_t) 0;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (i < (d->states + s)->mbps.nelem))
        {
          goto while_break;
        }

        pos = * ((d->states + s)->mbps.elems + i);
        if ((* (d->tokens + pos.index)) == 272L)
        {
          goto case_272;
        }

        if ((* (d->tokens + pos.index)) == 273L)
        {
          goto case_273;
        }

        goto switch_default;
        case_272:
        {
          * (rarray + i) = match_anychar(d, s, pos, wc, mbclen);
        }

        goto switch_break;
        case_273:
        {
          * (rarray + i) = match_mb_charset(d, s, pos, p, wc, mbclen);
        }

        goto switch_break;
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

    return rarray;
  }
}

static status_transit_state transit_state_consume_1char(struct dfa *d, state_num s, const unsigned char **pp, wint_t wc, size_t mbclen, int *match_lens)
{
  size_t i;
  size_t j;
  int k;
  state_num s1;
  state_num s2;
  status_transit_state rs;
  const unsigned char *tmp;
  {
    rs = (status_transit_state) 1;
    if (! match_lens)
    {
      if ((d->states + s)->mbps.nelem != 0UL)
      {
        {
          match_lens = check_matching_with_multibyte_ops(d, s, (const char *) (* pp), wc, mbclen);
        }
      }

    }

    s1 = s;
    k = 0;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (((size_t) k) < mbclen))
        {
          goto while_break;
        }

        {
          s2 = s1;
          tmp = * pp;
          (* pp)++;
          rs = transit_state_singlebyte(d, s2, tmp, & s1);
          k++;
        }
      }

      while_break___2:
      ;

    }
    while_break:
    {
      copy((const position_set *) (& (d->states + s1)->elems), & d->mb_follows);
      i = (size_t) 0;
    }

    {
      while (1)
      {
        while_continue___0:
        ;

        if (! (i < (d->states + s)->mbps.nelem))
        {
          goto while_break___0;
        }

        if (((size_t) (* (match_lens + i))) == mbclen)
        {
          j = (size_t) 0;
          {
            while (1)
            {
              while_continue___1:
              ;

              if (! (j < (d->follows + ((d->states + s)->mbps.elems + i)->index)->nelem))
              {
                goto while_break___1;
              }

              {
                insert(* ((d->follows + ((d->states + s)->mbps.elems + i)->index)->elems + j), & d->mb_follows);
                j++;
              }
            }

            while_break___4:
            ;

          }
          while_break___1:
          ;

        }

        i++;
      }

      while_break___3:
      ;

    }
    while_break___0:
    ;

    return rs;
  }
}

static state_num transit_state(struct dfa *d, state_num s, const unsigned char **pp, const unsigned char *end)
{
  state_num s1;
  int mbclen;
  int maxlen;
  size_t i;
  size_t j;
  int *match_lens;
  size_t nelem;
  const unsigned char *p1;
  wint_t wc;
  status_transit_state rs;
  int tmp;
  int tmp___0;
  {
    maxlen = 0;
    match_lens = (int *) ((void *) 0);
    nelem = (d->states + s)->mbps.nelem;
    p1 = * pp;
    if (nelem > 0UL)
    {
      {
        mbclen = (int) mbs_to_wchar(& wc, (const char *) (* pp), (size_t) (end - (* pp)), d);
        match_lens = check_matching_with_multibyte_ops(d, s, (const char *) (* pp), wc, (size_t) mbclen);
        i = (size_t) 0;
      }
      {
        while (1)
        {
          while_continue:
          ;

          if (! (i < nelem))
          {
            goto while_break;
          }

          if ((* (match_lens + i)) > maxlen)
          {
            maxlen = * (match_lens + i);
          }

          i++;
        }

        while_break___3:
        ;

      }
      while_break:
      ;

    }

    if (nelem == 0UL)
    {
      goto _L;
    }
    else
      if (maxlen == 0)
    {
      _L:
      {
        rs = transit_state_singlebyte(d, s, * pp, & s1);
      }

      if (((unsigned int) rs) == 1U)
      {
        (* pp)++;
      }

      return s1;
    }


    {
      d->mb_follows.nelem = (size_t) 0;
      transit_state_consume_1char(d, s, pp, wc, (size_t) mbclen, match_lens);
      tmp = wchar_context(wc);
      s1 = state_index(d, (const position_set *) (& d->mb_follows), tmp);
      realloc_trans_if_necessary(d, s1);
    }
    {
      while (1)
      {
        while_continue___0:
        ;

        if (! (((* pp) - p1) < ((long) maxlen)))
        {
          goto while_break___0;
        }

        {
          mbclen = (int) mbs_to_wchar(& wc, (const char *) (* pp), (size_t) (end - (* pp)), d);
          transit_state_consume_1char(d, s1, pp, wc, (size_t) mbclen, (int *) ((void *) 0));
          i = (size_t) 0;
        }
        {
          while (1)
          {
            while_continue___1:
            ;

            if (! (i < nelem))
            {
              goto while_break___1;
            }

            if (((long) (* (match_lens + i))) == ((* pp) - p1))
            {
              j = (size_t) 0;
              {
                while (1)
                {
                  while_continue___2:
                  ;

                  if (! (j < (d->follows + ((d->states + s1)->mbps.elems + i)->index)->nelem))
                  {
                    goto while_break___2;
                  }

                  {
                    insert(* ((d->follows + ((d->states + s1)->mbps.elems + i)->index)->elems + j), & d->mb_follows);
                    j++;
                  }
                }

                while_break___6:
                ;

              }
              while_break___2:
              ;

            }

            i++;
          }

          while_break___5:
          ;

        }
        while_break___1:
        {
          tmp___0 = wchar_context(wc);
          s1 = state_index(d, (const position_set *) (& d->mb_follows), tmp___0);
          realloc_trans_if_necessary(d, s1);
        }

      }

      while_break___4:
      ;

    }
    while_break___0:
    ;

    return s1;
  }
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
        memset((void *) (& d->mbs), 0, sizeof(d->mbs));
      }
      if (! d->mb_match_lens)
      {
        {
          d->mb_match_lens = (int *) xnmalloc(d->nleaves, sizeof(* d->mb_match_lens));
          alloc_position_set(& d->mb_follows, d->nleaves);
        }
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
              ;

              while_continue___0:
              t = * (trans___0 + s);

              if (! (((unsigned long) t) != ((unsigned long) ((void *) 0))))
              {
                goto while_break___0;
              }

              s1 = s;
              if (s == 0L)
              {
                {
                  while (1)
                  {
                    while_continue___2:
                    ;

                    if (! (((unsigned long) mbp) < ((unsigned long) p)))
                    {
                      goto while_break___1;
                    }

                    {
                      tmp = mbs_to_wchar(& wc, (const char *) mbp, (size_t) (end - ((char *) ((const char *) mbp))), d);
                      mbp += tmp;
                    }
                  }

                  while_break___4:
                  ;

                }
                while_break___1:
                p = mbp;

                if (((unsigned long) ((char *) p)) > ((unsigned long) end))
                {
                  p = (const unsigned char *) ((void *) 0);
                  goto done;
                }

              }

              if ((d->states + s)->mbps.nelem == 0UL)
              {
                tmp___0 = p;
                p++;
                s = * (t + ((const int) (* tmp___0)));
                goto while_continue___0;
              }

              if ((d->states + s)->has_mbcset)
              {
                if (backref)
                {
                  * backref = 1;
                  goto done;
                }

              }

              {
                s = transit_state(d, s, & p, (const unsigned char *) ((unsigned char *) end));
                mbp = p;
                trans___0 = d->trans;
              }
            }

            while_break___3:
            ;

          }
          while_break___0:
          ;

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
                s = transit_state(d, s, & p, (const unsigned char *) ((unsigned char *) end));
                mbp = p;
                trans___0 = d->trans;
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
            s = * (d->newlines + s1);
            goto __Cont;
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
              free((void *) (* (p->equivs + j)));
              j++;
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
              free((void *) (* (p->coll_elems + j)));
              j++;
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
      return;
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
          goto case_272;
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
        {
          abort();
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
          goto case_272;
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
          goto case_260;
        }

        if ((* (d->tokens + i)) == 261L)
        {
          goto case_260;
        }

        if ((* (d->tokens + i)) == 262L)
        {
          goto case_260;
        }

        if ((* (d->tokens + i)) == 263L)
        {
          goto case_260;
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
          i++;
        }
        else
          if ((* (d->tokens + (i + 1UL))) == 266L)
        {
          i++;
        }



        have_achar = (_Bool) 1;
        goto switch_break;
        case_260:
        if (d->multibyte)
        {
          tmp___3 = j;
          j++;
          * (sup->tokens + tmp___3) = (token) 256;
          * (d->tokens + i) = (token) 257;
          goto switch_break;
        }


        switch_default:
        tmp___4 = j;

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
        else
          _L:
        if ((* (d->tokens + i)) >= 275L)
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
      else
      {
        {
          dfafree(sup);
          free((void *) sup);
        }
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
        free_mbdata(d);
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
          free((void *) (d->states + i)->elems.elems);
          free((void *) (d->states + i)->mbps.elems);
          i++;
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
      i = (size_t) 0;
      {
        while (1)
        {
          while_continue___0:
          ;

          if (! (i < d->tindex))
          {
            goto while_break___0;
          }

          {
            free((void *) (d->follows + i)->elems);
            i++;
          }
        }

        while_break___4:
        ;

      }
      while_break___0:
      {
        free((void *) d->follows);
      }

    }

    if (d->trans)
    {
      i = (size_t) 0;
      {
        while (1)
        {
          while_continue___1:
          ;

          if (! (i < ((size_t) d->tralloc)))
          {
            goto while_break___1;
          }

          {
            free((void *) (* (d->trans + i)));
            free((void *) (* (d->fails + i)));
            i++;
          }
        }

        while_break___5:
        ;

      }
      while_break___1:
      {
        free((void *) (d->trans - 1));
        free((void *) d->fails);
        free((void *) d->newlines);
        free((void *) d->success);
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
          ndm = dm->next;
          free((void *) dm->must);
          free((void *) dm);
          dm = ndm;
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
        dfafree(d->superset);
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
                else
                {
                  goto while_break___1;
                }

                goto __Cont;
                __Cont:
                i++;

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
          goto while_break;
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
          goto case_270;
        }

        if (t == 271L)
        {
          goto case_270;
        }

        if (t == 256L)
        {
          goto case_256;
        }

        if (t == 260L)
        {
          goto case_256;
        }

        if (t == 261L)
        {
          goto case_256;
        }

        if (t == 262L)
        {
          goto case_256;
        }

        if (t == 263L)
        {
          goto case_256;
        }

        if (t == 257L)
        {
          goto case_256;
        }

        if (t == 272L)
        {
          goto case_256;
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
          goto case_0;
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
        {
          __assert_fail("!\"neither LPAREN nor RPAREN may appear here\"", "/home/khheo/project/benchmark/grep-2.19/src/dfa.c", 3951U, "dfamust");
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
          n = rn;
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

            i++;
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

            * (lmp->right + j) = * (lmp->right + ((ln - i) + j));
            j++;
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
            __assert_fail("!mp->prev", "/home/khheo/project/benchmark/grep-2.19/src/dfa.c", 4011U, "dfamust");
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
        goto done;

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
                goto while_break___4;
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
            goto switch_break;
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
                    {
                      tmp___8 = toupper(j___0);
                      tmp___9 = toupper((int) t);
                    }
                    if (! (tmp___8 == tmp___9))
                    {
                      goto while_break___5;
                    }

                  }
                  else
                  {
                    goto while_break___5;
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
              tmp___12 = toupper((int) t);
              tmp___11 = (char) tmp___12;
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
        tmp = __ctype_get_mb_cur_max();
      }
      if (tmp == 1UL)
      {
        i = 0;
        {
          while (1)
          {
            while_continue:
            ;

            if (! (i < 256))
            {
              goto while_break;
            }

            {
              trans[i] = (char) toupper(i);
              i++;
            }
          }

          while_break___0:
          ;

        }
        while_break:
        {
          * kwset___1 = kwsalloc((const char *) trans);
        }

      }
      else
      {
        {
          * kwset___1 = kwsalloc((const char *) ((void *) 0));
        }
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
        xalloc_die();
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
  size_t outlen;
  size_t mb_cur_max;
  mbstate_t is;
  mbstate_t os;
  const char *end;
  char *p;
  mb_len_map_t *m;
  _Bool lengths_differ;
  wchar_t wc;
  size_t mbclen;
  size_t tmp;
  size_t dm;
  mb_len_map_t *tmp___0;
  char *tmp___1;
  const char *tmp___2;
  size_t ombclen;
  wint_t tmp___3;
  void *__cil_tmp27;
  void *__cil_tmp28;
  {
    lengths_differ = (_Bool) 0;
    if ((* n) > outalloc)
    {
      goto _L;
    }
    else
      if (outalloc == 0UL)
    {
      _L:
      if (1UL > (* n))
      {
        outalloc = (size_t) 1;
      }
      else
      {
        outalloc = * n;
      }


      {
        out = (char *) xrealloc((void *) out, outalloc);
        len_map = (mb_len_map_t *) xrealloc((void *) len_map, outalloc);
      }
    }


    if (! out)
    {
      {
        __assert_fail("out", "/home/khheo/project/benchmark/grep-2.19/src/searchutils.c", 97U, "mbtoupper");
      }
    }

    if (! len_map)
    {
      {
        __assert_fail("len_map", "/home/khheo/project/benchmark/grep-2.19/src/searchutils.c", 98U, "mbtoupper");
      }
    }

    if ((* n) == 0UL)
    {
      return out;
    }

    {
      memset((void *) (& is), 0, sizeof(is));
      memset((void *) (& os), 0, sizeof(os));
      end = beg + (* n);
      mb_cur_max = __ctype_get_mb_cur_max();
      p = out;
      m = len_map;
      outlen = (size_t) 0;
    }
    {
      while (1)
      {
        while_continue:
        ;

        if (! (((unsigned long) beg) < ((unsigned long) end)))
        {
          goto while_break;
        }

        {
          tmp = mbrtowc((wchar_t *) (& wc), (const char *) beg, (size_t) (end - beg), (mbstate_t *) (& is));
          mbclen = tmp;
        }
        if ((outlen + mb_cur_max) >= outalloc)
        {
          {
            dm = (size_t) (m - len_map);
            out = (char *) x2nrealloc((void *) out, & outalloc, (size_t) 1);
            len_map = (mb_len_map_t *) xrealloc((void *) len_map, outalloc);
            p = out + outlen;
            m = len_map + dm;
          }
        }

        if (mbclen == 0xffffffffffffffffUL)
        {
          goto _L___0;
        }
        else
          if (mbclen == 0xfffffffffffffffeUL)
        {
          goto _L___0;
        }
        else
          if (mbclen == 0UL)
        {
          _L___0:
          {
            tmp___0 = m;
            m++;
            * tmp___0 = (mb_len_map_t) 0;
            tmp___1 = p;
            p++;
            tmp___2 = beg;
            beg++;
            * tmp___1 = (char) (* tmp___2);
            outlen++;
            memset((void *) (& is), 0, sizeof(is));
            memset((void *) (& os), 0, sizeof(os));
          }

        }
        else
        {
          {
            beg += mbclen;
            tmp___3 = towupper((wint_t) wc);
            ombclen = wcrtomb((char *) p, (wchar_t) tmp___3, (mbstate_t *) (& os));
            * m = (mb_len_map_t) (mbclen - ombclen);
            memset((void *) (m + 1), 0, ombclen - 1UL);
            m += ombclen;
            p += ombclen;
            outlen += ombclen;
            lengths_differ = (_Bool) (((int) lengths_differ) | (mbclen != ombclen));
          }
        }



      }

      while_break___0:
      ;

    }
    while_break:
    ;

    if (lengths_differ)
    {
      * len_map_p = len_map;
    }
    else
    {
      * len_map_p = (mb_len_map_t *) ((void *) 0);
    }

    * n = (size_t) (p - out);
    * p = (char) 0;
    return out;
  }
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
            mbclen = mbrlen((const char *) p, (size_t) (end - p), (mbstate_t *) (& cur_state));
          }
        }

        if (0UL < mbclen)
        {
          if (! (mbclen < 0xfffffffffffffffeUL))
          {
            {
              mbclen = (size_t) 1;
              memset((void *) (& cur_state), 0, sizeof(cur_state));
            }
          }

        }
        else
        {
          {
            mbclen = (size_t) 1;
            memset((void *) (& cur_state), 0, sizeof(cur_state));
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
    else
    {
      tmp___0 = cur - p0;
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
      else
      {
        tmp___0 = 4294967295U;
      }

    }
    else
    {
      tmp___0 = 4294967295U;
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
  {
    if (* s)
    {
      {
        print_start_colorize(sgr_start, s);
      }
    }

    return;
  }
}

static void pr_sgr_end(const char *s)
{
  {
    if (* s)
    {
      {
        print_end_colorize(sgr_end);
      }
    }

    return;
  }
}

static void pr_sgr_start_if(const char *s)
{
  {
    if (color_option)
    {
      {
        pr_sgr_start(s);
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
        pr_sgr_end(s);
      }
    }

    return;
  }
}

static void color_cap_mt_fct(void)
{
  {
    context_match_color = selected_match_color;
    return;
  }
}

static void color_cap_rv_fct(void)
{
  {
    color_option = - 1;
    return;
  }
}

static void color_cap_ne_fct(void)
{
  char *__cil_tmp3;
  char *__cil_tmp4;
  {
    sgr_start = "\033[%sm";
    sgr_end = "\033[m";
    return;
  }
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
  int tmp;
  {
    if ((m & 61440U) == 8192U)
    {
      tmp = 1;
    }
    else
      if ((m & 61440U) == 24576U)
    {
      tmp = 1;
    }
    else
      if ((m & 61440U) == 49152U)
    {
      tmp = 1;
    }
    else
      if ((m & 61440U) == 4096U)
    {
      tmp = 1;
    }
    else
    {
      tmp = 0;
    }




    return tmp;
  }
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
    else
    {
      tmp = 0;
    }


    return tmp;
  }
}

static void (*compile)(const char *, size_t);
static size_t (*execute)(const char *, size_t, size_t *, const char *);
static void suppressible_error(const char *mesg, int errnum)
{
  {
    if (! suppress_errors)
    {
      {
        error(0, errnum, "%s", mesg);
      }
    }

    errseen = 1;
    return;
  }
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
        tmp = memchr((const void *) buf, '\200', bufsize);
      }
      return ((unsigned long) tmp) != ((unsigned long) ((void *) 0));
    }

    {
      tmp___0 = memchr((const void *) buf, '\000', bufsize);
    }
    if (tmp___0)
    {
      return 1;
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
          cur = lseek(fd, (__off_t) 0, 1);
        }
        if (cur < 0L)
        {
          return 0;
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
            tmp___2 = __errno_location();
            suppressible_error(filename, * tmp___2);
          }
        }

        if (hole_start < ((off_t) st->st_size))
        {
          return 1;
        }

      }

    }

    return 0;
  }
}

static void context_length_arg(const char *str, intmax_t *out___0)
{
  strtol_error tmp;
  char *tmp___0;
  char *__cil_tmp7;
  char *__cil_tmp8;
  {
    {
      tmp = xstrtoimax(str, (char **) 0, 10, out___0, "");
    }
    if (((unsigned int) tmp) == 0U)
    {
      goto case_0;
    }

    if (((unsigned int) tmp) == 1U)
    {
      goto case_0;
    }

    goto switch_default;
    case_0:
    if (0L <= (* out___0))
    {
      goto switch_break;
    }


    switch_default:
    {
      tmp___0 = gettext("invalid context length argument");
      error(2, 0, "%s: %s", str, tmp___0);
    }

    switch_break:
    ;

    return;
  }
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
        tmp___0 = 1;
      }
      else
        if (command_line)
      {
        if (filename_prefix_len != 0UL)
        {
          tmp___0 = 0;
        }
        else
        {
          goto _L;
        }

      }
      else
        _L:
      if (excluded_directory_patterns)
      {
        {
          tmp = excluded_file_name((const struct exclude *) excluded_directory_patterns, name);
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
      else
      {
        tmp___0 = 0;
      }




      tmp___3 = tmp___0;
    }
    else
    {
      if (excluded_patterns)
      {
        {
          tmp___1 = excluded_file_name((const struct exclude *) excluded_patterns, name);
        }
        if (tmp___1)
        {
          tmp___2 = 1;
        }
        else
        {
          tmp___2 = 0;
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
          abort();
        }
      }
      else
        if (((2UL * pagesize) + 1UL) <= pagesize)
      {
        {
          abort();
        }
      }


      if ((32768UL % pagesize) == 0UL)
      {
        tmp = (size_t) 32768;
      }
      else
      {
        tmp = 32768UL + (pagesize - (32768UL % pagesize));
      }

      {
        bufalloc = (tmp + pagesize) + 1UL;
        buffer = (char *) xmalloc(bufalloc);
      }
    }

    if ((((size_t) (buffer + 1)) % pagesize) == 0UL)
    {
      buflim = buffer + 1;
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
          bufoffset = lseek(fd, (__off_t) 0, 1);
        }
        if (bufoffset < 0L)
        {
          {
            tmp___0 = __errno_location();
            tmp___1 = gettext("lseek failed");
            suppressible_error((const char *) tmp___1, * tmp___0);
          }
          return 0;
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
            {
              xalloc_die();
            }
          }
          else
            if ((((newsize * 2UL) + pagesize) + 1UL) < (newsize * 2UL))
          {
            {
              xalloc_die();
            }
          }


          newsize *= 2UL;
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
          bufalloc = newalloc;
          tmp___0 = xmalloc(bufalloc);
          newbuf = (char *) tmp___0;
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
          free((void *) buffer);
          buffer = newbuf;
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
      cc = 0;
      fillsize = (ssize_t) cc;
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
  {
    return;
  }
}

static void dos_unix_byte_offsets(void)
{
  {
    return;
  }
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
  off_t pos_lo;
  off_t pos_hi;
  {
    return byteno;
    if (((unsigned int) dos_file_type) != 2U)
    {
      return byteno;
    }
    else
      if (dos_report_unix_offset)
    {
      return byteno;
    }


    pos_lo = (dos_pos_map + (out_map_idx - 1))->pos;
    pos_hi = (dos_pos_map + out_map_idx)->pos;
    if (byteno >= pos_hi)
    {
      out_map_idx++;
      {
        while (1)
        {
          while_continue:
          ;

          if (out_map_idx < dos_pos_map_used)
          {
            if (! (byteno >= (dos_pos_map + out_map_idx)->pos))
            {
              goto while_break;
            }

          }
          else
          {
            goto while_break;
          }

          out_map_idx++;
        }

        while_break___1:
        ;

      }
      while_break:
      ;

    }
    else
      if (byteno < pos_lo)
    {
      out_map_idx--;
      {
        while (1)
        {
          while_continue___0:
          ;

          if (out_map_idx > 1)
          {
            if (! (byteno < (dos_pos_map + (out_map_idx - 1))->pos))
            {
              goto while_break___0;
            }

          }
          else
          {
            goto while_break___0;
          }

          out_map_idx--;
        }

        while_break___2:
        ;

      }
      while_break___0:
      ;

    }


    return byteno + (dos_pos_map + out_map_idx)->add;
  }
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
        tmp = gettext("input is too large to count");
        error(2, 0, (const char *) tmp);
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
          goto while_break;
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
  {
    {
      pr_sgr_start_if(filename_color);
      fputs_unlocked((const char *) filename, (FILE *) stdout);
      pr_sgr_end_if(filename_color);
    }
    return;
  }
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
          ;

          min_width--;
          if (! (min_width >= 0))
          {
            goto while_break___0;
          }

          p--;
          * p = (char) ' ';
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
        print_filename();
      }
      if (filename_mask)
      {
        pending_sep = 1;
      }
      else
      {
        {
          fputc_unlocked(0, stdout);
        }
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
          print_sep((char) sep);
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
        tmp = add_count(totalcc, (uintmax_t) (beg - ((const char *) bufbeg)));
        pos = tmp;
        pos = (uintmax_t) dossified_pos((off_t) pos);
      }
      if (pending_sep)
      {
        {
          print_sep((char) sep);
        }
      }

      {
        print_offset(pos, 6, byte_num_color);
        pending_sep = 1;
      }
    }

    if (pending_sep)
    {
      if (align_tabs)
      {
        {
          fputs_unlocked((const char *) "\t\b", (FILE *) stdout);
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
        else
        {
          goto while_break;
        }

        b = beg + match_offset;
        if (((unsigned long) b) == ((unsigned long) lim))
        {
          goto while_break;
        }

        if (match_size == 0UL)
        {
          match_size = (size_t) 1;
          if (! mid)
          {
            mid = cur;
          }

        }
        else
        {
          if (only_matching)
          {
            if (out_invert)
            {
              tmp = '-';
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
              pr_sgr_start(line_color);
            }
            if (mid)
            {
              cur = mid;
              mid = (const char *) ((void *) 0);
            }

            {
              fwrite_unlocked((const void *) ((const void *) cur), sizeof(char), (size_t) (b - cur), (FILE *) stdout);
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
      cur = mid;
    }


    return cur;
  }
}

static const char *print_line_tail(const char *beg, const char *lim, const char *line_color)
{
  size_t eol_size;
  size_t tail_size;
  int tmp;
  int tmp___0;
  {
    if (((unsigned long) lim) > ((unsigned long) beg))
    {
      if (((const int) (* (lim + (- 1)))) == ((const int) eolbyte))
      {
        tmp = 1;
      }
      else
      {
        tmp = 0;
      }

    }
    else
    {
      tmp = 0;
    }

    eol_size = (size_t) tmp;
    if (((unsigned long) (lim - eol_size)) > ((unsigned long) beg))
    {
      if (((const int) (* (lim + (- (1UL + eol_size))))) == 13)
      {
        tmp___0 = 1;
      }
      else
      {
        tmp___0 = 0;
      }

    }
    else
    {
      tmp___0 = 0;
    }

    eol_size += (size_t) tmp___0;
    tail_size = (size_t) ((lim - eol_size) - beg);
    if (tail_size > 0UL)
    {
      {
        pr_sgr_start(line_color);
        fwrite_unlocked((const void *) ((const void *) beg), (size_t) 1, tail_size, (FILE *) stdout);
        beg += tail_size;
        pr_sgr_end(line_color);
      }
    }

    return beg;
  }
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
        if (color_option < 0)
        {
          tmp___0 = 1;
        }
        else
        {
          tmp___0 = 0;
        }

      }
      else
      {
        tmp___0 = 0;
      }

      if ((sep == 58) ^ tmp___0)
      {
        line_color = selected_line_color;
      }
      else
      {
        line_color = context_line_color;
      }

      if (sep == 58)
      {
        match_color = selected_match_color;
      }
      else
      {
        match_color = context_match_color;
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
      else
      {
        goto _L___1;
      }

    }
    else
      _L___1:
    if (color_option)
    {
      if (* line_color)
      {
        goto _L___0;
      }
      else
        if (* match_color)
      {
        _L___0:
        if (matching)
        {
          if (only_matching)
          {
            {
              beg = print_line_middle(beg, lim, line_color, match_color);
            }
          }
          else
            if (* match_color)
          {
            {
              beg = print_line_middle(beg, lim, line_color, match_color);
            }
          }


        }


        if (! only_matching)
        {
          if (* line_color)
          {
            {
              beg = print_line_tail(beg, lim, line_color);
            }
          }

        }

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
        write_error_seen = 1;
        tmp___1 = gettext("write error");
        error(2, 0, (const char *) tmp___1);
      }
    }

    lastout = lim;
    if (line_buffered)
    {
      {
        fflush_unlocked(stdout);
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
            goto while_break;
          }

        }
        else
        {
          goto while_break;
        }

        {
          tmp = (const char *) memchr((const void *) lastout, (int) eolbyte, (size_t) (lim - lastout));
          nl = tmp;
          pending--;
        }
        if (outleft)
        {
          {
            prline(lastout, nl + 1, '-');
          }
        }
        else
        {
          {
            tmp___0 = (* execute)(lastout, (size_t) ((nl + 1) - lastout), & match_size, (const char *) ((void *) 0));
          }
          if ((tmp___0 == 0xffffffffffffffffUL) == (! out_invert))
          {
            {
              prline(lastout, nl + 1, '-');
            }
          }
          else
          {
            pending = (intmax_t) 0;
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
          prpending(beg);
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
            {
              while (1)
              {
                while_continue___0:
                ;

                p--;
                if (! (((const int) (* (p + (- 1)))) != ((const int) eol)))
                {
                  goto while_break___0;
                }

              }

              while_break___4:
              ;

            }
            while_break___0:
            ;

          }

          i++;
        }

        while_break___3:
        ;

      }
      while_break:
      ;

      if (0L <= out_before)
      {
        goto _L;
      }
      else
        if (0L <= out_after)
      {
        _L:
        if (used)
        {
          if (((unsigned long) p) != ((unsigned long) lastout))
          {
            if (group_separator)
            {
              {
                pr_sgr_start_if(sep_color);
                fputs_unlocked((const char *) group_separator, (FILE *) stdout);
                pr_sgr_end_if(sep_color);
                fputc_unlocked('\n', stdout);
              }
            }

          }

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
            tmp___0 = (const char *) memchr((const void *) p, (int) eol, (size_t) (beg - p));
            nl = tmp___0;
            nl++;
            prline(p, nl, '-');
            p = nl;
          }
        }

        while_break___5:
        ;

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
              goto while_break___2;
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
      pending = (intmax_t) 0;
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
      goto _L;
    }
    else
      if (((unsigned long) execute) == ((unsigned long) (& Pexecute)))
    {
      _L:
      {
        tmp___0 = __ctype_get_mb_cur_max();
      }

      if (tmp___0 == 1UL)
      {
        {
          tmp = (* execute)(buf, size, match_size, start_ptr);
        }
        return tmp;
      }
      else
        if (! match_icase)
      {
        {
          tmp = (* execute)(buf, size, match_size, start_ptr);
        }
        return tmp;
      }


    }
    else
    {
      {
        tmp = (* execute)(buf, size, match_size, start_ptr);
      }
      return tmp;
    }


    line_next = buf;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (((unsigned long) line_next) < ((unsigned long) (buf + size))))
        {
          goto while_break;
        }

        {
          line_buf = line_next;
          tmp___1 = (const char *) memchr((const void *) line_buf, (int) eolbyte, (size_t) ((buf + size) - line_buf));
          line_end = tmp___1;
        }
        if (((unsigned long) line_end) == ((unsigned long) ((void *) 0)))
        {
          line_end = buf + size;
          line_next = line_end;
        }
        else
        {
          line_next = line_end + 1;
        }

        if (start_ptr)
        {
          if (((unsigned long) start_ptr) >= ((unsigned long) line_end))
          {
            goto __Cont;
          }

        }

        {
          result = (* execute)(line_buf, (size_t) (line_next - line_buf), match_size, start_ptr);
        }
        if (result != 0xffffffffffffffffUL)
        {
          return ((size_t) (line_buf - buf)) + result;
        }

        __Cont:
        ;

      }

      while_break___0:
      ;

    }
    while_break:
    ;

    return (size_t) (- 1);
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
            goto while_break;
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
            goto _L;
          }
          else
            if (done_on_match)
          {
            _L:
            if (exit_on_match)
            {
              {
                exit(0);
              }
            }


            goto while_break;
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
      return (intmax_t) 0;
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
        tmp___0 = __errno_location();
        suppressible_error(filename, * tmp___0);
      }
      return (intmax_t) 0;
    }

    if (((unsigned int) binary_files) == 0U)
    {
      if (! out_quiet)
      {
        goto _L;
      }
      else
      {
        goto _L___0;
      }

    }
    else
      _L___0:
    if (((unsigned int) binary_files) == 2U)
    {
      _L:
      {
        tmp___2 = file_is_binary((const char *) bufbeg, (size_t) (buflim - bufbeg), fd, st);
      }

      if (tmp___2)
      {
        tmp___3 = 1;
      }
      else
      {
        tmp___3 = 0;
      }

    }
    else
    {
      tmp___3 = 0;
    }



    not_text = tmp___3;
    if (not_text)
    {
      if (((unsigned int) binary_files) == 2U)
      {
        return (intmax_t) 0;
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
          lim = beg - residue;
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
              goto finish_grep;
            }
            else
            {
              goto _L___1;
            }

          }
          else
            _L___1:
          if (nlines)
          {
            if (done_on_match)
            {
              goto finish_grep;
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
                if (! (((unsigned long) beg) != ((unsigned long) lastout)))
                {
                  goto while_break___0;
                }

              }
              else
              {
                goto while_break___0;
              }

            }
            else
            {
              goto while_break___0;
            }

            i++;
            {
              while (1)
              {
                while_continue___1:
                ;

                beg--;
                if (! (((int) (* (beg + (- 1)))) != ((int) eol)))
                {
                  goto while_break___1;
                }

              }

              while_break___4:
              ;

            }
            while_break___1:
            ;

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
            totalcc = add_count(totalcc, ((size_t) (buflim - bufbeg)) - save);
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
            tmp___5 = __errno_location();
            suppressible_error(filename, * tmp___5);
          }
          goto finish_grep;
        }

      }

      while_break___2:
      ;

    }
    while_break:
    ;

    if (residue)
    {
      tmp___7 = buflim;
      buflim++;
      * tmp___7 = eol;
      if (outleft)
      {
        {
          tmp___8 = grepbuf((const char *) ((bufbeg + save) - residue), (const char *) buflim);
          nlines += tmp___8;
        }
      }

      if (pending)
      {
        {
          prpending((const char *) buflim);
        }
      }

    }

    finish_grep:
    done_on_match -= not_text;

    out_quiet -= not_text;
    if (not_text & (~ out_quiet))
    {
      if (nlines != 0L)
      {
        {
          tmp___9 = gettext("Binary file %s matches\n");
          printf((const char *) ((const char *) tmp___9), filename);
        }
      }

    }

    return nlines;
  }
}

static int grepdirent(FTS *fts, FTSENT *ent, int command_line)
{
  int follow;
  int dirdesc;
  struct stat *st;
  int tmp;
  int tmp___0;
  int tmp___1;
  char *tmp___2;
  char *tmp___3;
  struct stat st1;
  int flag;
  int tmp___4;
  int *tmp___5;
  int tmp___6;
  int tmp___7;
  int tmp___8;
  void *__cil_tmp22;
  char *__cil_tmp23;
  char *__cil_tmp24;
  {
    st = ent->fts_statp;
    command_line &= ent->fts_level == 0L;
    if (((int) ent->fts_info) == 6)
    {
      if (((unsigned int) directories) == 3U)
      {
        if (command_line)
        {
          out_file &= ~ (2 * (! no_filenames));
        }

      }

      return 1;
    }

    if (((int) ent->fts_info) == 1)
    {
      tmp = 1;
    }
    else
      if (((int) ent->fts_info) == 2)
    {
      tmp = 1;
    }
    else
      if (((int) ent->fts_info) == 4)
    {
      tmp = 1;
    }
    else
    {
      tmp = 0;
    }



    {
      tmp___0 = skipped_file((const char *) ent->fts_name, command_line, tmp);
    }
    if (tmp___0)
    {
      {
        fts_set(fts, ent, 4);
      }
      return 1;
    }

    filename = (const char *) (ent->fts_path + filename_prefix_len);
    if (fts->fts_options & 2)
    {
      tmp___1 = 1;
    }
    else
      if (fts->fts_options & 1)
    {
      if (command_line)
      {
        tmp___1 = 1;
      }
      else
      {
        tmp___1 = 0;
      }

    }
    else
    {
      tmp___1 = 0;
    }


    follow = tmp___1;
    if (((int) ent->fts_info) == 1)
    {
      goto case_1;
    }

    if (((int) ent->fts_info) == 2)
    {
      goto case_2;
    }

    if (((int) ent->fts_info) == 4)
    {
      goto case_4;
    }

    if (((int) ent->fts_info) == 7)
    {
      goto case_4;
    }

    if (((int) ent->fts_info) == 10)
    {
      goto case_4;
    }

    if (((int) ent->fts_info) == 3)
    {
      goto case_3;
    }

    if (((int) ent->fts_info) == 11)
    {
      goto case_3;
    }

    if (((int) ent->fts_info) == 8)
    {
      goto case_8;
    }

    if (((int) ent->fts_info) == 13)
    {
      goto case_8;
    }

    if (((int) ent->fts_info) == 12)
    {
      goto case_12;
    }

    if (((int) ent->fts_info) == 14)
    {
      goto case_12;
    }

    goto switch_default;
    case_1:
    if (((unsigned int) directories) == 3U)
    {
      out_file |= 2 * (! no_filenames);
      return 1;
    }


    {
      fts_set(fts, ent, 4);
    }
    goto switch_break;
    case_2:
    if (! suppress_errors)
    {
      {
        tmp___2 = gettext("recursive directory loop");
        tmp___3 = gettext("warning: %s: %s");
        error(0, 0, (const char *) tmp___3, filename, tmp___2);
      }
    }


    return 1;
    case_4:
    {
      suppressible_error(filename, ent->fts_errno);
    }

    return 1;
    case_3:
    if (((unsigned int) devices) == 2U)
    {
      goto _L;
    }
    else
      if (((unsigned int) devices) == 0U)
    {
      if (! command_line)
      {
        _L:
        if (! st->st_mode)
        {
          if (follow)
          {
            tmp___4 = 0;
          }
          else
          {
            tmp___4 = 256;
          }

          {
            flag = tmp___4;
            tmp___6 = fstatat(fts->fts_cwd_fd, (const char *) ((const char *) ent->fts_accpath), (struct stat *) (& st1), flag);
          }
          if (tmp___6 != 0)
          {
            {
              tmp___5 = __errno_location();
              suppressible_error(filename, * tmp___5);
            }
            return 1;
          }

          st = & st1;
        }


        {
          tmp___7 = is_device_mode(st->st_mode);
        }
        if (tmp___7)
        {
          return 1;
        }

      }

    }



    goto switch_break;
    case_8:
    goto switch_break;

    case_12:
    return 1;

    switch_default:
    {
      abort();
    }

    switch_break:
    ;

    if ((fts->fts_options & 516) == 512)
    {
      dirdesc = fts->fts_cwd_fd;
    }
    else
    {
      dirdesc = - 100;
    }

    {
      tmp___8 = grepfile(dirdesc, (const char *) ent->fts_accpath, follow, command_line);
    }
    return tmp___8;
  }
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
    else
    {
      tmp = 131072;
    }

    {
      tmp___0 = openat_safer(dirdesc, name, tmp);
      desc = tmp___0;
    }
    if (desc < 0)
    {
      if (follow)
      {
        {
          tmp___1 = __errno_location();
          suppressible_error(filename, * tmp___1);
        }
      }
      else
      {
        {
          tmp___2 = __errno_location();
        }
        if ((* tmp___2) != 40)
        {
          {
            tmp___3 = __errno_location();
          }
          if ((* tmp___3) != 31)
          {
            {
              tmp___1 = __errno_location();
              suppressible_error(filename, * tmp___1);
            }
          }

        }

      }

      return 1;
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
        tmp = __errno_location();
        suppressible_error(filename, * tmp);
      }
      goto closeout;
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
          goto closeout;
        }

      }

    }

    if (desc != 0)
    {
      if (((unsigned int) directories) == 3U)
      {
        if ((st.st_mode & 61440U) == 16384U)
        {
          if (command_line)
          {
            tmp___2 = 0;
          }
          else
          {
            tmp___2 = 1;
          }

          {
            opts = fts_options & (~ tmp___2);
            tmp___4 = close(desc);
          }
          if (tmp___4 != 0)
          {
            {
              tmp___3 = __errno_location();
              suppressible_error(filename, * tmp___3);
            }
          }

          {
            fts_arg[0] = (char *) filename;
            fts_arg[1] = (char *) ((void *) 0);
            fts = fts_open((char *const *) fts_arg, opts, (int (*)(const FTSENT **, const FTSENT **)) ((void *) 0));
          }
          if (! fts)
          {
            {
              xalloc_die();
            }
          }

          {
            while (1)
            {
              while_continue:
              ;

              {
                ent = fts_read(fts);
              }
              if (! ent)
              {
                goto while_break;
              }

              {
                tmp___5 = grepdirent(fts, ent, command_line);
                status &= tmp___5;
              }
            }

            while_break___0:
            ;

          }
          while_break:
          {
            tmp___7 = __errno_location();
          }

          if (* tmp___7)
          {
            {
              tmp___6 = __errno_location();
              suppressible_error(filename, * tmp___6);
            }
          }

          {
            tmp___9 = fts_close(fts);
          }
          if (tmp___9 != 0)
          {
            {
              tmp___8 = __errno_location();
              suppressible_error(filename, * tmp___8);
            }
          }

          return status;
        }

      }

    }

    if (desc != 0)
    {
      if (((unsigned int) directories) == 4U)
      {
        if ((st.st_mode & 61440U) == 16384U)
        {
          goto closeout;
        }
        else
        {
          goto _L___0;
        }

      }
      else
        _L___0:
      if (((unsigned int) devices) == 2U)
      {
        goto _L;
      }
      else
        if (((unsigned int) devices) == 0U)
      {
        if (! command_line)
        {
          _L:
          {
            tmp___10 = is_device_mode(st.st_mode);
          }

          if (tmp___10)
          {
            goto closeout;
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
                  if (! suppress_errors)
                  {
                    {
                      tmp___11 = quote(filename);
                      tmp___12 = gettext("input file %s is also the output");
                      error(0, 0, (const char *) tmp___12, tmp___11);
                    }
                  }

                  errseen = 1;
                  goto closeout;
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
      status = (int) (count + 2L);
    }
    else
    {
      if (count_matches)
      {
        if (out_file)
        {
          {
            print_filename();
          }
          if (filename_mask)
          {
            {
              print_sep((char) ':');
            }
          }
          else
          {
            {
              fputc_unlocked(0, stdout);
            }
          }

        }

        {
          printf((const char *) "%ld\n", count);
        }
      }

      status = ! count;
      if (list_files == (1 - (2 * status)))
      {
        {
          print_filename();
          fputc_unlocked(10 & filename_mask, stdout);
        }
      }

      if (desc == 0)
      {
        if (outleft)
        {
          tmp___14 = bufoffset;
        }
        else
        {
          tmp___14 = after_last_match;
        }

        required_offset = tmp___14;
        if (required_offset != bufoffset)
        {
          {
            tmp___16 = lseek(desc, required_offset, 0);
          }
          if (tmp___16 < 0L)
          {
            if ((st.st_mode & 61440U) == 32768U)
            {
              {
                tmp___15 = __errno_location();
                suppressible_error(filename, * tmp___15);
              }
            }

          }

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
          tmp___17 = __errno_location();
          suppressible_error(filename, * tmp___17);
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
        filename = (const char *) label;
      }
      else
      {
        {
          tmp = gettext("(standard input)");
          filename = (const char *) tmp;
        }
      }

      {
        tmp___0 = grepdesc(0, 1);
      }
      return tmp___0;
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
  char *tmp;
  char *tmp___0;
  char *tmp___1;
  char *tmp___2;
  char *tmp___3;
  char *tmp___4;
  char *tmp___5;
  char *tmp___6;
  char *tmp___7;
  char *tmp___8;
  char *tmp___9;
  char *tmp___10;
  char *tmp___11;
  char *tmp___12;
  char *tmp___13;
  char *tmp___14;
  char *tmp___15;
  char *tmp___16;
  char *tmp___17;
  char *tmp___18;
  char *tmp___19;
  char *__cil_tmp44;
  char *__cil_tmp45;
  char *__cil_tmp46;
  char *__cil_tmp47;
  char *__cil_tmp48;
  char *__cil_tmp49;
  char *__cil_tmp50;
  char *__cil_tmp51;
  char *__cil_tmp52;
  char *__cil_tmp53;
  char *__cil_tmp54;
  char *__cil_tmp55;
  char *__cil_tmp56;
  char *__cil_tmp57;
  char *__cil_tmp58;
  char *__cil_tmp59;
  char *__cil_tmp60;
  char *__cil_tmp61;
  char *__cil_tmp62;
  char *__cil_tmp63;
  char *__cil_tmp64;
  {
    if (status != 0)
    {
      {
        tmp = gettext("Usage: %s [OPTION]... PATTERN [FILE]...\n");
        fprintf((FILE *) stderr, (const char *) ((const char *) tmp), program_name);
        tmp___0 = gettext("Try \'%s --help\' for more information.\n");
        fprintf((FILE *) stderr, (const char *) ((const char *) tmp___0), program_name);
      }
    }
    else
    {
      {
        tmp___1 = gettext("Usage: %s [OPTION]... PATTERN [FILE]...\n");
        printf((const char *) ((const char *) tmp___1), program_name);
        tmp___2 = gettext("Search for PATTERN in each FILE or standard input.\n");
        printf((const char *) ((const char *) tmp___2));
        tmp___3 = gettext("PATTERN is, by default, a basic regular expression (BRE).\n");
        printf((const char *) ((const char *) tmp___3));
        tmp___4 = gettext("Example: %s -i \'hello world\' menu.h main.c\n\nRegexp selection and interpretation:\n");
        printf((const char *) ((const char *) tmp___4), program_name);
        tmp___5 = gettext("  -E, --extended-regexp     PATTERN is an extended regular expression (ERE)\n  -F, --fixed-strings       PATTERN is a set of newline-separated fixed strings\n  -G, --basic-regexp        PATTERN is a basic regular expression (BRE)\n  -P, --perl-regexp         PATTERN is a Perl regular expression\n");
        printf((const char *) ((const char *) tmp___5));
        tmp___6 = gettext("  -e, --regexp=PATTERN      use PATTERN for matching\n  -f, --file=FILE           obtain PATTERN from FILE\n  -i, --ignore-case         ignore case distinctions\n  -w, --word-regexp         force PATTERN to match only whole words\n  -x, --line-regexp         force PATTERN to match only whole lines\n  -z, --null-data           a data line ends in 0 byte, not newline\n");
        printf((const char *) ((const char *) tmp___6));
        tmp___7 = gettext("\nMiscellaneous:\n  -s, --no-messages         suppress error messages\n  -v, --invert-match        select non-matching lines\n  -V, --version             display version information and exit\n      --help                display this help text and exit\n");
        printf((const char *) ((const char *) tmp___7));
        tmp___8 = gettext("\nOutput control:\n  -m, --max-count=NUM       stop after NUM matches\n  -b, --byte-offset         print the byte offset with output lines\n  -n, --line-number         print line number with output lines\n      --line-buffered       flush output on every line\n  -H, --with-filename       print the file name for each match\n  -h, --no-filename         suppress the file name prefix on output\n      --label=LABEL         use LABEL as the standard input file name prefix\n");
        printf((const char *) ((const char *) tmp___8));
        tmp___9 = gettext("  -o, --only-matching       show only the part of a line matching PATTERN\n  -q, --quiet, --silent     suppress all normal output\n      --binary-files=TYPE   assume that binary files are TYPE;\n                            TYPE is \'binary\', \'text\', or \'without-match\'\n  -a, --text                equivalent to --binary-files=text\n");
        printf((const char *) ((const char *) tmp___9));
        tmp___10 = gettext("  -I                        equivalent to --binary-files=without-match\n  -d, --directories=ACTION  how to handle directories;\n                            ACTION is \'read\', \'recurse\', or \'skip\'\n  -D, --devices=ACTION      how to handle devices, FIFOs and sockets;\n                            ACTION is \'read\' or \'skip\'\n  -r, --recursive           like --directories=recurse\n  -R, --dereference-recursive  likewise, but follow all symlinks\n");
        printf((const char *) ((const char *) tmp___10));
        tmp___11 = gettext("      --include=FILE_PATTERN  search only files that match FILE_PATTERN\n      --exclude=FILE_PATTERN  skip files and directories matching FILE_PATTERN\n      --exclude-from=FILE   skip files matching any file pattern from FILE\n      --exclude-dir=PATTERN  directories that match PATTERN will be skipped.\n");
        printf((const char *) ((const char *) tmp___11));
        tmp___12 = gettext("  -L, --files-without-match  print only names of FILEs containing no match\n  -l, --files-with-matches  print only names of FILEs containing matches\n  -c, --count               print only a count of matching lines per FILE\n  -T, --initial-tab         make tabs line up (if needed)\n  -Z, --null                print 0 byte after FILE name\n");
        printf((const char *) ((const char *) tmp___12));
        tmp___13 = gettext("\nContext control:\n  -B, --before-context=NUM  print NUM lines of leading context\n  -A, --after-context=NUM   print NUM lines of trailing context\n  -C, --context=NUM         print NUM lines of output context\n");
        printf((const char *) ((const char *) tmp___13));
        tmp___14 = gettext("  -NUM                      same as --context=NUM\n      --color[=WHEN],\n      --colour[=WHEN]       use markers to highlight the matching strings;\n                            WHEN is \'always\', \'never\', or \'auto\'\n  -U, --binary              do not strip CR characters at EOL (MSDOS/Windows)\n  -u, --unix-byte-offsets   report offsets as if CRs were not there\n                            (MSDOS/Windows)\n\n");
        printf((const char *) ((const char *) tmp___14));
        tmp___15 = gettext("\'egrep\' means \'grep -E\'.  \'fgrep\' means \'grep -F\'.\nDirect invocation as either \'egrep\' or \'fgrep\' is deprecated.\n");
        printf((const char *) ((const char *) tmp___15));
        tmp___16 = gettext("When FILE is -, read standard input.  With no FILE, read . if a command-line\n-r is given, - otherwise.  If fewer than two FILEs are given, assume -h.\nExit status is 0 if any line is selected, 1 otherwise;\nif any error occurs and -q is not given, the exit status is 2.\n");
        printf((const char *) ((const char *) tmp___16));
        tmp___17 = gettext("\nReport bugs to: %s\n");
        printf((const char *) ((const char *) tmp___17), "bug-grep@gnu.org");
        tmp___18 = gettext("GNU Grep home page: <%s>\n");
        printf((const char *) ((const char *) tmp___18), "http://www.gnu.org/software/grep/");
        tmp___19 = gettext("General help using GNU software: <http://www.gnu.org/gethelp/>\n");
        fputs_unlocked((const char *) ((const char *) tmp___19), (FILE *) stdout);
      }
    }

    {
      exit(status);
    }
  }
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
  {
    {
      GEAcompile(pattern, size, (((((((((1UL | (((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | ((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | ((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | ((((((1UL << 1) << 1) << 1) << 1) << 1) << 1)) | (((1UL << 1) << 1) << 1)) | ((1UL << 1) << 1)) | (((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1));
    }
    return;
  }
}

static void GAcompile(const char *pattern, size_t size)
{
  {
    {
      GEAcompile(pattern, size, (((((((((((((((1UL << 1) << 1) | ((((((1UL << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | ((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((1UL << 1) << 1) << 1)) | ((((1UL << 1) << 1) << 1) << 1)) | ((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((1UL << 1) << 1) << 1) << 1) << 1)) | (((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | 1UL) | (((((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) & (~ (((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) | ((((1UL << 1) << 1) << 1) << 1)) | (((((1UL << 1) << 1) << 1) << 1) << 1))));
    }
    return;
  }
}

static void PAcompile(const char *pattern, size_t size)
{
  {
    {
      GEAcompile(pattern, size, ((((((((((((((((1UL << 1) << 1) | ((((((1UL << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | ((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((1UL << 1) << 1) << 1)) | ((((1UL << 1) << 1) << 1) << 1)) | ((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((1UL << 1) << 1) << 1) << 1) << 1)) | (((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | 1UL) | (((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1));
    }
    return;
  }
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
        tmp___0 = strcmp(matcher, m);
      }
      if (! (tmp___0 == 0))
      {
        {
          tmp = gettext("conflicting matchers specified");
          error(2, 0, (const char *) tmp);
        }
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
          goto while_break;
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
      ;

    }
    while_break:
    {
      tmp___2 = gettext("invalid matcher %s");
      error(2, 0, (const char *) tmp___2, m);
    }

    return;
  }
}

static size_t prepend_args(const char *options, char *buf, char **argv)
{
  const char *o;
  char *b;
  size_t n;
  unsigned char tmp;
  _Bool tmp___0;
  const char *tmp___1;
  char *tmp___2;
  char tmp___3;
  const char *tmp___4;
  unsigned char tmp___5;
  _Bool tmp___6;
  char *tmp___7;
  {
    o = options;
    b = buf;
    n = (size_t) 0;
    {
      while (1)
      {
        while_continue:
        ;

        {
          while (1)
          {
            while_continue___0:
            ;

            {
              tmp = to_uchar((char) (* o));
              tmp___0 = c_isspace((int) tmp);
            }
            if (! tmp___0)
            {
              goto while_break___0;
            }

            o++;
          }

          while_break___2:
          ;

        }
        while_break___0:
        ;

        if (! (* o))
        {
          return n;
        }

        if (argv)
        {
          * (argv + n) = b;
        }

        n++;
        {
          while (1)
          {
            while_continue___1:
            ;

            tmp___2 = b;
            b++;
            tmp___4 = o;
            o++;
            tmp___3 = (char) (* tmp___4);
            * tmp___2 = tmp___3;
            if (((int) tmp___3) == 92)
            {
              if (* o)
              {
                tmp___1 = o;
                o++;
                * (b + (- 1)) = (char) (* tmp___1);
              }

            }

            if (* o)
            {
              {
                tmp___5 = to_uchar((char) (* o));
                tmp___6 = c_isspace((int) tmp___5);
              }
              if (tmp___6)
              {
                goto while_break___1;
              }

            }
            else
            {
              goto while_break___1;
            }

          }

          while_break___3:
          ;

        }
        while_break___1:
        tmp___7 = b;

        b++;
        * tmp___7 = (char) '\000';
      }

      while_break:
      ;

    }
    return 0UL;
  }
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
        {
          tmp = strlen(options);
          tmp___0 = (char *) xmalloc(tmp + 1UL);
          buf = tmp___0;
          tmp___1 = prepend_args(options, buf, (char **) ((void *) 0));
          prepended = tmp___1;
          argc = * pargc;
          argv = (char *const *) (* pargv);
        }
        if (((size_t) (2147483647 - argc)) < prepended)
        {
          {
            xalloc_die();
          }
        }

        {
          pp = (char **) xmalloc(((prepended + ((size_t) argc)) + 1UL) * (sizeof(* pp)));
          * pargc = (int) (prepended + ((size_t) argc));
          * pargv = pp;
          tmp___2 = pp;
          pp++;
          tmp___3 = argv;
          argv++;
          * tmp___2 = (char *) (* tmp___3);
          tmp___4 = prepend_args(options, buf, pp);
          pp += tmp___4;
        }
        {
          while (1)
          {
            while_continue___0:
            ;

            while_continue:
            tmp___5 = pp;

            pp++;
            tmp___7 = argv;
            argv++;
            tmp___6 = (char *) (* tmp___7);
            * tmp___5 = tmp___6;
            if (! tmp___6)
            {
              goto while_break;
            }

            goto while_continue;
          }

          while_break___0:
          ;

        }
        while_break:
        ;

        return (int) prepended;
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
          p = buf;
        }
        else
          if (! was_digit)
        {
          p = buf;
        }
        else
        {
          p -= ((int) buf[0]) == 48;
        }


        if (((unsigned long) p) == ((unsigned long) ((buf + (sizeof(buf))) - 4)))
        {
          {
            strcpy((char *) p, (const char *) "...");
            p += 3;
          }
          goto while_break;
        }

        tmp = p;
        p++;
        * tmp = (char) opt;
        was_digit = 1;
        prev_digit_optind = this_digit_optind;
        this_digit_optind = optind;
      }

      while_break___0:
      ;

    }
    while_break:
    ;

    if (((unsigned long) p) != ((unsigned long) buf))
    {
      {
        * p = (char) '\000';
        context_length_arg((const char *) buf, default_context);
      }
    }

    return opt;
  }
}

static void parse_grep_colors(void)
{
  const char *p;
  char *q;
  char *name;
  char *val;
  char c;
  const struct color_cap *cap;
  char *tmp;
  int tmp___0;
  char *tmp___1;
  char *__cil_tmp12;
  {
    {
      p = (const char *) getenv("GREP_COLORS");
    }
    if (((unsigned long) p) == ((unsigned long) ((void *) 0)))
    {
      return;
    }
    else
      if (((const int) (* p)) == 0)
    {
      return;
    }


    {
      q = xstrdup(p);
      name = q;
      val = (char *) ((void *) 0);
    }
    {
      while (1)
      {
        while_continue:
        ;

        if (((int) (* q)) == 58)
        {
          goto _L;
        }
        else
          if (((int) (* q)) == 0)
        {
          _L:
          c = * q;

          tmp = q;
          q++;
          * tmp = (char) '\000';
          cap = color_dict;
          {
            while (1)
            {
              while_continue___0:
              ;

              if (! cap->name)
              {
                goto while_break___0;
              }

              {
                tmp___0 = strcmp((const char *) cap->name, (const char *) name);
              }
              if (tmp___0 == 0)
              {
                goto while_break___0;
              }

              cap++;
            }

            while_break___1:
            ;

          }
          while_break___0:
          ;

          if (cap->var)
          {
            if (val)
            {
              * cap->var = (const char *) val;
            }

          }

          if (cap->fct)
          {
            {
              (* cap->fct)();
            }
          }

          if (((int) c) == 0)
          {
            return;
          }

          name = q;
          val = (char *) ((void *) 0);
        }
        else
          if (((int) (* q)) == 61)
        {
          if (((unsigned long) q) == ((unsigned long) name))
          {
            return;
          }
          else
            if (val)
          {
            return;
          }


          tmp___1 = q;
          q++;
          * tmp___1 = (char) '\000';
          val = q;
        }
        else
          if (((unsigned long) val) == ((unsigned long) ((void *) 0)))
        {
          q++;
        }
        else
          if (((int) (* q)) == 59)
        {
          q++;
        }
        else
          if (((int) (* q)) >= 48)
        {
          if (((int) (* q)) <= 57)
          {
            q++;
          }
          else
          {
            return;
          }

        }
        else
        {
          return;
        }






      }

      while_break:
      ;

    }
    return;
  }
}

static _Bool contains_encoding_error(const char *pat, size_t patlen)
{
  mbstate_t mbs;
  size_t i;
  size_t charlen;
  void *__cil_tmp7;
  {
    mbs.__count = 0;
    mbs.__value.__wch = 0U;
    i = (size_t) 0;
    {
      while (1)
      {
        while_continue:
        ;

        if (! (i < patlen))
        {
          goto while_break;
        }

        {
          charlen = mbrlen((const char *) (pat + i), patlen - i, (mbstate_t *) (& mbs));
        }
        if (0xfffffffffffffffeUL <= charlen)
        {
          return (_Bool) 1;
        }

        i += charlen + ((size_t) (charlen == 0UL));
      }

      while_break___0:
      ;

    }
    while_break:
    ;

    return (_Bool) 0;
  }
}

static void fgrep_to_grep_pattern(size_t len, const char *keys, size_t *new_len, char **new_keys)
{
  char *p;
  char *tmp;
  mbstate_t mb_state;
  size_t n;
  wchar_t wc;
  char *tmp___0;
  char *tmp___1;
  void *__cil_tmp16;
  char *__cil_tmp17;
  {
    {
      tmp = (char *) xnmalloc(len + 1UL, (size_t) 2);
      * new_keys = tmp;
      p = tmp;
      mb_state.__count = 0;
      mb_state.__value.__wch = 0U;
    }
    {
      while (1)
      {
        while_continue:
        ;

        if (! len)
        {
          goto while_break;
        }

        {
          n = mbrtowc((wchar_t *) (& wc), (const char *) keys, len, (mbstate_t *) (& mb_state));
        }
        if (n == 0xfffffffffffffffeUL)
        {
          goto case_18446744073709551614;
        }

        if (n == 0xffffffffffffffffUL)
        {
          goto case_18446744073709551615;
        }

        if (n == 1UL)
        {
          goto case_1;
        }

        if (n == 0UL)
        {
          goto case_0;
        }

        goto switch_default;
        case_18446744073709551614:
        n = len;

        switch_default:
        {
          p = (char *) mempcpy((void *) ((void *) p), (const void *) ((const void *) keys), n);
        }

        goto switch_break;
        case_18446744073709551615:
        {
          memset((void *) (& mb_state), 0, sizeof(mb_state));
        }

        case_1:
        {
          * p = (char) '\\';
          tmp___0 = strchr("$*.[\\^", (int) (* keys));
          p += ((unsigned long) tmp___0) != ((unsigned long) ((void *) 0));
        }

        case_0:
        tmp___1 = p;

        p++;
        * tmp___1 = (char) (* keys);
        n = (size_t) 1;
        goto switch_break;
        switch_break:
        keys += n;

        len -= n;
      }

      while_break___0:
      ;

    }
    while_break:
    * new_len = (size_t) (p - (* new_keys));

    return;
  }
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
          goto case_65;
        }

        if (opt == 66)
        {
          goto case_66;
        }

        if (opt == 67)
        {
          goto case_67;
        }

        if (opt == 68)
        {
          goto case_68;
        }

        if (opt == 69)
        {
          goto case_69;
        }

        if (opt == 70)
        {
          goto case_70;
        }

        if (opt == 80)
        {
          goto case_80;
        }

        if (opt == 71)
        {
          goto case_71;
        }

        if (opt == 88)
        {
          goto case_88;
        }

        if (opt == 72)
        {
          goto case_72;
        }

        if (opt == 73)
        {
          goto case_73;
        }

        if (opt == 84)
        {
          goto case_84;
        }

        if (opt == 85)
        {
          goto case_85;
        }

        if (opt == 117)
        {
          goto case_117;
        }

        if (opt == 86)
        {
          goto case_86;
        }

        if (opt == 97)
        {
          goto case_97;
        }

        if (opt == 98)
        {
          goto case_98;
        }

        if (opt == 99)
        {
          goto case_99;
        }

        if (opt == 100)
        {
          goto case_100;
        }

        if (opt == 101)
        {
          goto case_101;
        }

        if (opt == 102)
        {
          goto case_102;
        }

        if (opt == 104)
        {
          goto case_104;
        }

        if (opt == 105)
        {
          goto case_105;
        }

        if (opt == 121)
        {
          goto case_105;
        }

        if (opt == 76)
        {
          goto case_76;
        }

        if (opt == 108)
        {
          goto case_108;
        }

        if (opt == 109)
        {
          goto case_109;
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
          goto case_113;
        }

        if (opt == 82)
        {
          goto case_82;
        }

        if (opt == 114)
        {
          goto case_114;
        }

        if (opt == 115)
        {
          goto case_115;
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
          goto case_90;
        }

        if (opt == 122)
        {
          goto case_122;
        }

        if (opt == 128)
        {
          goto case_128;
        }

        if (opt == 129)
        {
          goto case_129;
        }

        if (opt == 131)
        {
          goto case_131;
        }

        if (opt == 130)
        {
          goto case_131;
        }

        if (opt == 132)
        {
          goto case_132;
        }

        if (opt == 135)
        {
          goto case_135;
        }

        if (opt == 136)
        {
          goto case_136;
        }

        if (opt == 133)
        {
          goto case_133;
        }

        if (opt == 134)
        {
          goto case_134;
        }

        if (opt == 0)
        {
          goto case_0___0;
        }

        goto switch_default___0;
        case_65:
        {
          context_length_arg((const char *) optarg, & out_after);
        }

        goto switch_break;
        case_66:
        {
          context_length_arg((const char *) optarg, & out_before);
        }

        goto switch_break;
        case_67:
        {
          context_length_arg((const char *) optarg, & default_context);
        }

        goto switch_break;
        case_68:
        {
          tmp___2 = strcmp((const char *) optarg, "read");
        }

        if (tmp___2 == 0)
        {
          devices = (enum __anonenum_devices_71) 1;
        }
        else
        {
          {
            tmp___1 = strcmp((const char *) optarg, "skip");
          }
          if (tmp___1 == 0)
          {
            devices = (enum __anonenum_devices_71) 2;
          }
          else
          {
            {
              tmp___0 = gettext("unknown devices method");
              error(2, 0, (const char *) tmp___0);
            }
          }

        }

        goto switch_break;
        case_69:
        {
          setmatcher("egrep");
        }

        goto switch_break;
        case_70:
        {
          setmatcher("fgrep");
        }

        goto switch_break;
        case_80:
        {
          setmatcher("perl");
        }

        goto switch_break;
        case_71:
        {
          setmatcher("grep");
        }

        goto switch_break;
        case_88:
        {
          setmatcher((const char *) optarg);
        }

        goto switch_break;
        case_72:
        with_filenames = 1;

        no_filenames = 0;
        goto switch_break;
        case_73:
        binary_files = (enum __anonenum_binary_files_72) 2;

        goto switch_break;
        case_84:
        align_tabs = 1;

        goto switch_break;
        case_85:
        {
          dos_binary();
        }

        goto switch_break;
        case_117:
        {
          dos_unix_byte_offsets();
        }

        goto switch_break;
        case_86:
        show_version = 1;

        goto switch_break;
        case_97:
        binary_files = (enum __anonenum_binary_files_72) 1;

        goto switch_break;
        case_98:
        out_byte = 1;

        goto switch_break;
        case_99:
        count_matches = 1;

        goto switch_break;
        case_100:
        {
          tmp___3 = __xargmatch_internal("--directories", (const char *) optarg, directories_args, (const char *) directories_types, sizeof(directories_types[0]), argmatch_die);
          directories = (enum directories_type) directories_types[tmp___3];
        }

        if (((unsigned int) directories) == 3U)
        {
          last_recursive = prev_optind;
        }

        goto switch_break;
        case_101:
        {
          cc = strlen((const char *) optarg);
          keys = (char *) xrealloc((void *) keys, (keycc + cc) + 1UL);
          strcpy((char *) (keys + keycc), (const char *) ((const char *) optarg));
          keycc += cc;
          tmp___4 = keycc;
          keycc++;
          * (keys + tmp___4) = (char) '\n';
        }

        goto switch_break;
        case_102:
        {
          tmp___7 = strcmp((const char *) optarg, "-");
        }

        if (tmp___7 == 0)
        {
          fp = stdin;
        }
        else
        {
          {
            tmp___6 = fopen((const char *) ((const char *) optarg), (const char *) "r");
            fp = tmp___6;
          }
        }

        if (! fp)
        {
          {
            tmp___8 = __errno_location();
            error(2, * tmp___8, "%s", optarg);
          }
        }

        keyalloc = (size_t) 1;
        {
          while (1)
          {
            while_continue___0:
            ;

            if (! (keyalloc <= (keycc + 1UL)))
            {
              goto while_break___0;
            }

            keyalloc *= 2UL;
          }

          while_break___4:
          ;

        }
        while_break___0:
        {
          keys = (char *) xrealloc((void *) keys, keyalloc);
          oldcc = keycc;
        }

        {
          while (1)
          {
            while_continue___1:
            ;

            {
              cc = fread_unlocked((void *) ((void *) (keys + keycc)), (size_t) 1, (keyalloc - 1UL) - keycc, (FILE *) fp);
            }
            if (! (cc != 0UL))
            {
              goto while_break___1;
            }

            keycc += cc;
            if (keycc == (keyalloc - 1UL))
            {
              {
                keys = (char *) x2nrealloc((void *) keys, & keyalloc, sizeof(* keys));
              }
            }

          }

          while_break___5:
          ;

        }
        while_break___1:
        {
          tmp___9 = __errno_location();
          fread_errno = * tmp___9;
          tmp___10 = ferror_unlocked(fp);
        }

        if (tmp___10)
        {
          {
            error(2, fread_errno, "%s", optarg);
          }
        }

        if (((unsigned long) fp) != ((unsigned long) stdin))
        {
          {
            fclose(fp);
          }
        }

        if (oldcc != keycc)
        {
          if (((int) (* (keys + (keycc - 1UL)))) != 10)
          {
            tmp___11 = keycc;
            keycc++;
            * (keys + tmp___11) = (char) '\n';
          }

        }

        goto switch_break;
        case_104:
        with_filenames = 0;

        no_filenames = 1;
        goto switch_break;
        case_105:
        match_icase = 1;

        goto switch_break;
        case_76:
        list_files = - 1;

        goto switch_break;
        case_108:
        list_files = 1;

        goto switch_break;
        case_109:
        {
          tmp___12 = xstrtoimax((const char *) optarg, (char **) 0, 10, & max_count, "");
        }

        if (((unsigned int) tmp___12) == 0U)
        {
          goto case_0;
        }

        if (((unsigned int) tmp___12) == 1U)
        {
          goto case_0;
        }

        goto switch_default;
        case_0:
        goto switch_break___0;

        switch_default:
        {
          tmp___13 = gettext("invalid max count");
          error(2, 0, (const char *) tmp___13);
        }

        switch_break___0:
        ;

        goto switch_break;
        case_110:
        out_line = 1;

        goto switch_break;
        case_111:
        only_matching = 1;

        goto switch_break;
        case_113:
        exit_on_match = 1;

        exit_failure = (volatile int) 0;
        goto switch_break;
        case_82:
        fts_options = 778;

        case_114:
        directories = (enum directories_type) 3;

        last_recursive = prev_optind;
        goto switch_break;
        case_115:
        suppress_errors = 1;

        goto switch_break;
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
        filename_mask = 0;

        goto switch_break;
        case_122:
        eolbyte = (unsigned char) '\000';

        goto switch_break;
        case_128:
        {
          tmp___17 = strcmp((const char *) optarg, "binary");
        }

        if (tmp___17 == 0)
        {
          binary_files = (enum __anonenum_binary_files_72) 0;
        }
        else
        {
          {
            tmp___16 = strcmp((const char *) optarg, "text");
          }
          if (tmp___16 == 0)
          {
            binary_files = (enum __anonenum_binary_files_72) 1;
          }
          else
          {
            {
              tmp___15 = strcmp((const char *) optarg, "without-match");
            }
            if (tmp___15 == 0)
            {
              binary_files = (enum __anonenum_binary_files_72) 2;
            }
            else
            {
              {
                tmp___14 = gettext("unknown binary-files type");
                error(2, 0, (const char *) tmp___14);
              }
            }

          }

        }

        goto switch_break;
        case_129:
        if (optarg)
        {
          {
            tmp___24 = strcasecmp((const char *) optarg, "always");
          }
          if (tmp___24)
          {
            {
              tmp___25 = strcasecmp((const char *) optarg, "yes");
            }
            if (tmp___25)
            {
              {
                tmp___26 = strcasecmp((const char *) optarg, "force");
              }
              if (tmp___26)
              {
                {
                  tmp___21 = strcasecmp((const char *) optarg, "never");
                }
                if (tmp___21)
                {
                  {
                    tmp___22 = strcasecmp((const char *) optarg, "no");
                  }
                  if (tmp___22)
                  {
                    {
                      tmp___23 = strcasecmp((const char *) optarg, "none");
                    }
                    if (tmp___23)
                    {
                      {
                        tmp___18 = strcasecmp((const char *) optarg, "auto");
                      }
                      if (tmp___18)
                      {
                        {
                          tmp___19 = strcasecmp((const char *) optarg, "tty");
                        }
                        if (tmp___19)
                        {
                          {
                            tmp___20 = strcasecmp((const char *) optarg, "if-tty");
                          }
                          if (tmp___20)
                          {
                            show_help = 1;
                          }
                          else
                          {
                            color_option = 2;
                          }

                        }
                        else
                        {
                          color_option = 2;
                        }

                      }
                      else
                      {
                        color_option = 2;
                      }

                    }
                    else
                    {
                      color_option = 0;
                    }

                  }
                  else
                  {
                    color_option = 0;
                  }

                }
                else
                {
                  color_option = 0;
                }

              }
              else
              {
                color_option = 1;
              }

            }
            else
            {
              color_option = 1;
            }

          }
          else
          {
            color_option = 1;
          }

        }
        else
        {
          color_option = 2;
        }


        goto switch_break;
        case_131:
        if (! excluded_patterns)
        {
          {
            excluded_patterns = new_exclude();
          }
        }


        if (opt == 130)
        {
          tmp___27 = 1 << 29;
        }
        else
        {
          tmp___27 = 0;
        }

        {
          add_exclude(excluded_patterns, (const char *) optarg, (1 << 28) | tmp___27);
        }
        goto switch_break;
        case_132:
        if (! excluded_patterns)
        {
          {
            excluded_patterns = new_exclude();
          }
        }


        {
          tmp___29 = add_exclude_file(& add_exclude, excluded_patterns, (const char *) optarg, 1 << 28, (char) '\n');
        }
        if (tmp___29 != 0)
        {
          {
            tmp___28 = __errno_location();
            error(2, * tmp___28, "%s", optarg);
          }
        }

        goto switch_break;
        case_135:
        if (! excluded_directory_patterns)
        {
          {
            excluded_directory_patterns = new_exclude();
          }
        }


        {
          add_exclude(excluded_directory_patterns, (const char *) optarg, 1 << 28);
        }
        goto switch_break;
        case_136:
        group_separator = (const char *) optarg;

        goto switch_break;
        case_133:
        line_buffered = 1;

        goto switch_break;
        case_134:
        label = optarg;

        goto switch_break;
        case_0___0:
        goto switch_break;

        switch_default___0:
        {
          usage(2);
        }

        goto switch_break;
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
        tmp___30 = isatty(1);
      }
      if (tmp___30)
      {
        {
          tmp___31 = should_colorize();
        }
        if (tmp___31)
        {
          tmp___32 = 1;
        }
        else
        {
          tmp___32 = 0;
        }

      }
      else
      {
        tmp___32 = 0;
      }

      color_option = tmp___32;
    }

    {
      init_colorize();
    }
    if (exit_on_match)
    {
      list_files = 0;
    }

    if (exit_on_match | list_files)
    {
      count_matches = 0;
      done_on_match = 1;
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
        tmp___33 = getenv("GREP_COLOR");
        userval = tmp___33;
      }
      if (((unsigned long) userval) != ((unsigned long) ((void *) 0)))
      {
        if (((int) (* userval)) != 0)
        {
          context_match_color = (const char *) userval;
          selected_match_color = context_match_color;
        }

      }

      {
        parse_grep_colors();
      }
    }

    if (show_version)
    {
      {
        tmp___34 = gettext("others, see <http://git.sv.gnu.org/cgit/grep.git/tree/AUTHORS>");
        tmp___35 = proper_name("Mike Haertel");
        version_etc(stdout, program_name, "GNU grep", "2.19", tmp___35, tmp___34, (char *) ((void *) 0));
        exit(0);
      }
    }

    if (show_help)
    {
      {
        usage(0);
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
        out_invert = (_Bool) (((int) out_invert) ^ 1);
        match_words = 0;
        match_lines = match_words;
      }
      else
      {
        keycc--;
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
    else
    {
      {
        usage(2);
      }
    }


    if (((unsigned long) compile) == ((unsigned long) (& Fcompile)))
    {
      {
        tmp___38 = __ctype_get_mb_cur_max();
      }
      if (tmp___38 > 1UL)
      {
        if (match_icase)
        {
          goto _L;
        }
        else
        {
          {
            tmp___39 = contains_encoding_error((const char *) keys, keycc);
          }
          if (tmp___39)
          {
            _L:
            {
              fgrep_to_grep_pattern(keycc, (const char *) keys, & new_keycc, & new_keys);
              free((void *) keys);
              keys = new_keys;
              keycc = new_keycc;
              matcher = "grep";
              compile = & Gcompile;
              execute = & EGexecute;
            }

          }

        }

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
        out_file = 1;
      }
      else
      {
        goto _L___0;
      }

    }
    else
      _L___0:
    if (with_filenames)
    {
      out_file = 1;
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
        exit(1);
      }
    }

    if (fts_options & 2)
    {
      if (((unsigned int) devices) == 0U)
      {
        devices = (enum __anonenum_devices_71) 1;
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
      if (prepended < last_recursive)
      {
        {
          filename_prefix_len = (size_t) 2;
          status = grep_command_line_arg(".");
        }
      }
      else
      {
        {
          status = grep_command_line_arg("-");
        }
      }

    }
    else
    {
      {
        status = grep_command_line_arg("-");
      }
    }


    if (errseen)
    {
      tmp___43 = 2;
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
