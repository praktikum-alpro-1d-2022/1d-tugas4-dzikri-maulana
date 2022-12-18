#include <iostream>

using namespace std;

int main(){
    /*Syarat tahun kabisat :
    1. Tahun harus habis dibagi 400
    "atau"
    2. Tahun harus tidak habis dibagi 100 "dan" harus habis dibagi 4*/
    int yrs;
    cout<<"++++++PROGRAM PENENTU KABISAT ATAU TIDAKNYA TAHUN TERTENTU++++++"<<endl;
    cout<<"================================================================"<<endl;
    cout<<"Masukkan tahun : ";
    cin>>yrs;
    if(yrs%400==0 || (yrs%100!=0 && yrs%4==0)){
        cout<<"Tahun yang Anda masukkan adalah tahun kabisat"<<endl;
    }else
        cout<<"Tahun yang Anda masukkan bukan tahun kabisat"<<endl;
    return 0;
}
