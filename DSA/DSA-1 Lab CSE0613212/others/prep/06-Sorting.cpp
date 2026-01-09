#include <bits/stdc++.h>
using namespace std;

int main(){
cout<<"Enter 1D Array size:\n> ";
int n;
cin >> n;
int ar[n];
cout<<"\n\nEnter Array:\n>";
for(int i=0;i<n;i++){
    cin>> ar[i];
}
cout<<"\n\nEntered Array:\n>";
for(int i=0;i<n;i++){
    cout<< ar[i] <<" ";
}


return 0;

}
