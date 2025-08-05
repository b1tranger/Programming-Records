#include <iostream>
#include <vector>
using namespace std;

int main(){
vector<int> v1 = {1,2,3,4,5};

v1.push_back(6);
//v1.push_back(7);
v1.pop_back();

for(int i = 0; i < v1.size();i++){
    cout << v1[i] << " "; //1 2 3 4 5 
}

auto it = find(v1.begin(),v1.end(),3);


    return 0;
}