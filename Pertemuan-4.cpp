#include <iostream>

using namespace std;

void Sequential(){
        cout << " Sequential Search " << endl;
    cout << "============================" << endl;

    int data[10] = {1,3,4,3,5,6,3,10,9,8};
    int cari, index = 0;

    cout << " Masukkan nilai yang dicari = ";
    cin >> cari;

    for (int i = 0; i < 10; i++)
    {
        if (data[i] == cari)
        {
            index = 1;
            cout << " Data ditemukan pada index ke- " << i << endl;
            
        }
    }
    if (index != 0)
    {
        cout << " Data ada dan telah ditemukan ! " << endl;
    }
    else{
        cout << " data tidak ada" << endl;
    }
    
}


int main(int argc, char const *argv[])
{
    system("cls");

    int a;
    cout << " Masukkan jumlah data : ";
    cin >> a;

    int data[a];
    int cari;
    int low =0, high = a-1, mid;
    int ditemukan = 0;

    for (int i = 0; i < a; i++)
    {
        cout << " Masukkan data ke-" << i << " : ";
        cin >> data[i];
    }
    

    cout << " Binary Search " << endl << "=============" << endl;

    cout << " Masukkan data yang ingin dicari : ";
    cin >> cari;

    // Binary Search

    while (low <= high && ditemukan == 0)
    {
        mid = (low + high) / 2;
            for (int i = 0; i < a; i++)
            {
                if (data[i] == cari)
                {
                    ditemukan = 1;
                    cout << " Data ditemukan pada index ke- " << i << endl;
                    
                }
            }
        if (data[mid] == cari)
        {
            ditemukan = 1;
            cout << " Data ditemukan pada index ke- " << mid << endl;
        }
        else if (data[mid] < cari)
        {
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
        
    }

    if (ditemukan == 1)
    {
        cout << " ya ada datanya " << endl;
    }
    else{
        cout << " data ngga ada " << endl;
    }
    


    return 0;

}