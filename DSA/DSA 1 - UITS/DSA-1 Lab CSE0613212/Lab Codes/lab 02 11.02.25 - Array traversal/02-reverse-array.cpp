#include <iostream>
using namespace std;

int main(){

int n;
cin >> n;
int a[n];

for(int i = 0; i <n;i++){
    cin >> a[i];
}
cout << "\n\nusing Two Pointers Technique we reverse the array\n\n";

int i = 0, j = n-1;
while(i<j){ //included i=j case;
swap(a[i],a[j]);
i++,j--; //IMPORTANT to update positions
}
for(int i = 0; i <n;i++){
    cout << a[i]<< " ";
}
return 0;
}


















