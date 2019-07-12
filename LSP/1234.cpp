#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;

	double ratarata (int l, int o)
	{
		double r;
		double sum;
		r=l+o;
		sum=r/2;
		return sum;
	}
	
		double jumlah (int l, int o)
	{
		double tot;
		tot=l+o;
		return tot;
	}
	
int main(){
  int array[5], i, n, p, j;
  double total=0;

  cout << "===============================================" << endl;
  cout << "Program Menghitung Nilai Rata-rata dengan Array" << endl;
  cout << "===============================================" << endl;
  cout << "Masukkan banyaknya elemen array: ";
  cin >> n;

  for(i=0; i<n; i++){
    cout << "Nilai A-" << i+1 << " : ";
    cin >> array[i];
    cout << "Nilai B-" << j+1 << " : ";
    cin >> array[j];

  }

 
	cout << "Hasil nilai total adalah : " << jumlah(i,j) << endl;
  cout << "Hasil nilai rata-rata adalah : " << ratarata(i,j) << endl;
 

//stream untuk menulis file
       ofstream myfile;

       //membuka file,
       //jika file tidak ditemukan maka file akan otomatis dibuat
       myfile.open("TEST.txt", ios::app);

       cout<<"--------------"<<endl;

       //fail() -> untuk memeriksa suatu kesalahan pada operasi file
       if(!myfile.fail())
       {
              //menulis ke dalam file
              
               myfile<<"Hasil nilai total adalah : "<<jumlah(i,p)<<endl;
               myfile<<"Hasil nilai rata adalah : "<<ratarata(i,p)<<endl;

              myfile.close(); //menutup file
              cout<<"Text telah ditulis ke dalam File"<<endl;
       }else{
              cout<<"File tidak ditemukan"<<endl;
       }
      
       _getche();

  return 0;

}
