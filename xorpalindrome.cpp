#include <bits/stdc++.h>
using namespace std;

bool palindrome(int n)
{
    std::string str = std::to_string(n);
    int len = str.length();
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            return false;
        }
    }
    return true;
}
int rev(int x){
    int y = 0;
    while (x> 0){
        int d= x%10;
        y = y*10 +d;
        x /= 10;
    }
    
    return y;
}
int main()
{
    int n= 122;
    cout<< rev(n)<<endl;
    cout << palindrome(n) <<endl;
    return 0;
}
