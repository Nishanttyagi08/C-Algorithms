#include <iostream>
using namespace std;

int main(){

int a , b , c ;
int largest;
cout<<"Enter three Numbers\n";
cin>>a>>b>>c;

largest = a;

if ( b > largest) {
    largest = b;
}
 if (c > largest) {
 largest = c;
}


cout<<"The largest Number among the three numbers is "<< largest <<endl;


return 0;
}