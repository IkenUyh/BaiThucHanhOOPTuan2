#include"PhanSo.h"
inline ll gcd(ll a, ll b){ll r; while(b){r=a%b;a=b;b=r;} return a;}
inline ll lcm(ll a, ll b){return a/gcd(a, b)*b;}
void PhanSo::Nhap(){
    cout<<"Nhap tu so: "; cin>>iTu;
    cout<<"Nhap mau so: "; cin>>iMau;
    while(iMau==0){
        cout<<"Mau so khong hop le! Moi ban nhap lai"; cin>>iMau;
    }
}
void PhanSo::RutGon(){
    int ucln=gcd(abs(iTu), abs(iMau));
    iTu=iTu/ucln; iMau=iMau/ucln;
    if(iMau<0){
        iTu=-iTu;
        iMau=-iMau;
    }
}
void PhanSo::Xuat(){
    RutGon();
    if(!iTu) cout<<"0"<<endl;
    else if(iMau==1) cout<<iTu<<endl;
    else cout<<iTu<<"/"<<iMau<<endl;
}
PhanSo PhanSo::Tong(){
    PhanSo ps2, tong;
    cout<<"Nhap vao phan so thu hai: "<<endl;
    ps2.Nhap();
    RutGon(); ps2.RutGon();
    int bcnn=lcm(iMau, ps2.iMau);
    iTu*=(bcnn/iMau); ps2.iTu*=(bcnn/ps2.iMau);
    tong.iTu=iTu+ps2.iTu; tong.iMau=bcnn;
    return tong;
}
PhanSo PhanSo::Hieu(){
    PhanSo ps2, hieu;
    cout<<"Nhap vao phan so thu hai: "<<endl;
    ps2.Nhap();
    RutGon(); ps2.RutGon();
    int bcnn=lcm(iMau, ps2.iMau);
    iTu*=(bcnn/iMau); ps2.iTu*=(bcnn/ps2.iMau);
    hieu.iTu=iTu-ps2.iTu; hieu.iMau=bcnn;
    return hieu;
}
PhanSo PhanSo::Tich(){
    PhanSo ps2, tich;
    cout<<"Nhap vao phan so thu hai: "<<endl;
    ps2.Nhap();
    RutGon(); ps2.RutGon();
    tich.iTu=iTu*ps2.iTu; tich.iMau=iMau*ps2.iMau;
    return tich;
}
PhanSo PhanSo::Thuong(){
    PhanSo ps2, thuong;
    cout<<"Nhap vao phan so thu hai: "<<endl;
    ps2.Nhap();
    RutGon(); ps2.RutGon();
    if(!ps2.iTu){
        cout<<"Tu so phan so thu hai khong duoc la 0"<<endl;
        thuong.iTu=0; thuong.iMau=1;
        return thuong;
    }
    thuong.iTu=iTu*ps2.iMau; thuong.iMau=iMau*ps2.iTu;
    return thuong;
}
PhanSo PhanSo::SoSanh(){
    PhanSo ps2;
    cout<<"Nhap vao phan so thu hai: "<<endl;
    ps2.Nhap();
    RutGon(), ps2.RutGon();
    int bcnn=lcm(iMau, ps2.iMau);
    iTu*=(bcnn/iMau); ps2.iTu*=(bcnn/ps2.iMau);
    if(iTu<ps2.iTu){
        cout<<"Phan so lon nhat trong hai phan so la: "<<endl;
        return ps2;
    }
    else if(iTu>ps2.iTu){
        cout<<"Phan so lon nhat trong hai phan so la: "<<endl;
        return *this;
    }
    else{
        cout<<"Hai phan so bang nhau va bang: "<<endl;
        return ps2;
    }
}
