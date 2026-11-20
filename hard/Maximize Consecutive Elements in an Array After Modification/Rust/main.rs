// Problem: Maximize Consecutive Elements in an Array After Modification
// Link to the problem: https://leetcode.com/problems/maximize-consecutive-elements-in-an-array-after-modification/
impl Solution {
    pub fn max_selected_elements(mut nums: Vec<i32>) -> i32 {
        let n: usize = nums.len();
        nums.sort();
        let mut a: Vec<i32> = vec![0; 1000001];
        let mut ans: i32 = 0;
        for i in 0..n {
            let x: i32 = nums[i];
            a[(x + 1) as usize] = a[(x + 1) as usize].max(a[x as usize] + 1);
            a[x as usize] = a[x as usize].max(a[(x - 1) as usize] + 1);
            ans = ans.max(a[x as usize].max(a[(x + 1) as usize]));
        }
        return ans;
    }
}
