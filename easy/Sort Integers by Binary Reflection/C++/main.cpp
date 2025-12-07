// Problem: Sort Integers by Binary Reflection
// Link to the problem: https://leetcode.com/problems/sort-integers-by-binary-reflection/
class Solution
{
public:
    int convert(int n)
    {
        if (n == 0)
        {
            return 0;
        }
        else
        {
            string a;
            while (n > 0)
            {
                a.append(1, ('0' + (n % 2)));
                n /= 2;
            }
            int ans = stoi(a, nullptr, 2);
            return ans;
        }
    }
    vector<int> sortByReflection(vector<int> &nums)
    {
        vector<pair<int, int>> a;
        for (const int num : nums)
        {
            a.push_back({num, convert(num)});
        }
        sort(a.begin(), a.end(), [](const pair<int, int> &a, const pair<int, int> &b)
             { if(a.second==b.second){return a.first<b.first;}else{ return a.second < b.second;} });
        vector<int> ans;
        for (const pair<int, int> i : a)
        {
            ans.push_back(i.first);
        }
        return ans;
    }
};