#include <bits/stdc++.h>
using namespace std;

int main()
{

    map<int, string> m1;

    map<int, string> m2 = {{1, "first"},{2, "second"},{3, "third"}};

    map<char, int> m3;
    string s = "HelloWorldInfinity";


    for(int i = 0; i < s.size(); i++)
    {
        m3[s[i]]++;
    }
    cout << "\tm3:\n";
//    for(int i = 0; i < s.size(); i++)
    for(auto i=m3.begin(); i!=m3.end(); i++)
    {
//        cout << s[i] << " -- " << m3[s[i]] << endl;
        cout<<i->first<<": "<<i->second<<endl;
    }



    return 0;
}
