// Problem: Count Zero Request Servers
// Link to the problem: https://leetcode.com/problems/count-zero-request-servers/
impl Solution {
    pub fn count_servers(n: i32, mut logs: Vec<Vec<i32>>, x: i32, queries: Vec<i32>) -> Vec<i32> {
        let m: usize = queries.len();
        let k: usize = logs.len();
        logs.sort_by(|p: &Vec<i32>, q: &Vec<i32>| p[1].cmp(&q[1]));
        let mut a: Vec<(i32, usize)> = Vec::with_capacity(m);
        for i in 0..m {
            a.push((queries[i], i));
        }
        a.sort();
        let mut ans: Vec<i32> = vec![0; m];
        let mut b: Vec<i32> = vec![0; (n + 1) as usize];
        let mut l: usize = 0;
        let mut r: usize = 0;
        let mut y: i32 = 0;
        for i in 0..m {
            while r < k && logs[r][1] <= a[i].0 {
                let c: usize = logs[r][0] as usize;
                r += 1;
                b[c] += 1;
                if b[c] == 1 {
                    y += 1;
                }
            }
            while l < r && logs[l][1] < a[i].0 - x {
                let c: usize = logs[l][0] as usize;
                l += 1;
                b[c] -= 1;
                if b[c] == 0 {
                    y -= 1;
                }
            }
            ans[a[i].1] = n - y;
        }
        return ans;
    }
}
