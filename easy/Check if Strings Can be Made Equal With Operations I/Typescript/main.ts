// Problem: Check if Strings Can be Made Equal With Operations I
// Link to the problem: https://leetcode.com/problems/check-if-strings-can-be-made-equal-with-operations-i/
function canBeEqual(s1: string, s2: string): boolean {
    const x: boolean = (s1[0] === s2[0] && s1[2] === s2[2]) || (s1[0] === s2[2] && s1[2] === s2[0]);
    const y: boolean = (s1[1] === s2[1] && s1[3] === s2[3]) || (s1[1] === s2[3] && s1[3] === s2[1]);
    const ans: boolean = x && y;
    return ans;
};