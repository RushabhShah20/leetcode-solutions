// Problem: Destroy Sequential Targets
// Link to the problem: https://leetcode.com/problems/destroy-sequential-targets/
class Solution
{
public:
    int destroyTargets(vector<int> &nums, int space)
    {
        int n = nums.size();
        map<int, vector<int>> x;
        for (int num : nums)
        {
            x[num % space].push_back(num);
        }
        int maxSize = 0;
        for (pair<int, vector<int>> i : x)
        {
            maxSize = max(maxSize, (int)i.second.size());
        }
        vector<int> y;
        for (pair<int, vector<int>> i : x)
        {
            if (i.second.size() == maxSize)
            {
                y.insert(y.end(), i.second.begin(), i.second.end());
            }
        }
        sort(y.begin(), y.end());
        int ans = y.front();
        return ans;
    }
};