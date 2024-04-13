#include <iostream>
using namespace std;

int main (){
    int num;
    cout<<"Enter the Number to check wheather its odd or even"<<std::endl;
    cin>>num;

    if(num/2) {
        cout<<"The " << num << " is Even number" <<endl;
    }
    else {
        cout<<"The " << num << " is odd number "<<endl;
    }
    return 0;
}

