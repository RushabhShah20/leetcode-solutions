// Problem: Vowels Game in a String
// Link to the problem: https://leetcode.com/problems/vowels-game-in-a-string/
bool doesAliceWin(char *s)
{
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            return true;
        }
    }
    return false;
}