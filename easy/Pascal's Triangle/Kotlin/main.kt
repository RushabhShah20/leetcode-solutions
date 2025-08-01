// Problem: Pascal's Triangle
// Link to the problem: https://leetcode.com/problems/pascals-triangle/
class Solution {
    fun generate(numRows: Int): List<List<Int>> {
        val res = mutableListOf<List<Int>>();
        if(numRows <= 0){
            return res;
        }
        var pre = mutableListOf<Int>();
        pre.add(1);
        res.add(pre);
        for(i in 2..numRows){
            val cur = mutableListOf<Int>();
            cur.add(1);
            for(j in 0 until pre.size - 1){
                cur.add(pre[j] + pre[j + 1]);
            }
            cur.add(1);
            res.add(cur);
            pre = cur;
        }
        return res;
    }
}