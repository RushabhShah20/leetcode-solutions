// Problem: Find Unique Binary String
// Link to the problem: https://leetcode.com/problems/find-unique-binary-string/
function findDifferentBinaryString(nums: string[]): string {
    return nums.map((s, i) => s[i] === '0' ? '1' : '0').join('');
};