
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
  1,1,0,
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
           char  filnam[15];
};
static const struct sqlcxp sqlfpn =
{
    14,
    "proc_sample.pc"
};


static unsigned int sqlctx = 1309507;


static struct sqlexd {
   unsigned int   sqlvsn;
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
            void  **sqphsv;
   unsigned int   *sqphsl;
            int   *sqphss;
            void  **sqpind;
            int   *sqpins;
   unsigned int   *sqparm;
   unsigned int   **sqparc;
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
   unsigned int   sqlpfmem;
            void  *sqhstv[4];
   unsigned int   sqhstl[4];
            int   sqhsts[4];
            void  *sqindv[4];
            int   sqinds[4];
   unsigned int   sqharm[4];
   unsigned int   *sqharc[4];
   unsigned short  sqadto[4];
   unsigned short  sqtdso[4];
} sqlstm = {13,4};

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
{13,4130,1,0,0,
5,0,0,1,0,0,30,74,0,0,0,0,0,1,0,
20,0,0,0,0,0,27,92,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,10,0,0,1,10,0,0,
51,0,0,3,0,0,17,139,0,0,1,1,0,1,0,1,97,0,0,
70,0,0,3,0,0,45,145,0,0,0,0,0,1,0,
85,0,0,3,0,0,13,154,0,0,3,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,
112,0,0,3,0,0,15,183,0,0,0,0,0,1,0,
127,0,0,4,0,0,24,232,0,0,1,1,0,1,0,1,97,0,0,
146,0,0,5,0,0,29,237,0,0,0,0,0,1,0,
161,0,0,6,0,0,31,243,0,0,0,0,0,1,0,
176,0,0,3,0,0,17,283,0,0,1,1,0,1,0,1,97,0,0,
195,0,0,3,0,0,45,287,0,0,0,0,0,1,0,
210,0,0,3,0,0,13,291,0,0,3,0,0,1,0,2,9,0,0,2,9,0,0,2,9,0,0,
237,0,0,3,0,0,15,304,0,0,0,0,0,1,0,
252,0,0,7,0,0,24,345,0,0,1,1,0,1,0,1,97,0,0,
271,0,0,8,0,0,29,350,0,0,0,0,0,1,0,
286,0,0,9,0,0,31,356,0,0,0,0,0,1,0,
301,0,0,3,0,0,17,395,0,0,1,1,0,1,0,1,97,0,0,
320,0,0,3,0,0,45,399,0,0,0,0,0,1,0,
335,0,0,3,0,0,13,403,0,0,2,0,0,1,0,2,9,0,0,2,9,0,0,
358,0,0,3,0,0,15,414,0,0,0,0,0,1,0,
373,0,0,10,0,0,24,434,0,0,1,1,0,1,0,1,97,0,0,
392,0,0,11,0,0,29,439,0,0,0,0,0,1,0,
407,0,0,12,0,0,31,445,0,0,0,0,0,1,0,
};


// 씅씅씅씅? : 2024.11.5
// win32 Visual C 2010 ?씅씅씅????
// 씅???씅씅 ????씅?씅
#define _CRT_SECURE_NO_WARNINGS
//-----------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

/* for oracle */
#include <sqlda.h>
#include <sqlca.h>
#include <sqlcpr.h>


// win32 Visual C 2010 ?씅씅씅????
#define getch() _getch()
//-----------------------------------------

/*---------------  ?씅 ?씅 씅? 씅씅 ----------------------*/
#include < windows.h >
#include "../../../../../proc_sdk/precomp/admin/sqlca.h"
void gotoxy(int x, int y) ;
void getxy(int *x, int *y) ;
void clrscr(void) ;
/*-----------------------------------------------------------*/
void print_screen(char fname[]);
void db_connect();
void select_tuple();
void insert_tuple();
void delete_tuple();
void update_tuple();
void reserve_tuple();
//void reserve_tuple();
void sql_error();

int Error_flag = 0;
void main()
{
    char c = 0;

    _putenv("NLS_LANG=American_America.KO16KSC5601");  //??씅??씅?

   /* Register sql_error() as the error handler. */
    /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7씅씅??"); */


    db_connect();

    while( c != '5') {  
        // 씅씅 ?씅 씅?
        clrscr();

        print_screen("scr_main.txt") ;
        gotoxy(52,15);

        
        c = getchar() ;
        while (getchar() != '\n');  // ?씅?씅 씅씅씅 ??씅씅

        switch(c){
            case '1' : select_tuple();
                         break;
            case '2' : insert_tuple();
                         break;
            case '3' : delete_tuple();
                         break;
            case '4' : update_tuple();
                         break;
          case '5': reserve_tuple();
                break;
         // case '6': break;
            default : break ;
	
        }		
    }
 	
    clrscr();
    /* EXEC SQL COMMIT WORK RELEASE ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 0;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )5;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7씅씅??");
}


}

void db_connect()
{
    /* EXEC SQL BEGIN DECLARE SECTION; */ 

	/* VARCHAR uid[80]; */ 
struct { unsigned short len; unsigned char arr[80]; } uid;

	/* VARCHAR pwd[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } pwd;

    /* EXEC SQL END DECLARE SECTION; */ 


    strcpy(uid.arr,"a20203221@//sedb2.deu.ac.kr:1521/orcl");
    uid.len =  strlen(uid.arr);
    strcpy(pwd.arr,"20203221");
    pwd.len = strlen(pwd.arr);

    Error_flag = 0 ;  



{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )10;
    sqlstm.offset = (unsigned int  )20;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&uid;
    sqlstm.sqhstl[0] = (unsigned int  )82;
    sqlstm.sqhsts[0] = (         int  )82;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&pwd;
    sqlstm.sqhstl[1] = (unsigned int  )22;
    sqlstm.sqhsts[1] = (         int  )22;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
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
    sqlstm.sqlcmax = (unsigned int )100;
    sqlstm.sqlcmin = (unsigned int )2;
    sqlstm.sqlcincr = (unsigned int )1;
    sqlstm.sqlctimeout = (unsigned int )0;
    sqlstm.sqlcnowait = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7씅씅??");
}



    if ( Error_flag ==1 ){
        printf("Connect error: %s", sqlca.sqlerrm.sqlerrmc);
        exit(-1);
    }
}
void reserve_tuple() {
    
    char pt_no[5];               // ?? ??
    char pt_name[17];            // ?? ??
    char pt_birth[11];           // ???? (YYYY-MM-DD)
    char pt_tel[16];             // ????
    char pt_gender[5];           // ?? (?/?)
    char pt_department[20];      // ???
    char pt_reservation_date[20]; // ?? ?? (YYYY-MM-DD HH24:MI)
    char sqlstmt[1000];          // SQL ?? ??? ??
    int error_flag = 0;          // SQL ?? ??? ???? ?? ???


    char res_no[5];
    char res_pt[17];
    char res_doc[11];
    char res_dept[16];
    char res_dept_date[16];

    int x, y;

    clrscr();
    print_screen("src_reserve.txt");


    x = 40;
    y = 6;


    gotoxy(x, y);
    gets(res_no);

    y = y + 2;
    gotoxy(x, y);
    gets(res_pt);

 
    y = y + 2;
    gotoxy(x, y);
    gets(res_doc);

    y = y + 2;
    gotoxy(x, y);
    gets(res_dept);

    y = y + 2;
    gotoxy(x, y);
    gets(res_dept_date);


    sprintf(sqlstmt,
        "INSERT INTO reservation (res_no, res_pt, res_doc, res_dept, to_date(res_dept_date), res_status) "
        "VALUES ('%s', '%s', '%s', '%s', 'pending')",
        res_no, res_pt, res_doc, res_dept);

    

    
    error_flag = simulate_sql_execution(sqlstmt);

    {
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 4;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "";
        sqlstm.iters = (unsigned int)1;
        sqlstm.offset = (unsigned int)127;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char*)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int)0;
        sqlstm.sqhstv[0] = (void*)sqlstmt;
        sqlstm.sqhstl[0] = (unsigned int)1000;
        sqlstm.sqhsts[0] = (int)0;
        sqlstm.sqindv[0] = (void*)0;
        sqlstm.sqinds[0] = (int)0;
        sqlstm.sqharm[0] = (unsigned int)0;
        sqlstm.sqadto[0] = (unsigned short)0;
        sqlstm.sqtdso[0] = (unsigned short)0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void**)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\nError Occured");
    }



    if (Error_flag == 0) {  
        printf("\n");
        printf(" 투플이 정상적으로 입력되었습니다. \n");
        /* EXEC SQL COMMIT WORK ; */

        {
            struct sqlexd sqlstm;
            sqlstm.sqlvsn = 13;
            sqlstm.arrsiz = 4;
            sqlstm.sqladtp = &sqladt;
            sqlstm.sqltdsp = &sqltds;
            sqlstm.iters = (unsigned int)1;
            sqlstm.offset = (unsigned int)146;
            sqlstm.cud = sqlcud0;
            sqlstm.sqlest = (unsigned char*)&sqlca;
            sqlstm.sqlety = (unsigned short)4352;
            sqlstm.occurs = (unsigned int)0;
            sqlcxt((void**)0, &sqlctx, &sqlstm, &sqlfpn);
            if (sqlca.sqlcode < 0) sql_error("\nError Occured");
        }


        getch();
    }
    else {
        printf("\n");
        printf("에러가 발생 하였습니다. \n");
        /* EXEC SQL ROLLBACK WORK ; */

        {
            struct sqlexd sqlstm;
            sqlstm.sqlvsn = 13;
            sqlstm.arrsiz = 4;
            sqlstm.sqladtp = &sqladt;
            sqlstm.sqltdsp = &sqltds;
            sqlstm.iters = (unsigned int)1;
            sqlstm.offset = (unsigned int)161;
            sqlstm.cud = sqlcud0;
            sqlstm.sqlest = (unsigned char*)&sqlca;
            sqlstm.sqlety = (unsigned short)4352;
            sqlstm.occurs = (unsigned int)0;
            sqlcxt((void**)0, &sqlctx, &sqlstm, &sqlfpn);
            if (sqlca.sqlcode < 0) sql_error("\nError Occured");
        }


        getch();
    }
}

/* --------------------------------------------------------------------------
   SQL ??? ??????? ??
   ?? ????? ??????? ???? ????? ???? ?
-------------------------------------------------------------------------- */
int simulate_sql_execution(const char *sqlstmt) {
    // SQL ?? ????? (?? ? 0, ?? ? 1 ??)
    printf("SQL ?? ??: %s\n", sqlstmt);
    return 0; // ???? ??
}


#define PAGE_NUM 5
void select_tuple()
{
/* --------------------------------------------------------------------------
   Retrieve the current maximum employee number
-------------------------------------------------------------------------- */
/* EXEC SQL BEGIN DECLARE SECTION; */ 

   /* varchar v_empno[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } res_pt;

   /* varchar v_ename[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } res_doc;

   /* varchar v_job[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } res_dept;


   char sqlstmt[1000];
/* EXEC SQL END DECLARE SECTION; */ 


   char no_temp[20];
   char name_temp[20];

   int x, y, count=0, i ;

   /* 씅씅???*/
   clrscr();

   print_screen("scr_select.txt");

   gotoxy(28,6);
   gets(no_temp); 
   

     //씅씅? sql씅씅씅
   sprintf(sqlstmt, "SELECT res_no, res_pt, res_doc, res_dept FROM reservation WHERE res_pt = '%s'", no_temp);

 
{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )51;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)sqlstmt;
   sqlstm.sqhstl[0] = (unsigned int  )1000;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
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
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\nError Occured");
}



   /* 1. cursor declare */
   /* EXEC SQL DECLARE c_cursor CURSOR FOR S ; */ 
 

   /* 2. cursor open */
   /* EXEC SQL OPEN c_cursor ; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )70;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqcmod = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) sql_error("\nError Occured");
}

 

   x = 14;
   y = 10 ;

   // EXEC SQL WHENEVER NOT FOUND DO break ;  씅씅씅 ?씅????턁 씅씅 씅씅씅 ?씅?씅씅 씅씅?
   while(1)
    {
        /* 3. tuple fetch */
        /* EXEC SQL FETCH c_cursor INTO :v_empno, :v_ename, :v_job; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 4;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )85;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&res_pt;
        sqlstm.sqhstl[0] = (unsigned int  )102;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&res_doc;
        sqlstm.sqhstl[1] = (unsigned int  )102;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&res_dept;
        sqlstm.sqhstl[2] = (unsigned int  )102;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
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
        if (sqlca.sqlcode < 0) sql_error("\nError Occured");
}


       
        if(sqlca.sqlcode == 1403) { 
            break;
        }
        res_pt.arr[res_pt.len] = '\0' ;
        res_doc.arr[res_doc.len] = '\0';
        res_dept.arr[res_dept.len] = '\0';

        gotoxy(x,y);
        printf(" | %-4s      |    %-10s  |    %-10s |", res_pt.arr, res_doc.arr , res_dept.arr);
        y++;
        count++;
        if( count == PAGE_NUM){
            printf("\n\n                                  hit any key for next\n");
            count = 0;
            getch();

            gotoxy(0,10); //씅씅 ?씅 ???씅씅
            for(i= 0; i < PAGE_NUM; i++){
                printf("                                                                                               \n");
            }
            y = 10 ;
        }
    }
    printf("\n");	
    printf("                          match tuple no : %d\n", sqlca.sqlerrd[2]);

    /* 4. close the cursor. */
    /* EXEC SQL CLOSE c_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )112;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\nError Occured");
}



    getch();   // ??씅 ?씅씅. 

}
/*------------ insert -------------*/
void insert_tuple()
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 


    char sqlstmt[1000];

/* EXEC SQL END DECLARE SECTION; */ 


    char pt_no[5];
    char pt_name[17];
    char pt_birth[11];
    char pt_tel[16];
    char pt_gender[5];

    int x, y ;

   clrscr();
   print_screen("scr_insert.txt");

   /* 씅씅씅 ??*/
    x = 40;
    y = 6 ;

   /* 씅씅? ??*/
    gotoxy(x,y)  ; 
    gets(pt_no );
    
   /* 씅?????*/
    y = y + 2 ;
    gotoxy(x,y)  ;
    gets(pt_name);

   /* 씅씅 ??*/
    y = y + 2 ;
    gotoxy(x,y) ;
    gets(pt_birth);

    y = y + 2;
    gotoxy(x, y);
    gets(pt_tel);

    y = y + 2;
    gotoxy(x, y);
    gets(pt_gender);

	
    sprintf(sqlstmt,"insert into patient(pat_no, pat_name, pat_birth, pat_tel, pat_gender) values ( %s, '%s', '%s', '%s', '%s')" ,pt_no, pt_name, pt_birth, pt_tel, pt_gender);

   
    /* 씅씅 씅씅 ??*/
    /* EXEC SQL EXECUTE IMMEDIATE :sqlstmt; */
    printf("Executing SQL: %s\n", sqlstmt); // 씅씅씅씅씅 씅?

    /* ?씅 씅? */
    clrscr();
    print_screen("scr_add_reservation.txt");

   /* insert 씅 씅씅 */
    Error_flag = 0 ;

   // ??씅씅 씅씅 ??씅씅씅 ?씅??error ??씅?씅씅 씅. Error_flag=1씅 ??
    /* EXEC SQL EXECUTE IMMEDIATE :sqlstmt ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )127;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)sqlstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
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
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\nError Occured");
}



    if( Error_flag == 0 ) {  // 씅씅씅씅씅 씅씅 ??씅?
        printf("\n");	
        printf(" 투플이 정상적으로 입력되었습니다. \n");

        /* EXEC SQL COMMIT WORK ; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 4;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )146;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0)sql_error("\nError Occured");
}


        getch();
    }
    else {
        printf("\n");	
        printf("에러가 발생 하였습니다. \n");
        /* EXEC SQL ROLLBACK WORK ; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 4;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )161;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\nError Occured");
}


        getch();
    }
}



void update_tuple()
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 

    /* varchar v_empno[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } v_empno;

    /* varchar v_ename[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } v_ename;

    /* varchar v_job[16]; */ 
struct { unsigned short len; unsigned char arr[16]; } v_job;


    char sqlstmt[1000];
/* EXEC SQL END DECLARE SECTION; */ 


    char findno[100] ;
    char no[100] ;
    char name[100];
    char job[100];

    char  flag = 'n' ;
    int x, y ;
int i;
//----------------------------------------

   clrscr();
   print_screen("scr_update.txt");

    x = 40;
    y = 6 ;

    gotoxy(x,y)  ; 
    gets(findno) ;

/*------  씅씅씅 씅씅씅 씅씅 ???씅씅?씅?씅씅씅 ----------------*/

    sprintf(sqlstmt,"SELECT empno, ename, job  FROM emp where empno = %s", findno) ;

    //printf("stmt:%s\n", sqlstmt);

    /* EXEC SQL PREPARE S FROM :sqlstmt ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )176;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)sqlstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
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
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0)sql_error("\nError Occured");
}



    /* EXEC SQL DECLARE u_cursor CURSOR FOR S ; */ 
 

    /* EXEC SQL OPEN u_cursor ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )195;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0)sql_error("\nError Occured");
}

 

    while(1)
    {
        /* EXEC SQL FETCH u_cursor INTO :v_empno, :v_ename, :v_job ; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 4;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )210;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&v_empno;
        sqlstm.sqhstl[0] = (unsigned int  )102;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&v_ename;
        sqlstm.sqhstl[1] = (unsigned int  )102;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&v_job;
        sqlstm.sqhstl[2] = (unsigned int  )18;
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
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
        if (sqlca.sqlcode < 0) sql_error("\nError Occured");
}



        if(sqlca.sqlcode == 1403) {  // 씅??씅씅씅 씅씅씅 씅씅 씅?
            break;
        }

        v_empno.arr[v_empno.len] = '\0';
        v_ename.arr[v_ename.len] = '\0';
        v_job.arr[v_job.len] = '\0';

    /*    printf("\n");
        printf("                            씅씅?:%s    씅씅??%s   씅씅:%s \n", v_empno.arr, v_ename.arr, v_job.arr );*/
    }
    /* EXEC SQL CLOSE u_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )237;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\nError Occured");
}

 

    /*  씅씅씅 씅씅씅 ?씅?씅씅 씅씅 ?씅?씅?씅 씅?씅?씅 */
    if ( sqlca.sqlerrd[2] == 0 ) {
        printf(" 에러가 발생하였습니다 종료하기위해 아무키를 눌러주세요. \n");
        getch();
        return ;
    }

    //---------- update ??--------------
 /* 씅씅 씅씅씅 ??*/
    x = 40;
    y = 12 ;

   /* 씅씅? ??*/
    gotoxy(x,y)  ; 
    gets(no);
    if( no[0] == '\0' ){
        strcpy(no, v_empno.arr);
   }
   /* 씅?????*/
    y = y + 2 ;
    gotoxy(x,y)  ;
    gets(name);
    if( name[0] == '\0' ){
        strcpy(name, v_ename.arr);
   }
   /* 씅씅 ??*/
    y = y + 2 ;
    gotoxy(x,y) ;
    gets(job);
    if( job[0] == '\0' ){
        strcpy(job, v_job.arr);
    }
    sprintf(sqlstmt,"update emp set empno = %s, ename= '%s', job = '%s' where empno = %s ", no, name, job, findno);
    //printf("stmt:%s\n", sqlstmt);
    
     /* update씅 씅씅 */
    Error_flag = 0 ;

   // ??씅씅 씅씅 ??씅씅씅 ?씅??error ??씅?씅씅 씅. Error_flag=1씅 ??
    /* EXEC SQL EXECUTE IMMEDIATE :sqlstmt ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )252;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)sqlstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
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
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\nError Occured");
}



    if( Error_flag == 0 ) {  // 씅씅씅씅씅 씅씅 ??씅?
        printf("\n");	
        printf(" 투플이 정상적으로 입력되었습니다. \n");

        /* EXEC SQL COMMIT WORK ; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 4;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )271;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\nError Occured");
}


        getch();
    }
    else {
        printf("\n");	
        printf("에러가 발생 하였습니다. \n");
        /* EXEC SQL ROLLBACK WORK ; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 4;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )286;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\nError Occured");
}


        getch();
    }
   //EXEC SQL EXECUTE IMMEDIATE :sqlstmt ;

  // EXEC SQL COMMIT WORK ; 

}
void delete_tuple()
{

/* EXEC SQL BEGIN DECLARE SECTION; */ 

    /* varchar v_res_pt[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } v_res_pt;

    /* varchar v_res_dept_date[100]; */ 
struct { unsigned short len; unsigned char arr[100]; } v_res_dept_date;

 
    char sqlstmt[1000];
/* EXEC SQL END DECLARE SECTION; */ 


    char  no[100] ;
    char  flag = 'n' ;
    int x, y ;
int i;
//----------------------------------------

   clrscr();
   print_screen("scr_delete.txt");

    x = 40;
    y = 6 ;

    gotoxy(x,y)  ; 
    gets(no) ;

/*------ 씅씅씅 씅씅씅 씅씅 ???씅씅?씅?씅씅씅 ----------------*/

    sprintf(sqlstmt, "SELECT res_pt, TO_CHAR(res_dept_date, 'YYYY-MM-DD') FROM reservation WHERE res_no = %s", no);

    //printf("stmt:%s\n", sqlstmt);

    /* EXEC SQL PREPARE S FROM :sqlstmt ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )301;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)sqlstmt;
    sqlstm.sqhstl[0] = (unsigned int  )1000;
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
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
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\nError Occured");
}



    /* EXEC SQL DECLARE d_cursor CURSOR FOR S ; */ 
 

    /* EXEC SQL OPEN d_cursor ; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )320;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.sqlpfmem = (unsigned int  )0;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqcmod = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\nError Occured");
}

 

    while(1)
    {
        /* EXEC SQL FETCH d_cursor INTO :v_res_pt, :v_res_dept_date ; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 4;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )335;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.sqlpfmem = (unsigned int  )0;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqfoff = (           int )0;
        sqlstm.sqfmod = (unsigned int )2;
        sqlstm.sqhstv[0] = (         void  *)&v_res_pt;
        sqlstm.sqhstl[0] = (unsigned int  )102;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&v_res_dept_date;
        sqlstm.sqhstl[1] = (unsigned int  )102;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
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
        if (sqlca.sqlcode < 0) sql_error("\nError Occured");
}



        if(sqlca.sqlcode == 1403) {  // 씅??씅씅씅 씅씅씅 씅씅 씅?
            break;
        }

        v_res_pt.arr[v_res_pt.len] = '\0';
        v_res_dept_date.arr[v_res_dept_date.len] = '\0';
        printf("\n\n");
        printf("                                ??씅?%s    씅??%s \n", v_res_pt.arr, v_res_dept_date.arr);
    }
    /* EXEC SQL CLOSE d_cursor; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 13;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )358;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) sql_error("\7씅씅??");
}

 

    /*  씅씅씅 씅씅씅 ?씅?씅씅 씅씅 ?씅?씅?씅 씅?씅?씅 */
    if ( sqlca.sqlerrd[2] == 0 ) {
        printf("?씅?씅씅씅 씅씅??!!  ??씅 ?씅씅");
        getch();
        return ;
    }

    // 씅씅 ????
    printf("투플을 삭제하시겠습니까? (y/n) :");   

    flag = (char *)getchar() ;
    while (getchar() != '\n');  // ?씅?씅 씅씅씅 ??씅씅

    if( flag == 'y' || flag =='Y' ){
        sprintf(sqlstmt,"delete from reservation where res_no = %s ", no);
        //printf("stmt:%s\n", sqlstmt);
        // ??씅씅 씅씅 ??씅씅씅 ?씅??error ??씅?씅씅 씅. Error_flag=1씅 ??
        Error_flag = 0 ;
        /* EXEC SQL EXECUTE IMMEDIATE :sqlstmt ; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 13;
        sqlstm.arrsiz = 4;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )373;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)sqlstmt;
        sqlstm.sqhstl[0] = (unsigned int  )1000;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
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
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) sql_error("\7씅씅??");
}



        if( Error_flag == 0 ) {  // 씅씅씅씅씅 씅씅 ??씅?
            printf("\n");	
            printf(" 투플이 정상적으로 입력되었습니다. \n");
            /* EXEC SQL COMMIT WORK ; */ 

{
            struct sqlexd sqlstm;
            sqlstm.sqlvsn = 13;
            sqlstm.arrsiz = 4;
            sqlstm.sqladtp = &sqladt;
            sqlstm.sqltdsp = &sqltds;
            sqlstm.iters = (unsigned int  )1;
            sqlstm.offset = (unsigned int  )392;
            sqlstm.cud = sqlcud0;
            sqlstm.sqlest = (unsigned char  *)&sqlca;
            sqlstm.sqlety = (unsigned short)4352;
            sqlstm.occurs = (unsigned int  )0;
            sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
            if (sqlca.sqlcode < 0) sql_error("\7씅씅??");
}


            getch();
        }
        else {   //Error_falg == 1. 씅씅씅 ?씅?씅?
            printf("\n");	
            printf("에러가 발생 하였습니다. \n");

            /* EXEC SQL ROLLBACK WORK ; */ 

{
            struct sqlexd sqlstm;
            sqlstm.sqlvsn = 13;
            sqlstm.arrsiz = 4;
            sqlstm.sqladtp = &sqladt;
            sqlstm.sqltdsp = &sqltds;
            sqlstm.iters = (unsigned int  )1;
            sqlstm.offset = (unsigned int  )407;
            sqlstm.cud = sqlcud0;
            sqlstm.sqlest = (unsigned char  *)&sqlca;
            sqlstm.sqlety = (unsigned short)4352;
            sqlstm.occurs = (unsigned int  )0;
            sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
            if (sqlca.sqlcode < 0) sql_error("\7씅씅??");
}


            getch();
        }
    }
    else {    // 씅씅 씅?
        printf("\n");	
        printf("----------\n");
        printf("---------\n ");
    }

}
//==================================================

void print_screen(char fname[])
{
    FILE *fp;
    char line[100];

    if ( (fp = fopen(fname,"r"))  == NULL ){
        printf("file open error\n");
        getch();
        exit(-1);
    }
    while(1) {
        if( fgets(line, 99, fp) == NULL){
            break;
        }
        printf("%s", line);
    }

    fclose(fp);
}

/* --------------------------------------------------------------------------
int sql_error()

   errrpt prints the ORACLE error msg and number.
-------------------------------------------------------------------------- */
void sql_error(char *msg)
{
    char err_msg[128];
    size_t buf_len, msg_len;
    int x, y ;

    /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 


    getxy(&x, &y);  // 씅씅 ?씅 씅? 씅씅

    Error_flag = 1;    //씅씅씅 ?씅씅?씅씅씅

    gotoxy(1,22) ;   //씅씅씅 ????

    printf("%s", msg);
    buf_len = sizeof (err_msg);
    sqlglm(err_msg, &buf_len, &msg_len);
    printf("%.*s\n", msg_len, err_msg);

    gotoxy(x, y) ;   // 씅씅씅 ?씅?씅씅 ?씅 씅?씅 ??
    //getch();
}
/*---------------  ?씅 ?씅 씅씅 ??--------------------*/
#define STD_HANDLE GetStdHandle(STD_OUTPUT_HANDLE)

void gotoxy(int x, int y)
{
    COORD Cur= {(SHORT)x, (SHORT) y};

    SetConsoleCursorPosition(STD_HANDLE, Cur);
}

void getxy(int *x, int *y)
{
    CONSOLE_SCREEN_BUFFER_INFO Buf ;

    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Buf);
    *x = (int)Buf.dwCursorPosition.X ;
    *y = (int)Buf.dwCursorPosition.Y ;
 
}

void clrscr(void)
{
    COORD Cur= {0, 0};
    unsigned long dwLen;

//    FillConsoleOutputCharacter(STD_HANDLE, ' ', 80*25, Cur, &dwLen);
    FillConsoleOutputCharacter(STD_HANDLE, ' ', 120*28, Cur, &dwLen);
    gotoxy(0,0);
}

/*---------------------------------------------------------*/
