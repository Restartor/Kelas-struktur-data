#include <iostream>

using namespace std;


struct mahasiswa
{
    string nama;
    int nim;
    float ipk;
    float umur;
    string noHP;
};



int main(int argc, char const *argv[])
{

    system("cls");

    int maximal;

    cout << " MASUKKIN JUMLAH MAHASISWA YANG PENGEN DIMASUKKAN : ";
    cin >> maximal;

    mahasiswa mhs[maximal];

    for (int i = 0; i < maximal; i++)
    {
        cout << "Masukkan NIM mahasiswa ke-" << i + 1 << ": ";
        cin >> mhs[i].nim;
        cout << "\n";

        cout << "Masukkan nama mahasiswa ke-" << i + 1 << ": ";
        getline(cin >> ws, mhs[i].nama);
        cout << "\n";

        cout << "Masukkan IPK mahasiswa ke-" << i + 1 << ": ";
        cin >> mhs[i].ipk;
        cout << "\n";

        cout << "Masukkan umur mahasiswa ke-" << i + 1 << ": ";
        cin >> mhs[i].umur;
        cout << "\n";

        cout << "Masukkan nomor HP mahasiswa ke-" << i + 1 << ": ";
        cin >> mhs[i].noHP;
        cout << "\n";
    }

    cout << endl << endl;

    cout << "DATA MAHASISWA : " << endl;
    cout << "================================" << endl;
    for (int i = 0; i < maximal; i++)
    {
        cout << "NIM: " << mhs[i].nim << endl;
        cout << "Nama: " << mhs[i].nama << endl;
        cout << "IPK: " << mhs[i].ipk << endl;
        cout << "Umur: " << mhs[i].umur << endl;
        cout << "Nomor HP: " << mhs[i].noHP << endl;
        cout << "================================" << endl;
    }


    
    return 0;
}
