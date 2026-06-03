#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* tambahNode(int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
    // penjelasan : fungsi ini digunakan untuk membuat node baru dengan data yang diberikan dan mengembalikan pointer ke node tersebut
    // alur : 1. Membuat node baru dengan menggunakan operator new untuk mengalokasikan memori untuk node tersebut.
    // 2. Mengisi data pada node baru dengan nilai yang diberikan sebagai parameter.
    // 3. Mengatur pointer next pada node baru menjadi NULL, menandakan bahwa node ini belum terhubung dengan node lain.
    // 4. Mengembalikan pointer ke node baru yang telah dibuat.
}

void data_baru(Node*& head, int data){
    Node* newNode = tambahNode(data);
    newNode->next = head;
    head = newNode;
    // penjelasan : fungsi ini digunakan untuk menambahkan node baru ke awal linked list. Fungsi ini menerima pointer ke pointer head dari linked list dan data yang akan ditambahkan.
    // alur : 1. Membuat node baru dengan memanggil fungsi tambahNode untuk membuat node baru dengan data yang diberikan.
    // 2. Mengatur pointer next pada node baru untuk menunjuk ke node yang saat ini menjadi head dari linked list, sehingga node baru akan menjadi node pertama dalam linked list.
    // 3. Memperbarui pointer head untuk menunjuk ke node baru, sehingga node baru sekarang menjadi head dari linked list.

}

void print_list(Node* head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL"<< endl;
}
void hapusNode(Node*& head, int key){
    Node* temp = head;
    Node* prev = NULL;

    if (temp != NULL && temp ->data == key)
    {
        head = temp->next;
        delete temp;
        return;
    }
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
    {
        cout << "Data tidak ditemukan di linkedlist" << endl;
        return;
    }
    prev->next = temp->next;
    delete temp;
    cout << "DATA : " << key << " berhasil dihapus" << endl;

}

int main(int argc, char const *argv[])
{
    
    Node* head = NULL;
    int pilihan;

    while (pilihan)
    {
            cout << "Menu Linked List" << endl;
        cout << "1. Tambah Node" << endl;
        cout << "2. Hapus Node" << endl;
        cout << "3. Cetak Linked List" << endl;
        cout << "4. Keluar" << endl;
        cout << "Masukkan pilihan : "; cin >> pilihan;

    switch (pilihan)
    {
    case 1:{
        int n, data;
        cout << "Masukkan jumlah data : "; cin >> n;
        for (int i = 0; i < n; i++)
        {
            cout << "Masukkan data ke-" << i+1 << " : "; cin >> data;
            data_baru(head, data);
        }
        break;
    }
    case 2: {
        int key;
        cout << "Masukkan data yang ingin dihapus : "; cin >> key;
        hapusNode(head, key);
        break;
    }
    case 3: {
        //cetak linked list
        cout << "Linked List: ";
        print_list(head);
        break;
    }
    case 4: {
        cout << "anda keluar dari menu";
        return 0;
    }

    default:
        cout << "Pilihan tidak valid!" << endl;
        break;
    }
    }
    return 0;
}
