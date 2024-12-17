#pragma once
#include <iostream>
using namespace std;
  class Giasuc {
     protected:
     int so_luong;
     public:
    Giasuc(int so_luong);
    int get_so_luong() const;
    virtual void tieng_keu() = 0;
    virtual void sinh_con() = 0;
    virtual double cho_sua() = 0;
};