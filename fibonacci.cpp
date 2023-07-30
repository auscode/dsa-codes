#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;
// int fib(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     if (n <= 2)
//     {
//         return 1;
//     }
//     return fib(n - 1) + fib(n - 2);
// }
vector<int> generateFibonacciNumbers(int n)
{
    vector<int> result;
    int s;
    if (n == 0)
        return result;
    if (n <= 2)
        return result;

    // s = 
    // result.push_back(s);
    return generateFibonacciNumbers(n - 1) + generateFibonacciNumbers(n - 2);
}
int main()
{
    int n = 5;
    // vector<int> generateFibonacciNumbers;
    // for (int i = 0; i < n; i++)
    // {
    //     // cin>> generateFibonacciNumbers.push_back(i);
    // }
    generateFibonacciNumbers(n);
    for (int i = 0; i < n; i++)
    {
        cout << generateFibonacciNumbers[i] << " ";
    }
    return 0;
}

// int main()
// {
//     int n, t1 = 0, t2 = 1, sum = 0;
//     cin >> n;

//     if (n == 1)
//     {
//         sum = 1;
//     }
//     else if (n == 2)
//     {
//         sum = 2;
//     }
//     else
//     {
//         for (int i = 1; i < n; ++i)
//         {
//             sum = t1 + t2;
//             t1 = t2;
//             t2 = sum;
//         }
//     }

//     cout << sum << endl;
//     return 0;
// }