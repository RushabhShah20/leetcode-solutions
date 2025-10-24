// Problem: Destination City
// Link to the problem: https://leetcode.com/problems/destination-city/
public class Solution
{
    public string DestCity(IList<IList<string>> paths)
    {
        string ans = "";
        Dictionary<string, string> m = new Dictionary<string, string>();
        foreach (IList<string> path in paths)
        {
            m[path[0]] = path[1];
        }
        foreach (System.Collections.Generic.KeyValuePair<string, string> i in m)
        {
            if (!m.ContainsKey(i.Value))
            {
                return i.Value;
            }
        }
        return ans;
    }
}