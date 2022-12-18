#include <iostream>
using namespace std;
int main(){
    string uname,pwd,a,id,pass;
    char menu;
    while(true){
    cout<<"\n\n====Silahkan pilih menu====\n\n"<<endl;
    cout<<"1. Buat akun"<<endl;
    cout<<"2. Login"<<endl;
    cout<<"Pilihan : ";
    cin>>menu;
    if (menu=='2'){
        cout<<"\n\nMasukkan username : ";
        cin>>uname;
        cout<<"Masukkan password : ";
        cin>>pwd;
        if (uname==id){
            if (pwd==pass)
                cout<<"Username dan password sesuai, Login berhasil"<<endl;
            else
                cout<<"Username sesuai, password tidak sesuai!"<<endl;
        }else{
            if (pwd==pass)
                cout<<"Username tidak sesuai, password sesuai!"<<endl;
            else
                cout<<"Username dan password tidak sesuai!"<<endl;
        }
        break;}else if(menu=='1'){
        cout<<"\n\nMasukkan username yang Anda mau : ";
        cin>>id;
        cout<<"Masukkan password yang Anda mau : ";
        cin>>pass;
        cout<<"\n===Berhasil dibuat, silahkan pilih menu login===\n"<<endl;}else
        cout<<"\n\n==========Pilihan menu salah, silahkan ulang==========\n\n"<<endl;
        }

    return 0;
}
