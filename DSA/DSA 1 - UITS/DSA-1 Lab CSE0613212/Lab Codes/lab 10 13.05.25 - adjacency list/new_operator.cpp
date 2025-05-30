#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
int *ptr = new int;

*ptr = 12; // dereferencing

cout<<"value of mem location = " <<*ptr <<endl;
cout<<"address of mem location = " <<ptr <<endl;

delete ptr; // freeing up heap memory

cout<<"value of mem location after deletion = " <<*ptr <<endl;
cout<<"address of mem location after deletion = " <<ptr <<endl;

    return 0;
}
