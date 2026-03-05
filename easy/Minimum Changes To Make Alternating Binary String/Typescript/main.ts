// Problem: Minimum Changes To Make Alternating Binary String
// Link to the problem: https://leetcode.com/problems/minimum-changes-to-make-alternating-binary-string/
function minOperations(s: string): number {
    const n: number = s.length;
    let ansEven: number = 0, ansOdd: number = 0;
    for (let i = 0; i < n; i++) {
        if (i % 2 === 0) {
            if (s[i] === '0') {
                ansEven++;
            }
            else {
                ansOdd++;
            }
        }
        else {
            if (s[i] === '1') {
                ansEven++;
            }
            else {
                ansOdd++;
            }
        }
    }
    const ans: number = Math.min(ansEven, ansOdd);
    return ans;
};