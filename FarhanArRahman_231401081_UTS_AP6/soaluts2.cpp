#include <iostream>
using namespace std;

int main(){
    int angka,digit,jumlah=0;

    cout<<"masukkan sebuah angka untuk dijumlahkan digitnya: ";
    cin>>angka;

    while(angka > 0){
        digit=angka % 10;
        jumlah+= digit;
        angka/=10;
    }
    cout<<"jumlah digit bilangan tersebut adalah: "<<jumlah<<endl;

    return 0;
}