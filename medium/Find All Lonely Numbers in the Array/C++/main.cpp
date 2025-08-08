// Problem: Find All Lonely Numbers in the Array
// Link to the problem: https://leetcode.com/problems/find-all-lonely-numbers-in-the-array/
class Solution
{
public:
    vector<int> findLonely(vector<int> &nums)
    {
        vector<int> ans;
        set<int> s(nums.begin(), nums.end());
        map<int, int> x;
        for (int i = 0; i < nums.size(); i++)
        {
            x[nums[i]]++;
        }
        map<int, vector<int>> y;
        for (auto i : x)
        {
            y[i.second].push_back(i.first);
        }
        vector<int> a = y[1];
        for (int i = 0; i < a.size(); i++)
        {
            auto b = s.find(a[i]);
            int x = ((b == prev(s.end(), 1)) ? (-2) : (*next(b, 1)));
            int y = ((b == s.begin()) ? (-2) : (*prev(b, 1)));
            if (x != (a[i] + 1))
            {
                if (y != (a[i] - 1))
                {
                    ans.push_back(a[i]);
                }
            }
        }
        return ans;
    }
};