// Swap the Numbers using the third variable

#include <iostream>
using namespace std;

int main(){

int a , b , temp;
cout<<"Enter two numbers\n";

cin>>a>>b;

cout<<"Before Swapping: a = "<<a<< " , b = "<<b<<endl;

temp = a;
a = b;
b = temp;

cout<<"After Swapping: a = "<<a<< " , b = "<<b<<endl;

return 0;
}