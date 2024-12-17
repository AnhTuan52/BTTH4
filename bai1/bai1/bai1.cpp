#include<bits/bits-stdc++.h>
#include"NhanVien.h"
#include"Quanly.h"
#include"Kysu.h"

using namespace std;
int main() {
	int n;
	cout << "Nhap so luong nhan vien: ";
	cin >> n;
	vector<NhanVien*> danh_sach;
	for (int i = 0; i < n; i++)
	{
		int loainhanvien;
		string msnv, ten;
		int luong;
		cout << "Chon loai nhan vien (1: Quan Ly, 2: Ky Su): ";
		cin >> loainhanvien;
		
		cout << "Nhap ma nhan vien: ";
		cin >> msnv;
		cin.ignore();
		cout << "Nhap ten nhan vien : ";
		getline(cin, ten);
		cout << "Nhap luong nhan vien: ";
		cin >> luong;
		if (loainhanvien == 1) {
			double x;
			cout << "Nhap so ty le luong: ";
			cin >> x;
			Quanly* quanly = new Quanly(msnv, ten, luong, x);
			danh_sach.push_back(quanly);
		}
		else if(loainhanvien==2){
			double x;
			cout << "Nhap gio lam them: ";
			cin >> x;
			Kysu* kysu = new Kysu(msnv, ten, luong, x);
			danh_sach.push_back(kysu);
		}
		cout << "\nDanh sach nhan vien:\n";
		
	}
	for (NhanVien* nv : danh_sach) {
		nv->Xuat();  // Gọi phương thức Xuat() của từng đối tượng

	}
	return 0;
}