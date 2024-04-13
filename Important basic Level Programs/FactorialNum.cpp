#include <iostream>
using namespace std;

int main(){

int num , factorial = 1 , i;

cout<<"Enter the Number";
cin>>num;

for (i = 1; i <= num; i++){
    factorial = factorial*i;
}

cout<<"Here is the factorial of number is: "<<factorial<<endl;

return 0;
}