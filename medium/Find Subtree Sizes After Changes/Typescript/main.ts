// Problem: Find Subtree Sizes After Changes
// Link to the problem: https://leetcode.com/problems/find-subtree-sizes-after-changes/
function dfs(u: number, adj: number[][], s: string, parent: number[], b: number[]): void {
    const c: number = s.charCodeAt(u) - 'a'.charCodeAt(0);
    const w: number = b[c];
    if (u > 0 && w !== -1) {
        parent[u] = w;
    }
    b[c] = u;
    for (const v of adj[u]) {
        dfs(v, adj, s, parent, b);
    }
    b[c] = w;
};
function calc(u: number, tree: number[][], ans: number[]): number {
    ans[u] = 1;
    for (const v of tree[u]) {
        ans[u] += calc(v, tree, ans);
    }
    return ans[u];
};
function findSubtreeSizes(parent: number[], s: string): number[] {
    const n: number = parent.length;
    const adj: number[][] = Array.from({ length: n }, (): number[] => []);
    const tree: number[][] = Array.from({ length: n }, (): number[] => []);
    for (let i: number = 1; i < n; i++) {
        adj[parent[i]].push(i);
    }
    const b: number[] = new Array<number>(26).fill(-1);
    dfs(0, adj, s, parent, b);
    for (let i: number = 1; i < n; i++) {
        tree[parent[i]].push(i);
    }
    const ans: number[] = new Array<number>(n).fill(0);
    calc(0, tree, ans);
    return ans;
};