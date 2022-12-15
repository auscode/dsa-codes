#include <iostream>
#include <chrono>
using namespace std;

void merge(int input[], int si, int ei)
{
    if (si >= ei)
    {
        return;
    }
    int mid = ((si + ei) / 2);
    int temp;
    for (int i = 0; i < mid; i++)
    {
        for (int j = mid; j < ei; j++)
        {
            if (input[i] >= input[j])
            {
                temp = input[i];
                input[i] = input[j];
                input[j] = temp;
            }
        }
    }
    merge(input, si, mid);
    merge(input, mid + 1, ei);
}

int main()
{
    auto start = chrono::steady_clock::now();

    int length;
    cin >> length;
    int *input = new int[length];
    for (int i = 0; i < length; i++)
    {
        input[i] = rand() % 100;
    }
    for (int i = 0; i < length; i++)
    {
        cout << input[i] << " ";
    }

    merge(input, 0, length);
    cout << "\n";

    for (int i = 0; i < length; i++)
    {
        cout << input[i] << " ";
    }

    cout << "\n\n";
    auto end = chrono::steady_clock::now();
    cout << chrono::duration_cast<chrono::nanoseconds>(end - start).count() << " nanoseconds" << endl;
    cout << chrono::duration_cast<chrono::microseconds>(end - start).count() << " microseconds" << endl;
    cout << chrono::duration_cast<chrono::milliseconds>(end - start).count() << " milliseconds" << endl;
    cout << chrono::duration_cast<chrono::seconds>(end - start).count() << " seconds";
}