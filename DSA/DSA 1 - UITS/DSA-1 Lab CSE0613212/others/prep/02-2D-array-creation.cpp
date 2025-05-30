#include <bits/stdc++.h>
using namespace std;

int main(){
cout << "We need to create a 2D array first.\nWhat do you want its column size to be?\n> ";
int col,row;
cin >> col;
cout << "\nand row size?\n> ";
cin >> row;
cout << "\nthe created array is:\n";
int arr[row][col];
printf("arr[%d][%d]\n\n",row,col);
cout << "enter values into the 2D array:\n(enter after each entry)\n\n";
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cin >> arr[i][j];
    }
}
cout << "\n\nthe array you entered:\n(shown in mat format)\n\n";
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout << arr[i][j] <<" ";
    }
    cout << endl;
}
cout <<endl;
return 0;

}
