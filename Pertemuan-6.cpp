#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");
    int var = 10;
    int var2 = 20;

    int *a;
    int *b;
    a = &var;
    b = &var2;

    *a = 100;
    *b = *b * 2;

    cout << "nilai variable = " << var << endl;
    cout << "nilai variable 2 = " << var2 << endl;
    cout << " Alamat var = " << a << endl;
    cout << " Alamat var 2 = " << b << endl;
    cout << " nilai *a = " << *a << endl;
    cout << " nilai *b = " << *b << endl;
    cout << " Alamat a = " << &a << endl;
    cout << " Alamat b = " << &b << endl;
    
    return 0;
}
