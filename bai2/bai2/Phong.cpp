#include "Phong.h"
#include <iostream>
using namespace std;

Phong::Phong() : loai_phong(""), so_dem(0), phi_dich_vu(0), phi_phuc_vu(0) {}
Phong::Phong(string loai_phong, long long so_dem, long long phi_dich_vu, long long phi_phuc_vu)
    : loai_phong(loai_phong), so_dem(so_dem), phi_dich_vu(phi_dich_vu), phi_phuc_vu(phi_phuc_vu) {}

void Phong::xuat() const {
    cout << "loai phong: " << loai_phong << ", so dem: " << so_dem
        << ", phi dich vu: " << long long (phi_dich_vu) << ", phi phuc vu: " << long long(phi_phuc_vu)
        << ", doanh thu: " << tinh_doanh_thu() << endl;
}
string Phong::get_loai_phong() const {
    return loai_phong;  
}
