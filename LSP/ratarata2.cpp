#include <iostream>
#define n 5
using namespace std;

float avg (float p, float l){
    float rata;
    rata = p/l;
    return rata;
}

int main(){
  int i;
  float uts[5], uas[5];
  float total=0;

  cout << "===============================================" << endl;
  cout << "Program Menghitung Nilai Rata-rata dengan Array" << endl;
  cout << "===============================================" << endl;


  for(i=0; i<n; i++){
    cout << "Nilai Ke-" << i+1 << " : "; cin>>uts;
    cout << "Nilai ke-" << i+1 << " : ";cin>>uas;
    cout << "========================================"<<endl;
    total = total + i + i;
  }


  cout << "Hasil nilai total adalah : " << total << endl;
  cout << "Hasil rata-rata adalah : " <<avg(total,i) << endl;

  return 0;

}
