#pragma once
#include"Phong.h"

class Business : public Phong
{
public:
    Business(long long so_dem);
    long long tinh_doanh_thu() const override;
};

