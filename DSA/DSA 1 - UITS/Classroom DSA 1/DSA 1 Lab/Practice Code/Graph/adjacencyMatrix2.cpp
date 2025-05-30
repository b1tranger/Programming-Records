#include<iostream>
using namespace std;
int main(){
int n,e;
cin>>n>>e;
int adjMat[n][n]={0};
while(e--){
    int a,b;
    cin>>a>>b;
    adjMat[a][b]= 1;
    adjMat[b][a]=1;

}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<adjMat[i][j]<<" ";
    }
    cout<<endl;
}

return 0;
}
