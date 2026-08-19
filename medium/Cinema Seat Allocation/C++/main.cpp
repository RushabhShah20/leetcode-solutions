// Problem: Cinema Seat Allocation
// Link to the problem: https://leetcode.com/problems/cinema-seat-allocation/
class Solution
{
public:
    int maxNumberOfFamilies(int n, vector<vector<int>> &reservedSeats)
    {
        const int k = reservedSeats.size();
        unordered_map<int, int> p;
        for (int i = 0; i < k; i++)
        {
            if (reservedSeats[i][1] >= 2 && reservedSeats[i][1] <= 9)
            {
                p[reservedSeats[i][0]] |= 1 << (reservedSeats[i][1] - 2);
            }
        }
        int ans = (n - p.size()) * 2;
        for (const pair<int, int> i : p)
        {
            constexpr int l = 0b11110000, m = 0b11000011, r = 0b00001111;
            if ((i.second | l) == l || (i.second | m) == m || (i.second | r) == r)
            {
                ans++;
            }
        }
        return ans;
    }
};