#include"Time.h"
void Gio::Nhap(){
    cout<<"Nhap gio: "; cin>>iGio;
    while(iGio<0||iGio>=24){
        cout<<"Gio ban nhap khong hop le! Moi ban nhap lai"<<endl;
        cout<<"Nhap gio: "; cin>>iGio;
    }
    cout<<"Nhap phut: "; cin>>iPhut;
    while(iPhut<0||iPhut>=60){
        cout<<"Phut ban nhap khong hop le! Moi ban nhap lai"<<endl;
        cout<<"Nhap phut: "; cin>>iPhut;
    }
    cout<<"Nhap giay: "; cin>>iGiay;
    while(iGiay<0||iGiay>=60){
        cout<<"Giay ban nhap khong hop le! Moi ban nhap lai"<<endl;
        cout<<"Nhap giay: "; cin>>iGiay;
    }
}
void Gio::Xuat(){
    cout<<"Thoi gian ban vua nhap: ";
    if(iGio<10) cout<<"0"<<iGio;
    else cout<<iGio;
    cout<<":";
    if(iPhut<10) cout<<"0"<<iPhut;
    else cout<<iPhut;
    cout<<":";
    if(iGiay<10) cout<<"0"<<iGiay;
    else cout<<iGiay;
    cout<<endl;
}
Gio Gio::TinhCongThemMotGiay(){
    Gio next=*this;
    if(next.iGiay<59) next.iGiay++;
    else{
        next.iGiay=0;
        if(next.iPhut==59){
            next.iPhut=0;
            if(next.iGio==23) next.iGio=0;
            else next.iGio++;
        }
        else next.iPhut++;
    }
    return next;
}