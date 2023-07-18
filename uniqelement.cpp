#include <bits/stdc++.h>
#include <vector>
using namespace std;

int uniqueElement(int arr[],int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++){
            if (arr[i] == arr[j]){
                count++;
                break;
            }
        }
        if (count == 0){
            int ans= arr[i];
            cout<<ans;
            // return ans;
        }
        count = 0;
        cout<<arr[i];
    }
}


int main()
{
    int quesArr[] = {1 ,3 ,1 ,3 ,6, 6 ,7 ,10 ,7};
    int n = sizeof(quesArr) / sizeof(quesArr[0]);

    // for (int i = 0; i < 10; i++)
    // {
    //     cin >> quesArr[i];
    // }

    cout << uniqueElement(quesArr,n) << endl;

    return 0;
}
