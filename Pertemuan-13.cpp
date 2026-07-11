#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
};

Node* root = NULL;

Node* insert(Node* root, int value) {
    if (root == NULL) {
        return new Node(value);
    }

    if (value < root -> data) {
        root -> left = insert(root -> left, value);
    } 
    else if (value > root -> data) {
        root -> right = insert(root -> right, value);
    }
    return root;
}

void preorder(Node* root) {
    if (root == NULL) {return;
    }
    cout << root -> data << " ";
    preorder(root -> left);
    preorder(root -> right);
}

void inorder(Node* root) {
    if (root == NULL) {return;
    }
    inorder(root -> left);
    cout << root -> data << " ";
    inorder(root -> right);
}

void postorder(Node* root) {
    if (root == NULL) {return;
    }
    postorder(root -> left);
    postorder(root -> right);
    cout << root -> data << " ";
}

void printTree(Node* root, int space = 0) {
    if (root == NULL) 
        return;
    space += 8;
    printTree(root -> right, space);
    cout << endl;

    for (int i = 8; i < space; i++) {
        cout << " ";
    }

    cout << root -> data <<endl;
    printTree(root -> left, space);


}
   

int main(int argc, char const *argv[]){
    int jumlah, data, pilihan;

    cout << "================================" << endl;
    cout << "  pohon kehidupan               " << endl;
    cout << "================================" << endl;

    do {
        cout << "Menu pohon" << endl;
        cout << "1. Input data node" << endl;
        cout << "2. munculin gambar pohon m" << endl;
        cout << "3. preOrder" << endl;
        cout << "4. inOrder" << endl;
        cout << "5. postOrder" << endl;
        cout << "6. keluar" << endl;
        cout << "Pilih menu: "; cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan jumlah Node: "; cin >> jumlah;
                for (int i = 1; i <= jumlah; i++) {
                    cout << "Inputkan Nilai Node " << i << ": ";
                    cin >> data;
                    root = insert(root, data);
                }
                break;
            case 2:
                if (root == NULL) {
                    cout << "Tree kosong." << endl;
                } else {
                    cout << "Bentuk gambar Tree: " << endl;
                    printTree(root);
                    cout << endl;
                }
                break;
            case 3:
                if (root == NULL) {
                    cout << "Tree kosong." << endl;
                } else {
                    cout << "isi Preorder  : ";
                    preorder(root);
                    cout << endl;
                }
                break;
            case 4:
                if (root == NULL) {
                    cout << "Tree kosong." << endl;
                } else {
                    cout << "isi Inorder   : ";
                    inorder(root);
                    cout << endl;
                }
                break;
            case 5:
                if (root == NULL) {
                    cout << "Tree kosong." << endl;
                } else {
                    cout << "isi Postorder : ";
                    postorder(root);
                    cout << endl;
                }
                break;
            case 6:
                cout << "anda telah keluar" << endl;
                break;
            default:
                cout << "pilihan gaada" << endl;
        }
        cout << endl;
    } while (pilihan != 6);






    return 0;
}