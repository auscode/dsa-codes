#include <bits/stdc++.h>
using namespace std;

long reverseBits(long n)
{
    long dn = 0; // variable for new decimal number
    int j = 30;  // initial value of j
    // loop to find the reversede binary bit
    for (int i = 0; i < 32; ++i)
    {
        int k = (n >> i) & 1; // k will be the required bit
        if (k)
        { // if bit is set then only convert in
          // decimal
            if (j == -1)
            { // since if j = -1 then left
              // shift operator will not work
                dn = abs(dn) + pow(2, 0);
            }
            else
            {
                dn = abs(dn) + (2 << j); // here left shift operator
                                         // calculates 2 to power j
                                         // for making code efficient
            }
        }
        j--; // j is decreased in each iteration
    }
    return abs(dn);
}

int reverseNum(int x)
{
    int d = abs(x);
    int revnum = 0;
    while (d > 0)
    {
        int ld = d % 10;
        if (revnum > INT_MAX / 10 || (revnum == INT_MAX / 10 && ld > 7))
            return 0;
        if (revnum < INT_MIN / 10 || (revnum == INT_MIN / 10 && ld < -8))
            return 0;
        revnum = (revnum * 10) + ld;
        d /= 10;
    }
    if (x < 0)
    {
        return -revnum;
    }
    else
    {
        return revnum;
    }
}

int main()
{
    int n = 25;
    cout<<reverseBits(n)<<endl;
    cout << reverseNum(n) << endl;

    return 0;
}
