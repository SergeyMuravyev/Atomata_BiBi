//--- this file is machine generated ---

#include "common.h"
#include "log.h"

common_t cm;

//-------------------------------------------------------
// A20 - Автомат  Первого уровня КУД (BiBi 1.0)
//-------------------------------------------------------
void A20( uint e )
{
  uint y_old = cm.y20;

  #ifdef A20_BEGIN_LOGGING
    log_a_begin(0, y_old, e);
  #endif

  switch( cm.y20 )
  {
    case 0:// 
      if(1)
      {
                                        cm.y20 = 1;
      }
    break;

    case 1:// Начало работы
      A21(e); 
    break;

    default:
      #ifdef A20_ERRORS_LOGGING
        log_write(LOG_GRAPH_ERROR, "Error in the machine A20: unknown number of state!");
      #else
        ;
      #endif
  }

  if( y_old == cm.y20 ) goto A20_end;

  #ifdef A20_TRANS_LOGGING
    log_a_trans(0, y_old, cm.y20);
  #endif

  switch( cm.y20 )
  {
    case 0:// 
    break;

    case 1:// Начало работы
      A21(0); 
      z20_1(); 
    break;

  }

  A20_end: ;
  #ifdef A20_END_LOGGING
    log_a_end(0, cm.y20, e);
  #endif
}
//-------------------------------------------------------
// A21 - Автомат командного режима КУД (BiBi 1.0)
//-------------------------------------------------------
void A21( uint e )
{
  uint y_old = cm.y21;

  #ifdef A21_BEGIN_LOGGING
    log_a_begin(1, y_old, e);
  #endif

  switch( cm.y21 )
  {
    case 0:// 
      if(1)
      {
                                        cm.y21 = 1;
      }
    break;

    case 1:// Стоп
      if((e == 4))
      {
                                        cm.y21 = 4;
      }
      else
      if((e == 2))
      {
                                        cm.y21 = 2;
      }
      else
      if((e == 3))
      {
                                        cm.y21 = 3;
      }
      else
      if((e == 5))
      {
                                        cm.y21 = 5;
      }
    break;

    case 2:// Вперёд
      A32(e); 
      if(cm.y32 == 1)
      {
                                        cm.y21 = 1;
      }
    break;

    case 3:// Назад
      A33(e); 
      if(cm.y33 == 1)
      {
                                        cm.y21 = 1;
      }
    break;

    case 4:// Вправо
      A34(e); 
      if(cm.y34 == 1)
      {
                                        cm.y21 = 1;
      }
    break;

    case 5:// Влево
      A35(e); 
      if(cm.y35 == 1)
      {
                                        cm.y21 = 1;
      }
    break;

    default:
      #ifdef A21_ERRORS_LOGGING
        log_write(LOG_GRAPH_ERROR, "Error in the machine A21: unknown number of state!");
      #else
        ;
      #endif
  }

  if( y_old == cm.y21 ) goto A21_end;

  #ifdef A21_TRANS_LOGGING
    log_a_trans(1, y_old, cm.y21);
  #endif

  switch( cm.y21 )
  {
    case 0:// 
    break;

    case 1:// Стоп
      z21_1(); 
    break;

    case 2:// Вперёд
      A32(0); 
      z21_2(); 
    break;

    case 3:// Назад
      A33(0); 
      z21_3(); 
    break;

    case 4:// Вправо
      A34(0); 
      z21_4(); 
    break;

    case 5:// Влево
      A35(0); 
      z21_5(); 
    break;

  }

  A21_end: ;
  #ifdef A21_END_LOGGING
    log_a_end(1, cm.y21, e);
  #endif
}
//-------------------------------------------------------
// A32 - Автомат Вперёд (BiBi 1.0)
//-------------------------------------------------------
void A32( uint e )
{
  uint y_old = cm.y32;

  #ifdef A32_BEGIN_LOGGING
    log_a_begin(2, y_old, e);
  #endif

  switch( cm.y32 )
  {
    case 0:// 
      if(1)
      {
                                        cm.y32 = 1;
      }
    break;

    case 1:// Стоп
      if((e == 2))
      {
                                        cm.y32 = 2;
      }
    break;

    case 2:// Вперёд
      if(x32_2())
      {
                                        cm.y32 = 1;
      }
      else
      if((e == 1) || (e == 2) || (e == 3) || (e == 4) || (e == 5))
      {
                                        cm.y32 = 1;
      }
      else
      if(((e == 6) || x20_6() || x20_6() || x20_7() || x20_8()))
      {
                                        cm.y32 = 3;
      }
      else
      if(x32_1())
      {
                                        cm.y32 = 4;
      }
      else
      if(1)
      {
        z32_2_2(); 
      }
    break;

    case 3:// Приостановка
      if((e == 1) || (e == 2) || (e == 3) || (e == 4) || (e == 5))
      {
                                        cm.y32 = 1;
      }
      else
      if(!((e == 6) || x20_6() || x20_6() || x20_7() || x20_8())&&x32_1())
      {
                                        cm.y32 = 4;
      }
      else
      if(!((e == 6) || x20_6() || x20_6() || x20_7() || x20_8()))
      {
                                        cm.y32 = 2;
      }
      else
      if(1)
      {
        z32_3_2(); 
      }
    break;

    case 4:// Коррекция
      if(((e == 6) || x20_6() || x20_6() || x20_7() || x20_8()))
      {
                                        cm.y32 = 3;
      }
      else
      if(!x32_1())
      {
                                        cm.y32 = 2;
      }
      else
      if((e == 1) || (e == 2) || (e == 3) || (e == 4) || (e == 5))
      {
                                        cm.y32 = 1;
      }
      else
      if(1)
      {
        z32_4_2(); 
      }
    break;

    default:
      #ifdef A32_ERRORS_LOGGING
        log_write(LOG_GRAPH_ERROR, "Error in the machine A32: unknown number of state!");
      #else
        ;
      #endif
  }

  if( y_old == cm.y32 ) goto A32_end;

  #ifdef A32_TRANS_LOGGING
    log_a_trans(2, y_old, cm.y32);
  #endif

  switch( cm.y32 )
  {
    case 0:// 
    break;

    case 1:// Стоп
      z32_1(); 
    break;

    case 2:// Вперёд
      z32_2_1(); 
    break;

    case 3:// Приостановка
      z32_3_1(); 
    break;

    case 4:// Коррекция
      z32_4_1(); 
    break;

  }

  A32_end: ;
  #ifdef A32_END_LOGGING
    log_a_end(2, cm.y32, e);
  #endif
}
//-------------------------------------------------------
// A33 - Автомат Назад (BiBi 1.0)
//-------------------------------------------------------
void A33( uint e )
{
  uint y_old = cm.y33;

  #ifdef A33_BEGIN_LOGGING
    log_a_begin(3, y_old, e);
  #endif

  switch( cm.y33 )
  {
    case 0:// 
      if(1)
      {
                                        cm.y33 = 1;
      }
    break;

    case 1:// Стоп
      if((e == 3))
      {
                                        cm.y33 = 2;
      }
    break;

    case 2:// Назад
      if(x33_2())
      {
                                        cm.y33 = 1;
      }
      else
      if((e == 1) || (e == 2) || (e == 3) || (e == 4) || (e == 5))
      {
                                        cm.y33 = 1;
      }
      else
      if((e == 6))
      {
                                        cm.y33 = 3;
      }
      else
      if(x33_1())
      {
                                        cm.y33 = 4;
      }
      else
      if(1)
      {
        z33_2_2(); 
      }
    break;

    case 3:// Приостановка
      if((e == 1) || (e == 2) || (e == 3) || (e == 4) || (e == 5))
      {
                                        cm.y33 = 1;
      }
      else
      if(!(e == 6)&&x33_1())
      {
                                        cm.y33 = 4;
      }
      else
      if(!(e == 6))
      {
                                        cm.y33 = 2;
      }
      else
      if(1)
      {
        z33_3_2(); 
      }
    break;

    case 4:// Коррекция
      if((e == 6))
      {
                                        cm.y33 = 3;
      }
      else
      if(!x33_1())
      {
                                        cm.y33 = 2;
      }
      else
      if((e == 1) || (e == 2) || (e == 3) || (e == 4) || (e == 5))
      {
                                        cm.y33 = 1;
      }
      else
      if(1)
      {
        z33_4_2(); 
      }
    break;

    default:
      #ifdef A33_ERRORS_LOGGING
        log_write(LOG_GRAPH_ERROR, "Error in the machine A33: unknown number of state!");
      #else
        ;
      #endif
  }

  if( y_old == cm.y33 ) goto A33_end;

  #ifdef A33_TRANS_LOGGING
    log_a_trans(3, y_old, cm.y33);
  #endif

  switch( cm.y33 )
  {
    case 0:// 
    break;

    case 1:// Стоп
      z33_1(); 
    break;

    case 2:// Назад
      z33_2_1(); 
    break;

    case 3:// Приостановка
      z33_3_1(); 
    break;

    case 4:// Коррекция
      z33_4_1(); 
    break;

  }

  A33_end: ;
  #ifdef A33_END_LOGGING
    log_a_end(3, cm.y33, e);
  #endif
}
//-------------------------------------------------------
// A34 - Автомат Вправо (BiBi 1.0)
//-------------------------------------------------------
void A34( uint e )
{
  uint y_old = cm.y34;

  #ifdef A34_BEGIN_LOGGING
    log_a_begin(4, y_old, e);
  #endif

  switch( cm.y34 )
  {
    case 0:// 
      if(1)
      {
                                        cm.y34 = 1;
      }
    break;

    case 1:// Стоп
      if((e == 4))
      {
                                        cm.y34 = 2;
      }
    break;

    case 2:// Вправо
      if(x34_2())
      {
                                        cm.y34 = 1;
      }
      else
      if((e == 1) || (e == 2) || (e == 3) || (e == 4) || (e == 5))
      {
                                        cm.y34 = 1;
      }
      else
      if((e == 6))
      {
                                        cm.y34 = 3;
      }
      else
      if(1)
      {
        z34_2_2(); 
      }
    break;

    case 3:// Приостановка
      if((e == 1) || (e == 2) || (e == 3) || (e == 4) || (e == 5))
      {
                                        cm.y34 = 1;
      }
      else
      if(!(e == 6))
      {
                                        cm.y34 = 2;
      }
      else
      if(1)
      {
        z34_3_2(); 
      }
    break;

    default:
      #ifdef A34_ERRORS_LOGGING
        log_write(LOG_GRAPH_ERROR, "Error in the machine A34: unknown number of state!");
      #else
        ;
      #endif
  }

  if( y_old == cm.y34 ) goto A34_end;

  #ifdef A34_TRANS_LOGGING
    log_a_trans(4, y_old, cm.y34);
  #endif

  switch( cm.y34 )
  {
    case 0:// 
    break;

    case 1:// Стоп
      z34_1(); 
    break;

    case 2:// Вправо
      z34_2_1(); 
    break;

    case 3:// Приостановка
      z34_3_1(); 
    break;

  }

  A34_end: ;
  #ifdef A34_END_LOGGING
    log_a_end(4, cm.y34, e);
  #endif
}
//-------------------------------------------------------
// A35 - Автомат Влево (BiBi 1.0)
//-------------------------------------------------------
void A35( uint e )
{
  uint y_old = cm.y35;

  #ifdef A35_BEGIN_LOGGING
    log_a_begin(5, y_old, e);
  #endif

  switch( cm.y35 )
  {
    case 0:// 
      if(1)
      {
                                        cm.y35 = 1;
      }
    break;

    case 1:// Стоп
      if((e == 5))
      {
                                        cm.y35 = 2;
      }
    break;

    case 2:// Влево
      if(x35_2())
      {
                                        cm.y35 = 1;
      }
      else
      if((e == 1) || (e == 2) || (e == 3) || (e == 4) || (e == 5))
      {
                                        cm.y35 = 1;
      }
      else
      if((e == 6))
      {
                                        cm.y35 = 3;
      }
      else
      if(1)
      {
        z35_2_2(); 
      }
    break;

    case 3:// Приостановка
      if((e == 1) || (e == 2) || (e == 3) || (e == 4) || (e == 5))
      {
                                        cm.y35 = 1;
      }
      else
      if(!(e == 6))
      {
                                        cm.y35 = 2;
      }
      else
      if(1)
      {
        z35_3_2(); 
      }
    break;

    default:
      #ifdef A35_ERRORS_LOGGING
        log_write(LOG_GRAPH_ERROR, "Error in the machine A35: unknown number of state!");
      #else
        ;
      #endif
  }

  if( y_old == cm.y35 ) goto A35_end;

  #ifdef A35_TRANS_LOGGING
    log_a_trans(5, y_old, cm.y35);
  #endif

  switch( cm.y35 )
  {
    case 0:// 
    break;

    case 1:// Стоп
      z35_1(); 
    break;

    case 2:// Влево
      z35_2_1(); 
    break;

    case 3:// Приостановка
      z35_3_1(); 
    break;

  }

  A35_end: ;
  #ifdef A35_END_LOGGING
    log_a_end(5, cm.y35, e);
  #endif
}
