// Problem: Maximum Number of Items From Sale II
// Link to the problem: https://leetcode.com/problems/maximum-number-of-items-from-sale-ii/
impl Solution {
    pub fn maximum_sale_items(mut items: Vec<Vec<i32>>, mut budget: i32) -> i32 {
        let n: usize = items.len();
        items.sort_by(|p: &Vec<i32>, q: &Vec<i32>| p[1].cmp(&q[1]));
        let mut mx: i32 = 0;
        for i in 0..n {
            mx = mx.max(items[i][0]);
        }
        let mut a: Vec<i32> = vec![0; (mx + 1) as usize];
        for i in 0..n {
            a[items[i][0] as usize] += 1;
        }
        for i in 1..=(mx as usize) {
            if a[i] > 0 {
                let mut j: usize = i << 1;
                while j <= (mx as usize) {
                    a[i] += a[j];
                    j += i;
                }
            }
        }
        let mn: i32 = items[0][1];
        let mut ans: i32 = 0;
        for i in 0..n {
            let x: i32 = items[i][0];
            let y: i32 = items[i][1];
            if y - mn > mn {
                break;
            }
            let b: i32 = a[x as usize] - 1;
            let c: i32 = b.min(budget / y);
            ans += c << 1;
            budget -= c * y;
        }
        ans += budget / mn;
        return ans;
    }
}
