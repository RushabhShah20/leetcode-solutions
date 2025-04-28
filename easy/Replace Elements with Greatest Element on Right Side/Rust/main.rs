// Problem: Replace Elements with Greatest Element on Right Side
// Link to the problem: https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/
impl Solution {
    pub fn replace_elements(arr: Vec<i32>) -> Vec<i32> {
        let mut ans: Vec<i32> = Vec::new();
        ans.push(-1);
        let mut max: i32 = -1;
        if (arr.len() == 1) {
            return ans;
        } else {
            for i in (1..arr.len()).rev() {
                if max < arr[i] {
                    max = arr[i];
                }
                ans.push(max);
            }
            return ans.into_iter().rev().collect();
        }
    }
}
