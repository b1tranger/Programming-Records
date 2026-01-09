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

cout << "\n\nTASK 3: Delete an element\n\n";

cout << "Input position to delete (0,1,2,...,n):\n";
cin >> pos;
for(int i = pos+1; i <n;i++){ //pos+1
    b[i-1]=b[i]; // shifting leftward

}
for(int i = 0; i <n-1;i++){ //n-1
    cout << b[i]<< " ";
}




return 0;

}
