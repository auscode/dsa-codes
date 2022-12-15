#include <iostream>
#include <chrono>
using namespace std;

int multiply(int m, int n)
{
    int a[m][n], b[m][n], mul[m][n], i, j, k;
    // cout << "enter the first matrix element=\n";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            a[i][j] = rand() % 10;
        }
    }
    // cout << "enter the second matrix element=\n";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            b[i][j] = rand() % 10;
        }
    }
    cout << "multiplied matrix=\n";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < n; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    // for printing result
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << mul[i][j] << " ";
        }
        cout << "\n\n\n";
    }
}

int main()
{
    auto start = chrono::steady_clock::now();

    int m, n;
    cout << "enter the number of row =";
    cin >> m;
    cout << "enter the number of column =";
    cin >> n;

    multiply(m, n);

    cout << "\n\n";
    auto end = chrono::steady_clock::now();
    cout << chrono::duration_cast<chrono::nanoseconds>(end - start).count() << " nanoseconds" << endl;
    cout << chrono::duration_cast<chrono::microseconds>(end - start).count() << " microseconds" << endl;
    cout << chrono::duration_cast<chrono::milliseconds>(end - start).count() << " milliseconds" << endl;
    cout << chrono::duration_cast<chrono::seconds>(end - start).count() << " seconds";

    return 0;
}