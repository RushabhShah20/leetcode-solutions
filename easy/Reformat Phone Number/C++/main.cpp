// Problem: Reformat Phone Number
// Link to the problem: https://leetcode.com/problems/reformat-phone-number/
class Solution
{
public:
    string reformatNumber(string number)
    {
        string ans;
        int count = 0;
        for (char c : number)
        {
            if (isdigit(c))
            {
                ans.append(1, c);
                count++;
                if (count % 3 == 0)
                {
                    ans.append(1, '-');
                }
            }
        }
        if (count % 3 == 0)
        {
            ans.erase(ans.size() - 1, 1);
        }
        else if (count % 3 == 1)
        {
            ans.erase(ans.size() - 2, 1);
            ans.insert(ans.size() - 2, 1, '-');
        }
        return ans;
    }
};