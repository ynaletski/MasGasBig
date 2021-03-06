struct comport
{
  unsigned char buf[256]; /*���� ���*/
  unsigned char status; /*����� �믮������ ����樨:
			 0-��室���,1-� ���� ���� �����,2-�ਭ�� ����*/
  unsigned char index;  /*������ ���� ���*/
  unsigned char timer;  /*����稪 �६����� ���ࢠ���*/
  unsigned char ta;     /*���ࢠ� ⠩�-��� ���� 50 �ᥪ*/
  unsigned char reinst;
  unsigned char ind_beg; /*������ ��砫� �����, ��� ⥪�� ��⮪���*/
  unsigned char ind_end; /*������ ���� �����*/
  unsigned char evt;
};

struct mvs
{
  float data[21];              /*�������᪨� ��ࠬ���� � ��.�����஢��*/
  float avg[3];                /*��।��� ��.���.��ࠬ��஢*/
  unsigned char setup[13];     /*⥣,����,�����,�������*/
  unsigned char wait;           /*�᫮ �६����� ���ࢠ��� ����*/
  unsigned char evt;            /*ᮡ�⨥*/
  unsigned char alm_enb;      /*����� ࠧ�襭�/����饭�*/
  float alm_set[3][3];         /* ��⠢�� ��� ��९���:���,����,�����*/
  unsigned char alm_status[3];       /* 䠪� ॣ����樨 ���ଠ */
};
struct modul_rtd
{
  float         prm[6];            /*��ࠬ���� �� 6-� �室��*/
  unsigned char status[4];
  unsigned char typ[6];
  unsigned char evt;
  unsigned char chanel;
};
struct modul_ai
{
  float         prm[8];            /*��ࠬ���� �� 8-�� �������*/
  float         avg[8];            /*��।�����*/
  float         lo_brd[8];         /*������ �࠭�� ���������*/
  float         hi_brd[8];         /*���孭�� �࠭�� ���������*/
  float         alm_set[8][5];    /*��⠢�� ��� �������:��,���,����,��,�����,*/
  unsigned char units[8];
  unsigned char status[4];
  unsigned char evt;
  unsigned char alm_enb;           /*����� ࠧ�襭�/����饭�*/
  unsigned char alm_status[8];        /*䠪� ॣ����樨 ���ଠ */
};
struct modul_ao
{
  float         prm[4];            /*��ࠬ���� �� 4-� �������*/
  float         lo_brd[4];         /*������ �࠭�� ���������*/
  float         hi_brd[4];         /*���孭�� �࠭�� ���������*/
  unsigned char units[4];
  unsigned char status[6];
  unsigned char evt;
  unsigned char chnl;
};
struct modul_dio
{
  unsigned char inp;
  unsigned char out;
  unsigned char stat_out;
  unsigned char status[4];
  unsigned char evt;
};
struct modbus_host
{
  unsigned char num_pool;          /*���浪��� ����� �����*/
  unsigned char stat_pool;         /*����� �믮������ �����*/
  unsigned char adr;               /*���� ���譥�� ���ன�⢠*/
  unsigned char func;              /*�㭪��*/
  unsigned char count;             /*�᫮ ॣ���஢ � �����*/
  unsigned char status;            /*����� ����祭,��� �訡��*/
  unsigned      readr;             /*��ॠ�����*/
  unsigned char flag;            /*�ਧ��� �ਮ�⠭���� ����ᮢ*/
  unsigned      wait;            /*����稪 50 �� ���ࢠ���*/
};
struct runtime
{
  unsigned char nmb;          /*���浪��� ����� ����� ��� ���稪�*/
  unsigned char nmb_icp;      /*���浪��� ����� �����*/
  unsigned char ind;          /*��� ����樨 ����� ��� ���稪�*/
  unsigned char pnl;          /*���浪��� ����� ��ப� �� ⠡��*/
  unsigned char cnt_avg;      /*����稪 ��।����� �� ���稪��*/
  unsigned char flg_err;      /*䫠��� ���㠫���樨 �訡��*/
  unsigned char old_sec;
  unsigned char old_min;
  unsigned char old_hour;
  unsigned char old_month;
  unsigned char mmi;
};
struct in_table
{
  float      level[256];
  float     volume[256];
  float      meter[256];
  float       tank[256];
  float      press[256];
  unsigned        count;
};
struct out_table
{
  float      level[1024];
  float     volume[1024];
  float     factor[1024];
  unsigned        count;
};
struct gasquality
{
  float        density;
  float        methane;
  float        nitro;
  float        carbon;
  float        ethane;
  float        propane;
  float        n_but;
  float        i_but;
  float        n_pent;
  float        i_pent;
  float        hexane;
  float        hydrogen;
  float        carbon_m;
  float        helium;
  float        water;
  float        hydrosulf;
};
struct script
{
  double         accum;
  double	 argum;
  unsigned      count;
  unsigned char buf[6];
  unsigned      wait;
  unsigned char flag;
  unsigned     delay;
};
struct panel
{
  float          data[3];
  unsigned char  ind;
};

