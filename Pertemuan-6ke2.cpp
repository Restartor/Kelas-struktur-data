#include <iostream>
using namespace std;

struct mahasiswa
{
    int nim;
    string nama;
    double ipeka;
};




int main(int argc, char const *argv[])
{
    int max;
    int agus;
    

    cout << "masukkan bjumlah mahasiswa : "; cin >> max;
    mahasiswa m[max];
    mahasiswa *p = m;
   
    
    for (int i = 0; i < max; i++)
    {
        cout << "input data mahasiswa ke-" << i+1 << endl;
        cout << "nim : "; cin >> m[i].nim;
        cout << "nama : "; cin >> m[i].nama;
        cout << "ipeka : "; cin >> m[i].ipeka;
        cout << "\n";
    }
    
/*    
    (p+1)->nim = 567891;
    (p+1)->nama = "wira";
    (p+1)->ipeka = 3.99;
*/
    // kenapa ga menggunakan p[0/1]? karena pointer bukanlah array jadi kita menembak dari pointer ke array
 cout << "Data yang ingin diubah menjadi agus : "; cin >> agus;

    (p+agus)->nim = 12345;
    (p+agus)->nama = "agus";
    (p+agus)->ipeka = 3.79;


    for (int i = 0; i < max; i++)
    {
        cout << " data mahasiswa ke " << i+1 << ":" << endl;
        cout << "nim : " << m[i].nim << endl;
        cout << "nama : " << m[i].nama << endl;
        cout << "ipk : " << m[i].ipeka << endl;
    }


    

    return 0;
}
