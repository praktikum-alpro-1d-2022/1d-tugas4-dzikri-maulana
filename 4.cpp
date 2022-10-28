#include <iostream>
using namespace std;
int main(){
    char slc;
    cout<<"     Menu Restaurant Mc'Yahud"<<endl;
    cout<<"============================================="<<endl;
    cout<<"1. Nasi Goreng Informatika \tRp.5.000,-"<<endl;
    cout<<"2. Nasi Soto Ayam Internet \tRp.7.000,-"<<endl;
    cout<<"3. Gado-gado Disket \t\tRp.4.500,-"<<endl;
    cout<<"4. Bubur Ayam LAN \t\tRp.4.000,-"<<endl;
    cout<<"============================================="<<endl;
    cout<<"Masukkkan Pilihan Anda... : ";
    cin>>slc;
    switch(slc){
        case'1':
            cout<<"Pilihan No.1 Nasi Goreng Informatika Rp.5.000,-"<<endl;
            break;
        case'2':
            cout<<"Pilihan No.2 Nasi Soto Ayam Internet Rp.7.000,-"<<endl;
            break;
        case'3':
            cout<<"Pilihan No.3 Gado-gado Disket Rp.4.500,-"<<endl;
            break;
        case'4':
            cout<<"Pilihan No.4 Bubur Ayam LAN Rp.4.000,-"<<endl;
            break;
        default:
            cout<<"Anda salah memasukkan input"<<endl;

    }
    return 0;
}
