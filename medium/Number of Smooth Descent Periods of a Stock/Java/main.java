// Problem: Number of Smooth Descent Periods of a Stock
// Link to the problem: https://leetcode.com/problems/number-of-smooth-descent-periods-of-a-stock/
class Solution {
    public long getDescentPeriods(int[] prices) {
        long ans = 0;
        int count = 1;
        List<Integer> a = new ArrayList<>();
        for (int i = 1; i < prices.length; i++) {
            if (prices[i] == prices[i - 1] - 1) {
                count++;
            } else {
                a.add(count);
                count = 1;
            }
        }
        a.add(count);
        for (int i = 0; i < a.size(); i++) {
            ans += ((long) (a.get(i)) * (long) (a.get(i) + 1) / 2);
        }
        return ans;
    }
}