#include <iostream>
using namespace std;

int main(){
int n, i , a = 0 , b = 1 , nextTerm ;
cout<<"How many fibonnacci series you want to print  : ";
cin>>n;

for(i = 1; i < n; i++){
cout<< a;
nextTerm = a + b;
a = b;
b = nextTerm;
 cout<<" ";
}
cout<<endl;
return 0;
} 

