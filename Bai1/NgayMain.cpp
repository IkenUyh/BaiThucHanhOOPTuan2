#include"Ngay.cpp"
int main(){
    Ngay day;
    do{
        day.Nhap();
        while(true){
            cout<<"\n===== CHUONG TRINH KIEM TRA NGAY =====\n";
            cout<<"1. Thoat chuong trinh "<<endl;
            cout<<"2. In ra ngay thang nam vua nhap "<<endl;
            cout<<"3. Xem ngay thang nam tiep theo "<<endl;
            cout<<"4. Toi muon doi ngay khac "<<endl;
            cout<<"Lua chon cua ban la: "<<endl;
            int chon; cin>>chon;
            if(chon==1){
                cout<<"Dang thoat chuong trinh...."<<endl;
                return 0;
            }
            else if(chon==2) day.Xuat();
            else if(chon==3){
                Ngay next=day.NgayThangNamTiepTheo();
                next.Xuat();
            }
            else if(chon==4) break;
            else cout<<"Ban nhap sai roi! Moi ban nhap lai "<<endl;
        }
    } while(true);
}