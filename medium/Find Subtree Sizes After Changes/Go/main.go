// Problem: Find Subtree Sizes After Changes
// Link to the problem: https://leetcode.com/problems/find-subtree-sizes-after-changes/
func dfs(u int, adj [][]int, s string, parent []int, b []int) {
	var c int = int(s[u] - 'a')
	var w int = b[c]
	if u > 0 && w != -1 {
		parent[u] = w
	}
	b[c] = u
	for _, v := range adj[u] {
		dfs(v, adj, s, parent, b)
	}
	b[c] = w
}
func calc(u int, tree [][]int, ans []int) int {
	ans[u] = 1
	for _, v := range tree[u] {
		ans[u] += calc(v, tree, ans)
	}
	return ans[u]
}
func findSubtreeSizes(parent []int, s string) []int {
	var n int = len(parent)
	var adj [][]int = make([][]int, n)
	var tree [][]int = make([][]int, n)
	for i := 1; i < n; i++ {
		adj[parent[i]] = append(adj[parent[i]], i)
	}
	var b []int = make([]int, 26)
	for i := 0; i < 26; i++ {
		b[i] = -1
	}
	dfs(0, adj, s, parent, b)
	for i := 1; i < n; i++ {
		tree[parent[i]] = append(tree[parent[i]], i)
	}
	var ans []int = make([]int, n)
	calc(0, tree, ans)
	return ans
}
