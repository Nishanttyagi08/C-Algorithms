#include <iostream>
using namespace std;
 int sum (int a , int b){
int c = a + b;
return c;
 }
// We use call by reference because call by value copy the same address either swapping the number 
 void swapPointer(int* a , int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
 }
  
 
int main(){
    int a =2, b =5;
//    cout<<"The Sum of 4 and 5 is "<<sum(4,5);
  cout<<"The value of a is "<< a <<" The value of b is "<< b <<endl;
  swapPointer(&a,&b);
  cout<<"The value of a is "<< a <<" The value of b is "<< b <<endl;
return 0;
}