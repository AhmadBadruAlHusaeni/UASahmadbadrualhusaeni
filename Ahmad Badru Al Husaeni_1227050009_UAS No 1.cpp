#include <iostream>

using namespace std;

int main(){
  int i, j, a, b, matriks[20][20], transpose[20][20];

cout<< " =========================="<<endl;
cout<< "| AHMAD BADRU AL HUSAENI   |"<<endl;
cout<< "| 1227050009               |"<<endl;
cout<< " =========================="<<endl;
cout<<endl;
  cout << "Inputkan Jumlah Baris Matriks: ";
  cin >> a;
  cout << "Inputkan Jumlah Kolom Matriks: ";
  cin >> b;
  cout << endl;

  cout << "Inputkan Elemen Matriks \n";
  for (i = 0; i < a; i++) {
    for (j = 0; j < b; j++) {
      cout << "Nilai Baris " << i+1 << " Kolom " << j+1 << " = " ;
	  cin  >> matriks[i][j];
    }
  }
  cout << "\n";

  cout << "Untuk Matriks Awal : \n";
  for (i = 0; i < a; i++){
    for (j = 0; j < b; j++){
      cout << matriks[i][j] << "\t";
    }
    cout << endl;
  }
   
  for (i = 0; i < a; i++){
    for (j = 0; j < b; j++){
      transpose[j][i] = matriks[i][j];
    }
  }

  cout << "Untuk Hasil Transpose Matriks: \n";
  for (i = 0; i < b; i++){
    for (j = 0; j < a; j++){
      cout << transpose[i][j] << "\t";
    }
    cout << endl;
  }
}
