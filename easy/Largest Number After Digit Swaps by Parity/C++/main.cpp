// Problem: Largest Number After Digit Swaps by Parity
// Link to the problem: https://leetcode.com/problems/largest-number-after-digit-swaps-by-parity/
class Solution
{
public:
    int largestInteger(int num)
    {
        string x = to_string(num);
        vector<int> even, odd;
        vector<bool> pos(x.size(), false);
        for (int i = 0; i < x.size(); i++)
        {
            if ((x[i] - '0') % 2 == 0)
            {
                even.push_back(x[i] - '0');
                pos[i] = true;
            }
            else
            {
                odd.push_back(x[i] - '0');
            }
        }
        sort(even.begin(), even.end(), greater<int>());
        sort(odd.begin(), odd.end(), greater<int>());
        string y = "";
        for (int i = 0; i < x.size(); i++)
        {
            if (pos[i] == true)
            {
                y.append(1, even.front() + '0');
                even.erase(even.begin());
            }
            else
            {
                y.append(1, odd.front() + '0');
                odd.erase(odd.begin());
            }
        }
        int ans = stoi(y);
        return ans;
    }
};