#include "Cuu.h"

Cuu::Cuu(int so_luong) : Giasuc(so_luong) {}

void Cuu::tieng_keu() {
    for (int i = 0; i < so_luong; ++i) {
        cout << "Cuu keu: Baaa!" << endl;
    }
}

void Cuu::sinh_con() {
   
    for (int i = 0; i < so_luong; ++i) {
        int con = rand() % 3 + 1;
        cout << "Cuu sinh " << con << " con." << endl;
        
    }
}

double Cuu::cho_sua() {
    double tong_sua = 0;
    for (int i = 0; i < so_luong ; ++i) { // chỉ tính cho gia súc trưởng thành
        tong_sua += rand() % 6; // giả sử sữa của mỗi con cừu từ 0-5 lít
    }
    return tong_sua;
}