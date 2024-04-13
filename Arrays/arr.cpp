#include <iostream>
using namespace std;

int main(){
int marks[4] = {23 , 34 , 45 , 45};
cout<<marks[0]<<endl;
cout<<marks[1]<<endl;
cout<<marks[2]<<endl;
cout<<marks[3]<<endl;
cout<<"THis is for loop"<<endl;
for ( int i = 0; i < 4; i++)
{
    cout<<"The marks of " << i << " is " << marks[i]<< endl;
}

// cout<<"This is while loop"<<endl;
// int i = 0;
// while( i < 4){
// cout<<marks[i]<<endl;
// i++;
// }

cout<<"This is do while loop"<<endl;
int i = 0;
do {
 cout<<"The marks of " << i << " is " << marks[i]<< endl;
i++;
}
while( i < 4);

return 0;
}