#include "Premium.h"
Premium::Premium(long long so_dem, long long phi_dich_vu)
    : Phong("Premium", so_dem, phi_dich_vu) {}

long long Premium::tinh_doanh_thu() const {
    return long long (so_dem * 500000 + phi_dich_vu);
}