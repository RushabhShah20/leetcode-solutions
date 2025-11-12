// Problem: Calculate Delayed Arrival Time
// Link to the problem: https://leetcode.com/problems/calculate-delayed-arrival-time/
function findDelayedArrivalTime(arrivalTime: number, delayedTime: number): number {
    return (arrivalTime + delayedTime) % 24;
};