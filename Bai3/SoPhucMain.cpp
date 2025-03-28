#include"SoPhuc.cpp"
int main(){
    SoPhuc a;
    do{
        cout<<"Nhap vao mot so phuc: "<<endl; a.Nhap();
        while(true){
            cout<<"\n===== CHUONG TRINH TINH TOAN SO PHUC =====\n";
            cout<<"1. Thoat chuong trinh "<<endl;
            cout<<"2. Tinh tong hai so phuc "<<endl;
            cout<<"3. Tinh hieu 2 so phuc "<<endl;
            cout<<"4. Tinh tich 2 so phuc "<<endl;
            cout<<"5. Tinh thuong 2 so phuc "<<endl;
            cout<<"6. Xuat so phuc vua nhap "<<endl;
            cout<<"7. Toi muon doi so phuc khac "<<endl;
            cout<<"Lua chon cua ban la "<<endl;
            int chon; cin>>chon;
            if(chon==1){
                cout<<"Dang thoat chuong trinh...."<<endl;
                return 0;
            }
            else if(chon==2){
                SoPhuc tong=a.Tong(); cout<<"Tong hai so phuc la: "; tong.Xuat();
            }
            else if(chon==3){
                SoPhuc hieu=a.Hieu(); cout<<"Hieu hai so phuc la: "; hieu.Xuat();
            }
            else if(chon==4){
                SoPhuc tich=a.Tich(); cout<<"Tich hai so phuc la: "; tich.Xuat();
            }
            else if(chon==5){
                SoPhuc thuong=a.Thuong(); cout<<"Thuong hai so phuc la: "; thuong.Xuat();
            }
            else if(chon==6){
                cout<<"So phuc la: "; a.Xuat();
            }
            else if(chon==7) break;
            else cout<<"Ban nhap sai roi! Moi ban nhap lai "<<endl;
        }
    } while(true);
}