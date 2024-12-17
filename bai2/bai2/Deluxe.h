#pragma once
#include "Phong.h"
class Deluxe: public Phong
{
public:
    Deluxe(long long so_dem, long long phi_dich_vu, long long phi_phuc_vu);
    long long tinh_doanh_thu() const override;
};

