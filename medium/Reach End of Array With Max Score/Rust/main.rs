// Problem: Reach End of Array With Max Score
// Link to the problem: https://leetcode.com/problems/reach-end-of-array-with-max-score/
impl Solution {
    pub fn find_maximum_score(nums: Vec<i32>) -> i64 {
        let mut ans: i64 = 0;
        let mut maxElement: i64 = 0;
        for i in 0..nums.len() {
            ans += maxElement;
            maxElement = maxElement.max((nums[i] as i64))
        }
        return ans;
    }
}
