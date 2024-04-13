#include <iostream>
using namespace std;

int main(){

int r , n , sum = 0 , OriginalNum;
cout<<"Enter the number";
cin>> n;

OriginalNum = n;
while(n > 0) {
    r = n%10;
    sum = sum*10+r;
    n = n/10;

}
 if (OriginalNum == sum) {
    cout<<OriginalNum<< "  is Palindrome\n";
 }
    else {
        cout << OriginalNum << " is not palindorme";
    }
 

return 0;
}