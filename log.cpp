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
  {  1, "e1", "Команда Стоп" },
  {  2, "e2", "Команда Вперёд" },
  {  3, "e3", "Команда Назад" },
  {  4, "e4", "Команда Вправо" },
  {  5, "e5", "Команда Влево" },
  {  6, "e6", "Команда Приостановка" }
};

str2_t x_str2[9] = 
{
  { "x20_6", "Датчик касания правый сработал" },
  { "x20_7", "Датчик касания левый сработал" },
  { "x20_8", "Показание радара меньше заданного" },
  { "x32_1", "Коррекция требуется" },
  { "x32_2", "Команда Вперёд выполнена" },
  { "x33_1", "Коррекция требуется" },
  { "x33_2", "Команда Назад выполнена" },
  { "x34_2", "Команда  Вправо выполнена" },
  { "x35_2", "Команда  Влево выполнена" }
};

str2_t z_str2[30] = 
{
  { "z20_1", "Функция Начало Работы" },
  { "z21_1", "Ф-я Стоп" },
  { "z21_2", "Ф-я Вперёд" },
  { "z21_3", "Ф-я Назад" },
  { "z21_4", "Ф-я Вправо" },
  { "z21_5", "Ф-я Влево" },
  { "z32_1", "Ф-я Стоп" },
  { "z32_2_1", "Ф-я Вперёд старт" },
  { "z32_2_2", "Ф-я Вперёд обработка" },
  { "z32_3_1", "Ф-я приостановки старт" },
  { "z32_3_2", "Ф-я приостановки работа" },
  { "z32_4_1", "Ф-я коррекции старт" },
  { "z32_4_2", "Ф-я коррекции работа" },
  { "z33_1", "Ф-я Назад Стоп" },
  { "z33_2_1", "Ф-я Назад  старт" },
  { "z33_2_2", "Ф-я Назад обработка" },
  { "z33_3_1", "Ф-я приостановки старт" },
  { "z33_3_2", "Ф-я приостановки работа" },
  { "z33_4_1", "Ф-я коррекции старт" },
  { "z33_4_2", "Ф-я коррекции работа" },
  { "z34_1", "Ф-я Вправо Стоп" },
  { "z34_2_1", "Ф-я Вправо Старт" },
  { "z34_2_2", "Ф-я  Вправо обработка" },
  { "z34_3_1", "Ф-я приостановки  Вправо" },
  { "z34_3_2", "Ф-я приостановки  Вправо работа" },
  { "z35_1", "Ф-я Влево Стоп" },
  { "z35_2_1", "Ф-я Влево Старт" },
  { "z35_2_2", "Ф-я  Влево обработка" },
  { "z35_3_1", "Ф-я приостановки  Влево" },
  { "z35_3_2", "Ф-я приостановки  Влево работа" }
};

str2_t a20_str2[2] = 
{
  { "0", "" },
  { "1", "Начало работы" }
};

str2_t a21_str2[6] = 
{
  { "0", "" },
  { "1", "Стоп" },
  { "2", "Вперёд" },
  { "3", "Назад" },
  { "4", "Вправо" },
  { "5", "Влево" }
};

str2_t a32_str2[5] = 
{
  { "0", "" },
  { "1", "Стоп" },
  { "2", "Вперёд" },
  { "3", "Приостановка" },
  { "4", "Коррекция" }
};

str2_t a33_str2[5] = 
{
  { "0", "" },
  { "1", "Стоп" },
  { "2", "Назад" },
  { "3", "Приостановка" },
  { "4", "Коррекция" }
};

str2_t a34_str2[4] = 
{
  { "0", "" },
  { "1", "Стоп" },
  { "2", "Вправо" },
  { "3", "Приостановка" }
};

str2_t a35_str2[4] = 
{
  { "0", "" },
  { "1", "Стоп" },
  { "2", "Влево" },
  { "3", "Приостановка" }
};

str3_t A_str3[6] = 
{
  { "A20", "Автомат  Первого уровня КУД (BiBi 1.0)", a20_str2 },
  { "A21", "Автомат командного режима КУД (BiBi 1.0)", a21_str2 },
  { "A32", "Автомат Вперёд (BiBi 1.0)", a32_str2 },
  { "A33", "Автомат Назад (BiBi 1.0)", a33_str2 },
  { "A34", "Автомат Вправо (BiBi 1.0)", a34_str2 },
  { "A35", "Автомат Влево (BiBi 1.0)", a35_str2 }
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
