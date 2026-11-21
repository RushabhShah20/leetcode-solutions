// Problem: Find Subtree Sizes After Changes
// Link to the problem: https://leetcode.com/problems/find-subtree-sizes-after-changes/
impl Solution {
    fn dfs(u: usize, adj: &Vec<Vec<usize>>, s: &[u8], parent: &mut Vec<i32>, b: &mut Vec<i32>) {
        let c: usize = (s[u] - b'a') as usize;
        let w: i32 = b[c];
        if u > 0 && w != -1 {
            parent[u] = w;
        }
        b[c] = u as i32;
        for &v in adj[u].iter() {
            Self::dfs(v, adj, s, parent, b);
        }
        b[c] = w;
    }
    fn calc(u: usize, tree: &Vec<Vec<usize>>, ans: &mut Vec<i32>) -> i32 {
        ans[u] = 1;
        for &v in tree[u].iter() {
            let sub: i32 = Self::calc(v, tree, ans);
            ans[u] += sub;
        }
        ans[u]
    }
    pub fn find_subtree_sizes(parent: Vec<i32>, s: String) -> Vec<i32> {
        let mut parent: Vec<i32> = parent;
        let n: usize = parent.len();
        let bytes: &[u8] = s.as_bytes();
        let mut adj: Vec<Vec<usize>> = vec![Vec::new(); n];
        let mut tree: Vec<Vec<usize>> = vec![Vec::new(); n];
        for i in 1..n {
            adj[parent[i] as usize].push(i);
        }
        let mut b: Vec<i32> = vec![-1; 26];
        Self::dfs(0, &adj, bytes, &mut parent, &mut b);
        for i in 1..n {
            tree[parent[i] as usize].push(i);
        }
        let mut ans: Vec<i32> = vec![0; n];
        Self::calc(0, &tree, &mut ans);
        return ans;
    }
}
