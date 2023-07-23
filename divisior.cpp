#include <bits/stdc++.h>
using namespace std;

int sumOfAllDivisors(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        // cout << i << "upper" << endl;
        for (int j = 1; j <=i; j++)
        {
            if ( i% j == 0)
            {
                // cout << i << endl;
                sum += j;
                // cout << sum << endl;
            }
        }
        // cout << i << "out" << endl;
    }
    return sum;
}

int main()
{
    int n = 3;

    cout << "total sum " << sumOfAllDivisors(n) << endl;

    return 0;
}
