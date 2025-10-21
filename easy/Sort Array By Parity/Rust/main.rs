// Problem: Sort Array By Parity
// Link to the problem: https://leetcode.com/problems/sort-array-by-parity/
impl Solution {
    pub fn sort_array_by_parity(nums: Vec<i32>) -> Vec<i32> {
        let mut ans: Vec<i32> = Vec::new();
        let mut even: Vec<i32> = Vec::new();
        let mut odd: Vec<i32> = Vec::new();
        for num in &nums {
            if (*num % 2 == 0) {
                even.push(*num);
            } else {
                odd.push(*num);
            }
        }
        for num in &even {
            ans.push(*num);
        }
        for num in &odd {
            ans.push(*num);
        }
        return ans;
    }
}
