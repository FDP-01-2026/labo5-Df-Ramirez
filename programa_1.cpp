#include <iostream>
using namespace std;

int main() {
    int n,i,fact;

    cout << "calculo del factorial de N" << endl;

    cout << "dame n :" << endl;
    cin >> n;
    fact=1;
       /* for (i = 1; i <= n; i++) 
         fact=fact*i;
         cout<<"el factorial es :"<<fact<<endl;*/
        /*/ i=1;
         while(i<=n){
            fact=fact*i;
            i++;
        
         }
*/
do{
fact=fact*i;
i++;
}while(i<=n);
cout<<"el factorial es :"<<fact<<endl;

cout<<"n esta en :"<<&n<<endl;
cout<<"i esta en :"<<&n<<endl;
cout<<"fact esta en :"<<&n<<endl;
        cout << endl;
return 0;
}