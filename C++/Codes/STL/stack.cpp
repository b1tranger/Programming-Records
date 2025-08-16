#include <iostream>
#include <stack>
using namespace std;

int main()
{

    cout << "\n\n################\n\t[ 1 ]\t\n################\n\n";

    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    cout << "\nChecking empty()\n";
    cout << st.empty() << endl;
        cout << "\nChecking size()\n";
    cout << st.size() << endl;
    cout << "\nPrinting Stack top() while using pop()\n";
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    cout << "\nChecking empty()\n";
    cout << st.empty();

    return 0;
}