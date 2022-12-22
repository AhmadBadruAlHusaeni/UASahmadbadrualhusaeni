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
