// Problem: Reduction Operations to Make the Array Elements Equal
// Link to the problem: https://leetcode.com/problems/reduction-operations-to-make-the-array-elements-equal/
class Solution
{
public:
    int reductionOperations(vector<int> &nums)
    {
        int ans = 0;
        map<int, int> x;
        for (int num : nums)
        {
            x[num]++;
        }
        vector<pair<int, int>> a;
        for (pair<int, int> i : x)
        {
            a.push_back({i.first, i.second});
        }
        if (a.size() == 1)
        {
            return 0;
        }
        vector<int> cumFreq(a.size() - 1);
        cumFreq[cumFreq.size() - 1] = a[a.size() - 1].second;
        for (int i = cumFreq.size() - 2; i >= 0; i--)
        {
            cumFreq[i] = cumFreq[i + 1] + a[i + 1].second;
        }
        for (int i : cumFreq)
        {
            ans += i;
        }
        return ans;
    }
};