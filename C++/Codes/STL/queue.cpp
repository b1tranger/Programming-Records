#include <iostream>
#include <queue>
using namespace std;

int main()
{

    cout << "\n\n################\n\t[ 1 ]\t\n################\n\n";

    queue<int> que;
    que.push(10);
    que.push(20);
    que.push(30);
    que.push(40);
    que.push(50);

    cout << "\nChecking empty()\n";
    cout << que.empty() << endl;
    cout << "\nChecking size()\n";
    cout << que.size() << endl;
    cout << "\nChecking front()\n";
    cout << que.front() << endl;
    cout << "\nChecking back()\n";
    cout << que.back() << endl;
    cout << "\nPrinting Stack front() while using pop()\n";
    while (!que.empty())
    {
        cout << que.front() << endl;
        que.pop();
    }

    cout << "\nChecking empty()\n";
    cout << que.empty();

    return 0;
}