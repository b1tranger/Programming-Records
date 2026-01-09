#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vect;
    int n;
    for(int i=0; i<10; i++)
    {
        cin >> n;
        vect.push_back(n);
    }
    for( int x : vect)
    {
        cout << x << endl;
    }

    return 0;
}
