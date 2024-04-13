#include <iostream>
using namespace std;

int main(){


int num ,i , sum = 0 ;

cout<<"Enter the Number\n";
cin>>num;

for (i = 1; i <= num/2; i++){
    if(num%i == 0) {
       sum = sum + i;
    }
    
}

if (sum == num) {
    cout<<num<<" is Perfect Number\n";
}

else {
cout<<num<<" is not Perfect Number\n";
}



return 0;
}

