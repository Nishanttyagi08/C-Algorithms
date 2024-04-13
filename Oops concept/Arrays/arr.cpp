#include <iostream>
using namespace std;

int main(){
int marks[4] = {23 , 34 , 45 , 57};
cout<<marks[0]<<endl;
cout<<marks[1]<<endl;
cout<<marks[2]<<endl;
cout<<marks[3]<<endl;
cout<<"THis is for loop"<<endl;
for ( int i = 0; i < 4; i++)
{
    cout<<"The marks of " << i << " is " << marks[i]<< endl;
}

cout<<"This is while loop"<<endl;
int i = 0;
while( i < 4){
cout<<marks[i]<<endl;
i++; 
} 

// cout<<"This is do while loop"<<endl;
// int i = 0;
// do {
//  cout<<"The marks of " << i << " is " << marks[i]<< endl;
// i++;
// }
// while( i < 4);

// POINTER AND ARRAYS

int* p = marks; 
cout<<*(p++)<<endl; // it print the first value of array the increment

cout<<*(++p)<<endl; // the is increment first then print the value of next index of array
cout<<"The value of *p is "<<*p<<endl; // this p pointer store initial value of array 
cout<<"The value of *(p+1) is "<<*(p+1) <<endl;
cout<<"The value of *(p+2) is "<<*(p+2) <<endl;
cout<<"The value of *(p+3) is "<<*(p+3) <<endl;
return 0;
}