#include <iostream>

using namespace std;


struct mahasiswa
{
    string nama;
    int nim;
    float ipk;
};



int main(int argc, char const *argv[])
{

    system("cls");

    mahasiswa mhs[3];

    for (int i = 0; i < 3; i++)
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
    }

    cout << endl << endl;

    cout << "Data Mahasiswa:" << endl;
    cout << "================================" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "NIM: " << mhs[i].nim << endl;
        cout << "Nama: " << mhs[i].nama << endl;
        cout << "IPK: " << mhs[i].ipk << endl;
        cout << "================================" << endl;
    }

    return 0;
}
