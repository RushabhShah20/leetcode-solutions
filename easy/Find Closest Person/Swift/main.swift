// Problem: Find Closest Person
// Link to the problem: https://leetcode.com/problems/find-closest-person/class Solution {
class Solution {
    func findClosest(_ x: Int, _ y: Int, _ z: Int) -> Int {
        if(abs(x-z)<abs(y-z)){
            return 1;
        }else if(abs(x-z)>abs(y-z)){
            return 2;
        }else{
            return 0;
        }
    }
}