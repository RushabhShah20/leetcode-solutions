// Problem: Count Largest Group
// Link to the problem: https://leetcode.com/problems/count-largest-group/
class Solution
{
public:
    int sumofDigits(int n)
    {
        int sum = 0;
        while (n > 0)
        {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
    int countLargestGroup(int n)
    {
        map<int, vector<int>> m;
        for (int i = 1; i <= n; i++)
        {
            int x = sumofDigits(i);
            m[x].push_back(i);
        }
        int maxFreq = 0;
        for (auto i : m)
        {
            if (maxFreq < i.second.size())
            {
                maxFreq = i.second.size();
            }
        }
        vector<int> ans;
        for (auto i : m)
        {
            if (i.second.size() == maxFreq)
            {
                ans.push_back(i.first);
            }
        }
        return ans.size();
    }
};