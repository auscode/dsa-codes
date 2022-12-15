#include <iostream>
#include <chrono>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}



int main()
{
    auto start = chrono::steady_clock::now();

    int n;
    cin >> n;

    int *input = new int[n];

    for (int i = 0; i < n; i++)
    {
        input[i] = rand() % 100;
    }

    // Sort(input, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << input[i] << " ";
    }

    delete[] input;

    cout << "\n\n";
    auto end = chrono::steady_clock::now();
    cout << chrono::duration_cast<chrono::nanoseconds>(end - start).count() << " nanoseconds" << endl;
    cout << chrono::duration_cast<chrono::microseconds>(end - start).count() << " microseconds" << endl;
    cout << chrono::duration_cast<chrono::milliseconds>(end - start).count() << " milliseconds" << endl;
    cout << chrono::duration_cast<chrono::seconds>(end - start).count() << " seconds";
}
