#include"SoPhuc.h"
void SoPhuc::Nhap(){
    cout<<"Nhap phan thuc: "; cin>>iThuc;
    cout<<"Nhap phan ao: "; cin>>iAo;
}
void SoPhuc::Xuat(){
    if(iAo<0) cout<<iThuc<<" - "<<-iAo<<"i"<<endl;
    else cout<<iThuc<<" + "<<iAo<<"i"<<endl;
}
SoPhuc SoPhuc::Tong(){
    SoPhuc sp2, tong;
    cout<<"Nhap vao so phuc thu hai: "<<endl;
    sp2.Nhap();
    tong.iThuc=iThuc+sp2.iThuc; 
    tong.iAo=iAo+sp2.iAo;
    return tong;
}
SoPhuc SoPhuc::Hieu(){
    SoPhuc sp2, hieu;
    cout<<"Nhap vao so phuc thu hai: "<<endl;
    sp2.Nhap();
    hieu.iThuc=iThuc-sp2.iThuc;
    hieu.iAo=iAo-sp2.iAo;
    return hieu;
}
SoPhuc SoPhuc::Tich(){
    SoPhuc sp2, tich;
    cout<<"Nhap vao so phuc thu hai: "<<endl;
    sp2.Nhap();
    tich.iThuc=iThuc*sp2.iThuc-iAo*sp2.iAo;
    tich.iAo=iThuc*sp2.iAo+iAo*sp2.iThuc;
    return tich;
}
SoPhuc SoPhuc::Thuong(){
    SoPhuc sp2, thuong;
    cout<<"Nhap vao so phuc thu hai: "<<endl;
    sp2.Nhap();
    double mau=sp2.iThuc*sp2.iThuc+sp2.iAo*sp2.iAo;
    if(mau==0){
        cout<<"Loi! Khong the chia het cho so phuc (0, 0)!"<<endl;
        thuong.iThuc=0; thuong.iAo=0;
        return thuong;
    }
    thuong.iThuc=(iThuc*sp2.iThuc+iAo*sp2.iAo)/(double)mau;
    thuong.iAo=(iAo*sp2.iThuc-iThuc*sp2.iAo)/(double)mau;
    return thuong;
}
