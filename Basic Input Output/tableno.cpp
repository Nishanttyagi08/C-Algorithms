#include <iostream> 
using namespace std;

int main () {
 int table;
int i = 1;

cout<<"Enter table name :" << table <<endl;
cin>>table;

do
{
    cout<< table << "x" << i << " = " << table * i <<std::endl;
  i++;
    } while (i<=10);
    {
        cout<<"Thankyou for using table";
    }

// cout<<"Multiplication Table for" <<num<< ":\n";

// for(int i = 1; i<=10; ++i) {

// cout<< num << " x " << i << " = " <<  num * i << endl;  

// }

return 0;
}
