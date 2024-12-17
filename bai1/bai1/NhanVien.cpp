#include "NhanVien.h"
#include<iostream>
using namespace std;

NhanVien::NhanVien() :  msnv(""),  ten(""),  luong(0){}
NhanVien::NhanVien(string msnv, string ten, int luong) : msnv(msnv),ten(ten),luong(luong){}
double NhanVien::get_tinh_thuong() const{
	return luong;
}
void NhanVien::Xuat() const {
	cout << "Ma so nhan vien: " << msnv << " ,Ten: " << ten << " luong: " << luong;
}