#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
cin >> n;
int a[n];
int b[n];
cout << "\n\n (using i = 0; i) <n\n\n";
for(int i = 0; i <n;i++){
    cin >> a[i];
    b[i]=a[i];
}
cout << endl;
for(int i = 0; i <n;i++){
    cout << a[i]<< " ";
}
cout << "\n\n (This will be reused) \n\n";

cout << "\n\nTASK 2: Shifting and Replacing an element\n\n";

int pos, val;
cout << "input position and value to replace (0,1,2,...,n):\n";
cin >> pos >> val;
for(int i = n-1; i>=pos;i--){
   a[i+1]=a[i]; //shifting rightward
   // value goes out of bounds but does not show error??
}
a[pos]=val;
for(int i = 0; i <n+1;i++){ //n+1
    cout << a[i]<< " ";
}




return 0;

}
