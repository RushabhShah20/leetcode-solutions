// Problem: Successful Pairs of Spells and Potions
// Link to the problem: https://leetcode.com/problems/successful-pairs-of-spells-and-potions/
function successfulPairs(spells: number[], potions: number[], success: number): number[] {
    let ans: number[] = new Array(spells.length).fill(0);
    potions.sort((a, b) => a - b);
    for (let i = 0; i < spells.length; i++) {
        let x: number = -1;
        let l: number = 0, r: number = potions.length - 1;
        while (l < r) {
            let m: number = l + Math.floor((r - l) / 2);
            let y: number = (potions[m]) * (spells[i]);
            if (y < success) {
                l = m + 1;
            } else {
                r = m;
            }
        }
        if ((potions[l]) * (spells[i]) >= success) {
            x = l;
        }
        if (x !== -1) {
            ans[i] += (potions.length - x);
        }
    }
    return ans;
};