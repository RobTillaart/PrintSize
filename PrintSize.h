#pragma once
//
//    FILE: PrintSize.h
//  AUTHOR: Rob Tillaart
// VERSION: 0.2.0
// PURPOSE: Class that determines printSize
//    DATE: 2017-12-09
//     URL: https://github.com/RobTillaart/PrintSize
//
// HISTORY:
// 0.1.0    2017-12-09 initial version
// 0.2.0    2020-04-30 add total counter to sum multiple print statements
//

#include "Print.h"

#define PRINTSIZE_VERSION "0.2.0"

class PrintSize: public Print
{
public:
  PrintSize()
  {
    reset();
  };

  size_t write(uint8_t c)
  {
    _total++;
    return 1;
  }

  void reset() { _total = 0; }

  uint32_t total() { return _total; };

private:
  uint32_t _total = 0;
};

// -- END OF FILE --
