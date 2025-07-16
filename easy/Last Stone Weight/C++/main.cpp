// Problem: Last Stone Weight
// Link to the problem: https://leetcode.com/problems/last-stone-weight/
class Solution
{
public:
    int lastStoneWeight(vector<int> &stones)
    {
        while (stones.size() > 1)
        {
            int x = *max_element(stones.begin(), stones.end());
            stones.erase(max_element(stones.begin(), stones.end()));
            int y = *max_element(stones.begin(), stones.end());
            stones.erase(max_element(stones.begin(), stones.end()));
            if (x == y)
            {
                continue;
            }
            else
            {
                stones.push_back(x - y);
            }
        }
        if (stones.size() == 0)
        {
            return 0;
        }
        else
        {
            return stones[0];
        }
    }
};