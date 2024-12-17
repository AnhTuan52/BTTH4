#pragma once
#include<iostream>
#include"NhanVien.h"
using namespace std;
class Quanly:public NhanVien
{
private:
	double ty_le_luong;
public:
	Quanly();
	Quanly(string msnv, string ten, int luong, double ty_le_luong);
	long long tinh_thuong() const;
	virtual void Xuat() const;
};

