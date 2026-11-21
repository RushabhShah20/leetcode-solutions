// Problem: Assign Umbrella on Rainy Days
// Link to the problem: https://leetcode.com/problems/assign-umbrella-on-rainy-days/
class Solution
{
public:
    vector<string> assignUmbrella(vector<int> &rain)
    {
        const int n = rain.size();
        vector<string> ans(n, "None");
        int a = 0, b = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (rain[i] == 1)
            {
                if (rain[i + 1] == 1)
                {
                    if (a <= b)
                    {
                        ans[i] = "Alice";
                        a++;
                    }
                    else
                    {
                        ans[i] = "Bob";
                        b++;
                    }
                }
                else
                {
                    ans[i] = "Bob";
                    b++;
                }
            }
        }
        if (rain[n - 1] == 1)
        {
            ans[n - 1] = "Bob";
        }
        return ans;
    }
};