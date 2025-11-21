// Problem: Count Vowel Substrings of a String
// Link to the problem: https://leetcode.com/problems/count-vowel-substrings-of-a-string/
class Solution
{
public:
    int countVowelSubstrings(string word)
    {
        int ans = 0, n = word.size();
        for (int k = 5; k <= n; k++)
        {
            int counta = 0, counte = 0, counti = 0, counto = 0, countu = 0;
            for (int i = 0; i < word.size(); i++)
            {
                if (i >= k)
                {
                    if (word[i] == 'a')
                    {
                        counta++;
                    }
                    else if (word[i] == 'e')
                    {
                        counte++;
                    }
                    else if (word[i] == 'i')
                    {
                        counti++;
                    }
                    else if (word[i] == 'o')
                    {
                        counto++;
                    }
                    else if (word[i] == 'u')
                    {
                        countu++;
                    }
                    if (word[i - k] == 'a')
                    {
                        counta--;
                    }
                    else if (word[i - k] == 'e')
                    {
                        counte--;
                    }
                    else if (word[i - k] == 'i')
                    {
                        counti--;
                    }
                    else if (word[i - k] == 'o')
                    {
                        counto--;
                    }
                    else if (word[i - k] == 'u')
                    {
                        countu--;
                    }
                }
                else
                {
                    if (word[i] == 'a')
                    {
                        counta++;
                    }
                    else if (word[i] == 'e')
                    {
                        counte++;
                    }
                    else if (word[i] == 'i')
                    {
                        counti++;
                    }
                    else if (word[i] == 'o')
                    {
                        counto++;
                    }
                    else if (word[i] == 'u')
                    {
                        countu++;
                    }
                }
                if (i >= k - 1)
                {
                    if (counta > 0 && counte > 0 && counti > 0 && counto > 0 && countu > 0 && counta + counte + counti + counto + countu == k)
                    {
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};