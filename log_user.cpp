#include <iostream>
#include "log.h"

using namespace std;

#ifdef SWITCH_LOGGING

//---------------------------------------------------------------------------
void log_a_begin_user(const char* a, const char* a_name, const char* y, const char* y_name, const char* e, const char* e_name)
{
  // LOG_GRAPH_BEGIN 'a'('a_name'): в состоянии 'y'() запущен с событием 'e'('e_name')
  //cout << a << " <" << a_name << "> в состоянии   <" << y << "> запущен с событием " << e << endl;
  cout << a << " в состоянии <" << y << "> запущен с событием " << e << endl; 
}
//---------------------------------------------------------------------------
void log_a_trans_user(const char* a, const char* a_name, const char* yo, const char* yo_name, const char* yn, const char* yn_name)
{
  // LOG_GRAPH_TRANS 'a'('a_name'): перешел из состояния 'yo'() в состояние 'yn'()
  
  //cout << a << " <" << a_name << "> перешел из состояния   <" << yo << "> в состояние " << yn << endl
  cout << a << " перешел из состояния  <" << yo << "> в состояние " << yn << endl;
}
//---------------------------------------------------------------------------
void log_a_end_user(const char* a, const char* a_name, const char* y, const char* y_name, const char* e, const char* e_name)
{
  // LOG_GRAPH_END 'a'('a_name'): завершил обработку события 'e'('e_name') в состоянии 'y'()
  //cout << a << " <" << a_name << "> в состоянии  <" << y << ">    завершил событие    " << e << endl;
  cout << a << " в состоянии  <" << y << "> завершил событие " << e << endl;
}
//---------------------------------------------------------------------------
void log_x_user(const char* x, const char* x_name, uint res)
{
  // LOG_X 'x' - 'x_name' - вернул 'res'
  cout << x << " <" << x_name << "> вернул " << res <<  endl; 
   
}
//---------------------------------------------------------------------------
void log_z_user(const char* z, const char* z_name)
{
  // LOG_Z 'z'. 'z_name'
  cout << z << " <" << z_name << " > запущена " <<  endl; 
}
//---------------------------------------------------------------------------
void log_write_user(char ch, const char* str)
{
  // ch, str
}
//---------------------------------------------------------------------------

#endif
