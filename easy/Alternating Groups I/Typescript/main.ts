// Problem: Alternating Groups I
// Link to the problem: https://leetcode.com/problems/alternating-groups-i/
function numberOfAlternatingGroups(colors: number[]): number {
    let ans: number = 0;
    for (let i = 1; i < colors.length - 1; i++) {
        if (colors[i] !== colors[i - 1] && colors[i] !== colors[i + 1]) {
            ans++;
        }
    }
    if (colors[0] !== colors[1] && colors[0] !== colors[colors.length - 1]) {
        ans++;
    }
    if (colors[colors.length - 1] !== colors[colors.length - 2] && colors[colors.length - 1] !== colors[0]) {
        ans++;
    }
    return ans;
};