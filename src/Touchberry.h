#pragma once
#include "TLC.h"
#include "QT1070.h"
#include <iostream>

namespace touchberry{
  class Touchberry{

    public:
      Touchberry();
      void set_led_intensity(int dimming_value);
      void set_led_color(int R,int G,int B);
      std::string read_buttons();

    private:
      tlc::TLC TLC;
      qt1070::QT1070 QT1070;
  };
}
