#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //    int sum = 0;
        vector<int> ans;

        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                   ans = {i,j}; 
                }
            }
        }
        return ans;
    }
};

int main()
{
    vector<int> nums,ans;
    int target;
    int n;
    cin >> n;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        nums.push_back(x);
    }
    cin >> target;
    Solution obj;
     ans = obj.twoSum(nums, target);
     printf("[%d,%d]",ans[0],ans[1]);
    return 0;
}
