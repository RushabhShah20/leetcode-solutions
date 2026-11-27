// Problem: Maximum Number of Items From Sale I
// Link to the problem: https://leetcode.com/problems/maximum-number-of-items-from-sale-i/
impl Solution {
    pub fn maximum_sale_items(items: Vec<Vec<i32>>, budget: i32) -> i32 {
        let n: usize = items.len();
        let mut a: Vec<i32> = vec![0; (budget + 1) as usize];
        let mut x: i32 = 1000000000;
        for i in 0..n {
            let y: i32 = items[i][0];
            let z: i32 = items[i][1];
            x = x.min(z);
            let mut b: i32 = 0;
            for j in 0..n {
                if (items[j][0] % y == 0) {
                    b += 1;
                }
            }
            for j in (z..=budget).rev() {
                a[j as usize] = a[j as usize].max(a[(j - z) as usize] + b);
            }
        }
        let mut ans: i32 = 0;
        for i in 0..=budget {
            ans = ans.max(a[i as usize] + (budget - i) / x);
        }
        return ans;
    }
}
