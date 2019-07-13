
/* Result Sets Interface */
#ifndef SQL_CRSR
#  define SQL_CRSR
  struct sql_cursor
  {
    unsigned int curocn;
    void *ptr1;
    void *ptr2;
    unsigned int magic;
  };
  typedef struct sql_cursor sql_cursor;
  typedef struct sql_cursor SQL_CURSOR;
#endif /* SQL_CRSR */

/* Thread Safety */
typedef void * sql_context;
typedef void * SQL_CONTEXT;

/* Object support */
struct sqltvn
{
  unsigned char *tvnvsn; 
  unsigned short tvnvsnl; 
  unsigned char *tvnnm;
  unsigned short tvnnml; 
  unsigned char *tvnsnm;
  unsigned short tvnsnml;
};
typedef struct sqltvn sqltvn;

struct sqladts
{
  unsigned int adtvsn; 
  unsigned short adtmode; 
  unsigned short adtnum;  
  sqltvn adttvn[1];       
};
typedef struct sqladts sqladts;

static struct sqladts sqladt = {
  1,0,0,
};

/* Binding to PL/SQL Records */
struct sqltdss
{
  unsigned int tdsvsn; 
  unsigned short tdsnum; 
  unsigned char *tdsval[1]; 
};
typedef struct sqltdss sqltdss;
static struct sqltdss sqltds =
{
  1,
  0,
};

/* File name & Package Name */
struct sqlcxp
{
  unsigned short fillen;
           char  filnam[7];
};
static const struct sqlcxp sqlfpn =
{
    6,
    "test.i"
};


static unsigned int sqlctx = 4957;


static struct sqlexd {
   unsigned long  sqlvsn;
   unsigned int   arrsiz;
   unsigned int   iters;
   unsigned int   offset;
   unsigned short selerr;
   unsigned short sqlety;
   unsigned int   occurs;
      const short *cud;
   unsigned char  *sqlest;
      const char  *stmt;
   sqladts *sqladtp;
   sqltdss *sqltdsp;
   unsigned char  **sqphsv;
   unsigned long  *sqphsl;
            int   *sqphss;
            short **sqpind;
            int   *sqpins;
   unsigned long  *sqparm;
   unsigned long  **sqparc;
   unsigned short  *sqpadto;
   unsigned short  *sqptdso;
   unsigned int   sqlcmax;
   unsigned int   sqlcmin;
   unsigned int   sqlcincr;
   unsigned int   sqlctimeout;
   unsigned int   sqlcnowait;
            int   sqfoff;
   unsigned int   sqcmod;
   unsigned int   sqfmod;
   unsigned char  *sqhstv[4];
   unsigned long  sqhstl[4];
            int   sqhsts[4];
            short *sqindv[4];
            int   sqinds[4];
   unsigned long  sqharm[4];
   unsigned long  *sqharc[4];
   unsigned short  sqadto[4];
   unsigned short  sqtdso[4];
} sqlstm = {12,4};

/* SQLLIB Prototypes */
extern void sqlcxt (void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlcx2t(void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlbuft(void **, char *);
extern void sqlgs2t(void **, char *);
extern void sqlorat(void **, unsigned int *, void *);

/* Forms Interface */
static const int IAPSUCC = 0;
static const int IAPFAIL = 1403;
static const int IAPFTL  = 535;
extern void sqliem(unsigned char *, signed int *);

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{12,4242,178,0,0,
5,0,0,0,0,0,27,509,0,0,4,4,0,1,0,1,97,0,0,1,10,0,0,1,10,0,0,1,10,0,0,
36,0,0,2,136,0,4,518,0,0,3,0,0,1,0,2,5,0,0,2,5,0,0,2,5,0,0,
63,0,0,3,76,0,4,525,0,0,2,0,0,1,0,2,5,0,0,2,5,0,0,
86,0,0,4,0,0,32,541,0,0,0,0,0,1,0,
};


 

 
 

 
 
 

 


#ident	"@(#)stdio.h	1.85	11/01/07 SMI"

 


#ident	"@(#)feature_tests.h	1.25	07/02/02 SMI"

 


#ident	"@(#)ccompile.h	1.2	04/11/08 SMI"

 


 




 




 


#ident	"@(#)isa_defs.h	1.29	08/06/06 SMI"

 


 

 

 

 

 

 

 


 


 





 

 


 


 


 

 

 

 

 

 

 

 

 

 

 




 

 

 
#pragma	redefine_extname	fopen64		fopen
#pragma	redefine_extname	freopen64	freopen
#pragma	redefine_extname	tmpfile64	tmpfile
#pragma	redefine_extname	fgetpos64	fgetpos
#pragma	redefine_extname	fsetpos64	fsetpos
#pragma	redefine_extname	fseeko64	fseeko
#pragma	redefine_extname	ftello64	ftello



 

 
 

 
 
 

 

 


#ident	"@(#)stdio_iso.h	1.8	05/08/16 SMI"

 

 
 

 
 
 

 


#ident	"@(#)va_list.h	1.15	04/11/19 SMI"

 

 

 








typedef  void *__va_list;



 


#ident	"@(#)stdio_tag.h	1.4	04/09/28 SMI"


typedef struct  __FILE __FILE;


 


#ident	"@(#)stdio_impl.h	1.15	07/03/05 SMI"

 





struct  __FILE {
	long	__pad[16];
};





 




typedef	__FILE FILE;

typedef unsigned long	size_t;		 

typedef long		fpos_t;




 








extern __FILE	__iob[ 20 ];




extern int	remove(const char *);
extern int	rename(const char *, const char *);
extern FILE	*tmpfile(void);
extern char	*tmpnam(char *);
extern int	fclose(FILE *);
extern int	fflush(FILE *);
extern FILE	*fopen(const char * restrict , const char * restrict );
extern FILE	*freopen(const char * restrict ,
			const char * restrict , FILE * restrict );
extern void	setbuf(FILE * restrict , char * restrict );
extern int	setvbuf(FILE * restrict , char * restrict , int,
			size_t);
 
extern int	fprintf(FILE * restrict , const char * restrict , ...);
 
extern int	fscanf(FILE * restrict , const char * restrict , ...);
 
extern int	printf(const char * restrict , ...);
 
extern int	scanf(const char * restrict , ...);
 
extern int	sprintf(char * restrict , const char * restrict , ...);
 
extern int	sscanf(const char * restrict ,
			const char * restrict , ...);
extern int	vfprintf(FILE * restrict , const char * restrict ,
			__va_list);
extern int	vprintf(const char * restrict , __va_list);
extern int	vsprintf(char * restrict , const char * restrict ,
			__va_list);
extern int	fgetc(FILE *);
extern char	*fgets(char * restrict , int, FILE * restrict );
extern int	fputc(int, FILE *);
extern int	fputs(const char * restrict , FILE * restrict );
extern int	getc(FILE *);
extern int	putc(int, FILE *);
extern int	getchar(void);
extern int	putchar(int);
extern char	*gets(char *);
extern int	puts(const char *);
extern int	ungetc(int, FILE *);
extern size_t	fread(void * restrict , size_t, size_t,
	FILE * restrict );
extern size_t	fwrite(const void * restrict , size_t, size_t,
	FILE * restrict );
extern int	fgetpos(FILE * restrict , fpos_t * restrict );
extern int	fsetpos(FILE *, const fpos_t *);
extern int	fseek(FILE *, long, int);
extern long	ftell(FILE *);
extern void	rewind(FILE *);
extern void	clearerr(FILE *);
extern int	feof(FILE *);
extern int	ferror(FILE *);
extern void	perror(const char *);













 

 

 
 

 


#ident	"@(#)stdio_c99.h	1.2	04/03/29 SMI"


 



extern int vfscanf(FILE * restrict , const char * restrict , __va_list);
extern int vscanf(const char * restrict , __va_list);
extern int vsscanf(const char * restrict , const char * restrict ,
		__va_list);
extern int snprintf(char * restrict , size_t, const char * restrict ,
	...);
extern int vsnprintf(char * restrict , size_t, const char * restrict ,
	__va_list);





typedef long		off_t;
typedef	off_t		off64_t;

typedef fpos_t		fpos64_t;

 



 




extern unsigned char	 _sibuf[], _sobuf[];

 


 


extern char	*tmpnam_r(char *);

extern void setbuffer(FILE *, char *, size_t);
extern int setlinebuf(FILE *);
 
extern int asprintf(char **, const char *, ...);
 
extern int vasprintf(char **, const char *, __va_list);

 

extern FILE	*fdopen(int, const char *);
extern char	*ctermid(char *);
extern int	fileno(FILE *);


 

 
extern FILE	*popen(const char *, const char *);
extern char	*tempnam(const char *, const char *);
extern int	pclose(FILE *);
extern int	getsubopt(char **, char *const *, char **);

 
extern char	*cuserid(char *);
extern int	getopt(int, char *const *, const char *);
extern char	*optarg;
extern int	optind, opterr, optopt;
extern int	getw(FILE *);
extern int	putw(int, FILE *);


 
extern int	fseeko(FILE *, off_t, int);
extern off_t	ftello(FILE *);

 
extern FILE	*fopen64(const char *, const char *);
extern FILE	*freopen64(const char *, const char *, FILE *);
extern FILE	*tmpfile64(void);
extern int	fgetpos64(FILE *, fpos64_t *);
extern int	fsetpos64(FILE *, const fpos64_t *);
extern int	fseeko64(FILE *, off64_t, int);
extern off64_t	ftello64(FILE *);






 
 

 
 
 

 


#ident	"@(#)string.h	1.27	07/01/14 SMI"

 
 

 
 
 

 

 


#ident	"@(#)string_iso.h	1.5	04/06/18 SMI"

 







extern int memcmp(const void *, const void *, size_t);
extern void *memcpy(void * restrict , const void * restrict , size_t);
extern void *memmove(void *, const void *, size_t);
extern void *memset(void *, int, size_t);
extern char *strcat(char * restrict , const char * restrict );
extern int strcmp(const char *, const char *);
extern char *strcpy(char * restrict , const char * restrict );
extern int strcoll(const char *, const char *);
extern size_t strcspn(const char *, const char *);
extern char *strerror(int);
extern size_t strlen(const char *);
extern char *strncat(char * restrict , const char * restrict , size_t);
extern int strncmp(const char *, const char *, size_t);
extern char *strncpy(char * restrict , const char * restrict , size_t);
extern size_t strspn(const char *, const char *);
extern char *strtok(char * restrict , const char * restrict );
extern size_t strxfrm(char * restrict , const char * restrict , size_t);

 
extern void *memchr(const void *, int, size_t);
extern char *strchr(const char *, int);
extern char *strpbrk(const char *, const char *);
extern char *strrchr(const char *, int);
extern char *strstr(const char *, const char *);





 



extern int strerror_r(int, char *, size_t);

extern char *strtok_r(char * restrict , const char * restrict ,
	char ** restrict );

extern void *memccpy(void * restrict , const void * restrict ,
		int, size_t);

extern int uucopy(const void * restrict , void * restrict , size_t);
extern int uucopystr(const void * restrict , void * restrict , size_t);
extern char *strsignal(int);
extern int ffs(int);
extern int strcasecmp(const char *, const char *);
extern int strncasecmp(const char *, const char *, size_t);
extern size_t strlcpy(char *, const char *, size_t);
extern size_t strlcat(char *, const char *, size_t);

extern char *strdup(const char *);




/* exec sql include sqlca.h;
 */ 
/*
 * $Header: sqlca.h 24-apr-2003.12:50:58 mkandarp Exp $ sqlca.h 
 */

/* Copyright (c) 1985, 2003, Oracle Corporation.  All rights reserved.  */
 
/*
NAME
  SQLCA : SQL Communications Area.
FUNCTION
  Contains no code. Oracle fills in the SQLCA with status info
  during the execution of a SQL stmt.
NOTES
  **************************************************************
  ***                                                        ***
  *** This file is SOSD.  Porters must change the data types ***
  *** appropriately on their platform.  See notes/pcport.doc ***
  *** for more information.                                  ***
  ***                                                        ***
  **************************************************************

  If the symbol SQLCA_STORAGE_CLASS is defined, then the SQLCA
  will be defined to have this storage class. For example:
 
    #define SQLCA_STORAGE_CLASS extern
 
  will define the SQLCA as an extern.
 
  If the symbol SQLCA_INIT is defined, then the SQLCA will be
  statically initialized. Although this is not necessary in order
  to use the SQLCA, it is a good pgming practice not to have
  unitialized variables. However, some C compilers/OS's don't
  allow automatic variables to be init'd in this manner. Therefore,
  if you are INCLUDE'ing the SQLCA in a place where it would be
  an automatic AND your C compiler/OS doesn't allow this style
  of initialization, then SQLCA_INIT should be left undefined --
  all others can define SQLCA_INIT if they wish.

  If the symbol SQLCA_NONE is defined, then the SQLCA variable will
  not be defined at all.  The symbol SQLCA_NONE should not be defined
  in source modules that have embedded SQL.  However, source modules
  that have no embedded SQL, but need to manipulate a sqlca struct
  passed in as a parameter, can set the SQLCA_NONE symbol to avoid
  creation of an extraneous sqlca variable.
 
MODIFIED
    lvbcheng   07/31/98 -  long to int
    jbasu      12/12/94 -  Bug 217878: note this is an SOSD file
    losborne   08/11/92 -  No sqlca var if SQLCA_NONE macro set 
  Clare      12/06/84 - Ch SQLCA to not be an extern.
  Clare      10/21/85 - Add initialization.
  Bradbury   01/05/86 - Only initialize when SQLCA_INIT set
  Clare      06/12/86 - Add SQLCA_STORAGE_CLASS option.
*/
 
#ifndef SQLCA
#define SQLCA 1
 
struct   sqlca
         {
         /* ub1 */ char    sqlcaid[8];
         /* b4  */ int     sqlabc;
         /* b4  */ int     sqlcode;
         struct
           {
           /* ub2 */ unsigned short sqlerrml;
           /* ub1 */ char           sqlerrmc[70];
           } sqlerrm;
         /* ub1 */ char    sqlerrp[8];
         /* b4  */ int     sqlerrd[6];
         /* ub1 */ char    sqlwarn[8];
         /* ub1 */ char    sqlext[8];
         };

#ifndef SQLCA_NONE 
#ifdef   SQLCA_STORAGE_CLASS
SQLCA_STORAGE_CLASS struct sqlca sqlca
#else
         struct sqlca sqlca
#endif
 
#ifdef  SQLCA_INIT
         = {
         {'S', 'Q', 'L', 'C', 'A', ' ', ' ', ' '},
         sizeof(struct sqlca),
         0,
         { 0, {0}},
         {'N', 'O', 'T', ' ', 'S', 'E', 'T', ' '},
         {0, 0, 0, 0, 0, 0},
         {0, 0, 0, 0, 0, 0, 0, 0},
         {0, 0, 0, 0, 0, 0, 0, 0}
         }
#endif
         ;
#endif
 
#endif
 
/* end SQLCA */

 
int main()
{

  char  uid[250];
  char p_curr_date                             [ 100 ];
  /* EXEC SQL VAR p_curr_date  IS STRING          ( 100 ); */ 

  char p_curr_date_with_time                   [ 100 ];
  /* EXEC SQL VAR p_curr_date_with_time  IS STRING( 100 ); */ 

  char p_curr_time                             [ 100 ];
  /* EXEC SQL VAR p_curr_time  IS STRING          ( 100 ); */ 


  char p_dbname                                [ 100 ];
  /* EXEC SQL VAR p_dbname  IS STRING             ( 100 ); */ 

  char p_usr_name                              [ 100 ];
  /* EXEC SQL VAR p_usr_name  IS STRING           ( 100 ); */ 

  
  
  /* exec sql whenever sqlerror goto sqlerror; */ 

  /* exec sql whenever not found goto sqlerror; */ 

 
   
    strcpy(uid,"TRAIN20/welcome@//is-zinvdbqat2/TESTZ_PRIMARY");
 
  
  /* exec sql connect :uid; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 4;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )255;
  sqlstm.offset = (unsigned int  )5;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (unsigned char  *)uid;
  sqlstm.sqhstl[0] = (unsigned long )250;
  sqlstm.sqhsts[0] = (         int  )250;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlstm.sqlcmax = (unsigned int )100;
  sqlstm.sqlcmin = (unsigned int )2;
  sqlstm.sqlcincr = (unsigned int )1;
  sqlstm.sqlctimeout = (unsigned int )0;
  sqlstm.sqlcnowait = (unsigned int )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) goto sqlerror;
}


  if(sqlca.sqlcode)
    {
      printf("Error during commit, commit not completed.\n");
      printf("   Oracle error %d.\n", sqlca.sqlcode);
      printf("   %s\n", sqlca.sqlerrm.sqlerrmc);
      return ;
    }

    /* EXEC SQL SELECT TO_CHAR(SYSDATE,'DD-MON-RR'), 
                    TO_CHAR(SYSDATE,'HH24:MI:SS'), 
                    TO_CHAR(SYSDATE,'DD-MON-RR HH24:MI:SS')
        INTO :p_curr_date, :p_curr_time, :p_curr_date_with_time
      FROM DUAL; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select TO_CHAR(SYSDATE,'DD-MON-RR') ,TO_CHAR(SYSDATE,'HH2\
4:MI:SS') ,TO_CHAR(SYSDATE,'DD-MON-RR HH24:MI:SS') into :b0,:b1,:b2  from DUAL\
 ";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )36;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (unsigned char  *)p_curr_date;
    sqlstm.sqhstl[0] = (unsigned long )100;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         short *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned long )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (unsigned char  *)p_curr_time;
    sqlstm.sqhstl[1] = (unsigned long )100;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         short *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned long )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (unsigned char  *)p_curr_date_with_time;
    sqlstm.sqhstl[2] = (unsigned long )100;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         short *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned long )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode == 1403) goto sqlerror;
    if (sqlca.sqlcode < 0) goto sqlerror;
}



      
	     /* EXEC SQL select sys_context('userenv','instance_name')  , user
					         INTO :p_dbname, :p_usr_name
								      from dual; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 12;
      sqlstm.arrsiz = 4;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "select sys_context('userenv','instance_name') ,user int\
o :b0,:b1  from dual ";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )63;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (unsigned char  *)p_dbname;
      sqlstm.sqhstl[0] = (unsigned long )100;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         short *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned long )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (unsigned char  *)p_usr_name;
      sqlstm.sqhstl[1] = (unsigned long )100;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         short *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned long )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
      if (sqlca.sqlcode == 1403) goto sqlerror;
      if (sqlca.sqlcode < 0) goto sqlerror;
}


		  
    printf("------------------------------------\n");
    printf("\n Connected Database is [%s]\n", p_dbname);
    printf("\n Connected User is [%s]\n", p_usr_name);
    printf("\n Current Date is [%s]\n", p_curr_date);
    printf("\n Current Date is [%s]\n", p_curr_date);
    printf("\n Current Time is [%s]\n", p_curr_time);
    printf("\n Current Date& Time is [%s]\n", p_curr_date_with_time);
    printf("------------------------------------\n");
  return 0;
sqlerror:
  printf("\nSQL ERROR:\n%.70s (%d)\n",
    sqlca.sqlerrm.sqlerrmc, -sqlca.sqlcode);
  /* exec sql rollback work release; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 4;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )86;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode < 0) goto sqlerror;
}


  return(1);
}
#ident "acomp: Sun C 5.10 SunOS_sparc 2009/06/03"
