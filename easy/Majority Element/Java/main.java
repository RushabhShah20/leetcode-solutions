// Problem: Majority Element
// Link to the problem: https://leetcode.com/problems/majority-element/
class Solution {
    public int majorityElement(int[] nums) {
        int element = -1, count = 0;
        for (int i = 0; i < nums.length; i++) {
            if (count == 0)
                element = nums[i];
            count += (element == nums[i]) ? 1 : -1;
        }
        return element;
    }
}