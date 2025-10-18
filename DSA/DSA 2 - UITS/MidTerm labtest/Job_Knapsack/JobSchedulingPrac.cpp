#include <bits/stdc++.h>
using namespace std;

vector<int> jobScheduling(vector<int> &profit, vector<int> &deadline)
{

    int n = deadline.size();
    int cnt = 0;
    int totalProfit = 0;

    vector<pair<int,int>> job;
    for(int i = 0; i<n; i++)
    {
        job.push_back({profit[i], deadline[i]});
    }

    sort(job.begin(), job.end(), greater<pair<int,int>>());

    vector<int> slot(n,0);
    for(int i = 0; i<n; i++)
    {
        int start = min(n, job[i].second)-1;
        for(int j = start; j >= 0; j--)     // right to left
        {
            if(slot[j]==0)
            {
                slot[j]=1;
                cnt++;
                totalProfit = totalProfit + job[i].first;
                break;
            }
        }
    }

    return {cnt,totalProfit};

}

int main()
{

    vector<int> deadline = {2, 1, 2, 1, 1};
    vector<int> profit = {100, 19, 27, 25, 15};
//    vector<int> deadline;
//    vector<int> profit;
//    cout << "Insert 5 pairs (profit+deadline):\n";
//    int a,b;
//    for(int i=0; i<5; i++)
//    {
//        cin >> a >> b;
//        profit.push_back(a);
//        profit.push_back(b);
//        cout<<endl;
//    }
    /*
    2 100
    1 19
    2 27
    1 25
    1 15
    */
    vector<int> ans = jobScheduling(profit, deadline);
    cout<<ans[0]<<endl<<ans[1];

    return 0;
}
