// Problem: Pascal's Triangle
// Link to the problem: https://leetcode.com/problems/pascals-triangle/
impl Solution {
    pub fn generate(num_rows: i32) -> Vec<Vec<i32>> {
        let mut ans: Vec<Vec<i32>> = Vec::new();
        if (num_rows <= 0) {
            return ans;
        }
        let mut pre: Vec<i32> = Vec::new();
        pre.push(1);
        ans.push(pre.clone());
        for i in 2..num_rows + 1 {
            let mut cur: Vec<i32> = Vec::new();
            cur.push(1);
            for j in 0..pre.len() - 1 {
                cur.push(pre[j] + pre[j + 1]);
            }
            cur.push(1);
            ans.push(cur.clone());
            pre = cur;
        }
        return ans;
    }
}
