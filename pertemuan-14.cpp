#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *next;
};

int MAX;
Node **head;

void tambahNode(int asal, int tujuan){
    Node *baru = new Node;
    baru->data = tujuan;
    baru->next = NULL;

    if(head[asal] == NULL){
        head[asal] = baru;
    }
    else{
        Node *bantu = head[asal];
        while (bantu->next != NULL)
        {
            bantu = bantu->next;
        }
        bantu->next = baru;
        
    }

}

void tampilGraph(){
    cout << "ADJACENCY LIST" << endl;

    for (int i = 0; i < MAX; i++)
    {
        cout << i << " => ";
        Node *bantu = head[i];

        while (bantu != NULL)
        {
            cout << bantu->data<<" ";
            bantu = bantu->next;
        }
        cout << endl;
        
    }
    
}

void BFS(int awal){
    bool *visited = new bool[MAX];

    for (int i = 0; i < MAX; i++)
    {
        visited[i]=false;
    }

    int *queue = new int[MAX];
    int depan = 0;
    int belakang = 0;
    

    visited[awal] = true;
    queue[belakang++] = awal;
    
    cout << "Hasil BFS : ";
    while(depan < belakang){
        int sekarang = queue[depan++];
        cout << sekarang << " ";

        Node *bantu = head[sekarang];
        while (bantu != NULL)
        {
            int tetangga = bantu->data;
            if(!visited[tetangga]){
                visited[tetangga] = true;
                queue[belakang++] = tetangga;
            }
            bantu = bantu->next;
        }
        
    }

    cout << endl;
    delete[] visited;
    delete[] queue;
    
}

void DFS(int sekarang, bool visited[]){
    // tandai node sekarang sebagai dikunjungi dan cetak
    visited[sekarang] = true;
    cout << sekarang << " ";

    // rekursif ke semua tetangga yang belum dikunjungi
    Node *bantu = head[sekarang];
    while (bantu != NULL)
    {
        int tetangga = bantu->data;
        if(!visited[tetangga]){
            DFS(tetangga, visited);
        }
        bantu = bantu->next;
    }
}



int main(){
    cout<<"Masukkan jumlah Vartex: "; cin>>MAX;
    head = new Node*[MAX];
    for(int i = 0; i < MAX; i++) head[i] = NULL;

    int pilihan;
    do{
        cout << "\n===== MENU =====\n";
        cout << "1. Tambah Edge (asal - tujuan)\n";
        cout << "2. Tampilkan Adjacency List\n";
        cout << "3. BFS\n";
        cout << "4. DFS\n";
        cout << "5. Keluar\n";
        cout << "Pilihan: "; cin >> pilihan;

        switch(pilihan){
            case 1:{
                int asal, tujuan;
                cout << "Simpul asal: "; cin >> asal;
                cout << "Simpul tujuan: "; cin >> tujuan;
                tambahNode(asal, tujuan);
                // kalau graph undirected, uncomment baris di bawah:
                // tambahNode(tujuan, asal);
                break;
            }
            case 2:
                tampilGraph();
                break;
            case 3:{
                int awal;
                cout << "Simpul awal BFS: "; cin >> awal;
                BFS(awal);
                break;
            }
            case 4:{
                int awal;
                cout << "Simpul awal DFS: "; cin >> awal;
                bool *visited = new bool[MAX];
                for(int i = 0; i < MAX; i++) visited[i] = false;

                cout << "Hasil DFS : ";
                DFS(awal, visited);
                cout << endl;

                delete[] visited;
                break;
            }
            case 5:
                cout << "Keluar program.\n";
                break;
            default:
                cout << "Pilihan tidak valid!\n";
        }
    } while(pilihan != 5);

    return 0;
}
/* buatkan menu input asal tujuan di 1
tampilkan adjacency kedua
hasil bfs ke 3 
hasil dfs ke 4
5 keluar */