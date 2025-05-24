// Problem: Pascal's Triangle
// Link to the problem: https://leetcode.com/problems/pascals-triangle/
function generate(numRows: number): number[][] {
    let ans: number[][] = new Array();
    if (numRows <= 0) {
        return ans;
    }
    let pre: number[] = new Array();
    pre.push(1);
    ans.push(pre);
    for (let i = 2; i <= numRows; i++) {
        let cur: number[] = new Array();
        cur.push(1);
        for (let j = 0; j < pre.length - 1; j++) {
            cur.push(pre[j] + pre[j + 1]);
        }
        cur.push(1);
        ans.push(cur);
        pre = cur;
    }
    return ans;
};