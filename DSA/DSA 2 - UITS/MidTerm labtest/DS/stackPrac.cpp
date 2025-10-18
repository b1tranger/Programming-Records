#include <bits/stdc++.h>
using namespace std;

int main()
{

    stack<int> st;
    int n;
    for(int i=0; i<10; i++)
    {
        cin >> n;
        st.push(n);
    }
//    for( int x : que)
//    {
//        cout << x << endl;
//    }

    cout << "\n\nTop is: " << st.top();
    cout << "\n\nCheck Empty: " << st.empty() << endl;
    for(int i=0; i<10; i++)
    {
        st.pop();
    }
    cout << "\n\nCheck Empty: " << st.empty() << endl;

    return 0;
}
