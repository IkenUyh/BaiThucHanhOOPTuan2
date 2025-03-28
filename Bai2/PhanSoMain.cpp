#include"PhanSo.cpp"
int main(){
    PhanSo a;
    do{
        cout<<"Nhap vao mot phan so: "<<endl; a.Nhap();
        while(true){
            cout<<"\n===== CHUONG TRINH TINH TOAN PHAN SO =====\n";
            cout<<"1. Thoat chuong trinh "<<endl;
            cout<<"2. Tinh tong hai phan so "<<endl;
            cout<<"3. Tinh hieu hai phan so "<<endl;
            cout<<"4. Tinh tich hai phan so "<<endl;
            cout<<"5. Tinh thuong hai phan so "<<endl;
            cout<<"6. Tim max trong hai phan so "<<endl;
            cout<<"7. Xuat phan so vua nhap "<<endl;
            cout<<"8. Toi muon doi phan so khac "<<endl;
            cout<<"Lua chon cua ban la "<<endl;
            int chon; cin>>chon;
            if(chon==1){
                cout<<"Dang thoat chuong trinh...."<<endl;
                return 0;
            }
            else if(chon==2){
                PhanSo tong=a.Tong(); cout<<"Tong hai phan so la: "; tong.Xuat();
            }
            else if(chon==3){
                PhanSo hieu=a.Hieu(); cout<<"Hieu hai phan so la: "; hieu.Xuat();
            }
            else if(chon==4){
                PhanSo tich=a.Tich(); cout<<"Tich hai phan so la: "; tich.Xuat();
            }
            else if(chon==5){
                PhanSo thuong=a.Thuong(); cout<<"Thuong hai phan so la: "; thuong.Xuat();
            }
            else if(chon==6){
                PhanSo ss=a.SoSanh(); ss.Xuat();
            }
            else if(chon==7){
                cout<<"Phan so la so "; a.Xuat();
            }
            else if(chon==8) break;
            else cout<<"Ban nhap sai roi! Moi ban nhap lai "<<endl;
        }
    } while(true);
}