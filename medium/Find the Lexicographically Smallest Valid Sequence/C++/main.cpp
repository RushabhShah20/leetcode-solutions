// Problem: Find the Lexicographically Smallest Valid Sequence
// Link to the problem: https://leetcode.com/problems/find-the-lexicographically-smallest-valid-sequence/
class Solution
{
public:
    vector<int> validSequence(string word1, string word2)
    {
        const int n = word1.size(), m = word2.size();
        vector<int> a(m, -1);
        int j = m - 1;
        for (int i = n - 1; i >= 0; --i)
        {
            if (j >= 0 && word1[i] == word2[j])
            {
                a[j] = i;
                j -= 1;
            }
        }
        vector<int> b;
        int k = 0;
        j = 0;
        for (int i = 0; i < n; ++i)
        {
            if (j == m)
            {
                break;
            }
            if (word1[i] == word2[j] || (k == 0 && (j == m - 1 || i < a[j + 1])))
            {
                k += (word1[i] != word2[j] ? 1 : 0);
                b.push_back(i);
                j += 1;
            }
        }
        const vector<int> ans = j == m ? b : vector<int>();
        return ans;
    }
};