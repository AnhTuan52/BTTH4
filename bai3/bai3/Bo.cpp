#include "Bo.h"

Bo::Bo(int so_luong) : Giasuc(so_luong) {}

void Bo::tieng_keu() {
    for (int i = 0; i < so_luong; ++i) {
        cout << "Bo keu: Moo!" << endl;
    }
}

void Bo::sinh_con() {
    
    for (int i = 0; i < so_luong; ++i) {
        int con = rand() % 5 + 1;
        cout << "Bo sinh " << con << " con." << endl;
     
    }
}

double Bo::cho_sua() {
    double tong_sua = 0;
    for (int i = 0; i < so_luong ; ++i) { // chỉ tính cho gia súc trưởng thành
        tong_sua += rand() % 21; // giả sử sữa của mỗi con bò từ 0-20 lít, và 
    }
    return tong_sua;
}
