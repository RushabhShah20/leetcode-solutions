// Problem: Maximum Possible Number by Binary Concatenation
// Link to the problem: https://leetcode.com/problems/maximum-possible-number-by-binary-concatenation/
class Solution
{
public:
    int maxGoodNumber(vector<int> &nums)
    {
        int ans = 0;
        bitset<8> a(nums[0]), b(nums[1]), c(nums[2]);
        string x = a.to_string(), y = b.to_string(), z = c.to_string();
        x.erase(0, x.find_first_not_of('0'));
        y.erase(0, y.find_first_not_of('0'));
        z.erase(0, z.find_first_not_of('0'));
        string xyz = x + y + z, xzy = x + z + y, yxz = y + x + z, yzx = y + z + x, zxy = z + x + y, zyx = z + y + x;
        int abc = stoi(xyz, nullptr, 2), acb = stoi(xzy, nullptr, 2), bac = stoi(yxz, nullptr, 2), bca = stoi(yzx, nullptr, 2), cab = stoi(zxy, nullptr, 2), cba = stoi(zyx, nullptr, 2);
        ans = max({abc, acb, bac, bca, cab, cba});
        return ans;
    }
};