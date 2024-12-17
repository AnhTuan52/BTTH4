#include <iostream>
#include <vector>
#include "Deluxe.h"
#include "Premium.h"
#include "Business.h"
using namespace std;

int main() {
    vector<Phong*> danh_sach_phong;

    Deluxe a(3, 40000, 27000);
    Deluxe b(5, 60000, 20000);
    Premium c(4, 60000);
    Premium d(2, 20000);
    Business e(6);

    danh_sach_phong.push_back(&a);
    danh_sach_phong.push_back(&b);
    danh_sach_phong.push_back(&c);
    danh_sach_phong.push_back(&d);
    danh_sach_phong.push_back(&e);

    long long doanh_thu_max = 0;
    string loai_phong_max;

    for (Phong* p : danh_sach_phong) {
        p->xuat();
        long long doanh_thu = p->tinh_doanh_thu();
        if (doanh_thu > doanh_thu_max) {
            doanh_thu_max = doanh_thu;
            loai_phong_max = p-> get_loai_phong();
        }
    }

    cout << "\nloai phong co doanh thu cao nhat: " << loai_phong_max
        << " voi doanh thu: " << doanh_thu_max << endl;

    return 0;
}
