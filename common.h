//--- this file is machine generated ---

#ifndef CommonH
#define CommonH

#include "types.h"

typedef struct{
  uint y20; // �������  ������� ������ ��� (BiBi 1.0)
  uint y21; // ������� ���������� ������ ��� (BiBi 1.0)
  uint y32; // ������� ����� (BiBi 1.0)
  uint y33; // ������� ����� (BiBi 1.0)
  uint y34; // ������� ������ (BiBi 1.0)
  uint y35; // ������� ����� (BiBi 1.0)
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
uint x20_6(void); // ������ ������� ������ ��������
uint x20_7(void); // ������ ������� ����� ��������
uint x20_8(void); // ��������� ������ ������ ���������
uint x32_1(void); // ��������� ���������
uint x32_2(void); // ������� ����� ���������
uint x33_1(void); // ��������� ���������
uint x33_2(void); // ������� ����� ���������
uint x34_2(void); // �������  ������ ���������
uint x35_2(void); // �������  ����� ���������

// Actions Z
void z20_1(void); // ������� ������ ������
void z21_1(void); // �-� ����
void z21_2(void); // �-� �����
void z21_3(void); // �-� �����
void z21_4(void); // �-� ������
void z21_5(void); // �-� �����
void z32_1(void); // �-� ����
void z32_2_1(void); // �-� ����� �����
void z32_2_2(void); // �-� ����� ���������
void z32_3_1(void); // �-� ������������ �����
void z32_3_2(void); // �-� ������������ ������
void z32_4_1(void); // �-� ��������� �����
void z32_4_2(void); // �-� ��������� ������
void z33_1(void); // �-� ����� ����
void z33_2_1(void); // �-� �����  �����
void z33_2_2(void); // �-� ����� ���������
void z33_3_1(void); // �-� ������������ �����
void z33_3_2(void); // �-� ������������ ������
void z33_4_1(void); // �-� ��������� �����
void z33_4_2(void); // �-� ��������� ������
void z34_1(void); // �-� ������ ����
void z34_2_1(void); // �-� ������ �����
void z34_2_2(void); // �-�  ������ ���������
void z34_3_1(void); // �-� ������������  ������
void z34_3_2(void); // �-� ������������  ������ ������
void z35_1(void); // �-� ����� ����
void z35_2_1(void); // �-� ����� �����
void z35_2_2(void); // �-�  ����� ���������
void z35_3_1(void); // �-� ������������  �����
void z35_3_2(void); // �-� ������������  ����� ������

// Events E
// e0 - _init_
// e1 - ������� ����
// e2 - ������� �����
// e3 - ������� �����
// e4 - ������� ������
// e5 - ������� �����
// e6 - ������� ������������

#endif
