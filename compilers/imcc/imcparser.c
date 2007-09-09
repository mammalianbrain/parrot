/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     LOW_PREC = 258,
     PARAM = 259,
     PRAGMA = 260,
     N_OPERATORS = 261,
     HLL = 262,
     HLL_MAP = 263,
     GOTO = 264,
     ARG = 265,
     IF = 266,
     UNLESS = 267,
     PNULL = 268,
     ADV_FLAT = 269,
     ADV_SLURPY = 270,
     ADV_OPTIONAL = 271,
     ADV_OPT_FLAG = 272,
     ADV_NAMED = 273,
     ADV_ARROW = 274,
     NEW = 275,
     NAMESPACE = 276,
     ENDNAMESPACE = 277,
     DOT_METHOD = 278,
     SUB = 279,
     SYM = 280,
     LOCAL = 281,
     LEXICAL = 282,
     CONST = 283,
     INC = 284,
     DEC = 285,
     GLOBAL_CONST = 286,
     PLUS_ASSIGN = 287,
     MINUS_ASSIGN = 288,
     MUL_ASSIGN = 289,
     DIV_ASSIGN = 290,
     CONCAT_ASSIGN = 291,
     BAND_ASSIGN = 292,
     BOR_ASSIGN = 293,
     BXOR_ASSIGN = 294,
     FDIV = 295,
     FDIV_ASSIGN = 296,
     MOD_ASSIGN = 297,
     SHR_ASSIGN = 298,
     SHL_ASSIGN = 299,
     SHR_U_ASSIGN = 300,
     SHIFT_LEFT = 301,
     SHIFT_RIGHT = 302,
     INTV = 303,
     FLOATV = 304,
     STRINGV = 305,
     PMCV = 306,
     LOG_XOR = 307,
     RELOP_EQ = 308,
     RELOP_NE = 309,
     RELOP_GT = 310,
     RELOP_GTE = 311,
     RELOP_LT = 312,
     RELOP_LTE = 313,
     GLOBAL = 314,
     GLOBALOP = 315,
     ADDR = 316,
     RESULT = 317,
     RETURN = 318,
     YIELDT = 319,
     GET_RESULTS = 320,
     POW = 321,
     SHIFT_RIGHT_U = 322,
     LOG_AND = 323,
     LOG_OR = 324,
     COMMA = 325,
     ESUB = 326,
     DOTDOT = 327,
     PCC_BEGIN = 328,
     PCC_END = 329,
     PCC_CALL = 330,
     PCC_SUB = 331,
     PCC_BEGIN_RETURN = 332,
     PCC_END_RETURN = 333,
     PCC_BEGIN_YIELD = 334,
     PCC_END_YIELD = 335,
     NCI_CALL = 336,
     METH_CALL = 337,
     INVOCANT = 338,
     MAIN = 339,
     LOAD = 340,
     INIT = 341,
     IMMEDIATE = 342,
     POSTCOMP = 343,
     METHOD = 344,
     ANON = 345,
     OUTER = 346,
     NEED_LEX = 347,
     MULTI = 348,
     VTABLE_METHOD = 349,
     LOADLIB = 350,
     UNIQUE_REG = 351,
     LABEL = 352,
     EMIT = 353,
     EOM = 354,
     IREG = 355,
     NREG = 356,
     SREG = 357,
     PREG = 358,
     IDENTIFIER = 359,
     REG = 360,
     MACRO = 361,
     ENDM = 362,
     STRINGC = 363,
     INTC = 364,
     FLOATC = 365,
     USTRINGC = 366,
     PARROT_OP = 367,
     VAR = 368,
     LINECOMMENT = 369,
     FILECOMMENT = 370,
     DOT = 371,
     CONCAT = 372,
     POINTY = 373
   };
#endif
/* Tokens.  */
#define LOW_PREC 258
#define PARAM 259
#define PRAGMA 260
#define N_OPERATORS 261
#define HLL 262
#define HLL_MAP 263
#define GOTO 264
#define ARG 265
#define IF 266
#define UNLESS 267
#define PNULL 268
#define ADV_FLAT 269
#define ADV_SLURPY 270
#define ADV_OPTIONAL 271
#define ADV_OPT_FLAG 272
#define ADV_NAMED 273
#define ADV_ARROW 274
#define NEW 275
#define NAMESPACE 276
#define ENDNAMESPACE 277
#define DOT_METHOD 278
#define SUB 279
#define SYM 280
#define LOCAL 281
#define LEXICAL 282
#define CONST 283
#define INC 284
#define DEC 285
#define GLOBAL_CONST 286
#define PLUS_ASSIGN 287
#define MINUS_ASSIGN 288
#define MUL_ASSIGN 289
#define DIV_ASSIGN 290
#define CONCAT_ASSIGN 291
#define BAND_ASSIGN 292
#define BOR_ASSIGN 293
#define BXOR_ASSIGN 294
#define FDIV 295
#define FDIV_ASSIGN 296
#define MOD_ASSIGN 297
#define SHR_ASSIGN 298
#define SHL_ASSIGN 299
#define SHR_U_ASSIGN 300
#define SHIFT_LEFT 301
#define SHIFT_RIGHT 302
#define INTV 303
#define FLOATV 304
#define STRINGV 305
#define PMCV 306
#define LOG_XOR 307
#define RELOP_EQ 308
#define RELOP_NE 309
#define RELOP_GT 310
#define RELOP_GTE 311
#define RELOP_LT 312
#define RELOP_LTE 313
#define GLOBAL 314
#define GLOBALOP 315
#define ADDR 316
#define RESULT 317
#define RETURN 318
#define YIELDT 319
#define GET_RESULTS 320
#define POW 321
#define SHIFT_RIGHT_U 322
#define LOG_AND 323
#define LOG_OR 324
#define COMMA 325
#define ESUB 326
#define DOTDOT 327
#define PCC_BEGIN 328
#define PCC_END 329
#define PCC_CALL 330
#define PCC_SUB 331
#define PCC_BEGIN_RETURN 332
#define PCC_END_RETURN 333
#define PCC_BEGIN_YIELD 334
#define PCC_END_YIELD 335
#define NCI_CALL 336
#define METH_CALL 337
#define INVOCANT 338
#define MAIN 339
#define LOAD 340
#define INIT 341
#define IMMEDIATE 342
#define POSTCOMP 343
#define METHOD 344
#define ANON 345
#define OUTER 346
#define NEED_LEX 347
#define MULTI 348
#define VTABLE_METHOD 349
#define LOADLIB 350
#define UNIQUE_REG 351
#define LABEL 352
#define EMIT 353
#define EOM 354
#define IREG 355
#define NREG 356
#define SREG 357
#define PREG 358
#define IDENTIFIER 359
#define REG 360
#define MACRO 361
#define ENDM 362
#define STRINGC 363
#define INTC 364
#define FLOATC 365
#define USTRINGC 366
#define PARROT_OP 367
#define VAR 368
#define LINECOMMENT 369
#define FILECOMMENT 370
#define DOT 371
#define CONCAT 372
#define POINTY 373




/* Copy the first part of user declarations.  */
#line 1 "compilers/imcc/imcc.y"

/*
 * imcc.y
 *
 * Intermediate Code Compiler for Parrot.
 *
 * Copyright (C) 2002 Melvin Smith <melvin.smith@mindspring.com>
 * Copyright (C) 2002-2007, The Perl Foundation.
 *
 * Grammar for the parser.
 *
 * $Id$
 *
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define _PARSER
#define PARSER_MAIN
#include "imc.h"
#include "parrot/dynext.h"
#include "pbc.h"
#include "parser.h"

#define YYDEBUG 1
#define YYERROR_VERBOSE 1

/*
 * we use a pure parser with the interpreter as a parameter this still
 * doesn't make the parser reentrant, there are too many globals
 * around.
 */

/*
 * Choosing instructions for Parrot is pretty easy since many are
 * polymorphic.
 */


/*
 * MK_I: build and emitb instruction by INS
 *
 * fmt may contain:
 *   op %s, %s # comment
 * or just
 *   op
 *
 *
 *  NOTE: Most usage of this function is with
 *        IMCC_INFO(interp)->cur_unit, but there are some
 *        exceptions. Thus, we can't easily factorize that piece of
 *        code.
 */
static Instruction *
MK_I(Interp *interp, IMC_Unit * unit, const char * fmt, int n, ...)
{
    char opname[64];
    char *p;
    const char *q;
    va_list ap;
    SymReg *r[IMCC_MAX_FIX_REGS];
    int i;

    for (p = opname, q = fmt; *q && *q != ' '; )
        *p++ = *q++;
    *p = 0;
    if (!*q)
        fmt = 0;
    else
        fmt = ++q;
#if OPDEBUG
    fprintf(stderr, "op '%s' format '%s' (%d)\n", opname, fmt?:"",n);
#endif
    va_start(ap, n);
    i = 0;
    for (i = 0; i < n; ++i) {
        r[i] = va_arg(ap, SymReg *);
    }
    va_end(ap);
    return INS(interp, unit, opname, fmt, r, n,
               IMCC_INFO(interp)->keyvec, 1);
}

static Instruction*
mk_pmc_const(Parrot_Interp interp, IMC_Unit *unit,
             char *type, SymReg *left, char *constant)
{
    int type_enum = atoi(type);
    SymReg *rhs;
    SymReg *r[2];
    char *name;
    int len, ascii;

    if (left->type == VTADDRESS) {      /* IDENTIFIER */
        if (IMCC_INFO(interp)->state->pasm_file) {
            IMCC_fataly(interp, E_SyntaxError,
                        "Ident as PMC constant",
                        " %s\n", left->name);
        }
        left->type = VTIDENTIFIER;
        left->set = 'P';
    }
    r[0] = left;
    ascii = (*constant == '\'' || *constant == '"' );
    if (ascii) {
        /* strip delimiters */
        len = strlen(constant);
        name = (char *)mem_sys_allocate(len);
        constant[len - 1] = '\0';
        strcpy(name, constant + 1);
        free(constant);
    }
    else {
        name = constant;
    }
    switch (type_enum) {
    case enum_class_Sub:
    case enum_class_Coroutine:
        rhs = mk_const(interp, name, 'p');
        if (!ascii)
            rhs->type |= VT_ENCODED;
        r[1] = rhs;
        rhs->pmc_type = type_enum;
        rhs->usage = U_FIXUP;
        return INS(interp, unit, "set_p_pc", "", r, 2, 0, 1);
    }
    rhs = mk_const(interp, name, 'P');
    r[1] = rhs;
    rhs->pmc_type = type_enum;
    return INS(interp, unit, "set_p_pc", "", r, 2, 0, 1);
}

static Instruction*
func_ins(Parrot_Interp interp, IMC_Unit *unit, SymReg *lhs, char *op,
         SymReg ** r, int n, int keyv, int emit)
{
    int i;
    /* shift regs up by 1 */
    for (i = n - 1; i >= 0; --i)
        r[i+1] = r[i];
    r[0] = lhs;
    /* shift keyvec */
    keyv <<= 1;
    return INS(interp, unit, op, "", r, n+1, keyv, emit);
}
/*
 * special instructions
 *
 * labels and such
 */

static void clear_state(Interp *interp)
{
    IMCC_INFO(interp) -> nargs = 0;
    IMCC_INFO(interp) -> keyvec = 0;
}

Instruction * INS_LABEL(Interp * interp, IMC_Unit * unit, SymReg * r0, int emit)
{

    Instruction *ins;

    ins = _mk_instruction("","%s:", 1, &r0, 0);
    ins->type = ITLABEL;
    r0->first_ins = ins;
    if (emit)
        emitb(interp, unit, ins);
    return ins;
}

static Instruction * iLABEL(Interp *interp, IMC_Unit * unit, SymReg * r0) {
    Instruction *i = INS_LABEL(interp, unit, r0, 1);
    i->line = IMCC_INFO(interp)->line;
    clear_state(interp);
    return i;
}

static Instruction * iSUBROUTINE(Interp *interp, IMC_Unit * unit, SymReg * r) {
    Instruction *i;
    i =  iLABEL(interp, unit, r);
    r->type = (r->type & VT_ENCODED) ? VT_PCC_SUB|VT_ENCODED : VT_PCC_SUB;
    r->pcc_sub = (pcc_sub_t*)calloc(1, sizeof(struct pcc_sub_t));
    IMCC_INFO(interp)->cur_call = r;
    i->line = IMCC_INFO(interp)->line;
    add_namespace(interp, unit);
    return i;
}

/*
 * substr or X = P[key]
 */
static Instruction *
iINDEXFETCH(Interp *interp, IMC_Unit * unit, SymReg * r0, SymReg * r1,
            SymReg * r2)
{
    if (r0->set == 'S' && r1->set == 'S' && r2->set == 'I') {
        SymReg * r3 = mk_const(interp, str_dup("1"), 'I');
        return MK_I(interp, unit, "substr %s, %s, %s, 1", 4, r0, r1, r2, r3);
    }
    IMCC_INFO(interp) -> keyvec |= KEY_BIT(2);
    return MK_I(interp, unit, "set %s, %s[%s]", 3, r0,r1,r2);
}

/*
 * substr or P[key] = X
 */

static Instruction *
iINDEXSET(Interp *interp, IMC_Unit * unit,
          SymReg * r0, SymReg * r1, SymReg * r2)
{
    if (r0->set == 'S' && r1->set == 'I' && r2->set == 'S') {
        SymReg * r3 = mk_const(interp, str_dup("1"), 'I');
        MK_I(interp, unit, "substr %s, %s, %s, %s", 4, r0, r1,r3, r2);
    }
    else if (r0->set == 'P') {
        IMCC_INFO(interp) -> keyvec |= KEY_BIT(1);
        MK_I(interp, unit, "set %s[%s], %s", 3, r0,r1,r2);
    }
    else {
        IMCC_fataly(interp, E_SyntaxError,
            "unsupported indexed set op\n");
    }
    return 0;
}

static char * inv_op(char *op) {
    int n;
    return (char *) get_neg_op(op, &n);
}

Instruction *
IMCC_create_itcall_label(Interp* interp)
{
    char name[128];
    SymReg * r;
    Instruction *i;

    sprintf(name, "%cpcc_sub_call_%d", IMCC_INTERNAL_CHAR, IMCC_INFO(interp)->cnr++);
    r = mk_pcc_sub(interp, str_dup(name), 0);
    i = iLABEL(interp, IMCC_INFO(interp)->cur_unit, r);
    IMCC_INFO(interp)->cur_call = r;
    i->type = ITCALL | ITPCCSUB;
    return i;
}


static SymReg *
mk_sub_address_fromc(Interp *interp, char * name)
{
    /* name is a quoted sub name */
    SymReg *r;

    name[strlen(name) - 1] = '\0';
    r = mk_sub_address(interp, str_dup(name + 1));
    mem_sys_free(name);
    return r;
}

static SymReg *
mk_sub_address_u(Interp *interp, char * name)
{
    SymReg *r = mk_sub_address(interp, name);
    r->type |= VT_ENCODED;
    return r;
}

void
IMCC_itcall_sub(Interp* interp, SymReg* sub)
{
    IMCC_INFO(interp)->cur_call->pcc_sub->sub = sub;
    if (IMCC_INFO(interp)->cur_obj) {
        if (IMCC_INFO(interp)->cur_obj->set != 'P')
            IMCC_fataly(interp, E_SyntaxError, "object isn't a PMC");
        IMCC_INFO(interp)->cur_call->pcc_sub->object = IMCC_INFO(interp)->cur_obj;
        IMCC_INFO(interp)->cur_obj = NULL;
    }
    if (IMCC_INFO(interp)->cur_call->pcc_sub->sub->pmc_type == enum_class_NCI)
        IMCC_INFO(interp)->cur_call->pcc_sub->flags |= isNCI;
    if (IMCC_INFO(interp)->cur_unit->type == IMC_PCCSUB)
        IMCC_INFO(interp)->cur_unit->instructions->r[0]->pcc_sub->calls_a_sub |= 1;
}

static void
begin_return_or_yield(Interp *interp, int yield)
{
    Instruction *i, *ins;
    char name[128];
    ins = IMCC_INFO(interp)->cur_unit->instructions;
    if (!ins || !ins->r[0] || !(ins->r[0]->type & VT_PCC_SUB))
        IMCC_fataly(interp, E_SyntaxError,
                    "yield or return directive outside pcc subroutine\n");
    if (yield)
       ins->r[0]->pcc_sub->calls_a_sub = 1 | ITPCCYIELD;
    sprintf(name, yield ? "%cpcc_sub_yield_%d" : "%cpcc_sub_ret_%d",
            IMCC_INTERNAL_CHAR, IMCC_INFO(interp)->cnr++);
    interp->imc_info->sr_return = mk_pcc_sub(interp, str_dup(name), 0);
    i = iLABEL(interp, IMCC_INFO(interp)->cur_unit, interp->imc_info->sr_return);
    i->type = yield ? ITPCCSUB | ITLABEL | ITPCCYIELD : ITPCCSUB | ITLABEL ;
    interp->imc_info->asm_state = yield ? AsmInYield : AsmInReturn;
}

static void
set_lexical(Interp *interp, SymReg *r, char *name)
{
    SymReg *n;
    r->usage |= U_LEXICAL;
    n = mk_const(interp, name, 'S');
    if (n == r->reg) {
        IMCC_fataly(interp, E_SyntaxError,
            "register %s already declared as lexical %s",
            r->name, n->name);
    }
    /* chain all names in r->reg */
    n->reg = r->reg;
    r->reg = n;
}


static void
add_pcc_named_arg(Interp *interp, SymReg *cur_call, char *name, SymReg *value)
{
    SymReg *r;
    r = mk_const(interp, name, 'S');
    r->type |= VT_NAMED;
    add_pcc_arg(cur_call, r);
    add_pcc_arg(cur_call, value);
}


static void
add_pcc_named_result(Interp *interp, SymReg *cur_call, char *name, SymReg *value)
{
    SymReg *r;
    r = mk_const(interp, name, 'S');
    r->type |= VT_NAMED;
    add_pcc_result(cur_call, r);
    add_pcc_result(cur_call, value);
}


static void
add_pcc_named_param(Interp *interp, SymReg *cur_call, char *name, SymReg *value)
{
    SymReg *r;
    r = mk_const(interp, name, 'S');
    r->type |= VT_NAMED;
    add_pcc_param(cur_call, r);
    add_pcc_param(cur_call, value);
}

static void
add_pcc_named_return(Interp *interp, SymReg *cur_call, char *name, SymReg *value)
{
    SymReg *r;
    r = mk_const(interp, name, 'S');
    r->type |= VT_NAMED;
    add_pcc_return(cur_call, r);
    add_pcc_return(cur_call, value);
}

static void
adv_named_set(Interp *interp, char *name) {
    if (IMCC_INFO(interp)->adv_named_id) {
        IMCC_fataly(interp, E_SyntaxError,
                    "Named parameter with more than one name.\n");
    }
    IMCC_INFO(interp)->adv_named_id = name;
}

static void
do_loadlib(Interp *interp, char *lib)
{
    STRING *s = string_unescape_cstring(interp, lib + 1, '"', NULL);
    Parrot_load_lib(interp, s, NULL);
    Parrot_register_HLL_lib(interp, s);
}



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 384 "compilers/imcc/imcc.y"
{
    IdList * idlist;
    int t;
    char * s;
    SymReg * sr;
    Instruction *i;
}
/* Line 187 of yacc.c.  */
#line 723 "compilers/imcc/imcparser.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 736 "compilers/imcc/imcparser.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  43
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   836

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  135
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  120
/* YYNRULES -- Number of rules.  */
#define YYNRULES  343
/* YYNRULES -- Number of states.  */
#define YYNSTATES  596

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   373

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       4,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   125,     2,     2,     2,   131,   132,     2,
     123,   124,   129,   128,     2,   126,     2,   130,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   134,
       2,   120,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   121,     2,   122,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   133,     2,   127,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    12,    14,    16,    18,
      20,    22,    25,    27,    29,    33,    36,    40,    43,    48,
      53,    57,    63,    64,    71,    72,    79,    81,    83,    85,
      88,    92,    95,    97,    99,   101,   103,   105,   106,   110,
     111,   116,   119,   124,   125,   127,   128,   133,   134,   136,
     140,   144,   145,   146,   147,   148,   159,   160,   162,   166,
     167,   171,   175,   181,   182,   184,   189,   194,   199,   201,
     206,   207,   211,   213,   215,   217,   219,   221,   223,   225,
     229,   230,   232,   233,   234,   235,   246,   247,   257,   258,
     261,   262,   266,   267,   269,   271,   275,   277,   279,   281,
     283,   285,   287,   289,   291,   293,   295,   297,   303,   307,
     311,   315,   319,   325,   331,   332,   336,   339,   340,   344,
     348,   349,   354,   355,   358,   360,   362,   364,   366,   371,
     373,   375,   377,   379,   381,   382,   388,   390,   391,   394,
     398,   402,   403,   409,   410,   416,   417,   419,   423,   427,
     433,   435,   438,   439,   442,   445,   447,   449,   450,   452,
     455,   457,   459,   463,   466,   468,   472,   475,   477,   479,
     481,   484,   487,   488,   493,   498,   499,   506,   508,   509,
     516,   519,   522,   525,   528,   530,   532,   534,   535,   537,
     539,   541,   543,   545,   547,   551,   556,   561,   566,   572,
     578,   584,   590,   596,   602,   608,   614,   620,   626,   632,
     638,   644,   650,   656,   662,   668,   674,   680,   686,   692,
     698,   704,   711,   718,   725,   733,   738,   743,   750,   757,
     765,   770,   775,   780,   785,   792,   800,   804,   805,   815,
     817,   819,   821,   825,   826,   832,   836,   840,   844,   848,
     852,   856,   860,   864,   868,   872,   876,   880,   884,   889,
     891,   893,   895,   897,   901,   905,   909,   911,   913,   914,
     920,   921,   925,   927,   933,   937,   940,   941,   944,   946,
     948,   953,   956,   960,   966,   968,   972,   973,   980,   987,
     993,   999,  1004,  1009,  1014,  1019,  1021,  1023,  1025,  1027,
    1029,  1031,  1033,  1035,  1036,  1038,  1042,  1044,  1046,  1051,
    1055,  1057,  1059,  1061,  1063,  1065,  1067,  1069,  1071,  1073,
    1075,  1077,  1078,  1081,  1082,  1085,  1087,  1091,  1092,  1097,
    1099,  1103,  1106,  1109,  1111,  1113,  1115,  1117,  1119,  1121,
    1123,  1125,  1127,  1129
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     136,     0,    -1,   137,    -1,   138,    -1,   137,   138,    -1,
     157,    -1,   143,    -1,   142,    -1,   159,    -1,   174,    -1,
     154,    -1,   107,     4,    -1,   139,    -1,     4,    -1,     6,
     140,     4,    -1,   141,     4,    -1,    96,   109,     4,    -1,
       7,   110,    -1,     8,   109,    71,   109,    -1,     9,   110,
      71,   110,    -1,    60,   216,   105,    -1,    60,   216,   105,
     120,   253,    -1,    -1,    29,   144,   216,   105,   120,   253,
      -1,    -1,    29,   146,   110,   243,   120,   147,    -1,   109,
      -1,   112,    -1,   149,    -1,   148,   149,    -1,   206,   150,
       4,    -1,   107,     4,    -1,   116,    -1,   115,    -1,   157,
      -1,   145,    -1,   139,    -1,    -1,   151,   113,   153,    -1,
      -1,    77,   152,   182,    98,    -1,    14,   244,    -1,    28,
     109,    71,   106,    -1,    -1,   237,    -1,    -1,    99,   155,
     156,   100,    -1,    -1,   148,    -1,    22,   158,     4,    -1,
     121,   245,   122,    -1,    -1,    -1,    -1,    -1,    25,   160,
     240,   161,   182,     4,   162,   163,   173,    72,    -1,    -1,
       4,    -1,   163,   164,     4,    -1,    -1,     5,   165,   166,
      -1,   216,   105,   191,    -1,   216,   109,    20,   105,   191,
      -1,    -1,    71,    -1,    94,   123,   171,   124,    -1,    92,
     123,   109,   124,    -1,    92,   123,   105,   124,    -1,    95,
      -1,    95,   123,   109,   124,    -1,    -1,   171,    71,   172,
      -1,   172,    -1,    49,    -1,    50,    -1,    52,    -1,    51,
      -1,   105,    -1,   109,    -1,   121,   245,   122,    -1,    -1,
     203,    -1,    -1,    -1,    -1,    77,   175,   105,   176,   182,
       4,   177,   163,   173,    72,    -1,    -1,    74,     4,   179,
     186,   181,   185,   180,   188,    75,    -1,    -1,   208,     4,
      -1,    -1,    84,   244,     4,    -1,    -1,   183,    -1,   184,
      -1,   183,   167,   184,    -1,    86,    -1,    87,    -1,    85,
      -1,    88,    -1,    89,    -1,    91,    -1,    90,    -1,    93,
      -1,   168,    -1,   169,    -1,   170,    -1,    76,   244,    71,
     244,     4,    -1,    76,   244,     4,    -1,    82,   244,     4,
      -1,    83,   236,     4,    -1,    83,   109,     4,    -1,    83,
     236,    71,   244,     4,    -1,    83,   109,    71,   244,     4,
      -1,    -1,   186,   187,     4,    -1,    11,   229,    -1,    -1,
     188,   189,     4,    -1,    63,   236,   191,    -1,    -1,    27,
     190,   216,   211,    -1,    -1,   191,   192,    -1,    16,    -1,
      17,    -1,    18,    -1,    19,    -1,    19,   123,   109,   124,
      -1,    97,    -1,    78,    -1,    80,    -1,    79,    -1,    81,
      -1,    -1,   193,     4,   196,   197,   194,    -1,   199,    -1,
      -1,   197,     4,    -1,   197,   198,     4,    -1,    64,   244,
     230,    -1,    -1,    64,   123,   200,   202,   124,    -1,    -1,
      65,   123,   201,   202,   124,    -1,    -1,   229,    -1,   109,
      20,   244,    -1,   202,    71,   229,    -1,   202,    71,   109,
      20,   244,    -1,   205,    -1,   203,   205,    -1,    -1,   204,
     209,    -1,   107,     4,    -1,   116,    -1,   115,    -1,    -1,
     207,    -1,   207,   208,    -1,   208,    -1,    98,    -1,   206,
     212,     4,    -1,     1,     4,    -1,   211,    -1,   210,    71,
     211,    -1,   105,    97,    -1,   105,    -1,   218,    -1,   234,
      -1,    22,   105,    -1,    23,   105,    -1,    -1,    27,   213,
     216,   210,    -1,    28,   109,    71,   236,    -1,    -1,    29,
     214,   216,   105,   120,   253,    -1,   145,    -1,    -1,    32,
     215,   216,   105,   120,   253,    -1,    64,   226,    -1,    10,
     242,    -1,   113,   237,    -1,    14,   244,    -1,   226,    -1,
     178,    -1,   195,    -1,    -1,    49,    -1,    50,    -1,    51,
      -1,    52,    -1,   217,    -1,   105,    -1,   236,   120,   244,
      -1,   236,   120,   125,   244,    -1,   236,   120,   126,   244,
      -1,   236,   120,   127,   244,    -1,   236,   120,   244,   128,
     244,    -1,   236,   120,   244,   126,   244,    -1,   236,   120,
     244,   129,   244,    -1,   236,   120,   244,    67,   244,    -1,
     236,   120,   244,   130,   244,    -1,   236,   120,   244,    41,
     244,    -1,   236,   120,   244,   131,   244,    -1,   236,   120,
     244,   118,   244,    -1,   236,   120,   244,    54,   244,    -1,
     236,   120,   244,    55,   244,    -1,   236,   120,   244,    56,
     244,    -1,   236,   120,   244,    58,   244,    -1,   236,   120,
     244,    59,   244,    -1,   236,   120,   244,    57,   244,    -1,
     236,   120,   244,    47,   244,    -1,   236,   120,   244,    48,
     244,    -1,   236,   120,   244,    68,   244,    -1,   236,   120,
     244,    69,   244,    -1,   236,   120,   244,    70,   244,    -1,
     236,   120,   244,    53,   244,    -1,   236,   120,   244,   132,
     244,    -1,   236,   120,   244,   133,   244,    -1,   236,   120,
     244,   127,   244,    -1,   236,   120,   244,   121,   245,   122,
      -1,   236,   121,   245,   122,   120,   244,    -1,   236,   120,
      21,   217,    71,   244,    -1,   236,   120,    21,   217,   121,
     245,   122,    -1,   236,   120,    21,   217,    -1,   236,   120,
      21,   244,    -1,   236,   120,    21,   121,   245,   122,    -1,
     236,   120,    21,   244,    71,   244,    -1,   236,   120,    21,
     244,   121,   245,   122,    -1,   236,   120,    62,   105,    -1,
     236,   120,    61,   254,    -1,    61,   254,   120,   244,    -1,
      21,   236,    71,   244,    -1,    21,   236,    71,   244,    71,
     244,    -1,    21,   236,    71,   244,   121,   245,   122,    -1,
     236,   120,   226,    -1,    -1,   123,   219,   233,   124,   120,
     224,   123,   228,   124,    -1,   220,    -1,   222,    -1,   223,
      -1,   236,   120,    14,    -1,    -1,    66,   221,   123,   233,
     124,    -1,   236,    33,   244,    -1,   236,    34,   244,    -1,
     236,    35,   244,    -1,   236,    36,   244,    -1,   236,    43,
     244,    -1,   236,    42,   244,    -1,   236,    37,   244,    -1,
     236,    38,   244,    -1,   236,    39,   244,    -1,   236,    40,
     244,    -1,   236,    44,   244,    -1,   236,    45,   244,    -1,
     236,    46,   244,    -1,   236,   120,   113,   153,    -1,   105,
      -1,   109,    -1,   112,    -1,   236,    -1,   236,   225,   241,
      -1,   236,   225,   109,    -1,   236,   225,   236,    -1,   119,
      -1,   117,    -1,    -1,   224,   227,   123,   228,   124,    -1,
      -1,   228,    71,   229,    -1,   229,    -1,   228,    71,   109,
      20,   244,    -1,   109,    20,   244,    -1,   244,   230,    -1,
      -1,   230,   231,    -1,    15,    -1,    19,    -1,    19,   123,
     109,   124,    -1,   236,   191,    -1,   233,    71,   232,    -1,
     233,    71,   109,    20,   236,    -1,   232,    -1,   109,    20,
     236,    -1,    -1,    12,   244,   235,   244,    10,   242,    -1,
      13,   244,   235,   244,    10,   242,    -1,    12,    14,   244,
      10,   242,    -1,    13,    14,   244,    10,   242,    -1,    12,
     244,    10,   242,    -1,    13,   244,    10,   242,    -1,    12,
     244,    71,   242,    -1,    13,   244,    71,   242,    -1,    54,
      -1,    55,    -1,    56,    -1,    57,    -1,    58,    -1,    59,
      -1,   114,    -1,   252,    -1,    -1,   238,    -1,   238,    71,
     239,    -1,   239,    -1,   243,    -1,   236,   121,   245,   122,
      -1,   121,   247,   122,    -1,   241,    -1,   109,    -1,   112,
      -1,   105,    -1,   113,    -1,   105,    -1,   113,    -1,   242,
      -1,   244,    -1,   236,    -1,   253,    -1,    -1,   246,   249,
      -1,    -1,   248,   249,    -1,   251,    -1,   249,   134,   251,
      -1,    -1,   249,    71,   250,   251,    -1,   244,    -1,   244,
      73,   244,    -1,    73,   244,    -1,   244,    73,    -1,   101,
      -1,   102,    -1,   103,    -1,   104,    -1,   106,    -1,   110,
      -1,   111,    -1,   109,    -1,   112,    -1,   103,    -1,   109,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   475,   475,   479,   480,   484,   485,   486,   487,   490,
     493,   496,   497,   498,   501,   502,   503,   506,   514,   526,
     535,   541,   550,   550,   555,   555,   559,   560,   564,   565,
     569,   570,   571,   572,   573,   574,   575,   578,   578,   585,
     584,   595,   597,   602,   606,   610,   610,   620,   622,   626,
     641,   642,   647,   651,   654,   646,   660,   661,   662,   673,
     673,   677,   682,   692,   693,   697,   700,   703,   708,   712,
     719,   720,   721,   725,   726,   727,   728,   729,   739,   749,
     752,   754,   758,   759,   760,   758,   767,   766,   799,   800,
     804,   805,   810,   811,   815,   816,   820,   821,   822,   823,
     824,   825,   826,   827,   828,   829,   830,   834,   839,   841,
     846,   848,   850,   854,   862,   863,   867,   872,   873,   877,
     878,   878,   891,   892,   896,   897,   898,   899,   900,   901,
     906,   907,   911,   912,   917,   916,   921,   927,   928,   931,
     937,   942,   941,   949,   948,   958,   959,   966,   968,   975,
     981,   982,   994,   998,  1000,  1001,  1002,  1006,  1007,  1011,
    1012,  1016,  1024,  1026,  1035,  1042,  1051,  1059,  1069,  1070,
    1071,  1072,  1073,  1073,  1088,  1092,  1092,  1094,  1095,  1095,
    1097,  1101,  1102,  1108,  1110,  1111,  1112,  1113,  1117,  1118,
    1119,  1120,  1121,  1125,  1136,  1138,  1140,  1142,  1144,  1146,
    1148,  1150,  1152,  1154,  1156,  1158,  1160,  1162,  1164,  1166,
    1168,  1170,  1172,  1174,  1176,  1178,  1180,  1182,  1184,  1186,
    1188,  1190,  1192,  1194,  1196,  1198,  1200,  1202,  1204,  1206,
    1208,  1211,  1213,  1217,  1219,  1221,  1224,  1231,  1230,  1239,
    1240,  1241,  1242,  1246,  1246,  1252,  1254,  1256,  1258,  1260,
    1262,  1264,  1266,  1268,  1270,  1272,  1274,  1276,  1281,  1290,
    1291,  1292,  1293,  1298,  1299,  1300,  1303,  1304,  1309,  1308,
    1318,  1319,  1326,  1333,  1335,  1339,  1343,  1344,  1348,  1349,
    1350,  1353,  1357,  1364,  1366,  1373,  1374,  1378,  1380,  1382,
    1384,  1386,  1388,  1390,  1392,  1397,  1398,  1399,  1400,  1401,
    1402,  1406,  1407,  1411,  1412,  1416,  1417,  1421,  1422,  1429,
    1436,  1437,  1438,  1442,  1443,  1447,  1448,  1452,  1453,  1457,
    1458,  1461,  1461,  1468,  1468,  1476,  1477,  1480,  1480,  1486,
    1491,  1496,  1497,  1501,  1502,  1503,  1504,  1505,  1509,  1510,
    1511,  1512,  1516,  1517
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LOW_PREC", "'\\n'", "PARAM", "PRAGMA",
  "N_OPERATORS", "HLL", "HLL_MAP", "GOTO", "ARG", "IF", "UNLESS", "PNULL",
  "ADV_FLAT", "ADV_SLURPY", "ADV_OPTIONAL", "ADV_OPT_FLAG", "ADV_NAMED",
  "ADV_ARROW", "NEW", "NAMESPACE", "ENDNAMESPACE", "DOT_METHOD", "SUB",
  "SYM", "LOCAL", "LEXICAL", "CONST", "INC", "DEC", "GLOBAL_CONST",
  "PLUS_ASSIGN", "MINUS_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN",
  "CONCAT_ASSIGN", "BAND_ASSIGN", "BOR_ASSIGN", "BXOR_ASSIGN", "FDIV",
  "FDIV_ASSIGN", "MOD_ASSIGN", "SHR_ASSIGN", "SHL_ASSIGN", "SHR_U_ASSIGN",
  "SHIFT_LEFT", "SHIFT_RIGHT", "INTV", "FLOATV", "STRINGV", "PMCV",
  "LOG_XOR", "RELOP_EQ", "RELOP_NE", "RELOP_GT", "RELOP_GTE", "RELOP_LT",
  "RELOP_LTE", "GLOBAL", "GLOBALOP", "ADDR", "RESULT", "RETURN", "YIELDT",
  "GET_RESULTS", "POW", "SHIFT_RIGHT_U", "LOG_AND", "LOG_OR", "COMMA",
  "ESUB", "DOTDOT", "PCC_BEGIN", "PCC_END", "PCC_CALL", "PCC_SUB",
  "PCC_BEGIN_RETURN", "PCC_END_RETURN", "PCC_BEGIN_YIELD", "PCC_END_YIELD",
  "NCI_CALL", "METH_CALL", "INVOCANT", "MAIN", "LOAD", "INIT", "IMMEDIATE",
  "POSTCOMP", "METHOD", "ANON", "OUTER", "NEED_LEX", "MULTI",
  "VTABLE_METHOD", "LOADLIB", "UNIQUE_REG", "LABEL", "EMIT", "EOM", "IREG",
  "NREG", "SREG", "PREG", "IDENTIFIER", "REG", "MACRO", "ENDM", "STRINGC",
  "INTC", "FLOATC", "USTRINGC", "PARROT_OP", "VAR", "LINECOMMENT",
  "FILECOMMENT", "DOT", "CONCAT", "POINTY", "'='", "'['", "']'", "'('",
  "')'", "'!'", "'-'", "'~'", "'+'", "'*'", "'/'", "'%'", "'&'", "'|'",
  "';'", "$accept", "program", "compilation_units", "compilation_unit",
  "pragma", "pragma_1", "hll_def", "global", "constdef", "@1", "pmc_const",
  "@2", "any_string", "pasmcode", "pasmline", "pasm_inst", "@3", "@4",
  "pasm_args", "emit", "@5", "opt_pasmcode", "class_namespace", "maybe_ns",
  "sub", "@6", "@7", "@8", "sub_params", "sub_param", "@9",
  "sub_param_type_def", "opt_comma", "multi", "outer", "vtable",
  "multi_types", "multi_type", "sub_body", "pcc_sub", "@10", "@11", "@12",
  "pcc_sub_call", "@13", "opt_label", "opt_invocant", "sub_proto",
  "sub_proto_list", "proto", "pcc_call", "pcc_args", "pcc_arg",
  "pcc_results", "pcc_result", "@14", "paramtype_list", "paramtype",
  "begin_ret_or_yield", "end_ret_or_yield", "pcc_ret", "@15",
  "pcc_returns", "pcc_return", "pcc_return_many", "@16", "@17",
  "var_returns", "statements", "helper_clear_state", "statement", "labels",
  "_labels", "label", "instruction", "id_list", "id_list_id",
  "labeled_inst", "@18", "@19", "@20", "type", "classname", "assignment",
  "@21", "get_results", "@22", "op_assign", "func_assign", "the_sub",
  "ptr", "sub_call", "@23", "arglist", "arg", "argtype_list", "argtype",
  "result", "targetlist", "if_statement", "relop", "target", "vars",
  "_vars", "_var_or_i", "sub_label_op_c", "sub_label_op", "label_op",
  "var_or_i", "var", "keylist", "@24", "keylist_force", "@25", "_keylist",
  "@26", "key", "reg", "const", "string", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,    10,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
      61,    91,    93,    40,    41,    33,    45,   126,    43,    42,
      47,    37,    38,   124,    59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   135,   136,   137,   137,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   139,   139,   139,   140,   141,   141,
     142,   142,   144,   143,   146,   145,   147,   147,   148,   148,
     149,   149,   149,   149,   149,   149,   149,   151,   150,   152,
     150,   150,   150,   150,   153,   155,   154,   156,   156,   157,
     158,   158,   160,   161,   162,   159,   163,   163,   163,   165,
     164,   166,   166,   167,   167,   168,   169,   169,   170,   170,
     171,   171,   171,   172,   172,   172,   172,   172,   172,   172,
     173,   173,   175,   176,   177,   174,   179,   178,   180,   180,
     181,   181,   182,   182,   183,   183,   184,   184,   184,   184,
     184,   184,   184,   184,   184,   184,   184,   185,   185,   185,
     185,   185,   185,   185,   186,   186,   187,   188,   188,   189,
     190,   189,   191,   191,   192,   192,   192,   192,   192,   192,
     193,   193,   194,   194,   196,   195,   195,   197,   197,   197,
     198,   200,   199,   201,   199,   202,   202,   202,   202,   202,
     203,   203,   204,   205,   205,   205,   205,   206,   206,   207,
     207,   208,   209,   209,   210,   210,   211,   211,   212,   212,
     212,   212,   213,   212,   212,   214,   212,   212,   215,   212,
     212,   212,   212,   212,   212,   212,   212,   212,   216,   216,
     216,   216,   216,   217,   218,   218,   218,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   219,   218,   218,
     218,   218,   218,   221,   220,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   223,   224,
     224,   224,   224,   224,   224,   224,   225,   225,   227,   226,
     228,   228,   228,   228,   228,   229,   230,   230,   231,   231,
     231,   232,   233,   233,   233,   233,   233,   234,   234,   234,
     234,   234,   234,   234,   234,   235,   235,   235,   235,   235,
     235,   236,   236,   237,   237,   238,   238,   239,   239,   239,
     240,   240,   240,   241,   241,   242,   242,   243,   243,   244,
     244,   246,   245,   248,   247,   249,   249,   250,   249,   251,
     251,   251,   251,   252,   252,   252,   252,   252,   253,   253,
     253,   253,   254,   254
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     3,     2,     3,     2,     4,     4,
       3,     5,     0,     6,     0,     6,     1,     1,     1,     2,
       3,     2,     1,     1,     1,     1,     1,     0,     3,     0,
       4,     2,     4,     0,     1,     0,     4,     0,     1,     3,
       3,     0,     0,     0,     0,    10,     0,     1,     3,     0,
       3,     3,     5,     0,     1,     4,     4,     4,     1,     4,
       0,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       0,     1,     0,     0,     0,    10,     0,     9,     0,     2,
       0,     3,     0,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     3,     3,
       3,     3,     5,     5,     0,     3,     2,     0,     3,     3,
       0,     4,     0,     2,     1,     1,     1,     1,     4,     1,
       1,     1,     1,     1,     0,     5,     1,     0,     2,     3,
       3,     0,     5,     0,     5,     0,     1,     3,     3,     5,
       1,     2,     0,     2,     2,     1,     1,     0,     1,     2,
       1,     1,     3,     2,     1,     3,     2,     1,     1,     1,
       2,     2,     0,     4,     4,     0,     6,     1,     0,     6,
       2,     2,     2,     2,     1,     1,     1,     0,     1,     1,
       1,     1,     1,     1,     3,     4,     4,     4,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     6,     6,     6,     7,     4,     4,     6,     6,     7,
       4,     4,     4,     4,     6,     7,     3,     0,     9,     1,
       1,     1,     3,     0,     5,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     4,     1,
       1,     1,     1,     3,     3,     3,     1,     1,     0,     5,
       0,     3,     1,     5,     3,     2,     0,     2,     1,     1,
       4,     2,     3,     5,     1,     3,     0,     6,     6,     5,
       5,     4,     4,     4,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     3,     1,     1,     4,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     2,     0,     2,     1,     3,     0,     4,     1,
       3,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,    13,     0,     0,     0,    51,    52,    22,     0,    82,
       0,    45,     0,     0,     2,     3,    12,     0,     7,     6,
      10,     5,     8,     9,     0,     0,     0,     0,   321,     0,
       0,     0,   188,   189,   190,   191,   193,     0,   192,     0,
       0,   157,    11,     1,     4,    15,    17,    14,     0,     0,
       0,     0,    49,   313,   311,   312,   314,    53,   310,     0,
      20,    83,    16,    24,   161,     0,    33,    32,    36,    35,
     157,    28,     0,    34,    37,   158,   160,    18,    19,    50,
       0,   333,   334,   335,   336,   337,   340,   338,   339,   341,
     301,   319,   329,   322,   325,   302,   320,    92,     0,     0,
      92,     0,    31,    29,    46,     0,     0,    39,     0,     0,
     159,   331,   332,   327,     0,    98,    96,    97,    99,   100,
     102,   101,     0,   103,     0,    68,   104,   105,   106,     0,
      63,    94,     0,    21,     0,     0,    41,     0,    92,    30,
     303,   330,     0,   326,     0,    70,     0,    54,    64,     0,
      23,    84,   315,   316,   317,     0,   318,     0,     0,   323,
      38,   319,    44,   304,   306,   307,   328,     0,     0,    73,
      74,    76,    75,    77,    78,   321,     0,    72,     0,    56,
      95,    56,     0,    42,    40,     0,     0,   321,     0,    67,
      66,     0,     0,    65,    69,    57,   152,   152,    26,    27,
      25,   309,   324,     0,   305,    79,    71,    59,     0,   156,
     155,     0,     0,   152,     0,   150,     0,   308,     0,   154,
      58,    55,   151,     0,   187,   153,    85,    60,     0,   163,
       0,     0,     0,     0,     0,     0,     0,   172,     0,   175,
     178,     0,     0,     0,   243,     0,   130,   131,   259,   260,
     261,   303,   237,   177,   185,     0,   186,   136,     0,   168,
     239,   240,   241,   268,   184,   169,   262,   122,     0,   181,
       0,     0,     0,     0,   183,     0,   170,   171,     0,     0,
       0,     0,   342,   343,     0,   141,   180,   262,   143,     0,
      86,   182,   286,   134,   162,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   267,
     266,     0,   321,     0,    61,     0,     0,     0,   295,   296,
     297,   298,   299,   300,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   145,   145,   286,   114,
       0,   284,     0,   122,   137,   270,   245,   246,   247,   248,
     251,   252,   253,   254,   250,   249,   255,   256,   257,   242,
       0,     0,     0,   340,   341,   303,     0,     0,     0,   236,
     319,   194,     0,   264,   265,   263,   124,   125,   126,   127,
     129,   123,   122,     0,   291,   293,     0,     0,   292,   294,
       0,   233,   167,   173,   164,   174,     0,     0,   232,   340,
       0,   146,   276,     0,     0,    90,     0,     0,     0,   281,
       0,   340,     0,   272,   321,   225,   226,   231,   230,   258,
     195,   196,   197,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   321,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    62,
     289,     0,   290,     0,     0,   321,   166,     0,     0,     0,
       0,     0,   142,   275,   144,   244,     0,     0,     0,     0,
     285,     0,   282,     0,   138,     0,   132,   133,   135,     0,
       0,     0,   269,     0,     0,   321,     0,   321,   203,   212,
     213,   217,   206,   207,   208,   211,   209,   210,   201,   214,
     215,   216,   205,     0,   199,   220,   198,   200,   202,   204,
     218,   219,     0,     0,   287,   288,   234,     0,   165,   176,
     179,   147,   340,   148,   278,   279,   277,   116,     0,     0,
       0,     0,    88,   115,     0,     0,   276,   139,   274,   340,
     271,   227,   223,     0,   228,     0,   221,   222,   128,   235,
       0,     0,    91,     0,     0,     0,     0,   117,     0,   283,
     270,   140,     0,   224,   229,   149,     0,   108,     0,   109,
     111,     0,   110,     0,     0,    89,     0,   273,   280,     0,
       0,     0,   120,     0,    87,     0,   238,   107,   113,   112,
       0,   122,   118,     0,   119,   121
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    15,    16,    25,    17,    18,    19,    31,
      69,   101,   200,    70,    71,   108,   109,   138,   160,    20,
      41,    72,    21,    29,    22,    30,    97,   179,   196,   211,
     218,   227,   149,   126,   127,   128,   176,   177,   212,    23,
      39,   100,   181,   254,   339,   557,   468,   129,   130,   131,
     532,   405,   469,   574,   585,   590,   314,   381,   255,   478,
     256,   344,   410,   479,   257,   336,   337,   400,   213,   214,
     215,    74,    75,    76,   225,   393,   394,   258,   278,   280,
     281,    37,    38,   259,   292,   260,   289,   261,   262,   263,
     313,   264,   295,   412,   401,   463,   526,   341,   342,   265,
     325,    91,   162,   163,   164,    57,    58,   154,   165,   402,
      50,    51,   185,   186,    93,   142,    94,    95,    96,   284
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -453
static const yytype_int16 yypact[] =
{
     108,  -453,    19,   -76,   -45,   -51,  -453,  -453,   -10,  -453,
     -27,  -453,    83,    93,   108,  -453,  -453,   109,  -453,  -453,
    -453,  -453,  -453,  -453,    16,   130,    65,    68,  -453,   140,
     -61,   -10,  -453,  -453,  -453,  -453,  -453,    47,  -453,    58,
     161,   174,  -453,  -453,  -453,  -453,  -453,  -453,    57,    82,
      79,   519,  -453,  -453,  -453,  -453,  -453,  -453,  -453,    89,
      91,  -453,  -453,  -453,  -453,   198,  -453,  -453,  -453,  -453,
     204,  -453,   114,  -453,     6,   111,  -453,  -453,  -453,  -453,
     604,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,
    -453,  -453,   143,   -57,  -453,  -453,  -453,   741,    97,   134,
     741,   110,  -453,  -453,  -453,   604,   113,  -453,   214,   118,
    -453,  -453,   604,  -453,   519,  -453,  -453,  -453,  -453,  -453,
    -453,  -453,   100,  -453,   101,   117,  -453,  -453,  -453,   228,
       5,  -453,   134,  -453,   230,   590,  -453,   170,   741,  -453,
     562,  -453,   519,  -453,   -59,   186,   139,  -453,  -453,   741,
    -453,  -453,  -453,  -453,  -453,   131,  -453,   163,   173,  -453,
    -453,   152,  -453,   206,  -453,  -453,  -453,   151,   154,  -453,
    -453,  -453,  -453,  -453,  -453,  -453,   -33,  -453,   155,   276,
    -453,   276,    23,  -453,  -453,   162,   519,  -453,   562,  -453,
    -453,   166,   186,  -453,  -453,  -453,     8,     8,  -453,  -453,
    -453,  -453,   -57,   181,  -453,  -453,  -453,  -453,   281,  -453,
    -453,   301,   234,    46,   434,  -453,   236,  -453,   -10,  -453,
    -453,  -453,  -453,   310,   539,  -453,  -453,  -453,   -49,  -453,
      15,   225,   262,   604,   195,   205,   207,  -453,   209,   211,
    -453,    22,    72,   193,  -453,   326,  -453,  -453,  -453,  -453,
    -453,   562,  -453,  -453,  -453,   328,  -453,  -453,   329,  -453,
    -453,  -453,  -453,  -453,  -453,  -453,   308,  -453,   318,  -453,
     604,   420,   604,   426,  -453,   269,  -453,  -453,   -10,   278,
     -10,   -10,  -453,  -453,   235,  -453,  -453,    50,  -453,   233,
    -453,  -453,   306,  -453,  -453,   244,   604,   604,   604,   604,
     604,   604,   604,   604,   604,   604,   604,   604,   604,  -453,
    -453,    45,  -453,   674,    12,   252,   348,    15,  -453,  -453,
    -453,  -453,  -453,  -453,    15,   604,   349,    15,    15,   604,
     604,   264,   195,   265,   270,   604,   618,   618,   306,  -453,
     357,  -453,   -28,  -453,  -453,   632,  -453,  -453,  -453,  -453,
    -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,
     576,    22,   273,   256,   272,   562,   604,   604,   604,  -453,
      74,   528,   282,  -453,  -453,  -453,  -453,  -453,  -453,   283,
    -453,  -453,  -453,    15,  -453,  -453,   395,    15,  -453,  -453,
     403,   -53,   317,   345,  -453,  -453,   299,   302,  -453,   406,
     -26,  -453,  -453,   -24,   -22,     1,   195,   702,   303,    12,
       0,   411,   -16,  -453,  -453,   -48,   -47,  -453,  -453,  -453,
    -453,  -453,  -453,   604,   604,   604,   604,   604,   604,   604,
     604,   604,   604,   604,   604,   604,   604,   604,  -453,   604,
     604,   604,   604,   604,   604,   604,   604,   313,   325,    12,
    -453,    15,  -453,    15,   604,  -453,  -453,   264,   134,   134,
     604,   646,  -453,    48,  -453,  -453,   604,   604,   123,   435,
    -453,   422,  -453,   688,  -453,   604,  -453,  -453,  -453,   436,
     604,   660,  -453,   323,   604,  -453,   604,  -453,  -453,  -453,
    -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,
    -453,  -453,  -453,   327,  -453,  -453,  -453,  -453,  -453,  -453,
    -453,  -453,   604,   330,  -453,  -453,  -453,   331,  -453,  -453,
    -453,  -453,   430,  -453,  -453,   336,  -453,  -453,   447,   604,
     604,   711,   111,  -453,   195,   337,  -453,  -453,  -453,   432,
    -453,  -453,  -453,   342,  -453,   343,  -453,  -453,  -453,  -453,
     604,   358,  -453,     7,   464,    17,    18,  -453,   467,  -453,
     632,    48,   604,  -453,  -453,  -453,   364,  -453,   604,  -453,
    -453,   604,  -453,   604,     9,  -453,   -14,  -453,  -453,   468,
     469,   485,  -453,   195,  -453,   486,  -453,  -453,  -453,  -453,
     -10,  -453,  -453,   264,    12,  -453
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -453,  -453,  -453,   478,    -9,  -453,  -453,  -453,  -453,  -453,
     277,  -453,  -453,  -453,   423,  -453,  -453,  -453,   129,  -453,
    -453,  -453,    49,  -453,  -453,  -453,  -453,  -453,   315,  -453,
    -453,  -453,  -453,  -453,  -453,  -453,  -453,   311,   305,  -453,
    -453,  -453,  -453,  -453,  -453,  -453,  -453,   -84,  -453,   355,
    -453,  -453,  -453,  -453,  -453,  -453,  -324,  -453,  -453,  -453,
    -453,  -453,  -453,  -453,  -453,  -453,  -453,   168,  -453,  -453,
     293,   295,  -453,   -74,  -453,  -453,  -452,  -453,  -453,  -453,
    -453,   -31,   150,  -453,  -453,  -453,  -453,  -453,  -453,    38,
    -453,  -225,  -453,   -44,  -339,   -23,  -453,   115,   177,  -453,
     245,  -113,   266,  -453,   332,  -453,   208,  -223,   388,   -43,
    -172,  -453,  -453,  -453,   338,  -453,   -89,  -453,   -97,   165
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -263
static const yytype_int16 yytable[] =
{
      59,   110,   133,   191,   474,   518,   413,   269,    92,   -93,
     -43,   567,   466,   207,   113,   203,   134,   286,   454,   409,
     105,   570,   572,   484,   486,   143,    24,   161,   376,   377,
     378,   379,    68,    26,   106,   150,   582,   111,   192,    32,
      33,    34,    35,   407,    53,   461,   167,   461,    54,   407,
     168,    55,    56,   166,   158,   481,   267,   481,   449,   359,
     268,    68,   136,   524,   475,    27,   360,   525,   455,   141,
      28,    92,   583,   485,   487,   161,   148,   114,   568,   476,
     -80,   477,    40,   107,   584,   467,   369,    42,   571,   573,
      73,   193,   156,    43,   384,    36,   408,   156,   462,    92,
     464,   385,   465,   -93,   388,   389,   361,   362,   482,   380,
     586,   266,     1,    45,     2,   208,     3,     4,   -81,    73,
     152,   275,   523,   209,   210,   282,    46,   527,   153,   287,
       5,   283,   198,     6,    47,   199,    48,     7,   161,    49,
     372,   595,   540,    92,    52,   156,    81,    82,    83,    84,
     248,    85,    60,   208,   363,    87,    88,   364,   365,    90,
     450,   209,   210,    61,   452,    62,    77,   309,     8,   310,
     366,   367,   368,    81,    82,    83,    84,   248,    85,   343,
       2,   249,     3,     4,   250,     9,    90,   228,   271,   273,
     274,   309,    78,   310,    98,   285,     5,  -262,   370,   529,
     374,    79,   102,    63,    10,   530,   531,    11,   156,    64,
       2,    99,     3,     4,   104,    12,   112,   132,   139,   395,
     135,   413,   137,   144,   145,   343,     5,   316,   514,   326,
     515,   140,   147,    63,   151,   169,   170,   171,   172,   270,
     146,   157,   483,    86,    87,    88,    89,   331,   178,   333,
     334,   182,   161,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   503,   594,   371,   183,
      10,   184,    64,   187,   -47,   189,   272,   188,   190,   194,
     195,    65,   386,   517,   201,   219,   390,   391,   205,    66,
      67,   173,   398,   470,   343,   174,    81,    82,    83,    84,
      10,    85,    64,   217,   -48,   220,   221,   175,   226,    90,
     276,    65,   277,   543,   229,   545,   288,   416,   279,    66,
      67,   -24,   156,   420,   421,   422,    81,    82,    83,    84,
     290,    85,   293,   294,    86,    87,    88,    89,   315,    90,
     330,   296,   297,   298,   299,   300,   301,   302,   303,   332,
     304,   305,   306,   307,   308,   335,   338,   382,   383,   387,
     287,   519,   520,    81,    82,    83,    84,   345,    85,   392,
     396,    86,    87,    88,    89,   397,    90,   406,   418,  -260,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,   501,   502,  -261,   504,   505,   506,   507,
     508,   509,   510,   511,   447,   451,   448,    81,    82,    83,
      84,   516,    85,   453,   456,   340,   457,   521,   556,   458,
      90,   559,   459,   473,   528,   309,   460,   310,   311,   312,
     317,   480,   536,   512,   513,   223,   327,   538,  -157,   533,
     537,   542,   534,   544,  -157,   541,  -157,  -157,  -157,   546,
     550,   552,   562,   549,   548,  -157,  -157,  -157,   558,   551,
     560,  -157,  -157,  -157,   563,   564,  -157,   566,   569,   547,
     591,   575,   587,   588,   318,   319,   320,   321,   322,   323,
     318,   319,   320,   321,   322,   323,   553,   554,   578,   589,
     592,   324,    44,   103,   419,  -157,   197,   328,  -157,  -157,
    -157,   253,   216,   206,   180,   403,   222,   565,  -157,   224,
     415,   535,  -157,   561,  -157,   404,   576,   291,   329,   577,
     204,   375,   472,   155,   202,   579,   417,     0,   580,     0,
     581,     0,    64,     0,     0,  -157,  -157,  -157,  -157,  -157,
    -157,     0,     0,  -157,     0,     0,  -157,  -157,  -157,   230,
       0,   231,   232,   233,     0,     0,     0,  -157,     0,   593,
     234,   235,   236,     0,     0,     0,   237,   238,   239,   423,
       0,   240,     0,     0,     0,   424,   425,     0,     0,     0,
       0,   426,   427,   428,   429,   430,   431,   432,     0,     0,
       0,     0,    80,     0,     0,   433,   434,   435,   436,     0,
     241,     0,     0,   242,   243,   244,     0,     0,     0,     0,
       0,     0,     0,   245,     0,     0,     0,   246,     0,   247,
      81,    82,    83,    84,     0,    85,     0,     0,    86,    87,
      88,    89,     0,    90,     0,     0,     0,     0,     0,     0,
      81,    82,    83,    84,   248,    85,   437,     0,   249,   438,
       0,   250,   251,    90,   439,   440,   441,   442,   443,   444,
     445,   446,   252,    81,    82,    83,    84,   152,    85,     0,
       0,    86,    87,    88,    89,   153,    90,    81,    82,    83,
      84,    36,    85,   159,     0,    86,    87,    88,    89,     0,
      90,    81,    82,    83,    84,   152,    85,   414,     0,    86,
      87,    88,    89,   153,    90,    81,    82,    83,    84,     0,
      85,     0,     0,    86,    87,    88,    89,     0,    90,    81,
      82,    83,    84,     0,    85,     0,     0,   399,    87,    88,
      89,     0,    90,    81,    82,    83,    84,     0,    85,     0,
       0,   411,    87,    88,    89,     0,    90,    81,    82,    83,
      84,     0,    85,     0,     0,   522,    87,    88,    89,     0,
      90,    81,    82,    83,    84,     0,    85,     0,     0,   539,
      87,    88,    89,     0,    90,    81,    82,    83,    84,    53,
      85,     0,     0,   373,     0,     0,     0,    56,    90,    81,
      82,    83,    84,   248,    85,     0,     0,   249,     0,     0,
     250,     0,    90,    81,    82,    83,    84,     0,    85,     0,
       0,   471,    81,    82,    83,    84,    90,    85,     0,     0,
     555,     0,     0,     0,     0,    90,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125
};

static const yytype_int16 yycheck[] =
{
      31,    75,    99,   175,     4,   457,   345,   230,    51,     4,
       4,     4,    11,     5,    71,   187,   100,   242,    71,   343,
      14,     4,     4,    71,    71,   114,     7,   140,    16,    17,
      18,    19,    41,   109,    28,   132,    27,    80,    71,    49,
      50,    51,    52,    71,   105,    71,   105,    71,   109,    71,
     109,   112,   113,   142,   138,    71,   105,    71,   382,    14,
     109,    70,   105,    15,    64,   110,    21,    19,   121,   112,
     121,   114,    63,   121,   121,   188,    71,   134,    71,    79,
      72,    81,   109,    77,    75,    84,   311,     4,    71,    71,
      41,   124,   135,     0,   317,   105,   124,   140,   124,   142,
     124,   324,   124,    98,   327,   328,    61,    62,   124,    97,
     124,   224,     4,     4,     6,   107,     8,     9,    72,    70,
     105,   234,   461,   115,   116,   103,   110,   466,   113,   242,
      22,   109,   109,    25,     4,   112,    71,    29,   251,    71,
     312,   593,   481,   186,     4,   188,   101,   102,   103,   104,
     105,   106,   105,   107,   109,   110,   111,   112,   113,   114,
     383,   115,   116,   105,   387,     4,   109,   117,    60,   119,
     125,   126,   127,   101,   102,   103,   104,   105,   106,   292,
       6,   109,     8,     9,   112,    77,   114,   218,   231,   232,
     233,   117,   110,   119,   105,   123,    22,   123,   311,    76,
     313,   122,     4,    29,    96,    82,    83,    99,   251,    98,
       6,   120,     8,     9,   100,   107,    73,   120,     4,   332,
     110,   560,   109,   123,   123,   338,    22,   270,   451,   272,
     453,   113,     4,    29,     4,    49,    50,    51,    52,    14,
     123,    71,   414,   109,   110,   111,   112,   278,   109,   280,
     281,   120,   365,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   438,   591,   311,   106,
      96,    98,    98,   121,   100,   124,    14,    71,   124,   124,
       4,   107,   325,   455,   122,     4,   329,   330,   122,   115,
     116,   105,   335,   406,   407,   109,   101,   102,   103,   104,
      96,   106,    98,   122,   100,     4,    72,   121,    72,   114,
     105,   107,   105,   485,     4,   487,   123,   360,   109,   115,
     116,   110,   365,   366,   367,   368,   101,   102,   103,   104,
       4,   106,     4,     4,   109,   110,   111,   112,    20,   114,
      71,    33,    34,    35,    36,    37,    38,    39,    40,    71,
      42,    43,    44,    45,    46,   120,   123,   105,    10,    10,
     473,   458,   459,   101,   102,   103,   104,   123,   106,   105,
     105,   109,   110,   111,   112,   105,   114,    20,   105,   123,
     423,   424,   425,   426,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   436,   437,   123,   439,   440,   441,   442,
     443,   444,   445,   446,   122,    10,   123,   101,   102,   103,
     104,   454,   106,    10,    97,   109,    71,   460,   531,   120,
     114,   534,   120,   120,   467,   117,    20,   119,   120,   121,
      10,    20,   475,   120,   109,     1,    10,   480,     4,     4,
       4,   484,    20,   486,    10,   122,    12,    13,    14,   122,
      20,     4,    20,   122,   124,    21,    22,    23,   532,   123,
     123,    27,    28,    29,   122,   122,    32,   109,     4,   512,
     583,     4,     4,     4,    54,    55,    56,    57,    58,    59,
      54,    55,    56,    57,    58,    59,   529,   530,   124,     4,
       4,    71,    14,    70,   365,    61,   181,    71,    64,    65,
      66,   224,   197,   192,   149,   337,   213,   550,    74,   214,
     360,   473,    78,   536,    80,   338,   560,   251,   273,   562,
     188,   313,   407,   135,   186,   568,   361,    -1,   571,    -1,
     573,    -1,    98,    -1,    -1,   101,   102,   103,   104,   105,
     106,    -1,    -1,   109,    -1,    -1,   112,   113,   114,    10,
      -1,    12,    13,    14,    -1,    -1,    -1,   123,    -1,   590,
      21,    22,    23,    -1,    -1,    -1,    27,    28,    29,    41,
      -1,    32,    -1,    -1,    -1,    47,    48,    -1,    -1,    -1,
      -1,    53,    54,    55,    56,    57,    58,    59,    -1,    -1,
      -1,    -1,    73,    -1,    -1,    67,    68,    69,    70,    -1,
      61,    -1,    -1,    64,    65,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    -1,    -1,    -1,    78,    -1,    80,
     101,   102,   103,   104,    -1,   106,    -1,    -1,   109,   110,
     111,   112,    -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,
     101,   102,   103,   104,   105,   106,   118,    -1,   109,   121,
      -1,   112,   113,   114,   126,   127,   128,   129,   130,   131,
     132,   133,   123,   101,   102,   103,   104,   105,   106,    -1,
      -1,   109,   110,   111,   112,   113,   114,   101,   102,   103,
     104,   105,   106,   121,    -1,   109,   110,   111,   112,    -1,
     114,   101,   102,   103,   104,   105,   106,   121,    -1,   109,
     110,   111,   112,   113,   114,   101,   102,   103,   104,    -1,
     106,    -1,    -1,   109,   110,   111,   112,    -1,   114,   101,
     102,   103,   104,    -1,   106,    -1,    -1,   109,   110,   111,
     112,    -1,   114,   101,   102,   103,   104,    -1,   106,    -1,
      -1,   109,   110,   111,   112,    -1,   114,   101,   102,   103,
     104,    -1,   106,    -1,    -1,   109,   110,   111,   112,    -1,
     114,   101,   102,   103,   104,    -1,   106,    -1,    -1,   109,
     110,   111,   112,    -1,   114,   101,   102,   103,   104,   105,
     106,    -1,    -1,   109,    -1,    -1,    -1,   113,   114,   101,
     102,   103,   104,   105,   106,    -1,    -1,   109,    -1,    -1,
     112,    -1,   114,   101,   102,   103,   104,    -1,   106,    -1,
      -1,   109,   101,   102,   103,   104,   114,   106,    -1,    -1,
     109,    -1,    -1,    -1,    -1,   114,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     6,     8,     9,    22,    25,    29,    60,    77,
      96,    99,   107,   136,   137,   138,   139,   141,   142,   143,
     154,   157,   159,   174,     7,   140,   109,   110,   121,   158,
     160,   144,    49,    50,    51,    52,   105,   216,   217,   175,
     109,   155,     4,     0,   138,     4,   110,     4,    71,    71,
     245,   246,     4,   105,   109,   112,   113,   240,   241,   216,
     105,   105,     4,    29,    98,   107,   115,   116,   139,   145,
     148,   149,   156,   157,   206,   207,   208,   109,   110,   122,
      73,   101,   102,   103,   104,   106,   109,   110,   111,   112,
     114,   236,   244,   249,   251,   252,   253,   161,   105,   120,
     176,   146,     4,   149,   100,    14,    28,    77,   150,   151,
     208,   244,    73,    71,   134,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,   168,   169,   170,   182,
     183,   184,   120,   253,   182,   110,   244,   109,   152,     4,
     113,   244,   250,   251,   123,   123,   123,     4,    71,   167,
     253,     4,   105,   113,   242,   243,   244,    71,   182,   121,
     153,   236,   237,   238,   239,   243,   251,   105,   109,    49,
      50,    51,    52,   105,   109,   121,   171,   172,   109,   162,
     184,   177,   120,   106,    98,   247,   248,   121,    71,   124,
     124,   245,    71,   124,   124,     4,   163,   163,   109,   112,
     147,   122,   249,   245,   239,   122,   172,     5,   107,   115,
     116,   164,   173,   203,   204,   205,   173,   122,   165,     4,
       4,    72,   205,     1,   206,   209,    72,   166,   216,     4,
      10,    12,    13,    14,    21,    22,    23,    27,    28,    29,
      32,    61,    64,    65,    66,    74,    78,    80,   105,   109,
     112,   113,   123,   145,   178,   193,   195,   199,   212,   218,
     220,   222,   223,   224,   226,   234,   236,   105,   109,   242,
      14,   244,    14,   244,   244,   236,   105,   105,   213,   109,
     214,   215,   103,   109,   254,   123,   226,   236,   123,   221,
       4,   237,   219,     4,     4,   227,    33,    34,    35,    36,
      37,    38,    39,    40,    42,    43,    44,    45,    46,   117,
     119,   120,   121,   225,   191,    20,   244,    10,    54,    55,
      56,    57,    58,    59,    71,   235,   244,    10,    71,   235,
      71,   216,    71,   216,   216,   120,   200,   201,   123,   179,
     109,   232,   233,   236,   196,   123,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,    14,
      21,    61,    62,   109,   112,   113,   125,   126,   127,   226,
     236,   244,   245,   109,   236,   241,    16,    17,    18,    19,
      97,   192,   105,    10,   242,   242,   244,    10,   242,   242,
     244,   244,   105,   210,   211,   236,   105,   105,   244,   109,
     202,   229,   244,   202,   233,   186,    20,    71,   124,   191,
     197,   109,   228,   229,   121,   217,   244,   254,   105,   153,
     244,   244,   244,    41,    47,    48,    53,    54,    55,    56,
      57,    58,    59,    67,    68,    69,    70,   118,   121,   126,
     127,   128,   129,   130,   131,   132,   133,   122,   123,   191,
     242,    10,   242,    10,    71,   121,    97,    71,   120,   120,
      20,    71,   124,   230,   124,   124,    11,    84,   181,   187,
     236,   109,   232,   120,     4,    64,    79,    81,   194,   198,
      20,    71,   124,   245,    71,   121,    71,   121,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   245,   244,   244,   244,   244,   244,   244,
     244,   244,   120,   109,   242,   242,   244,   245,   211,   253,
     253,   244,   109,   229,    15,    19,   231,   229,   244,    76,
      82,    83,   185,     4,    20,   224,   244,     4,   244,   109,
     229,   122,   244,   245,   244,   245,   122,   244,   124,   122,
      20,   123,     4,   244,   244,   109,   236,   180,   208,   236,
     123,   230,    20,   122,   122,   244,   109,     4,    71,     4,
       4,    71,     4,    71,   188,     4,   228,   244,   124,   244,
     244,   244,    27,    63,    75,   189,   124,     4,     4,     4,
     190,   236,     4,   216,   191,   211
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (yyscanner, interp, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, yyscanner, interp)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, yyscanner, interp); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, void *yyscanner, Interp *interp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yyscanner, interp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    void *yyscanner;
    Interp *interp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yyscanner);
  YYUSE (interp);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, void *yyscanner, Interp *interp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yyscanner, interp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    void *yyscanner;
    Interp *interp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yyscanner, interp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, void *yyscanner, Interp *interp)
#else
static void
yy_reduce_print (yyvsp, yyrule, yyscanner, interp)
    YYSTYPE *yyvsp;
    int yyrule;
    void *yyscanner;
    Interp *interp;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       , yyscanner, interp);
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, yyscanner, interp); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, void *yyscanner, Interp *interp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yyscanner, interp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    void *yyscanner;
    Interp *interp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yyscanner);
  YYUSE (interp);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void *yyscanner, Interp *interp);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *yyscanner, Interp *interp)
#else
int
yyparse (yyscanner, interp)
    void *yyscanner;
    Interp *interp;
#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 475 "compilers/imcc/imcc.y"
    { if (yynerrs) YYABORT; (yyval.i) = 0; }
    break;

  case 5:
#line 484 "compilers/imcc/imcc.y"
    { (yyval.i) = (yyvsp[(1) - (1)].i); }
    break;

  case 6:
#line 485 "compilers/imcc/imcc.y"
    { (yyval.i) = (yyvsp[(1) - (1)].i); }
    break;

  case 7:
#line 486 "compilers/imcc/imcc.y"
    { (yyval.i) = (yyvsp[(1) - (1)].i); }
    break;

  case 8:
#line 487 "compilers/imcc/imcc.y"
    { (yyval.i) = (yyvsp[(1) - (1)].i);
                     imc_close_unit(interp, IMCC_INFO(interp)->cur_unit);
                     IMCC_INFO(interp)->cur_unit = 0; }
    break;

  case 9:
#line 490 "compilers/imcc/imcc.y"
    { (yyval.i) = (yyvsp[(1) - (1)].i);
                     imc_close_unit(interp, IMCC_INFO(interp)->cur_unit);
                     IMCC_INFO(interp)->cur_unit = 0; }
    break;

  case 10:
#line 493 "compilers/imcc/imcc.y"
    { (yyval.i) = (yyvsp[(1) - (1)].i);
                     imc_close_unit(interp, IMCC_INFO(interp)->cur_unit);
                     IMCC_INFO(interp)->cur_unit = 0; }
    break;

  case 11:
#line 496 "compilers/imcc/imcc.y"
    { (yyval.i) = 0; }
    break;

  case 12:
#line 497 "compilers/imcc/imcc.y"
    { (yyval.i) = 0; }
    break;

  case 13:
#line 498 "compilers/imcc/imcc.y"
    { (yyval.i) = 0; }
    break;

  case 14:
#line 501 "compilers/imcc/imcc.y"
    { (yyval.i) = 0; }
    break;

  case 15:
#line 502 "compilers/imcc/imcc.y"
    { (yyval.i) = 0; }
    break;

  case 16:
#line 503 "compilers/imcc/imcc.y"
    { (yyval.i) = 0; do_loadlib(interp, (yyvsp[(2) - (3)].s)); }
    break;

  case 17:
#line 507 "compilers/imcc/imcc.y"
    { if ((yyvsp[(2) - (2)].s))
                          IMCC_INFO(interp)->state->pragmas |= PR_N_OPERATORS;
                      else
                          IMCC_INFO(interp)->state->pragmas &= ~PR_N_OPERATORS;
                    }
    break;

  case 18:
#line 515 "compilers/imcc/imcc.y"
    {
            STRING *hll_name = string_unescape_cstring(interp, (yyvsp[(2) - (4)].s) + 1, '"', NULL);
            STRING *hll_lib  = string_unescape_cstring(interp, (yyvsp[(4) - (4)].s) + 1, '"', NULL);
            PMC    *ignored;
            CONTEXT(((Interp*)interp)->ctx)->current_HLL =
                Parrot_register_HLL(interp, hll_name);
            ignored = Parrot_load_lib(interp, hll_lib, NULL);
            Parrot_register_HLL_lib(interp, hll_lib);
            IMCC_INFO(interp)->cur_namespace = NULL;
            (yyval.t) = 0;
         }
    break;

  case 19:
#line 527 "compilers/imcc/imcc.y"
    {
             Parrot_register_HLL_type(interp,
                CONTEXT(((Interp*)interp)->ctx)->current_HLL, atoi((yyvsp[(2) - (4)].s)), atoi((yyvsp[(4) - (4)].s)));
             (yyval.t) = 0;
         }
    break;

  case 20:
#line 536 "compilers/imcc/imcc.y"
    {
            IMCC_fataly(interp, E_SyntaxError,
                ".global not implemented yet\n");
            (yyval.i) = 0;
         }
    break;

  case 21:
#line 542 "compilers/imcc/imcc.y"
    {
            IMCC_fataly(interp, E_SyntaxError,
                ".global not implemented yet\n");
            (yyval.i) = 0;
         }
    break;

  case 22:
#line 550 "compilers/imcc/imcc.y"
    { is_def=1; }
    break;

  case 23:
#line 551 "compilers/imcc/imcc.y"
    { mk_const_ident(interp, (yyvsp[(4) - (6)].s), (yyvsp[(3) - (6)].t), (yyvsp[(6) - (6)].sr), 1); is_def=0; }
    break;

  case 24:
#line 555 "compilers/imcc/imcc.y"
    { is_def=1; }
    break;

  case 25:
#line 556 "compilers/imcc/imcc.y"
    { (yyval.i) = mk_pmc_const(interp, IMCC_INFO(interp)->cur_unit, (yyvsp[(3) - (6)].s), (yyvsp[(4) - (6)].sr), (yyvsp[(6) - (6)].s)); is_def=0; }
    break;

  case 30:
#line 569 "compilers/imcc/imcc.y"
    { (yyval.i) = 0;  }
    break;

  case 31:
#line 570 "compilers/imcc/imcc.y"
    { (yyval.i) = 0;  }
    break;

  case 32:
#line 571 "compilers/imcc/imcc.y"
    { (yyval.i) = 0;  }
    break;

  case 33:
#line 572 "compilers/imcc/imcc.y"
    { (yyval.i) = 0;  }
    break;

  case 34:
#line 573 "compilers/imcc/imcc.y"
    { (yyval.i) = (yyvsp[(1) - (1)].i); }
    break;

  case 37:
#line 578 "compilers/imcc/imcc.y"
    { clear_state(interp); }
    break;

  case 38:
#line 580 "compilers/imcc/imcc.y"
    { (yyval.i) = INS(interp, IMCC_INFO(interp)->cur_unit,
                              (yyvsp[(2) - (3)].s), 0, IMCC_INFO(interp)->regs,
                              IMCC_INFO(interp)->nargs, IMCC_INFO(interp) -> keyvec, 1);
                     free((yyvsp[(2) - (3)].s)); }
    break;

  case 39:
#line 585 "compilers/imcc/imcc.y"
    {
                    imc_close_unit(interp, IMCC_INFO(interp)->cur_unit);
                    IMCC_INFO(interp)->cur_unit = imc_open_unit(interp, IMC_PASM);
                    }
    break;

  case 40:
#line 590 "compilers/imcc/imcc.y"
    {
                     (yyval.i) = iSUBROUTINE(interp, IMCC_INFO(interp)->cur_unit,
                                mk_sub_label(interp, (yyvsp[(4) - (4)].s)));
                     IMCC_INFO(interp)->cur_call->pcc_sub->pragma = (yyvsp[(3) - (4)].t);
                   }
    break;

  case 41:
#line 596 "compilers/imcc/imcc.y"
    {  (yyval.i) =MK_I(interp, IMCC_INFO(interp)->cur_unit, "null", 1, (yyvsp[(2) - (2)].sr)); }
    break;

  case 42:
#line 598 "compilers/imcc/imcc.y"
    {
                       SymReg *r = mk_pasm_reg(interp, (yyvsp[(4) - (4)].s));
                       set_lexical(interp, r, (yyvsp[(2) - (4)].s)); (yyval.i) = 0;
                   }
    break;

  case 43:
#line 602 "compilers/imcc/imcc.y"
    { (yyval.i) = 0;}
    break;

  case 45:
#line 610 "compilers/imcc/imcc.y"
    { IMCC_INFO(interp)->cur_unit = imc_open_unit(interp, IMC_PASM); }
    break;

  case 46:
#line 612 "compilers/imcc/imcc.y"
    { /*
                      if (optimizer_level & OPT_PASM)
                         imc_compile_unit(interp, IMCC_INFO(interp)->cur_unit);
                         emit_flush(interp);
                     */
                     (yyval.i)=0; }
    break;

  case 49:
#line 627 "compilers/imcc/imcc.y"
    {
                    int re_open = 0;
                    (yyval.i) = 0;
                    if (IMCC_INFO(interp)->state->pasm_file && IMCC_INFO(interp)->cur_namespace) {
                        imc_close_unit(interp, IMCC_INFO(interp)->cur_unit);
                        re_open = 1;
                    }
                    IMCC_INFO(interp)->cur_namespace = (yyvsp[(2) - (3)].sr);
                    if (re_open)
                        IMCC_INFO(interp)->cur_unit = imc_open_unit(interp, IMC_PASM);
                }
    break;

  case 50:
#line 641 "compilers/imcc/imcc.y"
    { (yyval.sr) = (yyvsp[(2) - (3)].sr); }
    break;

  case 51:
#line 642 "compilers/imcc/imcc.y"
    { (yyval.sr) = NULL; }
    break;

  case 52:
#line 647 "compilers/imcc/imcc.y"
    {
           IMCC_INFO(interp)->cur_unit = imc_open_unit(interp, IMC_PCCSUB);
        }
    break;

  case 53:
#line 651 "compilers/imcc/imcc.y"
    {
          iSUBROUTINE(interp, IMCC_INFO(interp)->cur_unit, (yyvsp[(3) - (3)].sr));
        }
    break;

  case 54:
#line 654 "compilers/imcc/imcc.y"
    { IMCC_INFO(interp)->cur_call->pcc_sub->pragma = (yyvsp[(5) - (6)].t); }
    break;

  case 55:
#line 656 "compilers/imcc/imcc.y"
    { (yyval.i) = 0; IMCC_INFO(interp)->cur_call = NULL; }
    break;

  case 56:
#line 660 "compilers/imcc/imcc.y"
    { (yyval.sr) = 0; }
    break;

  case 57:
#line 661 "compilers/imcc/imcc.y"
    { (yyval.sr) = 0; }
    break;

  case 58:
#line 662 "compilers/imcc/imcc.y"
    {
       if (IMCC_INFO(interp)->adv_named_id) {
             add_pcc_named_param(interp,IMCC_INFO(interp)->cur_call,
                                 IMCC_INFO(interp)->adv_named_id,(yyvsp[(2) - (3)].sr));
             IMCC_INFO(interp)->adv_named_id = NULL;
         }
         else add_pcc_param(IMCC_INFO(interp)->cur_call, (yyvsp[(2) - (3)].sr));
   }
    break;

  case 59:
#line 673 "compilers/imcc/imcc.y"
    { is_def=1; }
    break;

  case 60:
#line 673 "compilers/imcc/imcc.y"
    { (yyval.sr) = (yyvsp[(3) - (3)].sr); is_def=0; }
    break;

  case 61:
#line 677 "compilers/imcc/imcc.y"
    { if ((yyvsp[(3) - (3)].t) & VT_UNIQUE_REG)
                                             (yyval.sr) = mk_ident_ur(interp, (yyvsp[(2) - (3)].s), (yyvsp[(1) - (3)].t));
                                         else
                                             (yyval.sr) = mk_ident(interp, (yyvsp[(2) - (3)].s), (yyvsp[(1) - (3)].t));
                                         (yyval.sr)->type |= (yyvsp[(3) - (3)].t); }
    break;

  case 62:
#line 682 "compilers/imcc/imcc.y"
    {
                                         if ((yyvsp[(5) - (5)].t) & VT_UNIQUE_REG)
                                             (yyval.sr) = mk_ident_ur(interp, (yyvsp[(4) - (5)].s), (yyvsp[(1) - (5)].t));
                                         else
                                             (yyval.sr) = mk_ident(interp, (yyvsp[(4) - (5)].s), (yyvsp[(1) - (5)].t));
                                         (yyval.sr)->type |= (yyvsp[(5) - (5)].t);
                                         adv_named_set(interp,(yyvsp[(2) - (5)].s));}
    break;

  case 63:
#line 692 "compilers/imcc/imcc.y"
    { (yyval.t) = 0;  }
    break;

  case 65:
#line 697 "compilers/imcc/imcc.y"
    { (yyval.t) = 0; }
    break;

  case 66:
#line 701 "compilers/imcc/imcc.y"
    { (yyval.t) = 0; IMCC_INFO(interp)->cur_unit->outer =
                     mk_sub_address_fromc(interp, (yyvsp[(3) - (4)].s)); }
    break;

  case 67:
#line 704 "compilers/imcc/imcc.y"
    { (yyval.t) = 0; IMCC_INFO(interp)->cur_unit->outer =
                     mk_const(interp, (yyvsp[(3) - (4)].s), 'S'); }
    break;

  case 68:
#line 709 "compilers/imcc/imcc.y"
    { (yyval.t) = 0;
                       IMCC_INFO(interp)->cur_unit->vtable_name = NULL;
                       IMCC_INFO(interp)->cur_unit->is_vtable_method = 1; }
    break;

  case 69:
#line 713 "compilers/imcc/imcc.y"
    { (yyval.t) = 0;
                       IMCC_INFO(interp)->cur_unit->vtable_name = strdup((yyvsp[(3) - (4)].s));
                       IMCC_INFO(interp)->cur_unit->is_vtable_method = 1; }
    break;

  case 70:
#line 719 "compilers/imcc/imcc.y"
    { add_pcc_multi(IMCC_INFO(interp)->cur_call, NULL); }
    break;

  case 71:
#line 720 "compilers/imcc/imcc.y"
    { (yyval.t) = 0; add_pcc_multi(IMCC_INFO(interp)->cur_call, (yyvsp[(3) - (3)].sr)); }
    break;

  case 72:
#line 721 "compilers/imcc/imcc.y"
    { (yyval.t) = 0;  add_pcc_multi(IMCC_INFO(interp)->cur_call, (yyvsp[(1) - (1)].sr));}
    break;

  case 73:
#line 725 "compilers/imcc/imcc.y"
    { (yyval.sr) = mk_const(interp, str_dup("INTVAL"), 'S'); }
    break;

  case 74:
#line 726 "compilers/imcc/imcc.y"
    { (yyval.sr) = mk_const(interp, str_dup("FLOATVAL"), 'S'); }
    break;

  case 75:
#line 727 "compilers/imcc/imcc.y"
    { (yyval.sr) = mk_const(interp, str_dup("PMC"), 'S'); }
    break;

  case 76:
#line 728 "compilers/imcc/imcc.y"
    { (yyval.sr) = mk_const(interp, str_dup("STRING"), 'S'); }
    break;

  case 77:
#line 729 "compilers/imcc/imcc.y"
    {
                          SymReg *r;
                          if (strcmp((yyvsp[(1) - (1)].s), "_"))
                              r = mk_const(interp, (yyvsp[(1) - (1)].s), 'S');
                          else {
                              free((yyvsp[(1) - (1)].s)),
                              r = mk_const(interp, str_dup("PMC"), 'S');
                           }
                           (yyval.sr) = r;
                      }
    break;

  case 78:
#line 739 "compilers/imcc/imcc.y"
    {
                          SymReg *r;
                          if (strcmp((yyvsp[(1) - (1)].s), "_"))
                              r = mk_const(interp, (yyvsp[(1) - (1)].s), 'S');
                          else {
                              free((yyvsp[(1) - (1)].s)),
                              r = mk_const(interp, str_dup("PMC"), 'S');
                           }
                           (yyval.sr) = r;
                      }
    break;

  case 79:
#line 749 "compilers/imcc/imcc.y"
    { (yyval.sr) = (yyvsp[(2) - (3)].sr); }
    break;

  case 82:
#line 758 "compilers/imcc/imcc.y"
    { IMCC_INFO(interp)->cur_unit = imc_open_unit(interp, IMC_PCCSUB); }
    break;

  case 83:
#line 759 "compilers/imcc/imcc.y"
    { iSUBROUTINE(interp, IMCC_INFO(interp)->cur_unit, mk_sub_label(interp, (yyvsp[(3) - (3)].s))); }
    break;

  case 84:
#line 760 "compilers/imcc/imcc.y"
    { IMCC_INFO(interp)->cur_call->pcc_sub->pragma = (yyvsp[(5) - (6)].t); }
    break;

  case 85:
#line 762 "compilers/imcc/imcc.y"
    { (yyval.i) = 0; IMCC_INFO(interp)->cur_call = NULL; }
    break;

  case 86:
#line 767 "compilers/imcc/imcc.y"
    {
            char name[128];
            SymReg * r, *r1;
            Instruction *i;

            sprintf(name, "%cpcc_sub_call_%d",
                    IMCC_INTERNAL_CHAR, IMCC_INFO(interp)->cnr++);
            (yyval.sr) = r = mk_pcc_sub(interp, str_dup(name), 0);
            /* this mid rule action has the semantic value of the
             * sub SymReg.
             * This is used below to append args & results
             */
            i = iLABEL(interp, IMCC_INFO(interp)->cur_unit, r);
            IMCC_INFO(interp)->cur_call = r;
            i->type = ITPCCSUB;
            /*
             * if we are inside a pcc_sub mark the sub as doing a
             * sub call; the sub is in r[0] of the first ins
             */
            r1 = IMCC_INFO(interp)->cur_unit->instructions->r[0];
            if (r1 && r1->pcc_sub)
                r1->pcc_sub->calls_a_sub |= 1;
         }
    break;

  case 87:
#line 795 "compilers/imcc/imcc.y"
    { (yyval.i) = 0; IMCC_INFO(interp)->cur_call = NULL; }
    break;

  case 88:
#line 799 "compilers/imcc/imcc.y"
    { (yyval.i) = NULL;  IMCC_INFO(interp)->cur_call->pcc_sub->label = 0; }
    break;

  case 89:
#line 800 "compilers/imcc/imcc.y"
    { (yyval.i) = NULL;  IMCC_INFO(interp)->cur_call->pcc_sub->label = 1; }
    break;

  case 90:
#line 804 "compilers/imcc/imcc.y"
    { (yyval.i) = NULL; }
    break;

  case 91:
#line 806 "compilers/imcc/imcc.y"
    { (yyval.i) = NULL;  IMCC_INFO(interp)->cur_call->pcc_sub->object = (yyvsp[(2) - (3)].sr); }
    break;

  case 92:
#line 810 "compilers/imcc/imcc.y"
    { (yyval.t) = 0; }
    break;

  case 94:
#line 815 "compilers/imcc/imcc.y"
    { (yyval.t) = (yyvsp[(1) - (1)].t); }
    break;

  case 95:
#line 816 "compilers/imcc/imcc.y"
    { (yyval.t) = (yyvsp[(1) - (3)].t) | (yyvsp[(3) - (3)].t); }
    break;

  case 96:
#line 820 "compilers/imcc/imcc.y"
    {  (yyval.t) = P_LOAD; }
    break;

  case 97:
#line 821 "compilers/imcc/imcc.y"
    {  (yyval.t) = P_INIT; }
    break;

  case 98:
#line 822 "compilers/imcc/imcc.y"
    {  (yyval.t) = P_MAIN; }
    break;

  case 99:
#line 823 "compilers/imcc/imcc.y"
    {  (yyval.t) = P_IMMEDIATE; }
    break;

  case 100:
#line 824 "compilers/imcc/imcc.y"
    {  (yyval.t) = P_POSTCOMP; }
    break;

  case 101:
#line 825 "compilers/imcc/imcc.y"
    {  (yyval.t) = P_ANON; }
    break;

  case 102:
#line 826 "compilers/imcc/imcc.y"
    {  (yyval.t) = P_METHOD; }
    break;

  case 103:
#line 827 "compilers/imcc/imcc.y"
    {  (yyval.t) = P_NEED_LEX; }
    break;

  case 107:
#line 835 "compilers/imcc/imcc.y"
    {
            add_pcc_sub(IMCC_INFO(interp)->cur_call, (yyvsp[(2) - (5)].sr));
            add_pcc_cc(IMCC_INFO(interp)->cur_call, (yyvsp[(4) - (5)].sr));
         }
    break;

  case 108:
#line 840 "compilers/imcc/imcc.y"
    {  add_pcc_sub(IMCC_INFO(interp)->cur_call, (yyvsp[(2) - (3)].sr)); }
    break;

  case 109:
#line 842 "compilers/imcc/imcc.y"
    {
            add_pcc_sub(IMCC_INFO(interp)->cur_call, (yyvsp[(2) - (3)].sr));
            IMCC_INFO(interp)->cur_call->pcc_sub->flags |= isNCI;
         }
    break;

  case 110:
#line 847 "compilers/imcc/imcc.y"
    {  add_pcc_sub(IMCC_INFO(interp)->cur_call, (yyvsp[(2) - (3)].sr)); }
    break;

  case 111:
#line 849 "compilers/imcc/imcc.y"
    {  add_pcc_sub(IMCC_INFO(interp)->cur_call, mk_const(interp, (yyvsp[(2) - (3)].s),'S')); }
    break;

  case 112:
#line 851 "compilers/imcc/imcc.y"
    {  add_pcc_sub(IMCC_INFO(interp)->cur_call, (yyvsp[(2) - (5)].sr));
            add_pcc_cc(IMCC_INFO(interp)->cur_call, (yyvsp[(4) - (5)].sr));
         }
    break;

  case 113:
#line 855 "compilers/imcc/imcc.y"
    {  add_pcc_sub(IMCC_INFO(interp)->cur_call, mk_const(interp, (yyvsp[(2) - (5)].s),'S'));
            add_pcc_cc(IMCC_INFO(interp)->cur_call, (yyvsp[(4) - (5)].sr));
         }
    break;

  case 114:
#line 862 "compilers/imcc/imcc.y"
    {  (yyval.sr) = 0; }
    break;

  case 115:
#line 863 "compilers/imcc/imcc.y"
    {  add_pcc_arg(IMCC_INFO(interp)->cur_call, (yyvsp[(2) - (3)].sr)); }
    break;

  case 116:
#line 867 "compilers/imcc/imcc.y"
    {  (yyval.sr) = (yyvsp[(2) - (2)].sr); }
    break;

  case 117:
#line 872 "compilers/imcc/imcc.y"
    {  (yyval.sr) = 0; }
    break;

  case 118:
#line 873 "compilers/imcc/imcc.y"
    {  if ((yyvsp[(2) - (3)].sr)) add_pcc_result(IMCC_INFO(interp)->cur_call, (yyvsp[(2) - (3)].sr)); }
    break;

  case 119:
#line 877 "compilers/imcc/imcc.y"
    {  (yyval.sr) = (yyvsp[(2) - (3)].sr); (yyval.sr)->type |= (yyvsp[(3) - (3)].t); }
    break;

  case 120:
#line 878 "compilers/imcc/imcc.y"
    { is_def=1; }
    break;

  case 121:
#line 879 "compilers/imcc/imcc.y"
    {
         IdList* l = (yyvsp[(4) - (4)].idlist);
         if (l->unique_reg)
                 mk_ident_ur(interp, l->id, (yyvsp[(3) - (4)].t));
             else
                 mk_ident(interp, l->id, (yyvsp[(3) - (4)].t));
         is_def=0;
         (yyval.sr)=0;
     }
    break;

  case 122:
#line 891 "compilers/imcc/imcc.y"
    {  (yyval.t) = 0; }
    break;

  case 123:
#line 892 "compilers/imcc/imcc.y"
    {  (yyval.t) = (yyvsp[(1) - (2)].t) | (yyvsp[(2) - (2)].t); }
    break;

  case 124:
#line 896 "compilers/imcc/imcc.y"
    {  (yyval.t) = VT_FLAT;   }
    break;

  case 125:
#line 897 "compilers/imcc/imcc.y"
    {  (yyval.t) = VT_OPTIONAL; }
    break;

  case 126:
#line 898 "compilers/imcc/imcc.y"
    {  (yyval.t) = VT_OPT_FLAG; }
    break;

  case 127:
#line 899 "compilers/imcc/imcc.y"
    {  (yyval.t) = VT_NAMED; }
    break;

  case 128:
#line 900 "compilers/imcc/imcc.y"
    {  adv_named_set(interp,(yyvsp[(3) - (4)].s)); (yyval.t) = 0; }
    break;

  case 129:
#line 901 "compilers/imcc/imcc.y"
    {  (yyval.t) = VT_UNIQUE_REG; }
    break;

  case 130:
#line 906 "compilers/imcc/imcc.y"
    { (yyval.t) = 0; }
    break;

  case 131:
#line 907 "compilers/imcc/imcc.y"
    { (yyval.t) = 1; }
    break;

  case 134:
#line 917 "compilers/imcc/imcc.y"
    { begin_return_or_yield(interp, (yyvsp[(1) - (2)].t)); }
    break;

  case 135:
#line 920 "compilers/imcc/imcc.y"
    { (yyval.i) = 0;   IMCC_INFO(interp)->asm_state = AsmDefault; }
    break;

  case 136:
#line 921 "compilers/imcc/imcc.y"
    {  IMCC_INFO(interp)->asm_state = AsmDefault; (yyval.i) = 0;  }
    break;

  case 137:
#line 927 "compilers/imcc/imcc.y"
    {  (yyval.sr) = 0; }
    break;

  case 138:
#line 928 "compilers/imcc/imcc.y"
    {
       if ((yyvsp[(1) - (2)].sr)) add_pcc_return(IMCC_INFO(interp)->sr_return, (yyvsp[(1) - (2)].sr));
   }
    break;

  case 139:
#line 931 "compilers/imcc/imcc.y"
    {
       if ((yyvsp[(2) - (3)].sr)) add_pcc_return(IMCC_INFO(interp)->sr_return, (yyvsp[(2) - (3)].sr));
   }
    break;

  case 140:
#line 937 "compilers/imcc/imcc.y"
    {  (yyval.sr) = (yyvsp[(2) - (3)].sr); (yyval.sr)->type |= (yyvsp[(3) - (3)].t); }
    break;

  case 141:
#line 942 "compilers/imcc/imcc.y"
    {
            if ( IMCC_INFO(interp)->asm_state == AsmDefault)
                begin_return_or_yield(interp, 0);
        }
    break;

  case 142:
#line 947 "compilers/imcc/imcc.y"
    {  IMCC_INFO(interp)->asm_state = AsmDefault; (yyval.t) = 0;  }
    break;

  case 143:
#line 949 "compilers/imcc/imcc.y"
    {
            if ( IMCC_INFO(interp)->asm_state == AsmDefault)
                begin_return_or_yield(interp, 1);
        }
    break;

  case 144:
#line 954 "compilers/imcc/imcc.y"
    {  IMCC_INFO(interp)->asm_state = AsmDefault; (yyval.t) = 0;  }
    break;

  case 145:
#line 958 "compilers/imcc/imcc.y"
    { (yyval.i) = 0; }
    break;

  case 146:
#line 959 "compilers/imcc/imcc.y"
    {
      if (IMCC_INFO(interp)->adv_named_id) {
          add_pcc_named_return(interp,IMCC_INFO(interp)->sr_return,
                               IMCC_INFO(interp)->adv_named_id, (yyvsp[(1) - (1)].sr));
          IMCC_INFO(interp)->adv_named_id = NULL;
      }
      else add_pcc_return(IMCC_INFO(interp)->sr_return, (yyvsp[(1) - (1)].sr)); }
    break;

  case 147:
#line 966 "compilers/imcc/imcc.y"
    {
      add_pcc_named_return(interp,IMCC_INFO(interp)->sr_return,(yyvsp[(1) - (3)].s),(yyvsp[(3) - (3)].sr));}
    break;

  case 148:
#line 968 "compilers/imcc/imcc.y"
    {
      if (IMCC_INFO(interp)->adv_named_id) {
          add_pcc_named_return(interp,IMCC_INFO(interp)->sr_return,
                               IMCC_INFO(interp)->adv_named_id,(yyvsp[(3) - (3)].sr));
           IMCC_INFO(interp)->adv_named_id = NULL;
      }
      else add_pcc_return(IMCC_INFO(interp)->sr_return, (yyvsp[(3) - (3)].sr));    }
    break;

  case 149:
#line 975 "compilers/imcc/imcc.y"
    {
      add_pcc_named_return(interp,IMCC_INFO(interp)->sr_return,(yyvsp[(3) - (5)].s),(yyvsp[(5) - (5)].sr));}
    break;

  case 152:
#line 994 "compilers/imcc/imcc.y"
    { clear_state(interp); }
    break;

  case 153:
#line 999 "compilers/imcc/imcc.y"
    {  (yyval.i) = (yyvsp[(2) - (2)].i); }
    break;

  case 154:
#line 1000 "compilers/imcc/imcc.y"
    {  (yyval.i) = 0; }
    break;

  case 155:
#line 1001 "compilers/imcc/imcc.y"
    {  (yyval.i) = 0; }
    break;

  case 156:
#line 1002 "compilers/imcc/imcc.y"
    {  (yyval.i) = 0; }
    break;

  case 157:
#line 1006 "compilers/imcc/imcc.y"
    {  (yyval.i) = NULL; }
    break;

  case 161:
#line 1016 "compilers/imcc/imcc.y"
    {
         (yyval.i) = iLABEL(interp, IMCC_INFO(interp)->cur_unit, mk_local_label(interp, (yyvsp[(1) - (1)].s)));
                   }
    break;

  case 162:
#line 1025 "compilers/imcc/imcc.y"
    { (yyval.i) = (yyvsp[(2) - (3)].i); }
    break;

  case 163:
#line 1027 "compilers/imcc/imcc.y"
    { if (yynerrs >= PARROT_MAX_RECOVER_ERRORS) {
                           IMCC_warning(interp, "Too many errors. Correct some first.\n");
                           YYABORT;
                       }
                       yyerrok; }
    break;

  case 164:
#line 1036 "compilers/imcc/imcc.y"
    {
         IdList* l = (yyvsp[(1) - (1)].idlist);
         l->next = NULL;
         (yyval.idlist) = l;
     }
    break;

  case 165:
#line 1043 "compilers/imcc/imcc.y"
    {
         IdList* l = (yyvsp[(3) - (3)].idlist);
         l->next = (yyvsp[(1) - (3)].idlist);
         (yyval.idlist) = l;
     }
    break;

  case 166:
#line 1052 "compilers/imcc/imcc.y"
    {
         IdList* l = (IdList*)malloc(sizeof(IdList));
         l->id = (yyvsp[(1) - (2)].s);
         l->unique_reg = 1;
         (yyval.idlist) = l;
     }
    break;

  case 167:
#line 1060 "compilers/imcc/imcc.y"
    {
         IdList* l = (IdList*)malloc(sizeof(IdList));
         l->id = (yyvsp[(1) - (1)].s);
         l->unique_reg = 0;
         (yyval.idlist) = l;
     }
    break;

  case 170:
#line 1071 "compilers/imcc/imcc.y"
    { push_namespace((yyvsp[(2) - (2)].s)); }
    break;

  case 171:
#line 1072 "compilers/imcc/imcc.y"
    { pop_namespace((yyvsp[(2) - (2)].s)); }
    break;

  case 172:
#line 1073 "compilers/imcc/imcc.y"
    { is_def=1; }
    break;

  case 173:
#line 1074 "compilers/imcc/imcc.y"
    {
         IdList* l = (yyvsp[(4) - (4)].idlist);
         while (l) {
             IdList* l1;
             if (l->unique_reg)
                 mk_ident_ur(interp, l->id, (yyvsp[(3) - (4)].t));
             else
                 mk_ident(interp, l->id, (yyvsp[(3) - (4)].t));
             l1 = l;
             l = l->next;
             free(l1);
         }
         is_def=0; (yyval.i)=0;
     }
    break;

  case 174:
#line 1089 "compilers/imcc/imcc.y"
    {
                       set_lexical(interp, (yyvsp[(4) - (4)].sr), (yyvsp[(2) - (4)].s)); (yyval.i) = 0;
                    }
    break;

  case 175:
#line 1092 "compilers/imcc/imcc.y"
    { is_def=1; }
    break;

  case 176:
#line 1093 "compilers/imcc/imcc.y"
    { mk_const_ident(interp, (yyvsp[(4) - (6)].s), (yyvsp[(3) - (6)].t), (yyvsp[(6) - (6)].sr), 0);is_def=0; }
    break;

  case 178:
#line 1095 "compilers/imcc/imcc.y"
    { is_def=1; }
    break;

  case 179:
#line 1096 "compilers/imcc/imcc.y"
    { mk_const_ident(interp, (yyvsp[(4) - (6)].s), (yyvsp[(3) - (6)].t), (yyvsp[(6) - (6)].sr), 1);is_def=0; }
    break;

  case 180:
#line 1097 "compilers/imcc/imcc.y"
    { (yyval.i) = NULL;
                           IMCC_INFO(interp)->cur_call->pcc_sub->flags |= isTAIL_CALL;
                           IMCC_INFO(interp)->cur_call = NULL;
                        }
    break;

  case 181:
#line 1101 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "branch",1, (yyvsp[(2) - (2)].sr)); }
    break;

  case 182:
#line 1103 "compilers/imcc/imcc.y"
    { (yyval.i) = INS(interp, IMCC_INFO(interp)->cur_unit, (yyvsp[(1) - (2)].s), 0,
                              IMCC_INFO(interp) -> regs,
                              IMCC_INFO(interp) -> nargs,
                              IMCC_INFO(interp) -> keyvec, 1);
                       free((yyvsp[(1) - (2)].s)); }
    break;

  case 183:
#line 1109 "compilers/imcc/imcc.y"
    {  (yyval.i) =MK_I(interp, IMCC_INFO(interp)->cur_unit, "null", 1, (yyvsp[(2) - (2)].sr)); }
    break;

  case 184:
#line 1110 "compilers/imcc/imcc.y"
    {  (yyval.i) = 0; IMCC_INFO(interp)->cur_call = NULL; }
    break;

  case 185:
#line 1111 "compilers/imcc/imcc.y"
    {  (yyval.i) = 0; }
    break;

  case 187:
#line 1113 "compilers/imcc/imcc.y"
    { (yyval.i) = 0;}
    break;

  case 188:
#line 1117 "compilers/imcc/imcc.y"
    { (yyval.t) = 'I'; }
    break;

  case 189:
#line 1118 "compilers/imcc/imcc.y"
    { (yyval.t) = 'N'; }
    break;

  case 190:
#line 1119 "compilers/imcc/imcc.y"
    { (yyval.t) = 'S'; }
    break;

  case 191:
#line 1120 "compilers/imcc/imcc.y"
    { (yyval.t) = 'P'; }
    break;

  case 192:
#line 1121 "compilers/imcc/imcc.y"
    { (yyval.t) = 'P'; free((yyvsp[(1) - (1)].s)); }
    break;

  case 193:
#line 1126 "compilers/imcc/imcc.y"
    {
             if (( IMCC_INFO(interp)->cur_pmc_type = pmc_type(interp,
                  string_from_cstring(interp, (yyvsp[(1) - (1)].s), 0))) <= 0) {
                IMCC_fataly(interp, E_SyntaxError,
                   "Unknown PMC type '%s'\n", (yyvsp[(1) - (1)].s));
            }
         }
    break;

  case 194:
#line 1137 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "set", 2, (yyvsp[(1) - (3)].sr), (yyvsp[(3) - (3)].sr));      }
    break;

  case 195:
#line 1139 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "not", 2, (yyvsp[(1) - (4)].sr), (yyvsp[(4) - (4)].sr));      }
    break;

  case 196:
#line 1141 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "neg", 2, (yyvsp[(1) - (4)].sr), (yyvsp[(4) - (4)].sr));      }
    break;

  case 197:
#line 1143 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "bnot", 2, (yyvsp[(1) - (4)].sr), (yyvsp[(4) - (4)].sr));     }
    break;

  case 198:
#line 1145 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "add", 3, (yyvsp[(1) - (5)].sr), (yyvsp[(3) - (5)].sr), (yyvsp[(5) - (5)].sr));  }
    break;

  case 199:
#line 1147 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "sub", 3, (yyvsp[(1) - (5)].sr), (yyvsp[(3) - (5)].sr), (yyvsp[(5) - (5)].sr));  }
    break;

  case 200:
#line 1149 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "mul", 3, (yyvsp[(1) - (5)].sr), (yyvsp[(3) - (5)].sr), (yyvsp[(5) - (5)].sr));  }
    break;

  case 201:
#line 1151 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "pow", 3, (yyvsp[(1) - (5)].sr), (yyvsp[(3) - (5)].sr), (yyvsp[(5) - (5)].sr));  }
    break;

  case 202:
#line 1153 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "div", 3, (yyvsp[(1) - (5)].sr), (yyvsp[(3) - (5)].sr), (yyvsp[(5) - (5)].sr));  }
    break;

  case 203:
#line 1155 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "fdiv", 3, (yyvsp[(1) - (5)].sr), (yyvsp[(3) - (5)].sr), (yyvsp[(5) - (5)].sr)); }
    break;

  case 204:
#line 1157 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "mod", 3, (yyvsp[(1) - (5)].sr), (yyvsp[(3) - (5)].sr), (yyvsp[(5) - (5)].sr));  }
    break;

  case 205:
#line 1159 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "concat", 3, (yyvsp[(1) - (5)].sr),(yyvsp[(3) - (5)].sr),(yyvsp[(5) - (5)].sr)); }
    break;

  case 206:
#line 1161 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "iseq", 3, (yyvsp[(1) - (5)].sr), (yyvsp[(3) - (5)].sr), (yyvsp[(5) - (5)].sr)); }
    break;

  case 207:
#line 1163 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "isne", 3, (yyvsp[(1) - (5)].sr), (yyvsp[(3) - (5)].sr), (yyvsp[(5) - (5)].sr)); }
    break;

  case 208:
#line 1165 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "isgt", 3, (yyvsp[(1) - (5)].sr), (yyvsp[(3) - (5)].sr), (yyvsp[(5) - (5)].sr)); }
    break;

  case 209:
#line 1167 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "islt", 3, (yyvsp[(1) - (5)].sr), (yyvsp[(3) - (5)].sr), (yyvsp[(5) - (5)].sr)); }
    break;

  case 210:
#line 1169 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "isle", 3, (yyvsp[(1) - (5)].sr), (yyvsp[(3) - (5)].sr), (yyvsp[(5) - (5)].sr)); }
    break;

  case 211:
#line 1171 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "isge", 3, (yyvsp[(1) - (5)].sr), (yyvsp[(3) - (5)].sr), (yyvsp[(5) - (5)].sr)); }
    break;

  case 212:
#line 1173 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "shl", 3, (yyvsp[(1) - (5)].sr), (yyvsp[(3) - (5)].sr), (yyvsp[(5) - (5)].sr));  }
    break;

  case 213:
#line 1175 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "shr", 3, (yyvsp[(1) - (5)].sr), (yyvsp[(3) - (5)].sr), (yyvsp[(5) - (5)].sr));  }
    break;

  case 214:
#line 1177 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "lsr", 3, (yyvsp[(1) - (5)].sr), (yyvsp[(3) - (5)].sr), (yyvsp[(5) - (5)].sr));  }
    break;

  case 215:
#line 1179 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "and", 3, (yyvsp[(1) - (5)].sr), (yyvsp[(3) - (5)].sr), (yyvsp[(5) - (5)].sr));  }
    break;

  case 216:
#line 1181 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "or", 3, (yyvsp[(1) - (5)].sr), (yyvsp[(3) - (5)].sr), (yyvsp[(5) - (5)].sr));   }
    break;

  case 217:
#line 1183 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "xor", 3, (yyvsp[(1) - (5)].sr), (yyvsp[(3) - (5)].sr), (yyvsp[(5) - (5)].sr));  }
    break;

  case 218:
#line 1185 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "band", 3, (yyvsp[(1) - (5)].sr), (yyvsp[(3) - (5)].sr), (yyvsp[(5) - (5)].sr)); }
    break;

  case 219:
#line 1187 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "bor", 3, (yyvsp[(1) - (5)].sr), (yyvsp[(3) - (5)].sr), (yyvsp[(5) - (5)].sr));  }
    break;

  case 220:
#line 1189 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "bxor", 3, (yyvsp[(1) - (5)].sr), (yyvsp[(3) - (5)].sr), (yyvsp[(5) - (5)].sr)); }
    break;

  case 221:
#line 1191 "compilers/imcc/imcc.y"
    { (yyval.i) = iINDEXFETCH(interp, IMCC_INFO(interp)->cur_unit, (yyvsp[(1) - (6)].sr), (yyvsp[(3) - (6)].sr), (yyvsp[(5) - (6)].sr)); }
    break;

  case 222:
#line 1193 "compilers/imcc/imcc.y"
    { (yyval.i) = iINDEXSET(interp, IMCC_INFO(interp)->cur_unit, (yyvsp[(1) - (6)].sr), (yyvsp[(3) - (6)].sr), (yyvsp[(6) - (6)].sr)); }
    break;

  case 223:
#line 1195 "compilers/imcc/imcc.y"
    { (yyval.i) = iNEW(interp, IMCC_INFO(interp)->cur_unit, (yyvsp[(1) - (6)].sr), (yyvsp[(4) - (6)].s), (yyvsp[(6) - (6)].sr), 1); }
    break;

  case 224:
#line 1197 "compilers/imcc/imcc.y"
    { (yyval.i) = iNEW(interp, IMCC_INFO(interp)->cur_unit, (yyvsp[(1) - (7)].sr), (yyvsp[(4) - (7)].s), (yyvsp[(6) - (7)].sr), 1); }
    break;

  case 225:
#line 1199 "compilers/imcc/imcc.y"
    { (yyval.i) = iNEW(interp, IMCC_INFO(interp)->cur_unit, (yyvsp[(1) - (4)].sr), (yyvsp[(4) - (4)].s), NULL, 1); }
    break;

  case 226:
#line 1201 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "new", 2, (yyvsp[(1) - (4)].sr), (yyvsp[(4) - (4)].sr)); }
    break;

  case 227:
#line 1203 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "new", 2, (yyvsp[(1) - (6)].sr), (yyvsp[(5) - (6)].sr)); }
    break;

  case 228:
#line 1205 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "new", 3, (yyvsp[(1) - (6)].sr), (yyvsp[(4) - (6)].sr), (yyvsp[(6) - (6)].sr)); }
    break;

  case 229:
#line 1207 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "new", 3, (yyvsp[(1) - (7)].sr), (yyvsp[(4) - (7)].sr), (yyvsp[(6) - (7)].sr)); }
    break;

  case 230:
#line 1209 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "set_addr",
                        2, (yyvsp[(1) - (4)].sr), mk_label_address(interp, (yyvsp[(4) - (4)].s))); }
    break;

  case 231:
#line 1212 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "find_global",2,(yyvsp[(1) - (4)].sr),(yyvsp[(4) - (4)].sr));}
    break;

  case 232:
#line 1214 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "store_global",2, (yyvsp[(2) - (4)].sr),(yyvsp[(4) - (4)].sr)); }
    break;

  case 233:
#line 1218 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "new", 2, (yyvsp[(2) - (4)].sr), (yyvsp[(4) - (4)].sr)); }
    break;

  case 234:
#line 1220 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "new", 3, (yyvsp[(2) - (6)].sr), (yyvsp[(4) - (6)].sr), (yyvsp[(6) - (6)].sr)); }
    break;

  case 235:
#line 1222 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "new", 3, (yyvsp[(2) - (7)].sr), (yyvsp[(4) - (7)].sr), (yyvsp[(6) - (7)].sr)); }
    break;

  case 236:
#line 1225 "compilers/imcc/imcc.y"
    {
            add_pcc_result((yyvsp[(3) - (3)].i)->r[0], (yyvsp[(1) - (3)].sr));
            IMCC_INFO(interp)->cur_call = NULL;
            (yyval.i) = 0;
         }
    break;

  case 237:
#line 1231 "compilers/imcc/imcc.y"
    {
            (yyval.i) = IMCC_create_itcall_label(interp);
         }
    break;

  case 238:
#line 1235 "compilers/imcc/imcc.y"
    {
           IMCC_itcall_sub(interp, (yyvsp[(6) - (9)].sr));
           IMCC_INFO(interp)->cur_call = NULL;
         }
    break;

  case 242:
#line 1243 "compilers/imcc/imcc.y"
    {  (yyval.i) =MK_I(interp, IMCC_INFO(interp)->cur_unit, "null", 1, (yyvsp[(1) - (3)].sr)); }
    break;

  case 243:
#line 1246 "compilers/imcc/imcc.y"
    { (yyval.i) = IMCC_create_itcall_label(interp);
                           (yyval.i)->type &= ~ITCALL; (yyval.i)->type |= ITRESULT; }
    break;

  case 244:
#line 1248 "compilers/imcc/imcc.y"
    {  (yyval.i) = 0; }
    break;

  case 245:
#line 1253 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "add", 2, (yyvsp[(1) - (3)].sr), (yyvsp[(3) - (3)].sr)); }
    break;

  case 246:
#line 1255 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "sub", 2, (yyvsp[(1) - (3)].sr), (yyvsp[(3) - (3)].sr)); }
    break;

  case 247:
#line 1257 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "mul", 2, (yyvsp[(1) - (3)].sr), (yyvsp[(3) - (3)].sr)); }
    break;

  case 248:
#line 1259 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "div", 2, (yyvsp[(1) - (3)].sr), (yyvsp[(3) - (3)].sr)); }
    break;

  case 249:
#line 1261 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "mod", 2, (yyvsp[(1) - (3)].sr), (yyvsp[(3) - (3)].sr)); }
    break;

  case 250:
#line 1263 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "fdiv", 2, (yyvsp[(1) - (3)].sr), (yyvsp[(3) - (3)].sr)); }
    break;

  case 251:
#line 1265 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "concat", 2, (yyvsp[(1) - (3)].sr), (yyvsp[(3) - (3)].sr)); }
    break;

  case 252:
#line 1267 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "band", 2, (yyvsp[(1) - (3)].sr), (yyvsp[(3) - (3)].sr)); }
    break;

  case 253:
#line 1269 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "bor", 2, (yyvsp[(1) - (3)].sr), (yyvsp[(3) - (3)].sr)); }
    break;

  case 254:
#line 1271 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "bxor", 2, (yyvsp[(1) - (3)].sr), (yyvsp[(3) - (3)].sr)); }
    break;

  case 255:
#line 1273 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "shr", 2, (yyvsp[(1) - (3)].sr), (yyvsp[(3) - (3)].sr)); }
    break;

  case 256:
#line 1275 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "shl", 2, (yyvsp[(1) - (3)].sr), (yyvsp[(3) - (3)].sr)); }
    break;

  case 257:
#line 1277 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "lsr", 2, (yyvsp[(1) - (3)].sr), (yyvsp[(3) - (3)].sr)); }
    break;

  case 258:
#line 1282 "compilers/imcc/imcc.y"
    { (yyval.i) = func_ins(interp, IMCC_INFO(interp)->cur_unit, (yyvsp[(1) - (4)].sr), (yyvsp[(3) - (4)].s),
                                   IMCC_INFO(interp) -> regs,
                                   IMCC_INFO(interp) -> nargs,
                                   IMCC_INFO(interp) -> keyvec, 1);
                     free((yyvsp[(3) - (4)].s));
                   }
    break;

  case 259:
#line 1290 "compilers/imcc/imcc.y"
    { (yyval.sr) = mk_sub_address(interp, (yyvsp[(1) - (1)].s)); }
    break;

  case 260:
#line 1291 "compilers/imcc/imcc.y"
    { (yyval.sr) = mk_sub_address_fromc(interp, (yyvsp[(1) - (1)].s)); }
    break;

  case 261:
#line 1292 "compilers/imcc/imcc.y"
    { (yyval.sr) = mk_sub_address_u(interp, (yyvsp[(1) - (1)].s)); }
    break;

  case 262:
#line 1293 "compilers/imcc/imcc.y"
    { (yyval.sr) = (yyvsp[(1) - (1)].sr);
                       if ((yyvsp[(1) - (1)].sr)->set != 'P')
                            IMCC_fataly(interp, E_SyntaxError,
                                  "Sub isn't a PMC");
                     }
    break;

  case 263:
#line 1298 "compilers/imcc/imcc.y"
    { IMCC_INFO(interp)->cur_obj = (yyvsp[(1) - (3)].sr); (yyval.sr) = (yyvsp[(3) - (3)].sr); }
    break;

  case 264:
#line 1299 "compilers/imcc/imcc.y"
    { IMCC_INFO(interp)->cur_obj = (yyvsp[(1) - (3)].sr); (yyval.sr) = mk_const(interp, (yyvsp[(3) - (3)].s), 'S'); }
    break;

  case 265:
#line 1300 "compilers/imcc/imcc.y"
    { IMCC_INFO(interp)->cur_obj = (yyvsp[(1) - (3)].sr); (yyval.sr) = (yyvsp[(3) - (3)].sr); }
    break;

  case 266:
#line 1303 "compilers/imcc/imcc.y"
    { (yyval.t)=0; }
    break;

  case 267:
#line 1304 "compilers/imcc/imcc.y"
    { (yyval.t)=0; }
    break;

  case 268:
#line 1309 "compilers/imcc/imcc.y"
    {
           (yyval.i) = IMCC_create_itcall_label(interp);
           IMCC_itcall_sub(interp, (yyvsp[(1) - (1)].sr));
        }
    break;

  case 269:
#line 1314 "compilers/imcc/imcc.y"
    {  (yyval.i) = (yyvsp[(2) - (5)].i); }
    break;

  case 270:
#line 1318 "compilers/imcc/imcc.y"
    {  (yyval.sr) = 0; }
    break;

  case 271:
#line 1319 "compilers/imcc/imcc.y"
    {  (yyval.sr) = 0;
       if (IMCC_INFO(interp)->adv_named_id) {
           add_pcc_named_arg(interp, IMCC_INFO(interp)->cur_call, IMCC_INFO(interp)->adv_named_id, (yyvsp[(3) - (3)].sr));
           IMCC_INFO(interp)->adv_named_id = NULL;
       }
       else add_pcc_arg(IMCC_INFO(interp)->cur_call, (yyvsp[(3) - (3)].sr));
   }
    break;

  case 272:
#line 1326 "compilers/imcc/imcc.y"
    {  (yyval.sr) = 0;
       if (IMCC_INFO(interp)->adv_named_id) {
           add_pcc_named_arg(interp, IMCC_INFO(interp)->cur_call,IMCC_INFO(interp)->adv_named_id,(yyvsp[(1) - (1)].sr));
           IMCC_INFO(interp)->adv_named_id = NULL;
       }
       else add_pcc_arg(IMCC_INFO(interp)->cur_call, (yyvsp[(1) - (1)].sr));
   }
    break;

  case 273:
#line 1333 "compilers/imcc/imcc.y"
    { (yyval.sr) = 0;
                                     add_pcc_named_arg(interp,IMCC_INFO(interp)->cur_call,(yyvsp[(3) - (5)].s),(yyvsp[(5) - (5)].sr));}
    break;

  case 274:
#line 1335 "compilers/imcc/imcc.y"
    { (yyval.sr) = 0; add_pcc_named_arg(interp,IMCC_INFO(interp)->cur_call,(yyvsp[(1) - (3)].s),(yyvsp[(3) - (3)].sr));}
    break;

  case 275:
#line 1339 "compilers/imcc/imcc.y"
    {  (yyval.sr) = (yyvsp[(1) - (2)].sr); (yyval.sr)->type |= (yyvsp[(2) - (2)].t); }
    break;

  case 276:
#line 1343 "compilers/imcc/imcc.y"
    {  (yyval.t) = 0; }
    break;

  case 277:
#line 1344 "compilers/imcc/imcc.y"
    {  (yyval.t) = (yyvsp[(1) - (2)].t) | (yyvsp[(2) - (2)].t); }
    break;

  case 278:
#line 1348 "compilers/imcc/imcc.y"
    { (yyval.t) = VT_FLAT; }
    break;

  case 279:
#line 1349 "compilers/imcc/imcc.y"
    { (yyval.t) = VT_NAMED; }
    break;

  case 280:
#line 1350 "compilers/imcc/imcc.y"
    { adv_named_set(interp,(yyvsp[(3) - (4)].s)); (yyval.t) = 0; }
    break;

  case 281:
#line 1353 "compilers/imcc/imcc.y"
    { (yyval.sr) = (yyvsp[(1) - (2)].sr); (yyval.sr)->type |= (yyvsp[(2) - (2)].t); }
    break;

  case 282:
#line 1357 "compilers/imcc/imcc.y"
    {
         (yyval.sr) = 0;
         if (IMCC_INFO(interp)->adv_named_id) {
             add_pcc_named_result(interp,IMCC_INFO(interp)->cur_call,IMCC_INFO(interp)->adv_named_id,(yyvsp[(3) - (3)].sr));
             IMCC_INFO(interp)->adv_named_id = NULL;
         }
         else add_pcc_result(IMCC_INFO(interp)->cur_call, (yyvsp[(3) - (3)].sr)); }
    break;

  case 283:
#line 1364 "compilers/imcc/imcc.y"
    {
        add_pcc_named_result(interp,IMCC_INFO(interp)->cur_call,(yyvsp[(3) - (5)].s),(yyvsp[(5) - (5)].sr)); }
    break;

  case 284:
#line 1366 "compilers/imcc/imcc.y"
    {
       (yyval.sr) = 0;
       if (IMCC_INFO(interp)->adv_named_id) {
           add_pcc_named_result(interp,IMCC_INFO(interp)->cur_call,IMCC_INFO(interp)->adv_named_id,(yyvsp[(1) - (1)].sr));
           IMCC_INFO(interp)->adv_named_id = NULL;
       }
       else add_pcc_result(IMCC_INFO(interp)->cur_call, (yyvsp[(1) - (1)].sr)); }
    break;

  case 285:
#line 1373 "compilers/imcc/imcc.y"
    { add_pcc_named_result(interp,IMCC_INFO(interp)->cur_call,(yyvsp[(1) - (3)].s),(yyvsp[(3) - (3)].sr)); }
    break;

  case 286:
#line 1374 "compilers/imcc/imcc.y"
    {  (yyval.sr) = 0; }
    break;

  case 287:
#line 1379 "compilers/imcc/imcc.y"
    { (yyval.i) =MK_I(interp, IMCC_INFO(interp)->cur_unit, (yyvsp[(3) - (6)].s), 3, (yyvsp[(2) - (6)].sr), (yyvsp[(4) - (6)].sr), (yyvsp[(6) - (6)].sr)); }
    break;

  case 288:
#line 1381 "compilers/imcc/imcc.y"
    { (yyval.i) =MK_I(interp, IMCC_INFO(interp)->cur_unit, inv_op((yyvsp[(3) - (6)].s)), 3, (yyvsp[(2) - (6)].sr),(yyvsp[(4) - (6)].sr), (yyvsp[(6) - (6)].sr)); }
    break;

  case 289:
#line 1383 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "if_null", 2, (yyvsp[(3) - (5)].sr), (yyvsp[(5) - (5)].sr)); }
    break;

  case 290:
#line 1385 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "unless_null", 2, (yyvsp[(3) - (5)].sr), (yyvsp[(5) - (5)].sr)); }
    break;

  case 291:
#line 1387 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "if", 2, (yyvsp[(2) - (4)].sr), (yyvsp[(4) - (4)].sr)); }
    break;

  case 292:
#line 1389 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "unless",2, (yyvsp[(2) - (4)].sr), (yyvsp[(4) - (4)].sr)); }
    break;

  case 293:
#line 1391 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "if", 2, (yyvsp[(2) - (4)].sr), (yyvsp[(4) - (4)].sr)); }
    break;

  case 294:
#line 1393 "compilers/imcc/imcc.y"
    { (yyval.i) = MK_I(interp, IMCC_INFO(interp)->cur_unit, "unless", 2, (yyvsp[(2) - (4)].sr), (yyvsp[(4) - (4)].sr)); }
    break;

  case 295:
#line 1397 "compilers/imcc/imcc.y"
    {  (yyval.s) = "eq"; }
    break;

  case 296:
#line 1398 "compilers/imcc/imcc.y"
    {  (yyval.s) = "ne"; }
    break;

  case 297:
#line 1399 "compilers/imcc/imcc.y"
    {  (yyval.s) = "gt"; }
    break;

  case 298:
#line 1400 "compilers/imcc/imcc.y"
    {  (yyval.s) = "ge"; }
    break;

  case 299:
#line 1401 "compilers/imcc/imcc.y"
    {  (yyval.s) = "lt"; }
    break;

  case 300:
#line 1402 "compilers/imcc/imcc.y"
    {  (yyval.s) = "le"; }
    break;

  case 303:
#line 1411 "compilers/imcc/imcc.y"
    {  (yyval.sr) = NULL; }
    break;

  case 304:
#line 1412 "compilers/imcc/imcc.y"
    {  (yyval.sr) = (yyvsp[(1) - (1)].sr); }
    break;

  case 305:
#line 1416 "compilers/imcc/imcc.y"
    { (yyval.sr) = IMCC_INFO(interp)->regs[0]; }
    break;

  case 307:
#line 1421 "compilers/imcc/imcc.y"
    {  IMCC_INFO(interp)->regs[IMCC_INFO(interp)->nargs++] = (yyvsp[(1) - (1)].sr); }
    break;

  case 308:
#line 1423 "compilers/imcc/imcc.y"
    {
                      IMCC_INFO(interp) -> regs[IMCC_INFO(interp)->nargs++] = (yyvsp[(1) - (4)].sr);
                      IMCC_INFO(interp) -> keyvec |= KEY_BIT(IMCC_INFO(interp)->nargs);
                      IMCC_INFO(interp) -> regs[IMCC_INFO(interp)->nargs++] = (yyvsp[(3) - (4)].sr);
                      (yyval.sr) = (yyvsp[(1) - (4)].sr);
                   }
    break;

  case 309:
#line 1430 "compilers/imcc/imcc.y"
    {
                      IMCC_INFO(interp) -> regs[IMCC_INFO(interp)->nargs++] = (yyvsp[(2) - (3)].sr);
                      (yyval.sr) = (yyvsp[(2) - (3)].sr);
                   }
    break;

  case 311:
#line 1437 "compilers/imcc/imcc.y"
    { (yyval.sr) = mk_sub_address_fromc(interp, (yyvsp[(1) - (1)].s)); }
    break;

  case 312:
#line 1438 "compilers/imcc/imcc.y"
    { (yyval.sr) = mk_sub_address_u(interp, (yyvsp[(1) - (1)].s)); }
    break;

  case 313:
#line 1442 "compilers/imcc/imcc.y"
    { (yyval.sr) = mk_sub_address(interp, (yyvsp[(1) - (1)].s)); }
    break;

  case 314:
#line 1443 "compilers/imcc/imcc.y"
    { (yyval.sr) = mk_sub_address(interp, (yyvsp[(1) - (1)].s)); }
    break;

  case 315:
#line 1447 "compilers/imcc/imcc.y"
    { (yyval.sr) = mk_label_address(interp, (yyvsp[(1) - (1)].s)); }
    break;

  case 316:
#line 1448 "compilers/imcc/imcc.y"
    { (yyval.sr) = mk_label_address(interp, (yyvsp[(1) - (1)].s)); }
    break;

  case 321:
#line 1461 "compilers/imcc/imcc.y"
    {  IMCC_INFO(interp)->nkeys = 0;
                      IMCC_INFO(interp)->in_slice = 0; }
    break;

  case 322:
#line 1463 "compilers/imcc/imcc.y"
    {  (yyval.sr) = link_keys(interp,
                                     IMCC_INFO(interp)->nkeys,
                                     IMCC_INFO(interp)->keys, 0); }
    break;

  case 323:
#line 1468 "compilers/imcc/imcc.y"
    {  IMCC_INFO(interp)->nkeys = 0;
                      IMCC_INFO(interp)->in_slice = 0; }
    break;

  case 324:
#line 1470 "compilers/imcc/imcc.y"
    {  (yyval.sr) = link_keys(interp,
                                     IMCC_INFO(interp)->nkeys,
                                     IMCC_INFO(interp)->keys, 1); }
    break;

  case 325:
#line 1476 "compilers/imcc/imcc.y"
    {  IMCC_INFO(interp)->keys[IMCC_INFO(interp)->nkeys++] = (yyvsp[(1) - (1)].sr); }
    break;

  case 326:
#line 1478 "compilers/imcc/imcc.y"
    {  IMCC_INFO(interp)->keys[IMCC_INFO(interp)->nkeys++] = (yyvsp[(3) - (3)].sr);
                      (yyval.sr) = IMCC_INFO(interp)->keys[0]; }
    break;

  case 327:
#line 1480 "compilers/imcc/imcc.y"
    { IMCC_INFO(interp)->in_slice = 1; }
    break;

  case 328:
#line 1481 "compilers/imcc/imcc.y"
    { IMCC_INFO(interp)->keys[IMCC_INFO(interp)->nkeys++] = (yyvsp[(4) - (4)].sr);
                       (yyval.sr) = IMCC_INFO(interp)->keys[0]; }
    break;

  case 329:
#line 1486 "compilers/imcc/imcc.y"
    { if (IMCC_INFO(interp)->in_slice) {
                         (yyvsp[(1) - (1)].sr)->type |= VT_START_SLICE | VT_END_SLICE;
                     }
                     (yyval.sr) = (yyvsp[(1) - (1)].sr);
                   }
    break;

  case 330:
#line 1492 "compilers/imcc/imcc.y"
    { (yyvsp[(1) - (3)].sr)->type |= VT_START_SLICE;
                     (yyvsp[(3) - (3)].sr)->type |= VT_END_SLICE;
                     IMCC_INFO(interp)->keys[IMCC_INFO(interp)->nkeys++] = (yyvsp[(1) - (3)].sr);
                     (yyval.sr) = (yyvsp[(3) - (3)].sr); }
    break;

  case 331:
#line 1496 "compilers/imcc/imcc.y"
    { (yyvsp[(2) - (2)].sr)->type |= VT_START_ZERO | VT_END_SLICE; (yyval.sr) = (yyvsp[(2) - (2)].sr); }
    break;

  case 332:
#line 1497 "compilers/imcc/imcc.y"
    { (yyvsp[(1) - (2)].sr)->type |= VT_START_SLICE | VT_END_INF; (yyval.sr) = (yyvsp[(1) - (2)].sr); }
    break;

  case 333:
#line 1501 "compilers/imcc/imcc.y"
    {  (yyval.sr) = mk_symreg(interp, (yyvsp[(1) - (1)].s), 'I'); }
    break;

  case 334:
#line 1502 "compilers/imcc/imcc.y"
    {  (yyval.sr) = mk_symreg(interp, (yyvsp[(1) - (1)].s), 'N'); }
    break;

  case 335:
#line 1503 "compilers/imcc/imcc.y"
    {  (yyval.sr) = mk_symreg(interp, (yyvsp[(1) - (1)].s), 'S'); }
    break;

  case 336:
#line 1504 "compilers/imcc/imcc.y"
    {  (yyval.sr) = mk_symreg(interp, (yyvsp[(1) - (1)].s), 'P'); }
    break;

  case 337:
#line 1505 "compilers/imcc/imcc.y"
    {  (yyval.sr) = mk_pasm_reg(interp, (yyvsp[(1) - (1)].s));    }
    break;

  case 338:
#line 1509 "compilers/imcc/imcc.y"
    {  (yyval.sr) = mk_const(interp, (yyvsp[(1) - (1)].s), 'I'); }
    break;

  case 339:
#line 1510 "compilers/imcc/imcc.y"
    {  (yyval.sr) = mk_const(interp, (yyvsp[(1) - (1)].s), 'N'); }
    break;

  case 340:
#line 1511 "compilers/imcc/imcc.y"
    {  (yyval.sr) = mk_const(interp, (yyvsp[(1) - (1)].s), 'S'); }
    break;

  case 341:
#line 1512 "compilers/imcc/imcc.y"
    {  (yyval.sr) = mk_const(interp, (yyvsp[(1) - (1)].s), 'U'); }
    break;

  case 342:
#line 1516 "compilers/imcc/imcc.y"
    {  (yyval.sr) = mk_symreg(interp, (yyvsp[(1) - (1)].s), 'S'); }
    break;

  case 343:
#line 1517 "compilers/imcc/imcc.y"
    {  (yyval.sr) = mk_const(interp, (yyvsp[(1) - (1)].s), 'S');  }
    break;


/* Line 1267 of yacc.c.  */
#line 4410 "compilers/imcc/imcparser.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (yyscanner, interp, YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yyscanner, interp, yymsg);
	  }
	else
	  {
	    yyerror (yyscanner, interp, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, yyscanner, interp);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yyscanner, interp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (yyscanner, interp, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, yyscanner, interp);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yyscanner, interp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 1522 "compilers/imcc/imcc.y"


/* I need this prototype somewhere... */
char *yyget_text (yyscan_t yyscanner );

/* I do not like this function, but, atm, it is the only way I can
 * make the code in yyerror work without segfault on some specific
 * cases.
 */
/* int yyholds_char(yyscan_t yyscanner ); */

int yyerror(void *yyscanner, Interp *interp, char * s)
{
    /* If the error occurr in the end of the buffer (I mean, the last
     * token was already read), yyget_text will return a pointer
     * outside the bison buffer, and thus, not "accessible" by
     * us. This means it may segfault. */
    char *chr = yyget_text((yyscan_t)yyscanner);

    /* IMCC_fataly(interp, E_SyntaxError, s); */
    /* --- This was called before, not sure if I should call some
           similar function that does not die like this one. */


    /* Basically, if current token is a newline, it mean the error was
     * before the newline, and thus, line is the line *after* the
     * error.
     */
    if (!at_eof(yyscanner) && *chr == '\n') {
        IMCC_INFO(interp)->line--;
        IMCC_warning(interp, "error:imcc:%s", s);
        IMCC_print_inc(interp);
        IMCC_INFO(interp)->line++;
    }
    else {
        IMCC_warning(interp, "error:imcc:%s", s);
        IMCC_print_inc(interp);
    }

    return 0;
}

/*
 * Local variables:
 *   c-file-style: "parrot"
 * End:
 * vim: expandtab shiftwidth=4:
 */

