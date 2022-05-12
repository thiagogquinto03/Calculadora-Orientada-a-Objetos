#pragma once

#include "ThiagoCalculator.h"

class ThiagoDisplay:public Display{
  int DecimalSeparator = 0;
  int CountDigit = 0;

public:
    
    void addDigit(Digit );
    void setDecimalSeparator();
    void setSignal(Signal );
    void setError();
    void clear();

};

