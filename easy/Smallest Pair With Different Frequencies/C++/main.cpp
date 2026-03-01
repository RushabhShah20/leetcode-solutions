// Problem: Smallest Pair With Different Frequencies
// Link to the problem: https://leetcode.com/problems/smallest-pair-with-different-frequencies/
class Solution
{
public:
    vector<int> minDistinctFreqPair(vector<int> &nums)
    {
        map<int, int> m;
        for (const int num : nums)
        {
            m[num]++;
        }
        for (map<int, int>::iterator it1 = m.begin(); it1 != m.end(); ++it1)
        {
            int x = it1->first;
            const int freqX = it1->second;
            map<int, int>::iterator it2 = it1;
            ++it2;
            for (; it2 != m.end(); ++it2)
            {
                int y = it2->first;
                const int freqY = it2->second;
                if (freqX != freqY)
                {
                    return {x, y};
                }
            }
        }
        return {-1, -1};
    }
};