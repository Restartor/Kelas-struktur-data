#include <iostream>

using namespace std;

void BubbleSort(int data[], int n, int tempo){
    cout << "\n";
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (data[j] > data[j+1])
            {
                tempo = data[j];
                data[j] = data[j+1];
                data[j+1] = tempo;
            }
            
        }
        cout << "step ke-" << i+1 << " : ";
        for (int k = 0; k < n; k++)        {
            cout << data[k] << " ";
        }
        cout << "\n";
    }

    cout << "\nMenggunakan Bubble sort "<< endl << "Data setelah diurutkan : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << data[i] << " ";
    }
    
}


void SelectionSort(int data[], int n, int tempo, int min_index){
    for (size_t i = 0; i < n-1; i++)
    {
        min_index = i;
        for (int j = i+1; j < n; j++)
        {
            if (data[j] < data[min_index])
            {
                min_index = j;
            }
            
        }
        if (min_index != i)
        {
            tempo = data[i];
            data[i] = data[min_index];
            data[min_index] = tempo;

        }
         cout << "step ke-" << i+1 << " : ";
        for (int k = 0; k < n; k++)        {
            cout << data[k] << " ";
        }
        cout << "\n";
        
    }
    
    cout << "\nMenggunakan Selection sort "<< endl << "Data setelah diurutkan : " << endl;
    for (int i = 0; i < n; i++){
        cout << data[i] << " ";
    }
}
int main(int argc, char const *argv[])
{
    system("cls");
    int a;
    cout << "Masukkan jumlah batas data: ";
    cin >> a;
    int data[a];    
    int tempo, min_index;
    int n = sizeof(data)/sizeof(data[0]); // penjelasan :

    for (int i = 0; i < a; i++)
    {
        cout << "Masukkan elemen data array ke-" << i+1 << ": ";
        cin >> data[i];
    }
    

    cout << "Data sebelum diurutkan : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << data[i] << " ";
    }
    
    cout << "\n";

    // untuk bubble Sort : BubbleSort(data, n, tempo);
    SelectionSort(data, n, tempo, min_index);

    return 0;
}
