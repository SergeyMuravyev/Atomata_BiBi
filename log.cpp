//--- this file is machine generated ---

#include "log.h"

#ifdef SWITCH_LOGGING

typedef struct{
  uint       dig;
  const char* n;
  const char* n_name;
} int_str2_t;

typedef struct{
  const char* n;
  const char* n_name;
} str2_t;

typedef struct{
  const char* n;
  const char* n_name;
  str2_t* str2;
} str3_t;

int_str2_t e_str2[7] = 
{
  {  0, "e0", "_init_" },
  {  1, "e1", "������� ����" },
  {  2, "e2", "������� �����" },
  {  3, "e3", "������� �����" },
  {  4, "e4", "������� ������" },
  {  5, "e5", "������� �����" },
  {  6, "e6", "������� ������������" }
};

str2_t x_str2[9] = 
{
  { "x20_6", "������ ������� ������ ��������" },
  { "x20_7", "������ ������� ����� ��������" },
  { "x20_8", "��������� ������ ������ ���������" },
  { "x32_1", "��������� ���������" },
  { "x32_2", "������� ����� ���������" },
  { "x33_1", "��������� ���������" },
  { "x33_2", "������� ����� ���������" },
  { "x34_2", "�������  ������ ���������" },
  { "x35_2", "�������  ����� ���������" }
};

str2_t z_str2[30] = 
{
  { "z20_1", "������� ������ ������" },
  { "z21_1", "�-� ����" },
  { "z21_2", "�-� �����" },
  { "z21_3", "�-� �����" },
  { "z21_4", "�-� ������" },
  { "z21_5", "�-� �����" },
  { "z32_1", "�-� ����" },
  { "z32_2_1", "�-� ����� �����" },
  { "z32_2_2", "�-� ����� ���������" },
  { "z32_3_1", "�-� ������������ �����" },
  { "z32_3_2", "�-� ������������ ������" },
  { "z32_4_1", "�-� ��������� �����" },
  { "z32_4_2", "�-� ��������� ������" },
  { "z33_1", "�-� ����� ����" },
  { "z33_2_1", "�-� �����  �����" },
  { "z33_2_2", "�-� ����� ���������" },
  { "z33_3_1", "�-� ������������ �����" },
  { "z33_3_2", "�-� ������������ ������" },
  { "z33_4_1", "�-� ��������� �����" },
  { "z33_4_2", "�-� ��������� ������" },
  { "z34_1", "�-� ������ ����" },
  { "z34_2_1", "�-� ������ �����" },
  { "z34_2_2", "�-�  ������ ���������" },
  { "z34_3_1", "�-� ������������  ������" },
  { "z34_3_2", "�-� ������������  ������ ������" },
  { "z35_1", "�-� ����� ����" },
  { "z35_2_1", "�-� ����� �����" },
  { "z35_2_2", "�-�  ����� ���������" },
  { "z35_3_1", "�-� ������������  �����" },
  { "z35_3_2", "�-� ������������  ����� ������" }
};

str2_t a20_str2[2] = 
{
  { "0", "" },
  { "1", "������ ������" }
};

str2_t a21_str2[6] = 
{
  { "0", "" },
  { "1", "����" },
  { "2", "�����" },
  { "3", "�����" },
  { "4", "������" },
  { "5", "�����" }
};

str2_t a32_str2[5] = 
{
  { "0", "" },
  { "1", "����" },
  { "2", "�����" },
  { "3", "������������" },
  { "4", "���������" }
};

str2_t a33_str2[5] = 
{
  { "0", "" },
  { "1", "����" },
  { "2", "�����" },
  { "3", "������������" },
  { "4", "���������" }
};

str2_t a34_str2[4] = 
{
  { "0", "" },
  { "1", "����" },
  { "2", "������" },
  { "3", "������������" }
};

str2_t a35_str2[4] = 
{
  { "0", "" },
  { "1", "����" },
  { "2", "�����" },
  { "3", "������������" }
};

str3_t A_str3[6] = 
{
  { "A20", "�������  ������� ������ ��� (BiBi 1.0)", a20_str2 },
  { "A21", "������� ���������� ������ ��� (BiBi 1.0)", a21_str2 },
  { "A32", "������� ����� (BiBi 1.0)", a32_str2 },
  { "A33", "������� ����� (BiBi 1.0)", a33_str2 },
  { "A34", "������� ������ (BiBi 1.0)", a34_str2 },
  { "A35", "������� ����� (BiBi 1.0)", a35_str2 }
};

//---------------------------------------------------------------------------
void e_find(uint e, const char** n, const char** n_name)
{
  static const char* nothing = "not present!";
  *n = nothing;
  *n_name = nothing;
  for(uint i = 0; i < 7; i++)
    if(e_str2[i].dig == e){
      *n = e_str2[i].n; *n_name = e_str2[i].n_name; return;
    }
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
void log_a_begin_user(const char* a, const char* a_name, const char* y, const char* y_name, const char* e, const char* e_name);
void log_a_begin(ubyte a, uint y, uint e)
{
  const char *e_n, *e_n_name;
  e_find(e, &e_n, &e_n_name);
  log_a_begin_user(A_str3[a].n, A_str3[a].n_name, A_str3[a].str2[y].n, A_str3[a].str2[y].n_name, e_n, e_n_name);
}
//---------------------------------------------------------------------------
void log_a_trans_user(const char* a, const char* a_name, const char* yo, const char* yo_name, const char* yn, const char* yn_name);
void log_a_trans(ubyte a, uint yo, uint yn)
{
  log_a_trans_user(A_str3[a].n, A_str3[a].n_name, A_str3[a].str2[yo].n, A_str3[a].str2[yo].n_name, A_str3[a].str2[yn].n, A_str3[a].str2[yn].n_name);
}
//---------------------------------------------------------------------------
void log_a_end_user(const char* a, const char* a_name, const char* y, const char* y_name, const char* e, const char* e_name);
void log_a_end(ubyte a, uint y, uint e)
{
  const char *e_n, *e_n_name;
  e_find(e, &e_n, &e_n_name);
  log_a_end_user(A_str3[a].n, A_str3[a].n_name, A_str3[a].str2[y].n, A_str3[a].str2[y].n_name, e_n, e_n_name);
}
//---------------------------------------------------------------------------
void log_x_user(const char* x, const char* x_name, uint res);
void log_x(ubyte x, uint res)
{
  log_x_user(x_str2[x].n, x_str2[x].n_name, res);
}
//---------------------------------------------------------------------------
void log_z_user(const char* z, const char* z_name);
void log_z(ubyte z)
{
  log_z_user(z_str2[z].n, z_str2[z].n_name);
}
//---------------------------------------------------------------------------
void log_write_user(char ch, const char* str);
void log_write(char ch, const char* str)
{
  log_write_user(ch, str);
}
//---------------------------------------------------------------------------

#endif
