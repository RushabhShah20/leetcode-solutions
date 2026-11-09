// Problem: Find Servers That Handled Most Number of Requests
// Link to the problem: https://leetcode.com/problems/find-servers-that-handled-most-number-of-requests/
use std::cmp::Reverse;
use std::collections::BinaryHeap;
impl Solution {
    pub fn busiest_servers(k: i32, arrival: Vec<i32>, load: Vec<i32>) -> Vec<i32> {
        let n: i32 = arrival.len() as i32;
        let mut a: Vec<i32> = vec![0; k as usize];
        let mut b: BinaryHeap<Reverse<i32>> = BinaryHeap::new();
        let mut c: BinaryHeap<Reverse<(i32, i32)>> = BinaryHeap::new();
        for i in 0..k {
            b.push(Reverse(i));
        }
        for i in 0..n {
            let x: i32 = arrival[i as usize];
            while let Some(&Reverse(top)) = c.peek() {
                let top: (i32, i32) = top;
                if top.0 > x {
                    break;
                }
                let y: (i32, i32) = c.pop().unwrap().0;
                let j: i32 = ((y.1 - i) % k + k) % k + i;
                b.push(Reverse(j));
            }
            if let Some(Reverse(top)) = b.pop() {
                let top: i32 = top;
                let j: i32 = top % k;
                c.push(Reverse((x + load[i as usize], j)));
                a[j as usize] += 1;
            }
        }
        let mut ans: Vec<i32> = Vec::new();
        let mut mx: i32 = 0;
        for i in 0..k {
            mx = mx.max(a[i as usize]);
        }
        for i in 0..k {
            if a[i as usize] == mx {
                ans.push(i);
            }
        }
        return ans;
    }
}
