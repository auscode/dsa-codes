// 58. Length of Last Word in a string
#include <bits/stdc++.h>

class Solution
{
public:
    int lengthOfLastWord(std::string s)
    {
        int len = 0, tail = s.length() - 1;
        // if the string contains any space at the last it goes into this block
        while (tail >= 0 && s[tail] == ' ')
        {
            tail--;
        }

        // otherwise it will go into this block
        while (tail >= 0 && s[tail] != ' ')
        {
            len++;
            tail--;
        }
        return len;
    }
};