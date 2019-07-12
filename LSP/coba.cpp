#include <iostream>

using namespace std;

	double avg (int l)
	{
		double rata;
		rata = l/2;

		return rata;
	}
	
	double jumlah (int t, int y)
	{
		double total;
		total = t+y;

		return total;
	}
	


int main(){
  int a[5],b[5], i, n;
  double rata, total=0, nhtg;

  cout << "===============================================" << endl;
  cout << "Program Menghitung Nilai Rata-rata dengan Array" << endl;
  cout << "===============================================" << endl;
  cout << "Masukkan banyaknya elemen array: ";
  cin >> n;

  for(i=0; i<n; i++){
    cout << "Nilai A-" << i+1 << " : ";
    cin >> a[i];
    cout << "Nilai B-" << i+1 << " : ";
    cin >> b[i]; 
 
  }

  nhtg = n*2;
  cout << "Hasil nilai total adalah : " << jumlah(a,b) << endl;
  cout << "Hasil rata-rata adalah : " << avg(jumlah, nhtg) << endl;


  return 0;

}
