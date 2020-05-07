#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

struct data_nim {
    int angkatan;
    string prodi;
    string nomor;
};

struct mahasiswa {
    string nama;
    struct data_nim nim[60];
};
struct mahasiswa mhs[60];

void garis(){
cout<<"-----------------------------"<<endl;
}

int main()
{
    int i,input;
    garis();
    cout<<endl;
    cout<<"masukan jumlah data yang ingin anda input :"<<endl;
    cin>> input;
    cout<<endl;
    for (i = 0; i<input; i++)
    {
        garis();
                cout << "Data ke-"<<(i+1)<< endl;
                garis();
        cout << "masukan nim anda :"<<endl;
        cin >> mhs[i].nim->nomor;

        cout << "masukan nama anda :"<<endl;
        cin >> mhs[i].nama;

        cout << "masukan prodi anda :"<<endl;
        cin >> mhs[i].nim->prodi;

        cout << "masukan angkatan anda :"<<endl;
        cin >> mhs[i].nim->angkatan;
    }
    system("CLS");
    cout<<"+++menampilkan hasil+++"<<endl;
    for (i=0; i<input; i++)
    {
        garis();
                cout << "Data ke-"<<(i+1)<< endl;
        garis();
        cout << "masukan nim anda :"<<mhs[i].nim->nomor<<endl;

        cout << "masukan nama anda :"<<mhs[i].nama<<endl;

        cout << "masukan prodi anda :"<<mhs[i].nim->prodi<<endl;

        cout << "masukan angkatan anda :"<<mhs[i].nim->angkatan<<endl;
    }
    return 0;
}
