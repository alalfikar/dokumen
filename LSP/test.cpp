#include<iostream>

using namespace std;

int penjumlahan(){
    int a,b;
    cout<<"Contoh Penjumlahan"<<endl;
    cout<<"Masukkan Angka 1: ";
    cin>>a;
    cout<<"Masukkan angka 2: ";
    cin>>b;
    cout<<"Hasil :"<<a+b<<endl;
    cout<<endl;
}
int pengurangan(){
    int a,b;
    cout<<"Contoh Pengurangan"<<endl;
    cout<<"Masukkan Angka 1: ";
    cin>>a;
    cout<<"Masukkan angka 2: ";
    cin>>b;
    cout<<"Hasil: "<<a-b<<endl;
    cout<<endl;
}
int perkalian(){
       int a,b;
    cout<<"Contoh Perkalian"<<endl;
    cout<<"Masukkan Angka 1: ";
    cin>>a;
    cout<<"Masukkan angka 2: ";
    cin>>b;
    cout<<"Hasil: "<<a*b<<endl;
    cout<<endl;
}
int pembagian(){
       int a,b;
    cout<<"Contoh Pembagian"<<endl;
    cout<<"Masukkan Angka 1: ";
    cin>>a;
    cout<<"Masukkan angka 2: ";
    cin>>b;
    cout<<"Hasil: "<<a/b<<endl;
    cout<<endl;
}

int main(){
    cout<<endl;
    penjumlahan();
    pengurangan();
    perkalian();
    pembagian();
    cout<<endl;
    system("pause");
    return 0;
}
