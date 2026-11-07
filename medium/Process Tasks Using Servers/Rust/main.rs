// Problem: Process Tasks Using Servers
// Link to the problem: https://leetcode.com/problems/process-tasks-using-servers/
use std::cmp::Reverse;
use std::collections::BinaryHeap;
impl Solution {
    pub fn assign_tasks(servers: Vec<i32>, tasks: Vec<i32>) -> Vec<i32> {
        let m: usize = servers.len();
        let n: usize = tasks.len();
        let mut a: BinaryHeap<Reverse<(i64, usize)>> = BinaryHeap::new();
        let mut b: BinaryHeap<Reverse<(i32, usize)>> = BinaryHeap::new();
        for i in 0..m {
            b.push(Reverse((servers[i], i)));
        }
        let mut ans: Vec<i32> = vec![0; n];
        let mut x: i64 = 0;
        for i in 0..n {
            x = x.max(i as i64);
            while !a.is_empty() && a.peek().unwrap().0 .0 <= x {
                let Reverse(y): Reverse<(i64, usize)> = a.pop().unwrap();
                let server_index: usize = y.1;
                b.push(Reverse((servers[server_index], server_index)));
            }
            if b.is_empty() {
                x = a.peek().unwrap().0 .0;
                while !a.is_empty() && a.peek().unwrap().0 .0 <= x {
                    let Reverse(y): Reverse<(i64, usize)> = a.pop().unwrap();
                    let server_index: usize = y.1;
                    b.push(Reverse((servers[server_index], server_index)));
                }
            }
            let Reverse(z): Reverse<(i32, usize)> = b.pop().unwrap();
            ans[i] = z.1 as i32;
            a.push(Reverse((x + tasks[i] as i64, z.1)));
        }
        return ans;
    }
}
