// Problem: Distribute Elements Into Two Arrays I
// Link to the problem: https://leetcode.com/problems/distribute-elements-into-two-arrays-i/
impl Solution {
    pub fn reverse(arr: &mut Vec<i32>, mut l: usize, mut r: usize) -> () {
        while (l <= r) {
            let x: i32 = arr[l];
            arr[l] = arr[r];
            arr[r] = x;
            l += 1;
            r -= 1;
        }
    }
    pub fn result_array(nums: Vec<i32>) -> Vec<i32> {
        let n: usize = nums.len();
        let mut ans: Vec<i32> = vec![0; n];
        ans[0] = nums[0];
        ans[n - 1] = nums[1];
        let mut l: usize = 0;
        let mut r: usize = n - 1;
        for i in 2..n {
            if (ans[l] > ans[r]) {
                l += 1;
                ans[l] = nums[i];
            } else {
                r -= 1;
                ans[r] = nums[i];
            }
        }
        Self::reverse(&mut ans, r, n - 1);
        return ans;
    }
}
