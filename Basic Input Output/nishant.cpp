#include <iostream>
using namespace std;
int main ()
{

int i , j ;
    
    for (i=0; i<=5; i++)
    {
        for (j=0; j<=i; j++)
        {
          std::cout << "*";

        }
    
        std::cout << "\n";

        }
    
    return 0;

}