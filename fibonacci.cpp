#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t1 = 0, t2 = 1, sum = 0;
    cin >> n;

    if (n == 1)
    {
        sum = 1;
    }
    else if (n == 2)
    {
        sum = 2;
    }
    else
    {
        for (int i = 1; i < n; ++i)
        {
            sum = t1 + t2;
            t1 = t2;
            t2 = sum;
        }
    }

    cout << sum << endl;
    return 0;
}