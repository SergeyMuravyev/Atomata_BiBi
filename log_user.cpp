#include <iostream>
#include "log.h"

using namespace std;

#ifdef SWITCH_LOGGING

//---------------------------------------------------------------------------
void log_a_begin_user(const char* a, const char* a_name, const char* y, const char* y_name, const char* e, const char* e_name)
{
  // LOG_GRAPH_BEGIN 'a'('a_name'): � ��������� 'y'() ������� � �������� 'e'('e_name')
  //cout << a << " <" << a_name << "> � ���������   <" << y << "> ������� � �������� " << e << endl;
  cout << a << " � ��������� <" << y << "> ������� � �������� " << e << endl; 
}
//---------------------------------------------------------------------------
void log_a_trans_user(const char* a, const char* a_name, const char* yo, const char* yo_name, const char* yn, const char* yn_name)
{
  // LOG_GRAPH_TRANS 'a'('a_name'): ������� �� ��������� 'yo'() � ��������� 'yn'()
  
  //cout << a << " <" << a_name << "> ������� �� ���������   <" << yo << "> � ��������� " << yn << endl
  cout << a << " ������� �� ���������  <" << yo << "> � ��������� " << yn << endl;
}
//---------------------------------------------------------------------------
void log_a_end_user(const char* a, const char* a_name, const char* y, const char* y_name, const char* e, const char* e_name)
{
  // LOG_GRAPH_END 'a'('a_name'): �������� ��������� ������� 'e'('e_name') � ��������� 'y'()
  //cout << a << " <" << a_name << "> � ���������  <" << y << ">    �������� �������    " << e << endl;
  cout << a << " � ���������  <" << y << "> �������� ������� " << e << endl;
}
//---------------------------------------------------------------------------
void log_x_user(const char* x, const char* x_name, uint res)
{
  // LOG_X 'x' - 'x_name' - ������ 'res'
  cout << x << " <" << x_name << "> ������ " << res <<  endl; 
   
}
//---------------------------------------------------------------------------
void log_z_user(const char* z, const char* z_name)
{
  // LOG_Z 'z'. 'z_name'
  cout << z << " <" << z_name << " > �������� " <<  endl; 
}
//---------------------------------------------------------------------------
void log_write_user(char ch, const char* str)
{
  // ch, str
}
//---------------------------------------------------------------------------

#endif
