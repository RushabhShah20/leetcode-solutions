// Problem: Find X-Sum of All K-Long Subarrays I
// Link to the problem: https://leetcode.com/problems/find-x-sum-of-all-k-long-subarrays-i/
impl Solution {
    pub fn find_x_sum(nums: Vec<i32>, k: i32, x: i32) -> Vec<i32> {
        let n: usize = nums.len();
        let mut ans: Vec<i32> = Vec::new();
        let mut m: std::collections::HashMap<i32, i32> = std::collections::HashMap::new();
        for i in 0..n {
            if i >= (k as usize) {
                *m.entry(nums[i]).or_insert(0) += 1;
                *m.entry(nums[i - (k as usize)]).or_insert(0) -= 1;
                if m[&nums[i - (k as usize)]] == 0 {
                    m.remove(&nums[i - (k as usize)]);
                }
            } else {
                *m.entry(nums[i]).or_insert(0) += 1;
            }
            if i >= ((k - 1) as usize) {
                let mut v: Vec<(i32, i32)> = m.iter().map(|(&key, &value)| (key, value)).collect();
                v.sort_by(|a, b| {
                    if a.1 == b.1 {
                        b.0.cmp(&a.0)
                    } else {
                        b.1.cmp(&a.1)
                    }
                });
                let mut sum: i32 = 0;
                let limit: usize = std::cmp::min(x as usize, v.len());
                for j in 0..limit {
                    sum += v[j].0 * v[j].1;
                }
                ans.push(sum);
            }
        }
        return ans;
    }
}
