#include"Ngay.h"
bool namNhuan(int n){
    return (n%4==0&&n%100!=0)||(n%400==0);
}
int SoNgayTrongThang(int iThang, int iNam){
    int nThang[]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(iThang==2&&namNhuan(iNam)) return 29;
    else return nThang[iThang];
}
void Ngay::Nhap(){
    cout<<"Nhap ngay: "; cin>>iNgay;
    cout<<"Nhap thang: "; cin>>iThang;
    cout<<"Nhap nam: "; cin>>iNam;
    while(iNam<1||iThang<1||iThang>12||iNgay<1||iNgay>SoNgayTrongThang(iThang, iNam)){
        cout<<"Ban nhap sai roi! Moi ban nhap lai"<<endl;
        cout<<"Nhap ngay: "; cin>>iNgay;
        cout<<"Nhap thang: "; cin>>iThang;
        cout<<"Nhap nam: "; cin>>iNam;
    }
}
void Ngay::Xuat(){
    cout<<"Ngay thang nam: ";
    cout<<iNgay<<"/"<<iThang<<"/"<<iNam<<endl;
}
Ngay Ngay::NgayThangNamTiepTheo(){
    Ngay next=*this;
    if(next.iNgay<SoNgayTrongThang(next.iThang, next.iNam)) next.iNgay++;
    else{
        next.iNgay=1;
        if(next.iThang==12){
            next.iThang=1; next.iNam++;
        }
        else next.iThang++;
    }
    return next;
}