// Problem: Find Subtree Sizes After Changes
// Link to the problem: https://leetcode.com/problems/find-subtree-sizes-after-changes/
class Solution {
    private var ans: IntArray = IntArray(0)
    private fun dfs(u: Int, adj: List<MutableList<Int>>, s: String, parent: IntArray, b: IntArray) {
        val c: Int = s[u] - 'a'
        val w: Int = b[c]
        if (u > 0 && w != -1) {
            parent[u] = w
        }
        b[c] = u
        for (v: Int in adj[u]) {
            dfs(v, adj, s, parent, b)
        }
        b[c] = w
    }

    private fun calc(u: Int, tree: List<MutableList<Int>>): Int {
        ans[u] = 1
        for (v: Int in tree[u]) {
            ans[u] += calc(v, tree)
        }
        return ans[u]
    }

    fun findSubtreeSizes(parent: IntArray, s: String): IntArray {
        val n: Int = parent.size
        val adj: List<MutableList<Int>> = List<MutableList<Int>>(n) { mutableListOf<Int>() }
        val tree: List<MutableList<Int>> = List<MutableList<Int>>(n) { mutableListOf<Int>() }
        for (i: Int in 1 until n) {
            adj[parent[i]].add(i)
        }
        val b: IntArray = IntArray(26) { -1 }
        dfs(0, adj, s, parent, b)
        for (i: Int in 1 until n) {
            tree[parent[i]].add(i)
        }
        ans = IntArray(n)
        calc(0, tree)
        return ans
    }
}