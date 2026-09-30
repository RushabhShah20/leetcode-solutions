// Problem: Maximum Nesting Depth of Two Valid Parentheses Strings
// Link to the problem: https://leetcode.com/problems/maximum-nesting-depth-of-two-valid-parentheses-strings/
function maxDepthAfterSplit(seq: string): number[] {
    const n: number = seq.length;
    let ans: number[] = new Array(n);
    for (let i = 0; i < n; i++) {
        ans[i] = (i & 1) ^ (seq[i] == '(' ? 1 : 0);
    }
    return ans;
};