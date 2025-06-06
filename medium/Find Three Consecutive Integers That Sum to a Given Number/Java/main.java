// Problem: Find Three Consecutive Integers That Sum to a Given Number
// Link to the problem: https://leetcode.com/problems/find-three-consecutive-integers-that-sum-to-a-given-number/
class Solution {
    public long[] sumOfThree(long num) {
        if (num % 3 == 0) {
            return new long[] { ((num / 3) - 1), (num / 3), ((num / 3) + 1) };
        } else {
            return new long[] {};
        }
    }
}