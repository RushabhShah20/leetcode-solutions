// Problem: Rotate String
// Link to the problem: https://leetcode.com/problems/rotate-string/
function rotateString(s: string, goal: string): boolean {
    if (s.length !== goal.length) {
        return false;
    } else {
        s = s + s;
        const ans: boolean = s.includes(goal);
        return ans;
    }
};