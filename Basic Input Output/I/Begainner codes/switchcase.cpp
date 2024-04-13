#include <iostream>
using namespace std;
int main () {
char grade;

cout<<"Enter your grade (A , B , C , D , E )"<<endl;
cin>>grade;

switch (grade) {
    case 'A':
    cout<<"Excellent...!!"<< endl;
    break;
    case 'B':
    cout<<"Good...!!" <<endl;
    break;
    case 'C':
    cout<<"Satisfactory...!!"<< endl;
    break;
    case 'D':
    cout<<"Needs Improvement...!!"<<endl;
    break;
    case 'E':
    cout<<"POOR"<<endl;
    break;
    default :
        cout<<"Enter a valid grade";
}

return 0;

}