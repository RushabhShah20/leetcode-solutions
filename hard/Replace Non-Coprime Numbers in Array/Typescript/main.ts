// Problem: Replace Non-Coprime Numbers in Array
// Link to the problem: https://leetcode.com/problems/replace-non-coprime-numbers-in-array/
function gcd(a: number, b: number): number {
    return b == 0 ? a : gcd(b, a % b);
}
function replaceNonCoprimes(nums: number[]): number[] {
    let ans: number[] = new Array();
    for (const num of nums) {
        ans.push(num);
        while (ans.length > 1) {
            let a: number = ans[ans.length - 1]
            let b: number = ans[ans.length - 2]
            let g: number = gcd(a, b);
            if (g > 1) {
                ans.pop();
                ans.pop();
                let lcm: number = Math.floor((a * b) / g);
                ans.push(lcm);
            }
            else {
                break;
            }
        }
    }
    return ans;
};