#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* top = NULL;

// Push
void push(int nilai) {
    Node* baru = new Node;
    baru->data = nilai;
    baru->next = top;
    top = baru;
}

// Pop
void pop() {
    if (top == NULL) {
        cout << "Stack kosong!" << endl;
        return;
    }

    Node* hapus = top;
    cout << "Data yang dihapus: " << top->data << endl;

    top = top->next;
    delete hapus;
}

// Peek
void peek() {
    if (top == NULL) {
        cout << "Stack kosong!" << endl;
    } else {
        cout << "Data teratas: " << top->data << endl;
    }
}

// Display
void display() {
    if (top == NULL) {
        cout << "Stack kosong!" << endl;
        return;
    }

    Node* bantu = top;

    cout << "Isi Stack: ";
    while (bantu != NULL) {
        cout << bantu->data << " ";
        bantu = bantu->next;
    }
    cout << endl;
}

void inputdata(){
    int input;
    cout << "Masukkan data: ";
    cin >> input;
    push(input);
}

int main() {

    
    int pilihan;
    do
    {
        cout << "Menu:" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            inputdata();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            cout << "Keluar dari program." << endl;
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
        }
    } while (pilihan != 5);
    
    
    return 0;
}