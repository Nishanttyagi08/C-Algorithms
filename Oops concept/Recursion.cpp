// #include <iostream>
// using namespace std;

// int main(){
// int num , i , fact = 1;
// cout<<"Enter the number "<<endl;
// cin>>num;

// if (num <=1){
//     cout<<"The number should be more than zero";
// }
// else
// {
// for ( i = 1; i <=num; i++){
//     fact = fact*i;
// }
// cout<<"The Factorial of "<< num << " are: "<<fact<<endl;
    
// }

// return 0;
// }

#include <iostream>
using namespace std;


int factorial(int n){
    if(n <= 1){
        return 1;
    }
    return n * factorial(n-1);
}
int main(){
int a;
cout<<"Enter a number" <<endl;
cin>>a;
cout<<"The factorial "<<a << " is "<<factorial(a)<<endl;
cout<<"this is fibonacci"
return 0;
}

