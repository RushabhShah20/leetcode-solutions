// Problem: Four Divisors
// Link to the problem: https://leetcode.com/problems/four-divisors/
class Solution {
    public List<Integer> factors(int n) {
        List<Integer> ans = new ArrayList<>();
        for (int i = 1; i <= (int) (Math.sqrt(n)); i++) {
            if (n % i == 0) {
                ans.add(i);
                if (n / i != i) {
                    ans.add(n / i);
                }
            }
        }
        return ans;
    }

    public int sum(List<Integer> arr) {
        int ans = 0;
        for (final Integer i : arr) {
            ans += i;
        }
        return ans;
    }

    public int sumFourDivisors(int[] nums) {
        int ans = 0;
        Map<Integer, Integer> m = new HashMap<>();
        for (final int num : nums) {
            m.put(num, m.getOrDefault(num, 0) + 1);
        }
        for (Map.Entry<Integer, Integer> i : m.entrySet()) {
            List<Integer> x = factors(i.getKey());
            if (x.size() == 4) {
                int y = sum(x);
                ans += (y * i.getValue());
            }
        }
        return ans;
    }
}