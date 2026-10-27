// Problem: Number of Valid Words in a Sentence
// Link to the problem: https://leetcode.com/problems/number-of-valid-words-in-a-sentence/
class Solution
{
public:
    int countValidWords(string sentence)
    {
        const int n = sentence.size();
        vector<string> a;
        string t;
        for (int i = 0; i < n; i++)
        {
            if (sentence[i] == ' ')
            {
                if (!t.empty())
                {
                    a.push_back(t);
                }
                t.clear();
            }
            else
            {
                t.append(1, sentence[i]);
            }
        }
        if (!t.empty())
        {
            a.push_back(t);
        }
        const int m = a.size();
        int ans = 0;
        for (int i = 0; i < m; i++)
        {
            const int k = a[i].size();
            vector<int> x, y;
            bool z = true;
            for (int j = 0; j < k; j++)
            {
                if (a[i][j] == '-')
                {
                    x.push_back(j);
                }
                if (a[i][j] == '!' || a[i][j] == '.' || a[i][j] == ',')
                {
                    y.push_back(j);
                }
                if (isdigit(a[i][j]))
                {
                    z = false;
                }
            }
            if (z && (x.empty() || (x.size() == 1 && x[0] > 0 && x[0] < k - 1 && islower(a[i][x[0] - 1]) && islower(a[i][x[0] + 1]))) && (y.empty() || (y.size() == 1 && y[0] == k - 1)))
            {
                ans++;
            }
        }
        return ans;
    }
};