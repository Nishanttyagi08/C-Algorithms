 #include <iostream>
 #include <string>
 using namespace std;
 
class Car {
    public:
    string brand;
    string model;
    int year;
};
 int main(){
 Car carObj1;

 carObj1.brand = "BMW";
 carObj1.model = "X5";
 carObj1.year = 2010;

 Car carObj2;
 carObj2.brand = "FORD";
 carObj2.model = "MUSTANG";
 carObj2.year = 2015;

 cout<< carObj1.brand << " "<< carObj1.model << " "<< carObj1.year <<endl;
 cout<< carObj2.brand << " "<< carObj2.model << " "<< carObj2.year <<endl;

 return 0;
 }