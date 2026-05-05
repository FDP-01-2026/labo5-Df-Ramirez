#include <iostream>
using namespace std;

int main() {
int edad;
cout<<"variacion de edades :"<<endl;
cout<<"ingresa tu edad"<<endl;
cin>>edad;

if(edad<0){
cout<<"edad invalidada :"<<endl;}
else if((edad>=0)&&(edad<=12)){
    cout<<"eres un nene"<<endl;}

else if((edad>=13)&&(edad<=17)){
    cout<<"eres un adolecente"<<endl;
}
else if((edad>=18)&&(edad<=64)){
    cout<<"eres un adulto"<<endl;
}
else{cout<<"eres el anciano"<<endl;}



    return 0;
}