// Problem: Final Value of Variable After Performing Operations
// Link to the problem: https://leetcode.com/problems/final-value-of-variable-after-performing-operations/
function finalValueAfterOperations(operations: string[]): number {
    let ans: number = 0;
    for (const operation of operations) {
        if (operation === "--X" || operation === "X--") {
            ans--;
        }
        else {
            ans++;
        }
    }
    return ans;
};