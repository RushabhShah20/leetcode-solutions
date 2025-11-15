// Problem: Maximum Population Year
// Link to the problem: https://leetcode.com/problems/maximum-population-year/
class Solution
{
public:
    int maximumPopulation(vector<vector<int>> &logs)
    {
        vector<int> freq(101, 0);
        for (vector<int> log : logs)
        {
            for (int i = log[0]; i < log[1]; i++)
            {
                freq[i - 1950]++;
            }
        }
        int ans = max_element(freq.begin(), freq.end()) - freq.begin() + 1950;
        return ans;
    }
};