// Problem: Number of Senior Citizens
// Link to the problem: https://leetcode.com/problems/number-of-senior-citizens/
function countSeniors(details: string[]): number {
    let ans = 0;
    for (let i = 0; i < details.length; i++) {
        if (Number(details[i].substring(11, 13)) > 60) {
            ans++;
        }
    }
    return ans;
};