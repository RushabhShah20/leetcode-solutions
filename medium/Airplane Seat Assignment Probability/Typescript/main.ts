// Problem: Airplane Seat Assignment Probability
// Link to the problem: https://leetcode.com/problems/airplane-seat-assignment-probability/
function nthPersonGetsNthSeat(n: number): number {
    if (n === 1) {
        return 1;
    }
    else {
        return 0.5;
    }
};