//  #include <iostream>
//  using namespace std;


//  int sum (int a, int b){ 
//     return a+b;
//  }
//  int sum(int a , int b , int c){
//     return a + b + c;
//  }
//  int main(){
 
//  cout<<"The sum of 3 and 6 is "<<sum(3 , 6)<<endl;
//  cout<<"The sum of 3 , 5 and 6 is "<<sum(3 , 5 , 6)<<endl;

//  return 0;
//  }


#include <iostream>
using namespace std;


//FUNCTION TO CALCULATE AREA OF RECTANGLE
double area (double length , double width){
    return length *width;
}
//Area of circle
double area (double radius){
return 3.14 * radius * radius;
}
int main(){
cout<<"Area of Rectangle: " << area(5.0 , 4.0)<<endl;
cout<<"Area of circle: " << area(3)<<endl;

return 0;
}