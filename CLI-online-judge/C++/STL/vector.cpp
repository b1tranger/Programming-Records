#include <iostream>
#include <vector>
using namespace std;

int main(){

cout << "\n\n################\n\t[ 1 ]\t\n################\n\n";

vector<int> v1 = {1,2,3,4,5};

v1.push_back(6);
//v1.push_back(7);
v1.pop_back();

cout<<"\nChecking manual insertion, push_back(), pop_back()\n";

for(int i = 0; i < v1.size();i++){
    cout << v1[i] << " "; //1 2 3 4 5 
}

// auto it = find(v1.begin(),v1.end(),3);

cout << "\n\n################\n\t[ 2 ]\t\n################\n\n";

vector<int> v2;


cout<<"\nChecking size() of v1\n";
cout << v1.size();
cout<<"\nChecking front(), back() of v1\n";
cout << v1.front() << " " << v1.back();
cout<<"\nChecking empty() of v1\n";
cout << v1.empty();
cout<<"\nUsing clear(), Checking empty() of v1\n";
v1.clear();
cout << v1.empty();




    return 0;
}