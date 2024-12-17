#include "Deluxe.h"
Deluxe::Deluxe(long long so_dem, long long phi_dich_vu, long long phi_phuc_vu)
    : Phong("deluxe", so_dem, phi_dich_vu, phi_phuc_vu) {}

long long Deluxe::tinh_doanh_thu() const {
    return long long(so_dem * 750000 + phi_dich_vu + phi_phuc_vu);
}