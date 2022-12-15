#include <iostream>
#include <chrono>
using namespace std;

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int select(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main()
{
    int n;
    cout << "number of elements = ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
    }

    auto start = chrono::steady_clock::now();
    select(arr, n);
    auto end = chrono::steady_clock::now();

    cout << "\n\n";
    for (int i = 0; i < n; i++)
    {
        // cout << arr[i] << " ";
    }

    cout << "\n\n";
    cout << chrono::duration_cast<chrono::nanoseconds>(end - start).count() << " nanoseconds" << endl;
    cout << chrono::duration_cast<chrono::microseconds>(end - start).count() << " microseconds" << endl;
    cout << chrono::duration_cast<chrono::milliseconds>(end - start).count() << " milliseconds" << endl;
    cout << chrono::duration_cast<chrono::seconds>(end - start).count() << " seconds";
}
