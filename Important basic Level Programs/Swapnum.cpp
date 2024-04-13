//Swap Two Number without using the third variable

#include <iostream>
using namespace std;

int main(){
int a , b;

std::cout << "Enter Two Number to Swap\n";
std::cin >> a >> b;

std::cout<< "Before Swapping a = "<< a <<" , b = "<< b <<std::endl;


//Logic
a = a + b;
b = a - b;
a = a - b;

std::cout << "After Swapping a = " << a << " , b = "<< b <<endl;

return 0;
}


