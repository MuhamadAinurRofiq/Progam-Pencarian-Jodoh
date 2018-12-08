#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int y,t,nilai,j=8;

    cout<<endl;
    cout<<" Progam pencarian jodoh "<<endl;

    cout<<endl;
    cout<<"==============================================================================="<<endl;
    cout<<endl;

    cout<< "Seorang pengusaha kaya sedang mencari jodoh, mungkin kamu adalah jodoh nya "<<endl;
    cout<< "jawablah pertanyaan kami dengan jawaban 1 untuk ya, dan 2 untuk tidak";
    cout<<endl;

    cout<< "Apakah kamu wanita : ";
    cin>>y;
    cout<< "Apakah kamu berhijab : ";
    cin>>y;
    cout<< "Apakah kamu sudah pernah menikah : ";
    cin>>y;
    cout<< "Apakah kamu pernah selingkuh : ";
    cin>>t;
    cout<< "Apakah kamu suka makan makanan cepat saji : ";
    cin>>t;
    cout<< "Apakah kamu bersedia menikah cepat : ";
    cin>>y;

    nilai=y+y+y+t+t+y;
    cout << "nilai kamu adalah : "<<nilai<<endl;

    cout<<endl;
    if (j == nilai)
        cout<<" SELAMAT ANDA BERJODOH";
    if (j != nilai)
        cout<<"MAAF ANDA BELUM BERJODOH";
    cout<<endl;

    return 0;
}
