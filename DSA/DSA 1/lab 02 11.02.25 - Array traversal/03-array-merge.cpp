#include <iostream>
using namespace std;

int main(){

int n,m;
cin >> n>>m;
int a[n],b[m];

for(int i = 0; i < n; i++){
    cin >> a[i];
}
cout << "\n break \n";
for(int i = 0; i < m; i++){
    cin >> b[i];
}
int c[n+m];
for(int i = 0; i < n; i++){
    c[i]=a[i];
}
int j = n;// n = size of first array which needs to be tracked to continue from the first free position of the 3rd array
for(int i = 0; i < m; i++){
    c[j]=b[i];//c[j]
    j++;
}
for(int i = 0; i < n+m; i++)
{
cout <<c[i] <<" ";
}

return 0;
}


















