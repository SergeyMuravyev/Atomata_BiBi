//--- this file is machine generated ---

#ifndef LogH
#define LogH

#include "types.h"

#define SWITCH_LOGGING

#ifdef SWITCH_LOGGING
  #define Z_LOGGING
  #define X_LOGGING
  #define A_BEGINS_LOGGING
  #define A_TRANS_LOGGING
  #define A_ENDS_LOGGING
  #define A_ERRORS_LOGGING

  enum{
    LOG_Z = '*',
    LOG_X = '>',
    LOG_GRAPH_BEGIN = '{',
    LOG_GRAPH_TRANS = 'T',
    LOG_GRAPH_END = '}',
    LOG_GRAPH_ERROR = 'E'
  };

  void log_a_begin(ubyte a, uint y, uint e);
  void log_a_trans(ubyte a, uint yo, uint yn);
  void log_a_end(ubyte a, uint y, uint e);
  void log_x(ubyte x, uint res);
  void log_z(ubyte z);
  void log_write(char, const char* str);
#endif

#ifdef A_BEGINS_LOGGING
  #define A20_BEGIN_LOGGING
  #define A21_BEGIN_LOGGING
  #define A32_BEGIN_LOGGING
  #define A33_BEGIN_LOGGING
  #define A34_BEGIN_LOGGING
  #define A35_BEGIN_LOGGING
#endif

#ifdef A_TRANS_LOGGING
  #define A20_TRANS_LOGGING
  #define A21_TRANS_LOGGING
  #define A32_TRANS_LOGGING
  #define A33_TRANS_LOGGING
  #define A34_TRANS_LOGGING
  #define A35_TRANS_LOGGING
#endif

#ifdef A_ENDS_LOGGING
  #define A20_END_LOGGING
  #define A21_END_LOGGING
  #define A32_END_LOGGING
  #define A33_END_LOGGING
  #define A34_END_LOGGING
  #define A35_END_LOGGING
#endif

#ifdef A_ERRORS_LOGGING
  #define A20_ERRORS_LOGGING
  #define A21_ERRORS_LOGGING
  #define A32_ERRORS_LOGGING
  #define A33_ERRORS_LOGGING
  #define A34_ERRORS_LOGGING
  #define A35_ERRORS_LOGGING
#endif

#endif
