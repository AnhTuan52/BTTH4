#pragma once
#include <string>
using namespace std;

class Phong
{
protected:
    string loai_phong;
    long long so_dem;
    long long phi_dich_vu;
    long long phi_phuc_vu;

public:
    Phong();
    Phong(string loai_phong, long long so_dem, long long phi_dich_vu = 0, long long phi_phuc_vu = 0);
    virtual long long tinh_doanh_thu() const = 0;
    virtual void xuat() const;
    string get_loai_phong() const;
};

