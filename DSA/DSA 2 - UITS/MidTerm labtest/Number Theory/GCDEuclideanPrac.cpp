#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n1, n2, gcd;
    cin >> n1 >> n2;
    while(n2!=0)
        // imagine num2 is min?
        // The Euclidean algorithm (which your code uses) automatically finds the GCD efficiently, regardless of which number is smaller.
        // The Euclidean algorithm repeats until the remainder becomes zero.That remainder is stored in n2 (since n2 = n1 % n2).
    {
        int temp = n1%n2;
        n1 = n2;
        n2 = temp;
    }
    gcd = n1;
    cout << "\n\tgcd: " << gcd << endl;

    return 0;
}
