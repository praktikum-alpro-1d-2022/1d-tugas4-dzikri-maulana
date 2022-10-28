#include <iostream>
using namespace std;
int main(){
    char kode,sz;
    int amount,harga;
    string nama;
    cout<<"Masukkan Kode Susu (1-3) : ";
    cin>>kode;
    cout<<"\nMasukkan Jumlah Pembelian : ";
    cin>>amount;
    cout<<"\nMasukkan ukuran (B/S/K) : ";
    cin>>sz;
    //ketentuan harga dan nama susu hanya akan berlaku jika semua input benar
    if((kode=='1' || kode=='2' || kode =='3')&&(sz=='B' || sz=='S' || sz=='K') && (amount>0)){
        switch(kode){
        case('1'):
            nama="Dancow";
            switch(sz){
                case'B':
                    harga=10000;
                    break;
                case'S':
                    harga=4250;
                    break;
                default:
                    harga=2100;
                    break;
            }
            break;

        case('2'):
            nama="Indomilk";
            switch(sz){
                case'B':
                    harga=8500;
                    break;
                case'S':
                    harga=4000;
                    break;
                default :
                    harga=2025;
                    break;
            }
            break;
         default:
            nama="Sustacal";
            switch(sz){
                case'B':
                    harga=17000;
                    break;
                case'S':
                    harga=14500;
                    break;
                default:
                    harga=8300;
                    break;
            }
            break;
        }

        cout<<"\nSusu "<<nama<<endl;
        cout<<"Harga Susu Rp.\t"<<harga<<".00"<<endl;
        cout<<"Jumlah Pembelian Rp.\t"<<harga*amount<<".00"<<endl;
    }else
    cout<<"Input kode, jumlah, atau ukuran salah, silahkan perhatikan lagi\nperhatikan juga kapitalisasi huruf"<<endl;

    return 0;
    }
