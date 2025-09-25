// Problem: Minimum Index Sum of Two Lists
// Link to the problem: https://leetcode.com/problems/minimum-index-sum-of-two-lists/
class Solution
{
public:
    vector<string> findRestaurant(vector<string> &list1, vector<string> &list2)
    {
        map<string, vector<int>> x;
        for (int i = 0; i < list1.size(); i++)
        {
            x[list1[i]].push_back(i);
        }
        for (int i = 0; i < list2.size(); i++)
        {
            x[list2[i]].push_back(i);
        }
        map<int, vector<string>> y;
        for (pair<string, vector<int>> i : x)
        {
            int sum = 0;
            if (i.second.size() > 1)
            {
                for (int j : i.second)
                {
                    sum += j;
                }
                y[sum].push_back(i.first);
            }
        }
        int minIndexSum = INT_MAX;
        for (pair<int, vector<string>> i : y)
        {
            minIndexSum = min(minIndexSum, i.first);
        }
        vector<string> ans = y[minIndexSum];
        return ans;
    }
};