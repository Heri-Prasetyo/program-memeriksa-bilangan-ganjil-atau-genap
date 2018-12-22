#include<iostream>
using namespace std;
int main(){
int nilai,hasil;

cout<<"PROGRAM MENENTUKAN BILANGAN GANJIL DAN GENAP"<<endl;
cout<<"Masukan Bilangan Ganjil Dan Genap"<<endl;
cout<<"Masukan Nilainya = ";
cin>>nilai;
hasil=nilai%2;
cout<<"hasilnya Adalah = ";
if (hasil==0)
cout<<"genap";
else
    cout<<"ganjil";
return 0;



}
