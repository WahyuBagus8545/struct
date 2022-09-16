#include <iostream>

using namespace std;
int kalikan(int a,int b);
int bagikan (int a,int b);
int main()
{
    int ppk,lpk,tpk,volpk,r,ttb,jmlpkt;
    float voltab;
    cout << "Panjang paket : ";cin >> ppk;
    cout << "Lebar paket : ";cin >> lpk;
    cout << "Tinggi paket : ";cin >> tpk;

    volpk=kalikan(kalikan(ppk,lpk),tpk);

    cout << "Input jari : ";cin >> r;
    cout << "Input ttb : ";cin >> ttb;

    voltab=kalikan(kalikan(kalikan(3.14,r),r),r);
    jmlpkt=bagikan(volpk,voltab);

    cout <<"Jumlah paket : "<< jmlpkt;

    return 0;
}

int kalikan(int a,int b){
    return (a*b);
}
int bagikan (int a,int b){
    return (a/b);
}
