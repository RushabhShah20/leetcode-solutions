// Problem: Count Number of Distinct Integers After Reverse Operations
// Link to the problem: https://leetcode.com/problems/count-number-of-distinct-integers-after-reverse-operations/
class Solution {
    public int rev(int n) {
        int rev = 0;
        while (n > 0) {
            rev = (rev * 10) + (n % 10);
            n /= 10;
        }
        return rev;
    }

    public int countDistinctIntegers(int[] nums) {
        Set<Integer> s = new HashSet<Integer>();
        List<Integer> ans = Arrays.stream(nums).boxed().collect(Collectors.toList());
        for (int i = 0; i < nums.length; i++) {
            ans.add(rev(nums[i]));
        }
        for (int i = 0; i < ans.size(); i++) {
            s.add(ans.get(i));
        }
        return s.size();
    }
}