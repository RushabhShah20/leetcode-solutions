// Problem: Escape The Ghosts
// Link to the problem: https://leetcode.com/problems/escape-the-ghosts/
function escapeGhosts(ghosts: number[][], target: number[]): boolean {
    let x: number = (Math.abs(target[0])) + (Math.abs(target[1]));
    for (const ghost of ghosts) {
        let y: number = (Math.abs(ghost[0] - target[0])) + (Math.abs(ghost[1] - target[1]));
        if (y <= x) {
            return false;
        }
    }
    return true;
};