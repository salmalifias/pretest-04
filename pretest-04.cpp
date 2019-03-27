/*
Author		: Salma Alifia Shafira
NPM			: 140810180058
Deskripsi	: Sorting Pretest
Tanggal		: 27 Maret 2019
*/

# include<iostream>
using namespace std;

struct ElemtList{
    char npm[12];
    char nama[30];
    float ipk;
    ElemtList* next;
};

typedef ElemtList* pointer;
typedef pointer List;

void createList(List& First){
    First=NULL;
}

void createElement(pointer& pBaru){
    pBaru=new ElemtList;
 cout<<"Masukan nama : ";cin>> pBaru->nama;
 cout<<"Masukan NPM : "; cin>> pBaru->npm;
 cout<<"Masukan IPK : "; cin>>pBaru->ipk;
 cout<<endl;
 pBaru->next = NULL;
}

void insertSortNama(List& First, pointer pBaru){
    if (First==NULL){
        First=pBaru;}
}

void traversal(List First) {
    pointer pBantu;
    pBantu=First;
    while(pBantu != NULL){
        cout<<"NPM\tNama\t\tIPK"<<endl;
        cout<<pBantu->npm<"\t"<<pBantu->nama<<"\t\t"<<pBantu->ipk<<endl;
        pBantu=pBantu->next;
    }
}

int main(){
    pointer pBaru;
    int n;
    List list;
    cout<<"Masukkan banyaknya data mahasiswa : ";cin>>n;
    createList(list);
    for(int i=0;i<n;i++){
        createElement(pBaru);
        insertSortNama(list,pBaru);
    }
    traversal(list);
}
