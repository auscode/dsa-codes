#include <iostream>
#include <chrono>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int s, int e)
{

    int pivot = arr[s];

    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
            count++;
    }

    // Giving pivot element its correct position
    int pi = s + count;
    swap(arr[pi], arr[s]);

    // Sorting left and right parts of the pivot element
    int i = s, j = e;

    while (i < pi && j > pi)
    {

        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pi && j > pi)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pi;
}

void Sort(int arr[], int s, int e)
{

    // base case
    if (s >= e)
        return;

    // partitioning the array
    int p = partition(arr, s, e);

    // Sorting the left part
    Sort(arr, s, p - 1);

    // Sorting the right part
    Sort(arr, p + 1, e);
}

int main()
{

    int n;
    cin >> n;

    int *input = new int[n];

    for (int i = 0; i < n; i++)
    {
        input[i] = rand() % 100;
    }

    cout<<endl;
    auto start = chrono::steady_clock::now();
    Sort(input, 0, n - 1);

    auto end = chrono::steady_clock::now();
    // for (int i = 0; i < n; i++)
    // {
    //     cout << input[i] << " ";
    // }

    delete[] input;

    cout << "\n\n";
    cout << chrono::duration_cast<chrono::nanoseconds>(end - start).count() << " nanoseconds" << endl;
    cout << chrono::duration_cast<chrono::microseconds>(end - start).count() << " microseconds" << endl;
    cout << chrono::duration_cast<chrono::milliseconds>(end - start).count() << " milliseconds" << endl;
    cout << chrono::duration_cast<chrono::seconds>(end - start).count() << " seconds";
}
