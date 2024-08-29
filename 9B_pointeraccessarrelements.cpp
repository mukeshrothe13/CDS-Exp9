//Mukesh Rothe  //23070123089  //EXP9
#include <iostream>
using namespace std;
int main() {
   
    int arr[5] = {10, 20, 30, 40, 50};
    int* ptr;
    ptr=&arr[0];
    cout<<"Accesing array elements using pointer-\n";
    for(int i=0;i<5;i++)
    {
    cout <<"Element "<<i<<"- " << *ptr << endl;
    ptr++;
    }
    return 0;
}
