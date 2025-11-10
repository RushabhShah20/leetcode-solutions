// Problem: Find the Kth Largest Integer in the Array
// Link to the problem: https://leetcode.com/problems/find-the-kth-largest-integer-in-the-array/
class Solution
{
public:
    string kthLargestNumber(vector<string> &nums, int k)
    {
        sort(nums.begin(), nums.end(), [](const string &a, const string &b)
             { if (a.size() != b.size()){return a.size()>b.size();}else{return a>b;} });
        string ans = nums[k - 1];
        return ans;
    }
};