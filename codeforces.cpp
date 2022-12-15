// way to long  strings
// codeforces
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
    }


    for (int i = 0; i < n; i++)
    {
        if (str.length() > 10)
        {
            cout << str[0] << str.length() - 2 << str[str.length() - 1] << endl;
        }
        else if(str.length ()<=10)
        {
            cout << str<< endl;

        }
    }
}