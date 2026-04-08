#include <iostream>
using namespace std;

const int ukuran = 3;


double Average(int nums[ukuran]){
    double average = 0;
    for (int i = 0; i < ukuran; i++)
    {
        average += nums[i];
    }
    return average / ukuran;
    
    
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



    return 0;
}
