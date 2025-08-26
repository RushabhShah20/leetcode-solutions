// Problem: Pairs of Songs With Total Durations Divisible by 60
// Link to the problem: https://leetcode.com/problems/pairs-of-songs-with-total-durations-divisible-by-60/
class Solution
{
public:
    int numPairsDivisibleBy60(vector<int> &time)
    {
        int ans = 0;
        vector<long long> freq(60, 0);
        for (int i = 0; i < time.size(); i++)
        {
            freq[time[i] % 60]++;
        }
        ans += (freq[0] * (freq[0] - 1)) / 2;
        ans += (freq[30] * (freq[30] - 1)) / 2;
        for (int i = 1; i < freq.size() / 2; i++)
        {
            ans += freq[i] * freq[60 - i];
        }
        return ans;
    }
};