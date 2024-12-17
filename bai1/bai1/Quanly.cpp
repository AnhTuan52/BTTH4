#include "Quanly.h"
#include<iostream>
using namespace std;
Quanly::Quanly() : NhanVien(), ty_le_luong(0){}
Quanly::Quanly(string msnv,string ten, int luong, double ty_le_luong):NhanVien(msnv,ten,luong),ty_le_luong(ty_le_luong){}
long long Quanly:: tinh_thuong() const {
	return ty_le_luong * get_tinh_thuong();
}
void Quanly::Xuat() const {
	NhanVien::Xuat();
	cout << " Tien thuong: " << tinh_thuong()<<endl;
}