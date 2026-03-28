#ifndef _C_LOCALE_H
#define _C_LOCALE_H

#ifdef __cplusplus
extern "C" {
#endif

#define _COMPONENT_NAME_LEN 8

typedef int (*__decode_mbyte)(unsigned short *, const char *, int);
typedef int (*__encode_mbyte)(char *, unsigned short);

struct _loc_coll_cmpt {
    int char_start_value;
    int char_coll_tab_size;
    short char_spec_accents;
    unsigned short *char_coll_table_ptr;
};

struct _loc_ctype_cmpt {
    /* 0x00 */ __decode_mbyte decode_mb;
    /* 0x04 */ __encode_mbyte encode_wc;
};

struct _loc_time_cmpt {
    char *am_pm;
    char *DateTime_Format;
    char *Twelve_hr_format;
    char *Date_Format;
    char *Time_Format;
    char *Day_Names;
    char *MonthNames;
    char *TimeZone;
};

struct __locale {
    /* 0x00 */ struct _loc_time_cmpt *time_cmpt_ptr;
    /* 0x04 */ struct _loc_coll_cmpt *coll_cmpt_ptr;
    /* 0x08 */ struct _loc_ctype_cmpt *ctype_cmpt_ptr;
};

struct lconv {
    char *decimal_point;
    char *thousands_sep;
    char *grouping;
    char *mon_decimal_point;
    char *mon_thousands_sep;
    char *mon_grouping;
    char *positive_sign;
    char *negative_sign;
    char *currency_symbol;
    char frac_digits;
    char p_cs_precedes;
    char n_cs_precedes;
    char p_sep_by_space;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    char *int_curr_symbol;
    char int_frac_digits;
    char int_p_cs_precedes;
    char int_n_cs_precedes;
    char int_p_sep_by_space;
    char int_n_sep_by_space;
    char int_p_sign_posn;
    char int_n_sign_posn;
};

extern struct lconv __lconv;
extern struct __locale _current_locale;

#ifdef __cplusplus
}
#endif

#endif
