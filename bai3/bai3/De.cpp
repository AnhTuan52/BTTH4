#include "De.h"

De::De(int so_luong) : Giasuc(so_luong) {}

void De::tieng_keu() {
    for (int i = 0; i < so_luong; ++i) {
        cout << "De keu: Mee!" << endl;
    }
}

void De::sinh_con() {
    for (int i = 0; i < so_luong; ++i) {

        int con = rand() % 4 + 1;
        cout << "De sinh " << con << " con." << endl;
    }
}

double De::cho_sua() {
    double tong_sua = 0;
    for (int i = 0; i < so_luong ; ++i) { // chỉ tính cho gia súc trưởng thành
        tong_sua += rand() % 11; // giả sử sữa của mỗi con dê từ 0-10 lít
    }
    return tong_sua;
}
