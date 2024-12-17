#pragma once
#include<iostream>
#include"NhanVien.h"
using namespace std;
class Kysu:public NhanVien
{
private:
	double gio_lam_them;
public:
	Kysu();
	Kysu(string msnv, string ten, int luong, double gio_lam_them);
	long long tinh_thuong() const;
	virtual void Xuat() const;
};

