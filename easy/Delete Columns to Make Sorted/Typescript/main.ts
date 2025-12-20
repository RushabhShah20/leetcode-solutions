// Problem: Delete Columns to Make Sorted
// Link to the problem: https://leetcode.com/problems/delete-columns-to-make-sorted/
function minDeletionSize(strs: string[]): number {
    const n: number = strs.length, m: number = strs[0].length;
    let ans: number = 0;
    for (let j = 0; j < m; j++) {
        for (let i = 0; i < n - 1; i++) {
            if ((strs[i][j]) > (strs[i + 1][j])) {
                ans++;
                break;
            }
        }
    }
    return ans;
};