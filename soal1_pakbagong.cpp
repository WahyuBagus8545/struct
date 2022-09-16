#include <iostream>

using namespace std;
int kalikan (int , int );
int bagikan (int , int );

int main()
{
    int pkam,lkam,pker,lker,luaskam,luasker,jmlker,ikpd,harga,jmldus,uang;
    cout<< "==============="<<endl;

    cout << "Panjang kamar : ";
    cin >> pkam;
    cout << "Lebar kamar : ";
    cin >> lkam;

    luaskam=kalikan(pkam,lkam);

    cout<< "==============="<<endl;
    cout << "Panjang keramik : ";
    cin >> pker;
    cout << "Lebar keramik : ";
    cin >> lker;

    luasker=kalikan(pker,lker);


    jmlker=bagikan(luaskam,luasker);
    cout<<"ikpd: ";cin >> ikpd;
    jmldus=bagikan(jmlker,ikpd);

    cout<<"harga : ";cin >> harga;
    uang=kalikan(jmldus,harga);

    cout<< uang<<endl;

    return 0;
}

int kalikan ( int a, int b){
    return a*b;
}
int bagikan ( int a, int b){
    return a/b;
}

