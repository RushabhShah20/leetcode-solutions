// Problem: Sum of Squares of Special Elements
// Link to the problem: https://leetcode.com/problems/sum-of-squares-of-special-elements/
class Solution {
    fun sumOfSquares(nums: IntArray): Int {
        var ans:Int =0;
        for(i in nums.indices){
            if(nums.size % (i+1)==0){
                ans+=(nums[i]*nums[i]);
            }
        }
        return ans;
    }
}