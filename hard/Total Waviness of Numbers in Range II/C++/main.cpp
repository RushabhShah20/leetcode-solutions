// Problem: Total Waviness of Numbers in Range II
// Link to the problem: https://leetcode.com/problems/total-waviness-of-numbers-in-range-ii/
class Solution
{
public:
    pair<long long, long long> memo[20][2][2][12][12];
    bool visited[20][2][2][12][12];
    string s;
    pair<long long, long long> dp(const int idx, const int tight, const int leading_zero, const int prev, const int prev2)
    {
        if (idx == s.length())
        {
            return {1, 0};
        }
        if (visited[idx][tight][leading_zero][prev][prev2])
        {
            return memo[idx][tight][leading_zero][prev][prev2];
        }
        const int limit = tight ? (s[idx] - '0') : 9;
        long long total_cnt = 0;
        long long total_sum = 0;
        for (int d = 0; d <= limit; ++d)
        {
            const int next_tight = tight && (d == limit);
            const int next_leading_zero = leading_zero && (d == 0);
            const int next_prev = next_leading_zero ? 11 : d;
            const int next_prev2 = next_leading_zero ? 11 : prev;
            int is_wave = 0;
            if (!next_leading_zero && prev != 11 && prev2 != 11)
            {
                if (prev > prev2 && prev > d)
                {
                    is_wave = 1;
                }
                else if (prev < prev2 && prev < d)
                {
                    is_wave = 1;
                }
            }
            const pair<long long, long long> next_state = dp(idx + 1, next_tight, next_leading_zero, next_prev, next_prev2);
            total_cnt += next_state.first;
            total_sum += next_state.second + next_state.first * is_wave;
        }
        visited[idx][tight][leading_zero][prev][prev2] = true;
        return memo[idx][tight][leading_zero][prev][prev2] = {total_cnt, total_sum};
    }
    long long solve(const long long n)
    {
        if (n < 0)
        {
            return 0;
        }
        s = to_string(n);
        memset(visited, 0, sizeof(visited));
        return dp(0, 1, 1, 11, 11).second;
    }
    long long totalWaviness(long long num1, long long num2)
    {
        const long long ans = solve(num2) - solve(num1 - 1);
        return ans;
    }
};
