#include <iostream>
#include <map>

using namespace std;
int main()
{

    cout << "\n\n################\n\t[ 1 ]\t\n################\n\n";

    cout << "\nManual insertion\n";

    map<int, string> map01;
    map01[1] = "abc",
    map01[5] = "cdc";
    map01[3] = "acd";
    map01.insert({4, "afg"});

    cout << "\n#printing as:\nmap<int, string> :: iterator it;\n\n";

    map<int, string>::iterator it;
    for (it = map01.begin(); it != map01.end(); ++it)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }

    cout << "\n\n################\n\t[ 2 ]\t\n################\n\n";

    cout << "\nString insertion\n";

    map<char, int> mp;
    string s = "Some special characters: !@#$%^&*";
    cout<< "\nInput String:\n" << s << "\n\n";
    int i;
    // cout << mp['#'] << endl;
    
    for (i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    // map<char,int> ::iterator it;
    cout << "Frequency of corresponding character" << endl;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << ": " << it->second << endl;
    }
}