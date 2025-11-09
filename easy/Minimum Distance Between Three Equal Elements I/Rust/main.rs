// Problem: Minimum Distance Between Three Equal Elements I
// Link to the problem: https://leetcode.com/problems/minimum-distance-between-three-equal-elements-i/
impl Solution {
    pub fn minimum_distance(nums: Vec<i32>) -> i32 {
        let n: usize = nums.len();
        let mut ans: i32 = i32::MAX;
        for i in 0..n {
            for j in 0..n {
                for k in 0..n {
                    if (i != j && j != k && i != k) {
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
        }
        if (ans == i32::MAX) {
            return -1;
        } else {
            return ans;
        }
    }
}
