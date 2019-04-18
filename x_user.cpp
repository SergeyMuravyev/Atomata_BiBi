#include "common.h"
#include <iostream>


// Events E
// e0 - _init_
// e1 - ������� ���� 					"1" E=1
// e2 - ������� �����					"2" E=2
// e3 - ������� �����					"3" E=3
// e4 - ������� ������					"4" E=4
// e5 - ������� �����					"5" E=5
// e6 - ������� ������������			"6" E=6

// ������� ���� ��������� 				"q" E=10
// ������� ����� ��������� 			"w" E=11
// ������� ������ ��������� 			"e" E=12
// ������� ����� ��������� 				"r" E=13
// ������� ������� ������ �������� 		"t" E=14
// ������� ������� ����� �������� 		"y" E=15
// ��������� ������ ������ ��������� 	"u" E=16
// ��������� ��������� 					"i" E=17
// ������� ����� ��������� 				"o" E=18

using namespace std;

extern unsigned int event;
unsigned int x_timer1;
unsigned int x_timer4;



// ������ ������� ������ ��������
ubyte x20_6_user(void)
{

cout << "x20_6_user  �������� " <<  endl; 
if (event==14) return 1;
else return 0;
}

// ������ ������� ����� ��������
ubyte x20_7_user(void)
{

cout << "x20_7_user  �������� " <<  endl;
if (event==15) return 1;
else return 0;
}

// ��������� ������ ������ ���������
ubyte x20_8_user(void)
{

cout << "x20_8_user  �������� " <<  endl; 
if (event==16) return 1;
else return 0;
}


// ���Ш�

// ��������� ����� ���������
ubyte x32_1_user(void)
{

cout << "x32_1_user  �������� " <<  endl; 

//��������� �-�� ��������� ����� � ������� 3� ������
if ((x_timer1 < 3) && (event==17)) {x_timer1++; return 1;}
else if ((x_timer1 >= 3) && (event==17)) {x_timer1=0; event=0; return 0;}

}

// ������� ����� ��������� "w"
ubyte x32_2_user(void)
{

cout << "x32_2_user  �������� " <<  endl; 
if (event==11) return 1; 
else return 0;

}


// �����

// ��������� ����� ���������
ubyte x33_1_user(void)
{

cout << "x33_1_user  �������� " <<  endl; 

//��������� �-�� ��������� ����� � ������� 3� ������
if ((x_timer4 < 3) && (event==17)) {x_timer4++; return 1;}
else if ((x_timer4 >= 3) && (event==17)) {x_timer4=0; event=0; return 0;}

}

// ������� ����� ��������� "o"
ubyte x33_2_user(void)
{

cout << "x33_2_user  �������� " <<  endl; 
if (event==18) return 1; 
else return 0;

}


// ������

// ������� ������ ��������� "e"
ubyte x34_2_user(void)
{

cout << "x34_2_user  �������� " <<  endl; 
if (event==12) return 1; 
else return 0;

}


// �����

// ������� ����� ��������� "r"
ubyte x35_2_user(void)
{

cout << "x35_2_user  �������� " <<  endl; 
if (event==13) return 1; 
else return 0;

}


