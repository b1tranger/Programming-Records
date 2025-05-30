#include <iostream>
using namespace std;

int main(){

    cout << "\n\nTASK 1: Array Traversing\n\n";

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


cout << "\n\nTASK 3: Delete an element\n\n";

cout << "Input position to delete (0,1,2,...,n):\n";
cin >> pos;
for(int i = pos+1; i <n;i++){ //pos+1
    b[i-1]=b[i]; // shifting leftward

}
for(int i = 0; i <n-1;i++){ //n-1
    cout << b[i]<< " ";
}


cout << "\n\nTASK 4: Reversing the Array\n\n";




return 0;
}


















