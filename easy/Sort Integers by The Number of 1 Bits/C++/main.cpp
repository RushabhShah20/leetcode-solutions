// Problem: Sort Integers by The Number of 1 Bits
// Link to the problem: https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/
class Solution
{
public:
    vector<int> toBinary(int n)
    {
        vector<int> ans;
        while (n > 0)
        {
            int rem = n % 2;
            ans.push_back(rem);
            n /= 2;
        }
        return ans;
    }
    int setBits(vector<int> &arr)
    {
        int ans = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == 1)
            {
                ans++;
            }
        }
        return ans;
    }
    vector<int> sortByBits(vector<int> &arr)
    {
        vector<int> ans;
        map<int, vector<int>> m;
        for (int i = 0; i < arr.size(); i++)
        {
            vector<int> y = toBinary(arr[i]);
            int x = setBits(y);
            m[x].push_back(arr[i]);
        }
        for (auto &i : m)
        {
            sort(i.second.begin(), i.second.end());
        }
        for (auto i : m)
        {
            for (int j = 0; j < i.second.size(); j++)
            {
                ans.push_back(i.second[j]);
            }
        }
        return ans;
    }
};