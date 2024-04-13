#include <iostream>
using namespace std;

int main(){
int n , sum = 0 , r;

cout << "Enter a number for Reverse : ";
cin >> n;

while (n != 0) {
    r = n % 10;
 sum =  sum *10 + r;
 n = n /10;

}

 cout << "Reversed Number is " << sum <<endl;
return 0;
}