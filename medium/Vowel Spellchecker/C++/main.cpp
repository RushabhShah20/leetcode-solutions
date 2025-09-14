// Problem: Vowel Spellchecker
// Link to the problem: https://leetcode.com/problems/vowel-spellchecker/
class Solution
{
public:
    string toLower(const string &s)
    {
        string ans = s;
        for (char &c : ans)
        {
            c = tolower(c);
        }
        return ans;
    }
    string getVowelPattern(const string &s)
    {
        string ans = s;
        for (char &c : ans)
        {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' | c == 'u')
            {
                c = '*';
            }
        }
        return ans;
    }
    vector<string> spellchecker(vector<string> &wordlist, vector<string> &queries)
    {
        unordered_set<string> exact;
        unordered_map<string, string> capitalize;
        unordered_map<string, string> vowelError;
        for (const string &word : wordlist)
        {
            exact.insert(word);
            string lower = toLower(word);
            if (capitalize.find(lower) == capitalize.end())
            {
                capitalize[lower] = word;
            }
            string pattern = getVowelPattern(lower);
            if (vowelError.find(pattern) == vowelError.end())
            {
                vowelError[pattern] = word;
            }
        }
        vector<string> ans;
        for (const string &query : queries)
        {
            if (exact.count(query))
            {
                ans.push_back(query);
                continue;
            }
            string lowerQuery = toLower(query);
            if (capitalize.count(lowerQuery))
            {
                ans.push_back(capitalize[lowerQuery]);
                continue;
            }
            string patternQuery = getVowelPattern(lowerQuery);
            if (vowelError.count(patternQuery))
            {
                ans.push_back(vowelError[patternQuery]);
                continue;
            }
            ans.push_back("");
        }
        return ans;
    }
};