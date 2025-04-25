// Problem: Find Lucky Integer in an Array
// Link to the problem: https://leetcode.com/problems/find-lucky-integer-in-an-array/
class Solution
{
public:
    int findLucky(vector<int> &arr)
    {
        map<int, int> m;
        for (int i = 0; i < arr.size(); i++)
        {
            m[arr[i]]++;
        }
        vector<int> a;
        for (auto i : m)
        {
            if (i.first == i.second)
            {
                a.push_back(i.first);
            }
        }
        return a.size() == 0 ? -1 : *max_element(a.begin(), a.end());
    }
};