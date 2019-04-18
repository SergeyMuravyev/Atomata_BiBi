
// ������������� Visio2Switch �� ������ BiBi_A20_A21_A32_A33_A34_A35_Events_1.4.1.vsd

// ������� ������� ����. ��� ��������� � ��� �������� ������ ������� ���������� �
// �������� �� ������ e1-e6 ������� ����� �������� ���������� ��� - not present!

// Events E
// e0 - _init_
// e1 - ������� ����
// e2 - ������� �����
// e3 - ������� �����
// e4 - ������� ������
// e5 - ������� �����
// e6 - ������� ������������

// ���������� � ���������� ��� event (���� ��� � �����������, ����� �����������)
// ������� ���� ��������� 				"q" E=10
// ������� ����� ��������� 			"w" E=11
// ������� ������ ��������� 			"e" E=12
// ������� ����� ��������� 				"r" E=13
// ������� ������� ������ �������� 		"t" E=14
// ������� ������� ����� �������� 		"y" E=15
// ��������� ������ ������ ��������� 	"u" E=16
// ��������� ��������� 					"i" E=17
// ������� ����� ��������� 				"o" E=18

#include <windows.h>
#include <iostream>
#include <time.h>
#include <math.h>
#include "types.h"
#include "common.h"
#include "log.h"

using namespace std;

unsigned int event;

unsigned int x_timer = 0;



int main() 
{

SetConsoleCP(1251);
SetConsoleOutputCP(1251);


while(1){

Sleep(1000);
x_timer++;

// https://msdn.microsoft.com/de-de/library/windows/desktop/dd375731(v=vs.85).aspx
if(GetKeyState('1') & 0x8000 /*check if high-order bit is set (1 << 15)*/)
{
	event = 1; 
	cout << endl << "BUTTON 1 PRESSED" << endl;
	x_timer = 1;
} else if (GetKeyState('2') & 0x8000) {
	event = 2; 
	cout << endl << "BUTTON 2 PRESSED" << endl;
	x_timer = 1;		
}else if (GetKeyState('3') & 0x8000) {
	event = 3; 
	cout << endl << "BUTTON 3 PRESSED" << endl;
	x_timer = 1;		
}else if (GetKeyState('4') & 0x8000) {
	event = 4; 
	cout << endl << "BUTTON 4 PRESSED" << endl;
	x_timer = 1;		
}else if (GetKeyState('5') & 0x8000) {
	event = 5; 
	cout << endl << "BUTTON 5 PRESSED" << endl;
	x_timer = 1;		
}else if (GetKeyState('6') & 0x8000) {
	event = 6; 
	cout << endl << "BUTTON 6 PRESSED" << endl;
	x_timer = 1;		
}else if (GetKeyState('7') & 0x8000) {
	event = 7; 
	cout << endl << "BUTTON 7 PRESSED" << endl;
	x_timer = 1;		
}else if (GetKeyState('8') & 0x8000) {
	event = 8; 
	cout << endl << "BUTTON 8 PRESSED" << endl;
	x_timer = 1;		
}else if (GetKeyState('9') & 0x8000) {
	event = 9; 
	cout << endl << "BUTTON 9 PRESSED" << endl;
	x_timer = 1;		
}else if (GetKeyState('Q') & 0x8000) {
	event = 10; 
	cout << endl << "BUTTON q PRESSED" << endl;
	x_timer = 1;
}else if (GetKeyState('W') & 0x8000) {
	event = 11; 
	cout << endl << "BUTTON w PRESSED" << endl;
	x_timer = 1;
}else if (GetKeyState('E') & 0x8000) {
	event = 12; 
	cout << endl << "BUTTON e PRESSED" << endl;
	x_timer = 1;
}else if (GetKeyState('R') & 0x8000) {
	event = 13; 
	cout << endl << "BUTTON r PRESSED" << endl;
	x_timer = 1;
}else if (GetKeyState('T') & 0x8000) {
	event = 14; 
	cout << endl << "BUTTON t PRESSED" << endl;
	x_timer = 1;
}else if (GetKeyState('Y') & 0x8000) {
	event = 15; 
	cout << endl << "BUTTON y PRESSED" << endl;
	x_timer = 1;
}else if (GetKeyState('U') & 0x8000) {
	event = 16; 
	cout << endl << "BUTTON u PRESSED" << endl;
	x_timer = 1;
}else if (GetKeyState('I') & 0x8000) {
	event = 17; 
	cout << endl << "BUTTON i PRESSED" << endl;
	x_timer = 1;
}else if (GetKeyState('O') & 0x8000) {
	event = 18; 
	cout << endl << "BUTTON o PRESSED" << endl;
	x_timer = 1;
}else if (GetKeyState('A') & 0x8000) {
	event = 19; 
	cout << endl << "BUTTON p PRESSED" << endl;
	x_timer = 1;
}else if (GetKeyState('S') & 0x8000) {
	event = 20; 
	cout << endl << "BUTTON p PRESSED" << endl;
	x_timer = 1;
};	


cout << endl;
cout << "tic : " << x_timer << endl;
cout << "����� A20 EVENT =  " << event <<  endl; 

A20(event); // event ������� ���������� �� 1-6 ����� �����������, �������� event ����� �� ��������, ��� ���������� � ����� ��������� � �������� �������������
// ����� ������� �������� � �����, ����� � ��������� �� ������������ ��������� ���� - ������������ �������

if ((event!=2) && (event!=3) && (event!=4) && (event!=5) && (event!=6) && (event!=17) && (event!=18)) event = 0;

}

}



