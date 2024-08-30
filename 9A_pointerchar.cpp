//Mukesh Rothe  //23070123089  //EXP9
#include <iostream>
using namespace std;

int main() {
    char b = 's';
    char*ptr = &b;
   
    cout<<"The value pointed by *ptr is  "<<b;
    cout<<"\nThe value in b is " <<b;
    cout<<"\nValue of pointer variable *ptr is  "<<(void*) ptr;
    cout<<"\nAddress variable of b is   "<<(void*)&b;
    ptr++;
    cout<<"\nIncrement value of ptr is "<<(void*)ptr;

    return 0;
}
