// Problem: Count Alternating Subarrays
// Link to the problem: https://leetcode.com/problems/count-alternating-subarrays/
class Solution {
    public long countAlternatingSubarrays(int[] nums) {
        long ans = 0;
        int count = 1;
        List<Integer> a = new ArrayList<>();
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] != nums[i - 1]) {
                count++;
            } else {
                a.add(count);
                count = 1;
            }
        }
        a.add(count);
        for (int i = 0; i < a.size(); i++) {
            ans += (((long) (a.get(i)) * (long) (a.get(i) + 1)) / 2);
        }
        return ans;
    }
}