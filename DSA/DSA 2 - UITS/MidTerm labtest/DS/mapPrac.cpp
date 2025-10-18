#include <bits/stdc++.h>
using namespace std;

int main()
{

    map<int, string> m1;
    cout<<"\n\n\n";
    map<int, string> m2 = {{1, "first"},{2, "second"},{3, "third"}};

    cout << "m2:\n\n";
    for(auto i : m2)
    {
        cout<< "\t" << i.first<<": "<<i.second<<endl;
    }

    cout<<"\n\n\n";
    map<char, int> m3;
    string s = "HelloWorldInfinity";


    for(int i = 0; i < s.size(); i++)
    {
        m3[s[i]]++;
    }
    cout << "m3:\n\n";
//    for(int i = 0; i < s.size(); i++)
//        for(auto i=m3.begin(); i!=m3.end(); i++)
    for(auto i : m3)
    {
//        cout << s[i] << " -- " << m3[s[i]] << endl;
//        cout<<i->first<<": "<<i->second<<endl;
        cout<< "\t" <<i.first<<": "<<i.second<<endl;
    }



    return 0;
}
