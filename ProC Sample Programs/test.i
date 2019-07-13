 

 
 

 
 
 

 


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




exec sql include sqlca.h;
 
int main()
{

  char  uid[250];
  char p_curr_date                             [ 100 ];
  EXEC SQL VAR p_curr_date  IS STRING          ( 100 );
  char p_curr_date_with_time                   [ 100 ];
  EXEC SQL VAR p_curr_date_with_time  IS STRING( 100 );
  char p_curr_time                             [ 100 ];
  EXEC SQL VAR p_curr_time  IS STRING          ( 100 );

  char p_dbname                                [ 100 ];
  EXEC SQL VAR p_dbname  IS STRING             ( 100 );
  char p_usr_name                              [ 100 ];
  EXEC SQL VAR p_usr_name  IS STRING           ( 100 );
  
  
  exec sql whenever sqlerror goto sqlerror;
  exec sql whenever not found goto sqlerror;
 
   
    strcpy(uid,"TRAIN20/welcome@//is-zinvdbqat2/TESTZ_PRIMARY");
 
  
  exec sql connect :uid;
  if(sqlca.sqlcode)
    {
      printf("Error during commit, commit not completed.\n");
      printf("   Oracle error %d.\n", sqlca.sqlcode);
      printf("   %s\n", sqlca.sqlerrm.sqlerrmc);
      return ;
    }

    EXEC SQL SELECT TO_CHAR(SYSDATE,'DD-MON-RR'), 
                    TO_CHAR(SYSDATE,'HH24:MI:SS'), 
                    TO_CHAR(SYSDATE,'DD-MON-RR HH24:MI:SS')
        INTO :p_curr_date, :p_curr_time, :p_curr_date_with_time
      FROM DUAL;

      
	     EXEC SQL select sys_context('userenv','instance_name')  , user
					         INTO :p_dbname, :p_usr_name
								      from dual;
		  
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
  exec sql rollback work release;
  return(1);
}
#ident "acomp: Sun C 5.10 SunOS_sparc 2009/06/03"
