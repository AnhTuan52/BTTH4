#pragma once
#include"Phong.h"
class Premium : public Phong
{
public:
    Premium(long long so_dem, long long phi_dich_vu);
    long long tinh_doanh_thu() const override;
};

