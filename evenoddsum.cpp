#include <iostream>
using namespace std;

// int count(int number)
// {
//     if (number == 0)
//         return 1;
//     int flag = 0;
//     while (number != 0)
//     {
//         number /= 10;
//         flag++;
//     }
//     return flag;
// }

int main()
{
    int n = 1234;
    // cin >> n;
    int e = 0, o = 0, r = 0;
    // cout << count(n)<< endl;
    int i = 0;
    while (n != 0)
    {
        r = n % 10;
        if (n % 2 == 0)
        {
            e += r;
            // cout <<"even"<<endl;
        }
        else
        {
            o += r;
        }
        n /= 10;
        i++;
    }
    cout << e << " " << o << endl;
    return 0;
}
