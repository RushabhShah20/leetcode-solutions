// Problem: Binary Search Tree Iterator
// Link to the problem: https://leetcode.com/problems/binary-search-tree-iterator/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class BSTIterator
{
public:
    vector<int> a;
    int i = 0;
    BSTIterator(TreeNode *root)
    {
        inorder(root, a);
    }
    void inorder(TreeNode *root, vector<int> &a)
    {
        if (root == NULL)
        {
            return;
        }
        inorder(root->left, a);
        a.push_back(root->val);
        inorder(root->right, a);
    }

    int next()
    {
        int x = a[i];
        i++;
        return x;
    }

    bool hasNext()
    {
        if (i < a.size())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */