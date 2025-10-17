// Problem: Find Center of Star Graph
// Link to the problem: https://leetcode.com/problems/find-center-of-star-graph/
function findCenter(edges: number[][]): number {
    let a: number = edges[0][1];
    let b: number = edges[0][0];
    if (edges[1][1] === a || edges[1][0] === a) {
        return a;
    }
    else {
        return b;
    }
};