// Problem: Shortest Distance to Target String in a Circular Array
// Link to the problem: https://leetcode.com/problems/shortest-distance-to-target-string-in-a-circular-array/
function closestTarget(words: string[], target: string, startIndex: number): number {
    const n: number = words.length;
    let ans: number = n;
    for (let i = 0; i < n; i++) {
        if (words[i] === target) {
            const x: number = Math.abs(i - startIndex);
            ans = Math.min(ans, Math.min(x, n - x));
        }
    }
    return ans == n ? -1 : ans;
};