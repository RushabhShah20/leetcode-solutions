// Problem: Find Smallest Letter Greater Than Target
// Link to the problem: https://leetcode.com/problems/find-smallest-letter-greater-than-target/
function nextGreatestLetter(letters: string[], target: string): string {
    const n: number = letters.length;
    let l: number = 0, r: number = n - 1;
    let ans: string = letters[0];
    while (l <= r) {
        const m: number = l + Math.floor((r - l) / 2);
        if (letters[m] > target) {
            ans = letters[m];
            r = m - 1;
        }
        else {
            l = m + 1;
        }
    }
    return ans;
};