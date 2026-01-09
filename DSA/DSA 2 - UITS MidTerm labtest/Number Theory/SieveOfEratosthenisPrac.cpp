#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n = 100;
    vector<int> pr(n + 1, 1);   // All indices marked as prime initially
    pr[0] = pr[1] = 0;          // 0 and 1 are not prime

    // Mark even numbers > 2 as not prime
    for (int i = 4; i <= n; i += 2)
        pr[i] = 0;

    // Process odd numbers
    for (int i = 3; i * i <= n; i += 2)
    {
        if (pr[i] == 1)
        {
            for (int j = i * i; j <= n; j += i)
                pr[j] = 0;      // Mark multiples of i
        }
    }

    // Print primes
    for (int i = 2; i <= n; i++)
    {
        if (pr[i] == 1)
            cout << i << " ";
    }

    return 0;
}
