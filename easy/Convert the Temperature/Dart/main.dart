// Problem: Convert the Temperature
// Link to the problem: https://leetcode.com/problems/convert-the-temperature/
class Solution {
  List<double> convertTemperature(double celsius) {
    List<double> ans = new List.filled(2, 0);
    ans[0] = celsius + 273.15;
    ans[1] = (celsius * 1.8) + 32;
    return ans;
  }
}
