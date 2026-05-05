#include <iostream>
using namespace std;

int main() {
int nota=0;
cout<<"ingrese la primera nota";
cin>>nota;
if(nota>=90){
cout<<"exelente"<<endl;
}
else if((nota>=60)&&(89>=nota))
{
    cout<<"buen trabajo :"<<endl;
}

else{
    cout<<"reprobado"<<endl;
}
    return 0;
}
