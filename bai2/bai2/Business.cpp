#include "Business.h"
Business::Business(long long so_dem)
    : Phong("business", so_dem) {}

long long Business::tinh_doanh_thu() const {
    return long long (so_dem * 300000);
}