// Problem: Find Subtree Sizes After Changes
// Link to the problem: https://leetcode.com/problems/find-subtree-sizes-after-changes/
/**
 * @param {number[]} parent
 * @param {string} s
 * @return {number[]}
 */
var dfs = function (u, adj, s, parent, b) {
    const c = s.charCodeAt(u) - 'a'.charCodeAt(0);
    const w = b[c];
    if (u > 0 && w !== -1) {
        parent[u] = w;
    }
    b[c] = u;
    for (const v of adj[u]) {
        dfs(v, adj, s, parent, b);
    }
    b[c] = w;
};
var calc = function (u, tree, ans) {
    ans[u] = 1;
    for (const v of tree[u]) {
        ans[u] += calc(v, tree, ans);
    }
    return ans[u];
};
var findSubtreeSizes = function (parent, s) {
    const n = parent.length;
    const adj = Array.from({ length: n }, () => []);
    const tree = Array.from({ length: n }, () => []);
    for (let i = 1; i < n; i++) {
        adj[parent[i]].push(i);
    }
    const b = new Array(26).fill(-1);
    dfs(0, adj, s, parent, b);
    for (let i = 1; i < n; i++) {
        tree[parent[i]].push(i);
    }
    const ans = new Array(n).fill(0);
    calc(0, tree, ans);
    return ans;
};