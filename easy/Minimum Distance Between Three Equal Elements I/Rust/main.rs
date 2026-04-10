// Problem: Minimum Distance Between Three Equal Elements I
// Link to the problem: https://leetcode.com/problems/minimum-distance-between-three-equal-elements-i/
impl Solution {
    pub fn minimum_distance(nums: Vec<i32>) -> i32 {
        let n: usize = nums.len();
        let mut ans: i32 = i32::MAX;
        for i in 0..n - 2 {
            for j in i + 1..n - 1 {
                for k in j + 1..n {
                    if (nums[i] == nums[j] && nums[j] == nums[k]) {
                        ans = (ans.min(
                            ((i - j) as i32).abs()
                                + ((j - k) as i32).abs()
                                + ((k - i) as i32).abs(),
                        ));
                    }
                }
            }
        }
        if (ans == i32::MAX) {
            return -1;
        } else {
            return ans;
        }
    }
}
