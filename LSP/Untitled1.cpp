#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//fungsi rata-rata
double rata (double a, double b)
{
  double r;
  double sum;
  r=a+b;
  sum= r/2;
  return sum;}

int main() {
double nilaiA, nilaiB;
double ratarata;
double semuanilai[5];
//memasukan data nilai A dan B
for (int i=0; i<5;i++){

		cout <<"Masukan Nilai A-1 : ";
       cin >> nilaiA;
		cout <<"Masukan Nilai B-2 : ";
		cin >> nilaiB;
		cout << "===============================================" << endl;
		ratarata = rata (nilaiA,nilaiB);
		semuanilai[i]=ratarata;
		
		}
//Output Data pada aplikasi				
cout<<"Hasil:"<<endl;
cout<<" "<<semuanilai[0]<<endl;
cout << "===============================================" << endl;
cout<<" "<<semuanilai[1]<<endl;
cout << "===============================================" << endl;
cout<<" "<<semuanilai[2]<<endl;
cout << "===============================================" << endl;
cout<<" "<<semuanilai[3]<<endl;
cout << "===============================================" << endl;
cout<<" "<<semuanilai[4]<<" ";
//Output data pada text
ofstream file;
file.open("text.txt");
file<<"Hasil:\n "<< semuanilai[0]<<", "<<semuanilai[1]<<", "<<semuanilai[2]<<", "<<semuanilai[3]<<", "<<semuanilai[4]<<" ";
file.close();
}

