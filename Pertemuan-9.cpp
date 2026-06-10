#include <iostream>
#define MAX 10

using namespace std;

struct Tumpukan
{
    int atas;
    int data[MAX];
}T;

void awal(){
    T.atas = -1;
}

int kosong(){
    if (T.atas == -1)
    {
        return 1;
    }
    else
        return 0;
}

int penuh(){
    if (T.atas == MAX-1)
    {
        return 1;
    }
    else
    { 
        return 0;
    }
}

void input(int data){
    if (penuh() == 0){
        T.atas++;
        T.data[T.atas] = data;
        cout << "data "<< T.data[T.atas] << " Masuk ke stack " << endl; 
    }
    else
    {
        cout << "Tumpukan Penuh" << endl;
    }
}

void hapus(){
    if (kosong() == 0){
        cout << "Data teratas sudah terambil";
        T.atas--;
    }
    else
    {
        cout << "Data kosong! ";
    }
    
}

void tampil(){
    if (kosong() == 0){
        for (int i = T.atas; i >= 0; i--)
            {
                cout << "Tumpukan ke :" << i << " = " << T.data[i] << " " << endl;
            }
        }
    else
    {
        cout << "Data kosong! ";
    }
    
}

void bersih(){
    T.atas = -1;
    cout << "Tumpukan Kosong ";}

int main(int argc, char const *argv[])
{
        
    int data;
    cout << "Masukkan data : "; cin >> data;
    input(data);
    input(3);
    input(9);



    // tampil data
    tampil();

        // hapus data
    hapus();

    // bersihkan data
    bersih();


    return 0;
}
