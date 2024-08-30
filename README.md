//Mukesh Rothe  23070123089  EXP9
# AIM
To use pointers for accessing elements of arrays and finding the addresses of different data types.

## Software Used
VS Code

## Problem Statements
1. Write a C++ program to initialize pointers of different data types and print their values.
2. Write a C++ program to access elements of an array using pointers.
3. Write a C++ program to access elements of an array without using pointer variables.

## Theory
Pointers are symbolic representations of memory addresses. They enable programs to simulate call-by-reference and to create and manipulate dynamic data structures. One of the primary uses of pointers is to iterate over elements in arrays or other data structures.

## Program Codes

```javascript
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
```
```javascript
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
```
```javascript
//Mukesh Rothe  //23070123089  //EXP9
#include <iostream>
using namespace std;
int main()
{
    float a = 'A';
    float *ptr;
    ptr=&a;
     cout<< "The value pointed by *ptr is: "<<*ptr << endl;
    cout << "The value in b is: " <<a << endl;
    cout << "The value in pointer variable ptr is: "<<(void*)ptr << endl;

    cout << "The address of variable b is: "<<&a << endl;
    ptr ++;
    cout<< "After increment the value in pointer variable ptr is: " << (void*)ptr << endl;
}
```
```javascript
//Mukesh Rothe  //23070123089  //EXP9
#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr;
    ptr=&a;
   cout<< "The value pointed by *ptr is: "<<*ptr << endl;
    cout << "The value in b is: " <<a << endl;
    cout << "The value in pointer variable ptr is: "<<(void*)ptr << endl;

    cout << "The address of variable b is: "<<&a << endl;
    ptr ++;
    cout<< "After increment the value in pointer variable ptr is: " << (void*)ptr << endl;
}
```
```javascript
//Mukesh Rothe 23070123089 EXP9
#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    int a[5] = { 1,2,4,8,9};
    ptr = &a[0];
    int i;
    for(i=0 ; i<5 ; i++)
    {
        cout << "Element "<< i+1 <<" "<<"="<<" "<<*(a+i) << endl;
        ptr ++;

    }
}
```
## Output
Character Pointer-

![Screenshot 2024-08-30 225619](https://github.com/user-attachments/assets/7e6f4f08-2500-4b12-8d0a-16a62205b042)

Pointer Access Array Elements-

![Screenshot 2024-08-30 225644](https://github.com/user-attachments/assets/d45268ea-7722-45dd-8158-66385f92c5ff)

Float Pointer-

![Screenshot 2024-08-30 225853](https://github.com/user-attachments/assets/725f4374-b8fc-44cb-81f1-5bf2463197c1)

Integer Pointer-

![Screenshot 2024-08-30 225935](https://github.com/user-attachments/assets/97b5a273-a76e-46fd-b6df-f0f874cbc11b)

No Pointer-

![Screenshot 2024-08-30 230113](https://github.com/user-attachments/assets/3be8ccbc-ffef-4c4c-adb4-81df1915cf9c)

## Conclusion
- We learned how to initialize pointers of various data types.
- We explored how to access array elements using pointers.
- We also examined how to access array elements without using pointer variables.
