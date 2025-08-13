// Problem: Shifting Letters
// Link to the problem: https://leetcode.com/problems/shifting-letters/
class Solution
{
public:
    string shiftingLetters(string s, vector<int> &shifts)
    {
        vector<unsigned long long> cummShifts(shifts.size());
        cummShifts[shifts.size() - 1] = shifts[shifts.size() - 1];
        for (int i = shifts.size() - 2; i >= 0; i--)
        {
            cummShifts[i] = (shifts[i] + cummShifts[i + 1]);
        }
        for (int i = 0; i < s.size(); i++)
        {
            unsigned long long x = cummShifts[i] % 26;
            int y = x;
            s[i] = ((((s[i] - 'a') + y) % 26) + 'a');
        }
        return s;
    }
};