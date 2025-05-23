// Problem: Permutations
// Link to the problem: https://leetcode.com/problems/permutations/
impl Solution {
    pub fn back_track(
        nums: &Vec<i32>,
        used: &mut Vec<bool>,
        sub: &mut Vec<i32>,
        ans: &mut Vec<Vec<i32>>,
    ) -> () {
        if sub.len() == nums.len() {
            ans.push(sub.clone());
            return;
        }
        for i in 0..nums.len() {
            if used[i] {
                continue;
            }
            used[i] = true;
            sub.push(nums[i]);
            Self::back_track(nums, used, sub, ans);
            sub.pop();
            used[i] = false;
        }
    }
    pub fn permute(nums: Vec<i32>) -> Vec<Vec<i32>> {
        let mut ans: Vec<Vec<i32>> = Vec::new();
        let mut sub: Vec<i32> = Vec::new();
        let mut used: Vec<bool> = vec![false; nums.len()];
        Self::back_track(&nums, &mut used, &mut sub, &mut ans);
        return ans;
    }
}
