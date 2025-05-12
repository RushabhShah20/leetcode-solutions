// Problem: Find Smallest Letter Greater Than Target
// Link to the problem: https://leetcode.com/problems/find-smallest-letter-greater-than-target/
class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {
        char ans;
        bool x = false;
        for (int i = 0; i < letters.size(); i++)
        {
            if (letters[i] > target)
            {
                x = true;
                ans = letters[i];
                break;
            }
        }
        if (x == true)
        {
            return ans;
        }
        else
        {
            return letters[0];
        }
    }
};