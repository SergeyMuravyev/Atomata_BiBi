//--- this file is machine generated ---

#ifndef CommonH
#define CommonH

#include "types.h"

typedef struct{
  uint y20; // Автомат  Первого уровня КУД (BiBi 1.0)
  uint y21; // Автомат командного режима КУД (BiBi 1.0)
  uint y32; // Автомат Вперёд (BiBi 1.0)
  uint y33; // Автомат Назад (BiBi 1.0)
  uint y34; // Автомат Вправо (BiBi 1.0)
  uint y35; // Автомат Влево (BiBi 1.0)
} common_t;

extern common_t cm;

// Machines A
void A20( uint e );
void A21( uint e );
void A32( uint e );
void A33( uint e );
void A34( uint e );
void A35( uint e );

// Variables X
uint x20_6(void); // Датчик касания правый сработал
uint x20_7(void); // Датчик касания левый сработал
uint x20_8(void); // Показание радара меньше заданного
uint x32_1(void); // Коррекция требуется
uint x32_2(void); // Команда Вперёд выполнена
uint x33_1(void); // Коррекция требуется
uint x33_2(void); // Команда Назад выполнена
uint x34_2(void); // Команда  Вправо выполнена
uint x35_2(void); // Команда  Влево выполнена

// Actions Z
void z20_1(void); // Функция Начало Работы
void z21_1(void); // Ф-я Стоп
void z21_2(void); // Ф-я Вперёд
void z21_3(void); // Ф-я Назад
void z21_4(void); // Ф-я Вправо
void z21_5(void); // Ф-я Влево
void z32_1(void); // Ф-я Стоп
void z32_2_1(void); // Ф-я Вперёд старт
void z32_2_2(void); // Ф-я Вперёд обработка
void z32_3_1(void); // Ф-я приостановки старт
void z32_3_2(void); // Ф-я приостановки работа
void z32_4_1(void); // Ф-я коррекции старт
void z32_4_2(void); // Ф-я коррекции работа
void z33_1(void); // Ф-я Назад Стоп
void z33_2_1(void); // Ф-я Назад  старт
void z33_2_2(void); // Ф-я Назад обработка
void z33_3_1(void); // Ф-я приостановки старт
void z33_3_2(void); // Ф-я приостановки работа
void z33_4_1(void); // Ф-я коррекции старт
void z33_4_2(void); // Ф-я коррекции работа
void z34_1(void); // Ф-я Вправо Стоп
void z34_2_1(void); // Ф-я Вправо Старт
void z34_2_2(void); // Ф-я  Вправо обработка
void z34_3_1(void); // Ф-я приостановки  Вправо
void z34_3_2(void); // Ф-я приостановки  Вправо работа
void z35_1(void); // Ф-я Влево Стоп
void z35_2_1(void); // Ф-я Влево Старт
void z35_2_2(void); // Ф-я  Влево обработка
void z35_3_1(void); // Ф-я приостановки  Влево
void z35_3_2(void); // Ф-я приостановки  Влево работа

// Events E
// e0 - _init_
// e1 - Команда Стоп
// e2 - Команда Вперёд
// e3 - Команда Назад
// e4 - Команда Вправо
// e5 - Команда Влево
// e6 - Команда Приостановка

#endif
