#include <iostream>
using namespace std;

int main(){

int n , a = 0 , b = 1 , Nextterm , i;
cout<<"Enter The Number of Terms : ";
cin>>n;

cout<<"Fibonacci Series :   ";
for (i = 1; i <= n; i++) {
   
    Nextterm = a + b;
    a = b;
    b = Nextterm;
    cout << a << " ";
}

cout<<endl;

return 0;
}