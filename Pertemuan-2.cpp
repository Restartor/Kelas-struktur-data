#include <iostream>
using namespace std;

const int besar = 3;

void printarray(int arg[], int length){
    for (int n = 0; n < length; n++)
    {
        std::cout << arg[n] << " ";
        
    }

    std::cout << "\n";
}

int main(int argc, char const *argv[])
{
    int a;
    int b;


    cout << "Masukkan jumlah baris = ";
    cin >> a;
    cout << "Masukkan jumlah kolom = ";
    cin >> b;
    int nilai[a][b];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << "Masukkan nilai ke-[" << i << "][" << j << "] = ";
            cin >> nilai[i][j];
        }
    }

    cout << "\nOutput matriks:" << endl;
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                cout << nilai[i][j] << " ";
            }
            cout << endl;
        }


    double average = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            average += nilai[i][j];
            cout << nilai[i][j] << "+";
        }
        
    }
    cout << "\nJumlah total = " << average << endl;

    cout << "Rata-rata = " << average / (a * b) << endl;


    return 0;
}
