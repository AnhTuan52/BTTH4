#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "Bo.h"
#include "Cuu.h"
#include "De.h"

using namespace std;

int main() {
    srand(time(0)); // khởi tạo ngẫu nhiên

    int so_bo, so_cuu, so_de;
    cout << "Nhap so luong bo: ";
    cin >> so_bo;
    cout << "Nhap so luong cuu: ";
    cin >> so_cuu;
    cout << "Nhap so luong de: ";
    cin >> so_de;

    // Khởi tạo các gia súc
    Bo bo(so_bo);
    Cuu cuu(so_cuu);
    De de(so_de);
    cout << "Cau a:" << endl;
    // Hiển thị tiếng kêu
    bo.tieng_keu();
    cuu.tieng_keu();
    de.tieng_keu();
    cout << "Cau b: " << endl;
    // Cho các gia súc sinh con
    bo.sinh_con();
    cuu.sinh_con();
    de.sinh_con();
    // Cho các gia súc cho sữa
    double tong_sua_bo = bo.cho_sua();
    double tong_sua_cuu = cuu.cho_sua();
    double tong_sua_de = de.cho_sua();  


    // Thống kê tổng số sữa
    cout << "Tong sua bo cua " <<so_bo<<" con :"<< tong_sua_bo << " lit" << endl;
    cout << "Tong sua cuu " <<so_cuu<<" con :" << tong_sua_cuu << " lit" << endl;
    cout << "Tong sua de " <<so_de<<" con :"<< tong_sua_de << " lit" << endl;
    cout << "Tong sua la:" << tong_sua_bo + tong_sua_cuu + tong_sua_de;
    return 0;
}
