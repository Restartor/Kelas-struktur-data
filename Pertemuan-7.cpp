#include <iostream>

using namespace std;

// belajar rekursif

int faktorial(int n){
    if(n==0 || n==1){
        cout << n << "=";
        return 1;
    }
    else{
        
        cout << n << " x" <<endl;

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

int main(int argc, char const *argv[])
{
    int angka;
    cout << "Masukin angka: "; cin >> angka;

   // faktorial
   cout << "Nilai faktorial" << angka << "! adalah ";
   cout << faktorial(angka) << endl;

   // fibonacci
   cout << "nilai fibonacci ke " << angka << " adalah : " << fibonacci(angka) <<endl;

    
    return 0;
}
