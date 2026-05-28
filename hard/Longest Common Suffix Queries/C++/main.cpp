// Problem: Longest Common Suffix Queries
// Link to the problem: https://leetcode.com/problems/longest-common-suffix-queries/
class TrieNode
{
public:
    TrieNode *children[26]{};
    int mnLen;
    int idx;
    TrieNode()
    {
        mnLen = INT_MAX;
        idx = INT_MAX;
    }
    ~TrieNode()
    {
        for (int i = 0; i < 26; i++)
        {
            if (children[i] != nullptr)
            {
                delete children[i];
            }
        }
    }
};
class Trie
{
public:
    TrieNode *root;
    Trie()
    {
        root = new TrieNode();
    }
    ~Trie()
    {
        delete root;
    }
    void insert(const string &s, const int idx)
    {
        const int n = s.size();
        TrieNode *node = root;
        if (n < node->mnLen)
        {
            node->mnLen = n;
            node->idx = idx;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            const int j = s[i] - 'a';
            if (node->children[j] == nullptr)
            {
                node->children[j] = new TrieNode();
            }
            node = node->children[j];
            if (n < node->mnLen)
            {
                node->mnLen = n;
                node->idx = idx;
            }
        }
    }
};
class Solution
{
public:
    vector<int> stringIndices(vector<string> &wordsContainer, vector<string> &wordsQuery)
    {
        Trie trie;
        for (int i = 0; i < wordsContainer.size(); i++)
        {
            trie.insert(wordsContainer[i], i);
        }
        vector<int> ans;
        for (const string &query : wordsQuery)
        {
            const TrieNode *node = trie.root;
            for (int i = query.size() - 1; i >= 0; i--)
            {
                const int j = query[i] - 'a';
                if (node->children[j] != nullptr)
                {
                    node = node->children[j];
                }
                else
                {
                    break;
                }
            }
            ans.push_back(node->idx);
        }
        return ans;
    }
};