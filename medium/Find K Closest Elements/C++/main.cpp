// Problem: Find K Closest Elements
// Link to the problem: https://leetcode.com/problems/find-k-closest-elements/
class Solution
{
public:
    vector<int> findClosestElements(vector<int> &arr, int k, int x)
    {
        map<int, vector<int>> y;
        for (int i = 0; i < arr.size(); i++)
        {
            y[abs(arr[i] - x)].push_back(arr[i]);
        }
        vector<int> a;
        for (auto i : y)
        {
            for (int j = 0; j < i.second.size(); j++)
            {
                a.push_back(i.second[j]);
            }
        }
        vector<int> ans;
        for (int i = 0; i < k; i++)
        {
            ans.push_back(a[i]);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};