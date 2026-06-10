#include <iostream>

using namespace std;

// belajar rekursif

int faktorial(int n){
    if(n==0 || n==1){
        cout << n << "=";
        return 1;
    }
    else{
        
        cout << n << " * ";

        return n * faktorial(n-1);
    }
}

int fibonacci(int n){
    if (n == 0)
    {
        return 0;
    }
    if (n==1)
    {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n-2);  
}

int jumlahArray(int Arr[], int ukuran){

    if (ukuran == 0)
    {
        return 0;
    }

    return Arr[ukuran - 1] + jumlahArray(Arr, ukuran-1);
}

bool palindrome(string str, int left, int right){
    if (left >= right)
    {
        return true;
    }
    if (str[left] != str[right])
    {
        return false;
    }
    
    return palindrome(str, left+1, right-1);
}

void faktor(int angka){
    cout << "Nilai faktorial" << angka << "! adalah ";
    cout << faktorial(angka) << endl;
}

void fibo(int angka){
    cout << "nilai fibonacci ke " << angka << " adalah : " << fibonacci(angka) <<endl;
}
void testarray(int max){
    int Nilai[max];
   int batas = sizeof(Nilai)/sizeof(Nilai[0]);
    for (int i = 0; i < max; i++)
    {
        cout << "input data ke-" << i+1 << endl;
        cin >> Nilai[i];
        cout << "\n";
    }
   cout << "total = " << jumlahArray(Nilai, batas) << endl;
}

void checkPalindrome(string kata){
       // palindrome
   if (palindrome(kata, 0,kata.length()-1))
   {
        cout << kata << " adalah palindrome \n";
   }
   else{
    cout << kata << " bukanlah palindrome \n";
   }
}


int main(int argc, char const *argv[])
{
    int pilihan;

    do
    {
        cout << "Menu Rekursif" << endl;
        cout << "1. Faktorial" << endl;
        cout << "2. Fibonacci" << endl;
        cout << "3. Jumlah Array" << endl;
        cout << "4. Palindrome" << endl;
        cout << "5. Keluar" << endl;
        cout << "Masukkan pilihan : "; cin >> pilihan;

        switch (pilihan)
        {
        case 1: {
            int angka;
            cout << "masukkan angka : "; cin >> angka;
            faktor(angka);
            break;
        }
        case 2: {
            int angka;
            cout << "masukkan angka : "; cin >> angka;
            fibo(angka);
            break;
        }
        case 3: {
            int max;
            cout << "masukkan jumlah data : "; cin >> max;

            testarray(max);
            break;
        }
        case 4: {
            string kata;
            cout << "masukkan kata : "; cin >> kata;
            checkPalindrome(kata);
            break;
        }
        default:
            cout << "pilihan tidak valid" << endl;
            break;
        }
    } while (pilihan != 5);
    
    
    return 0;
}
