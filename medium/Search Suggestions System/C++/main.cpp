// Problem: Search Suggestions System
// Link to the problem: https://leetcode.com/problems/search-suggestions-system/
class Solution
{
public:
    vector<vector<string>> suggestedProducts(vector<string> &products, string searchWord)
    {
        set<string> s(products.begin(), products.end());
        vector<vector<string>> ans(searchWord.size());
        for (int i = 0; i < searchWord.size(); i++)
        {
            string x = searchWord.substr(0, i + 1);
            int count = 0;
            for (string j : s)
            {
                if (count == 3)
                {
                    break;
                }
                if (j.find(x) == 0)
                {
                    count++;
                    ans[i].push_back(j);
                }
            }
        }
        return ans;
    }
};