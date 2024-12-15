
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


// 마지막고침 : 2024.11.5
// win32 Visual C 2010 이상컴파일시 추가
// 프로그램 가장 첫 줄에 추가할 것
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


// win32 Visual C 2010 이상컴파일시 추가
#define getch() _getch()
//-----------------------------------------

/*---------------  화면 커서 위치 제어 ----------------------*/
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
//void reserve_tuple();
void sql_error();

int Error_flag = 0;
void main()
{
    char c = 0;

    _putenv("NLS_LANG=American_America.KO16KSC5601");  //한글사용시 필요함

   /* Register sql_error() as the error handler. */
    /* EXEC SQL WHENEVER SQLERROR DO sql_error("\7에러발생:"); */ 


    db_connect();

    while( c != '5') {  
        // 메인 화면 출력
        clrscr();

        print_screen("scr_main.txt") ;
        gotoxy(49,15);

        
        c = getchar() ;
        while (getchar() != '\n');  // 첫글자 외 나머지 입력 버림

        switch(c){
            case '1' : select_tuple();
                         break;
            case '2' : insert_tuple();
                         break;
            case '3' : delete_tuple();
                         break;
            case '4' : update_tuple();
                         break;
          /*  case '5': reserve_tuple();
                break;*/
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
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
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

   // 아래 문장 수행 중에 에러가 발생하면 error 처리 루틴으로 감. Error_flag=1로 바뀜 
    /* EXEC SQL CONNECT :uid IDENTIFIED BY :pwd; */ 

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
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



    // connection이 실패했을경우의 처리부분
    if ( Error_flag ==1 ){
        //printf("Connect error: %s", sqlca.sqlerrm.sqlerrmc);
        exit(-1);
    }
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

   /* 사용자 입력 */
   clrscr();

   print_screen("scr_select.txt");

   gotoxy(28,6);
   gets(no_temp); 
   

     //실행시킬 sql문장임
   sprintf(sqlstmt, "SELECT res_no, res_pt, res_doc, res_dept FROM reservation WHERE res_pt = '%s'", no_temp);

   /* select 문장이 제대로 구성되어 있는지 화면에 찍어봄 */
   //printf("sqlstmt:%s\n", sqlstmt);

   /* EXEC SQL PREPARE S FROM :sqlstmt ; */ 

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
   if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
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
   if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}

 

   x = 14;
   y = 10 ;

   // EXEC SQL WHENEVER NOT FOUND DO break ;  원래는 이렇게 해야 하는데 버그 때문에 아래와 같이 사용함
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
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}


       
        if(sqlca.sqlcode == 1403) {  // 더이상 가져올 투플이 없는 경우
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

            gotoxy(0,10); //이전 화면 부분 클리어
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
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



    getch();   // 아무키나 치세요. 

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

   /* 데이터 입력 */
    x = 40;
    y = 6 ;

   /* 사원번호 입력 */
    gotoxy(x,y)  ; 
    gets(pt_no );
    
   /* 사원 이름 입력 */
    y = y + 2 ;
    gotoxy(x,y)  ;
    gets(pt_name);

   /* 직급 입력 */
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

   
    /* 실행 명령 추가 */
    /* EXEC SQL EXECUTE IMMEDIATE :sqlstmt; */
    printf("Executing SQL: %s\n", sqlstmt); // 디버깅용으로 출력

    /* 화면 전환 */
    clrscr();
    print_screen("scr_add_reservation.txt");

   /* insert 문 실행 */
    Error_flag = 0 ;

   // 아래 문장 수행 중에 에러가 발생하면 error 처리 루틴으로 감. Error_flag=1로 바뀜 
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
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



    if( Error_flag == 0 ) {  // 정상적으로 수행 되는 경우
        printf("\n");	
        printf(" 정상적으로 추가되었습니다.  아무키나 치세요 \n" ) ;
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
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}


        getch();
    }
    else {
        printf("\n");	
        printf(" 튜플이 추가되지 않았습니다. 아무키나 치세요 \n" ) ;
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
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
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

/*------  수정할 투플을 먼저 찾아서 사용자에게 보여줌 ----------------*/

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
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
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
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
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
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



        if(sqlca.sqlcode == 1403) {  // 더이상 가져올 투플이 없는 경우
            break;
        }

        v_empno.arr[v_empno.len] = '\0';
        v_ename.arr[v_ename.len] = '\0';
        v_job.arr[v_job.len] = '\0';

        printf("\n");
        printf("                            사원번호:%s    사원이름:%s   직급:%s \n", v_empno.arr, v_ename.arr, v_job.arr );
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
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}

 

    /*  가져온 투플이 하나도 없는 경우는 메시지 출력 후 돌아가야 함 */
    if ( sqlca.sqlerrd[2] == 0 ) {
        printf("검색된 투플이 없습니다!!!  아무키나 치세요");
        getch();
        return ;
    }

    //---------- update 처리 --------------
 /* 수정 데이터 입력 */
    x = 40;
    y = 12 ;

   /* 사원번호 입력 */
    gotoxy(x,y)  ; 
    gets(no);
    if( no[0] == '\0' ){
        strcpy(no, v_empno.arr);
   }
   /* 사원 이름 입력 */
    y = y + 2 ;
    gotoxy(x,y)  ;
    gets(name);
    if( name[0] == '\0' ){
        strcpy(name, v_ename.arr);
   }
   /* 직급 입력 */
    y = y + 2 ;
    gotoxy(x,y) ;
    gets(job);
    if( job[0] == '\0' ){
        strcpy(job, v_job.arr);
    }
    sprintf(sqlstmt,"update emp set empno = %s, ename= '%s', job = '%s' where empno = %s ", no, name, job, findno);
    //printf("stmt:%s\n", sqlstmt);
    
     /* update문 실행 */
    Error_flag = 0 ;

   // 아래 문장 수행 중에 에러가 발생하면 error 처리 루틴으로 감. Error_flag=1로 바뀜 
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
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



    if( Error_flag == 0 ) {  // 정상적으로 수행 되는 경우
        printf("\n");	
        printf(" 수정되었습니다. 아무키나 치세요 \n" ) ;
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
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}


        getch();
    }
    else {
        printf("\n");	
        printf(" 수정되지 않았습니다. 아무키나 치세요 \n" ) ;
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
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
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

/*------ 삭제할 투플을 먼저 찾아서 사용자에게 보여줌 ----------------*/

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
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
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
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
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
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



        if(sqlca.sqlcode == 1403) {  // 더이상 가져올 투플이 없는 경우
            break;
        }

        v_res_pt.arr[v_res_pt.len] = '\0';
        v_res_dept_date.arr[v_res_dept_date.len] = '\0';
        printf("\n\n");
        printf("                                환자성함:%s    예약날짜:%s \n", v_res_pt.arr, v_res_dept_date.arr);
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
    if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}

 

    /*  가져온 투플이 하나도 없는 경우는 메시지 출력 후 돌아가야 함 */
    if ( sqlca.sqlerrd[2] == 0 ) {
        printf("검색된 투플이 없습니다!!!  아무키나 치세요");
        getch();
        return ;
    }

    // 삭제 처리 부분
    printf("위의 투플들을 삭제하시겠습니까? (y/n) :");   

    flag = (char *)getchar() ;
    while (getchar() != '\n');  // 첫글자 외 나머지 입력 버림

    if( flag == 'y' || flag =='Y' ){
        sprintf(sqlstmt,"delete from reservation where res_no = %s ", no);
        //printf("stmt:%s\n", sqlstmt);
        // 아래 문장 수행 중에 에러가 발생하면 error 처리 루틴으로 감. Error_flag=1로 바뀜 
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
        if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}



        if( Error_flag == 0 ) {  // 정상적으로 수행 되는 경우
            printf("\n");	
            printf(" 정상적으로 삭제되었습니다.  아무키나 치세요 \n" ) ;
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
            if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}


            getch();
        }
        else {   //Error_falg == 1. 에러가 발생된 경우
            printf("\n");	
            printf(" 튜플이 삭제되지 않았습니다. 아무키나 치세요 \n" ) ;
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
            if (sqlca.sqlcode < 0) sql_error("\7에러발생:");
}


            getch();
        }
    }
    else {    // 삭제 취소
        printf("\n");	
        printf("삭제 취소\n");
        printf("메인메뉴로 가기 : 아무키나 치세요. ");
        getch();
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


    getxy(&x, &y);  // 현재 커서 위치 저장

    Error_flag = 1;    //에러가 발생됨을 셋팅함

    gotoxy(1,22) ;   //마지막 줄로 이동

    printf("%s", msg);
    buf_len = sizeof (err_msg);
    sqlglm(err_msg, &buf_len, &msg_len);
    printf("%.*s\n", msg_len, err_msg);

    gotoxy(x, y) ;   // 저장해 두었던 원래 커서 위치로 이동
    //getch();
}
/*---------------  화면 커서 제어 함수 --------------------*/
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
