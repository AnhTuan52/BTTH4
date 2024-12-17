#include "Kysu.h"
#include<iostream>
using namespace std;
Kysu::Kysu() : NhanVien(), gio_lam_them(0) {}
Kysu::Kysu(string msnv, string ten, int luong, double gio_lam_them) :NhanVien(msnv, ten, luong), gio_lam_them(gio_lam_them) {}
long long Kysu::tinh_thuong() const {
	return gio_lam_them * get_tinh_thuong();
}
void Kysu::Xuat() const {
	NhanVien::Xuat();
	cout << " Tien thuong: " << tinh_thuong() << endl;
}