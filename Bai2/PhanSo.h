#include<iostream>
using namespace std;
#define ll long long
class PhanSo{
    private:
        int iTu, iMau;
    public:
        void Nhap();
        void Xuat();
        void RutGon();
        PhanSo Tong();
        PhanSo Hieu();
        PhanSo Tich();
        PhanSo Thuong();
        PhanSo SoSanh();
};