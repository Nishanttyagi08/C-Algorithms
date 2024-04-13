// THE SUM OF INDIVIDUAL DIGIT CUBE IS EQUAL TO THE SUM OF THE SAME NUMBER

#include <iostream>
using namespace std;

int main(){

int n , r , c , sum = 0 , OriginalNum ;
cout<<"Enter the number: ";
cin>>n;
OriginalNum = n;
while (n > 0)
{
    r = n%10;
    c = r * r * r;  
    sum = sum +c;
    n = n/10;
}



if(OriginalNum == sum) {
    cout<<OriginalNum<<" is the ArmStrong Number\n";
} else {
cout<<OriginalNum<<" is not ArmStrong Number";
}

return 0;
}