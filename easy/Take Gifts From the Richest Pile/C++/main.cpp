// Problem: Take Gifts From the Richest Pile
// Link to the problem: https://leetcode.com/problems/take-gifts-from-the-richest-pile/
class Solution
{
public:
    long long pickGifts(vector<int> &gifts, int k)
    {
        long long ans = 0;
        for (int i = 0; i < k; i++)
        {
            gifts[(max_element(gifts.begin(), gifts.end()) - gifts.begin())] = static_cast<long long>(sqrt(gifts[(max_element(gifts.begin(), gifts.end()) - gifts.begin())]));
        }
        for (int i = 0; i < gifts.size(); i++)
        {
            ans += gifts[i];
        }
        return ans;
    }
};