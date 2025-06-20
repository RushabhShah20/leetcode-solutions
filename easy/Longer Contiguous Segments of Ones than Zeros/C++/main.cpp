// Problem: Longer Contiguous Segments of Ones than Zeros
// Link to the problem: https://leetcode.com/problems/longer-contiguous-segments-of-ones-than-zeros/
class Solution
{
public:
    bool checkZeroOnes(string s)
    {
        int maxCountOne = 0, countOne = 0, maxCountZero = 0, countZero = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                countOne++;
                maxCountOne = max(countOne, maxCountOne);
                countZero = 0;
            }
            else
            {
                countZero++;
                maxCountZero = max(countZero, maxCountZero);
                countOne = 0;
            }
        }
        return maxCountOne > maxCountZero;
    }
};