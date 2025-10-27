// Problem: Number of Laser Beams in a Bank
// Link to the problem: https://leetcode.com/problems/number-of-laser-beams-in-a-bank/
function numberOfBeams(bank: string[]): number {
    let ans: number = 0, prev: number = 0;
    for (const s of bank) {
        let count: number = 0;
        for (const c of s) {
            if (c == '1') {
                count++;
            }
        }
        ans += (count * prev);
        if (count > 0) {
            prev = count;
        }
    }
    return ans;
};