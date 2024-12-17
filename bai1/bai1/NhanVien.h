#pragma once
#include<iostream>
using namespace std;
class NhanVien
{
private:
	string msnv;
	string ten;
	int luong;
public:
	NhanVien();
	NhanVien(string msnv, string ten, int luong);
	double get_tinh_thuong() const;
	virtual void Xuat() const;

};

