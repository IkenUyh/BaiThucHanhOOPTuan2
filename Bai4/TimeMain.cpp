#include"Time.cpp"
int main(){
    Gio a;
    do{
        a.Nhap();
        while(true){
            cout<<"\n===== CHUONG TRINH KIEM TRA GIO =====\n";
            cout<<"1. Thoat chuong trinh "<<endl;
            cout<<"2. In ra gio phut giay vua nhap "<<endl;
            cout<<"3. Cong them mot giay va xem ket qua "<<endl;
            cout<<"4. Toi muon doi thoi gian khac "<<endl;
            cout<<"Lua chon cua ban la "<<endl;
            int chon; cin>>chon;
            if(chon==1){
                cout<<"Dang thoat chuong trinh...."<<endl;
                return 0;
            }
            else if(chon==2) a.Xuat();
            else if(chon==3){
                Gio next=a.TinhCongThemMotGiay(); 
                next.Xuat();
            }
            else if(chon==4) break;
            else cout<<"Ban nhap sai roi! Moi ban nhap lai "<<endl;
        }
    } while(true);
}