// Problem: Can Make Arithmetic Progression From Sequence
// Link to the problem: https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/
class Solution
{
public:
    bool canMakeArithmeticProgression(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        for (int i = 1; i < arr.size() - 1; i++)
        {
            if ((arr[i] - arr[i - 1]) != (arr[i + 1] - arr[i]))
            {
                return false;
            }
        }
        return true;
    }
};