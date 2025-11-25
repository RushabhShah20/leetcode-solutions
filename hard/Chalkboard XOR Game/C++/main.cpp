// Problem: Chalkboard XOR Game
// Link to the problem: https://leetcode.com/problems/chalkboard-xor-game/
class Solution
{
public:
    bool xorGame(vector<int> &nums)
    {
        int total = 0, n = nums.size();
        for (const int num : nums)
        {
            total ^= num;
        }
        const bool a = total == 0, b = n % 2 == 0;
        const bool ans = a || b;
        return ans;
    }
};