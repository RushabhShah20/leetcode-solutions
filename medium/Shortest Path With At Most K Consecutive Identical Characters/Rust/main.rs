// Problem: Shortest Path With At Most K Consecutive Identical Characters
// Link to the problem: https://leetcode.com/problems/shortest-path-with-at-most-k-consecutive-identical-characters/
use std::cmp::Reverse;
use std::collections::BinaryHeap;

impl Solution {
    pub fn shortest_path(n: i32, edges: Vec<Vec<i32>>, labels: String, k: i32) -> i32 {
        let node_count: usize = n as usize;
        let label_bytes: &[u8] = labels.as_bytes();
        let mut adj: Vec<Vec<(i32, i32)>> = vec![Vec::new(); node_count];
        for e in edges.iter() {
            let edge: &Vec<i32> = e;
            adj[edge[0] as usize].push((edge[1], edge[2]));
        }
        let mut dist: Vec<Vec<i32>> = vec![vec![i32::MAX; (k + 1) as usize]; node_count];
        dist[0][1] = 0;
        let mut pq: BinaryHeap<Reverse<(i32, i32, i32)>> = BinaryHeap::new();
        pq.push(Reverse((0, 0, 1)));
        while !pq.is_empty() {
            let Reverse((d, u, c)): Reverse<(i32, i32, i32)> = pq.pop().unwrap();
            if d > dist[u as usize][c as usize] {
                continue;
            }
            if u == n - 1 {
                return d;
            }
            for item in adj[u as usize].iter() {
                let (v, w): (i32, i32) = *item; 
                let b: i32 = if label_bytes[v as usize] == label_bytes[u as usize] {
                    c + 1
                } else {
                    1
                };
                if b <= k {
                    let new_dist: i32 = d + w;
                    if new_dist < dist[v as usize][b as usize] {
                        dist[v as usize][b as usize] = new_dist;
                        pq.push(Reverse((new_dist, v, b)));
                    }
                }
            }
        }
        return -1;
    }
}
