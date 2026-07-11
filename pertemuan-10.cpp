#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
}

Node* head = NULL;

void Enqueue(int nilai){
    Node* baru = new Node();
    baru->data = nilai;
    baru->next = NULL;

    if(head == NULL){
        head=baru;
    }
    else{
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = baru;
    }
}
void Deque(){
    if(head==NULL){
        cout << "QUEUE KOSONG! " << endl;
        return
    }
    Node* hapus = head;
    head = head->next;
}

void tampil(){
    Node* temp = head;
    cout << "lined list: ";
    while(temp != NULL){
        cout << temp->data<<" <- ";
        temp = temp->next;
    }
    cout << "NULL"  <<endl;
}


int main(int argc, char ** argv){

    Enqueue(30)
    Enqueue(10)
    Enqueue(20)
    tampil()

    Deque()
    tampil()
}