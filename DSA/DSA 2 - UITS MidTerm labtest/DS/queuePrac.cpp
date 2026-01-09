#include <bits/stdc++.h>
using namespace std;

int main()
{

    queue<int> que;
    int n;
    for(int i=0; i<10; i++)
    {
        cin >> n;
        que.push(n);
    }
//    for( int x : que)
//    {
//        cout << x << endl;
//    }

    cout << "\n\nFront is: " << que.front();
    cout << "\n\nBack is: " << que.back();
    for(int i=0; i<10; i++)
    {
        que.pop();
    }
    cout << "\n\nCheck Empty: " << que.empty() << endl;

    return 0;
}
