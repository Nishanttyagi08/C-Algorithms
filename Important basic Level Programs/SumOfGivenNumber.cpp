#include <iostream>
using namespace std;

int main(){
int n , sum = 0 , r;

cout<<"Enter the positive number to get sum\n";
cin>>n;

while(n > 0)
{
    r = n % 10;
    sum = sum + r;
    n = n/10;


}
cout<<" The sum of value is: "<<sum<<endl;
 

return 0;
}