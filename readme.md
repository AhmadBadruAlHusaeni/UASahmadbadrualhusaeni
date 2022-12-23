# Ujian Akhir Semester 
<br>Mata Kuliah  &ensp;&nbsp;: Dasar Pemrograman
<br> Nama &emsp;&emsp;&emsp;&ensp;: Ahmad Badru Al Husaeni
<br>NIM &emsp;&emsp;&emsp;&emsp;&nbsp;:	1227050009
<br>Jurusan &emsp;&emsp;&nbsp;&ensp;: [Teknik Informatika](http://if.uinsgd.ac.id/) [UIN Sunan Gunung Djati Bandung](https://uinsgd.ac.id/) 

## Deskripsi Umum
Soal no 1
Menjelaskan tentang mencari nilai menggunakan array 2 dimensi dengan dibalikannya yg semulanya nilai baris dibalik menjadi kolom dan nilai kolom mejadi baris. <br>
Soal no 2 
Menjelaskan tentang cara mencari nilai deret bilangan matematika yang tidak habis dibagi 3,5 dan 7 menggunakan array 2 dimensi
## Source Code
Soal No 1
```cpp
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
```
Soal No 2
```ccp
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
cout<< " =========================="<<endl;
cout<< "| AHMAD BADRU AL HUSAENI   |"<<endl;
cout<< "| 1227050009               |"<<endl;
cout<< " =========================="<<endl;
cout<<endl;
    int array[20][20], baris, kolom;
    cout << "Inputkan jumlah baris : ";cin >> baris;
    cout << "Inputkan jumlah kolom : ";cin >> kolom;
    cout << "Inputkan nilai : " << endl;
    for(int i = 0; i < baris ;i++){
        for(int j = 0; j < kolom ;j++){
            cout << "Nilai baris ke-" << i+1 << " kolom ke-" << j+1 << " : ";
            cin >> array[i][j];
        }
    }
    cout << "Nilai Awal :" << endl;
    for(int i = 0; i < baris ;i++){
        for(int j = 0; j < kolom ;j++){
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Hasil Nilai Akhir :" << endl;
    for(int i = 0; i < baris ;i++){
            for(int j = 0; j < kolom ;j++){
                if(array[i][j]%3 != 0 && array[i][j]%5 != 0 && array[i][j]%7 != 0){
                    cout << array[i][j] << " ";
                }
                else{
                }
            }
    }
    getch();
    getch();
    return 0;
}
```

## Output
<br> No. 1 <br>
<img src= "https://github.com/AhmadBadruAlHusaeni/UASahmadbadrualhusaeni/blob/main/UAS%20DASPROG%20NO%201.png">

<br> No. 2 <br>
<img src= "https://github.com/AhmadBadruAlHusaeni/UASahmadbadrualhusaeni/blob/main/UAS%20DASPROG%20NO%202.png">
