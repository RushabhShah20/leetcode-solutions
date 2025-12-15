// Problem: String Compression III
// Link to the problem: https://leetcode.com/problems/string-compression-iii/
class Solution
{
public:
    string compressedString(string word)
    {
        int count = 1, n = word.size();
        vector<pair<char, int>> a;
        for (int i = 1; i < n; i++)
        {
            if (word[i] == word[i - 1])
            {
                count++;
            }
            else
            {
                a.push_back({word[i - 1], count});
                count = 1;
            }
        }
        a.push_back({word[n - 1], count});
        string ans;
        for (int i = 0; i < a.size(); i++)
        {
            while ((a[i].second / 9) > 0)
            {
                ans.append(1, '9');
                ans.append(1, a[i].first);
                a[i].second -= 9;
            }
            if (a[i].second > 0)
            {
                char c = '0' + a[i].second;
                ans.append(1, c);
                ans.append(1, a[i].first);
            }
        }
        return ans;
    }
};