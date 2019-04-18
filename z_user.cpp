#include "common.h"
#include <iostream>

using namespace std;

extern unsigned int event;

unsigned int x_timer2;
unsigned int x_timer3;
unsigned int x_timer5;
unsigned int x_timer6;


void z20_1_user(void)
{

}

void z21_1_user(void)
{

}

void z21_2_user(void)
{

}

void z21_3_user(void)
{

}

void z21_4_user(void)
{

}

void z21_5_user(void)
{

}


//ВПЕРЁД

void z32_1_user(void)
{

cout << "z32_1_user старт" <<  endl;

}

void z32_2_1_user(void)
{

event = 0; // Сбрасываем команду Вперёд, решая проблему передачи event в автомат А32
cout << "z32_2_1_user старт" <<  endl;

}

void z32_2_2_user(void)
{

cout << "z32_2_2_user работает" <<  endl;

}

void z32_3_1_user(void)
{

cout << "z32_3_1_user старт" <<  endl;

}

void z32_3_2_user(void)
{

cout << "z32_3_2_user работает" <<  endl;

//Обработка ф-ии приостановка в течении 3х тактов
if ((x_timer2 < 3) && (event==6)) {x_timer2++;}
else if ((x_timer2 >= 3) && (event==6)) {x_timer2=0; event=0;}

}

void z32_4_1_user(void)
{

cout << "z32_4_1_user старт" <<  endl;

}

void z32_4_2_user(void)
{

cout << "z32_4_2_user работает" <<  endl;

}


//НАЗАД

void z33_1_user(void)
{

cout << "z33_1_user старт" <<  endl;

}

void z33_2_1_user(void)
{

event = 0; // Сбрасываем команду Назад, решая проблему передачи event в автомат А33
cout << "z33_2_1_user старт" <<  endl;

}

void z33_2_2_user(void)
{

cout << "z33_2_2_user работает" <<  endl;

}

void z33_3_1_user(void)
{

cout << "z33_3_1_user старт" <<  endl;

}

void z33_3_2_user(void)
{

cout << "z33_3_2_user работает" <<  endl;

//Обработка ф-ии приостановка в течении 3х тактов
if ((x_timer3 < 3) && (event==6)) {x_timer3++;}
else if ((x_timer3 >= 3) && (event==6)) {x_timer3=0; event=0;}

}

void z33_4_1_user(void)
{

cout << "z33_4_1_user старт" <<  endl;

}

void z33_4_2_user(void)
{

cout << "z33_4_2_user работает" <<  endl;

}



//ВПРАВО

void z34_1_user(void)
{

cout << "z34_1_user старт" <<  endl;

}

void z34_2_1_user(void)
{

event = 0; // Сбрасываем команду Вправо, решая проблему передачи event в автомат А34
cout << "z34_2_1_user старт" <<  endl;

}

void z34_2_2_user(void)
{

cout << "z34_2_2_user работает" <<  endl;

}

void z34_3_1_user(void)
{

cout << "z34_3_1_user старт" <<  endl;

}

void z34_3_2_user(void)
{

cout << "z34_3_2_user работает" <<  endl;

//Обработка ф-ии приостановка в течении 3х тактов
if ((x_timer5 < 3) && (event==6)) {x_timer5++;}
else if ((x_timer5 >= 3) && (event==6)) {x_timer5=0; event=0;}

}


//ВЛЕВО

void z35_1_user(void)
{

cout << "z35_1_user старт" <<  endl;

}

void z35_2_1_user(void)
{

event = 0; // Сбрасываем команду Влево, решая проблему передачи event в автомат А34
cout << "z35_2_1_user старт" <<  endl;

}

void z35_2_2_user(void)
{

cout << "z35_2_2_user работает" <<  endl;

}

void z35_3_1_user(void)
{

cout << "z35_3_1_user старт" <<  endl;

}

void z35_3_2_user(void)
{

cout << "z35_3_2_user работает" <<  endl;

//Обработка ф-ии приостановка в течении 3х тактов
if ((x_timer6 < 3) && (event==6)) {x_timer6++;}
else if ((x_timer6 >= 3) && (event==6)) {x_timer6=0; event=0;}

}

