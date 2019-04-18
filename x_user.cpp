#include "common.h"
#include <iostream>


// Events E
// e0 - _init_
// e1 - Команда Стоп 					"1" E=1
// e2 - Команда Вперёд					"2" E=2
// e3 - Команда Назад					"3" E=3
// e4 - Команда Вправо					"4" E=4
// e5 - Команда Влево					"5" E=5
// e6 - Команда Приостановка			"6" E=6

// Команда стоп выполнена 				"q" E=10
// Команда вперёд выполнена 			"w" E=11
// Команда вправо выполнена 			"e" E=12
// Команда влево выполнена 				"r" E=13
// Датчика касания правый сработал 		"t" E=14
// Датчика касания левый сработал 		"y" E=15
// Показания радара меньше заданного 	"u" E=16
// Коррекция требуется 					"i" E=17
// Команда назад выполнена 				"o" E=18

using namespace std;

extern unsigned int event;
unsigned int x_timer1;
unsigned int x_timer4;



// Датчик касания правый сработал
ubyte x20_6_user(void)
{

cout << "x20_6_user  запущена " <<  endl; 
if (event==14) return 1;
else return 0;
}

// Датчик касания левый сработал
ubyte x20_7_user(void)
{

cout << "x20_7_user  запущена " <<  endl;
if (event==15) return 1;
else return 0;
}

// Показания радара меньше заданного
ubyte x20_8_user(void)
{

cout << "x20_8_user  запущена " <<  endl; 
if (event==16) return 1;
else return 0;
}


// ВПЕРЁД

// Коррекция Вперёд требуется
ubyte x32_1_user(void)
{

cout << "x32_1_user  запущена " <<  endl; 

//Обработка ф-ии коррекции Вперёд в течении 3х тактов
if ((x_timer1 < 3) && (event==17)) {x_timer1++; return 1;}
else if ((x_timer1 >= 3) && (event==17)) {x_timer1=0; event=0; return 0;}

}

// Команда вперёд выполнена "w"
ubyte x32_2_user(void)
{

cout << "x32_2_user  запущена " <<  endl; 
if (event==11) return 1; 
else return 0;

}


// НАЗАД

// Коррекция Назад требуется
ubyte x33_1_user(void)
{

cout << "x33_1_user  запущена " <<  endl; 

//Обработка ф-ии коррекции Назад в течении 3х тактов
if ((x_timer4 < 3) && (event==17)) {x_timer4++; return 1;}
else if ((x_timer4 >= 3) && (event==17)) {x_timer4=0; event=0; return 0;}

}

// Команда назад выполнена "o"
ubyte x33_2_user(void)
{

cout << "x33_2_user  запущена " <<  endl; 
if (event==18) return 1; 
else return 0;

}


// ВПРАВО

// Команда вправо выполнена "e"
ubyte x34_2_user(void)
{

cout << "x34_2_user  запущена " <<  endl; 
if (event==12) return 1; 
else return 0;

}


// ВЛЕВО

// Команда влево выполнена "r"
ubyte x35_2_user(void)
{

cout << "x35_2_user  запущена " <<  endl; 
if (event==13) return 1; 
else return 0;

}


