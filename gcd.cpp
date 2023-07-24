#include <bits/stdc++.h>
using namespace std;

// int calcGCD(int n, int m)
// {
//     int sum =0;
//     int limit =0;
//     if(m<n){
//         limit =m;
//     }else{
//         limit = n;
//     }
//     for(int i =1; i<limit; i++){
//         if (n%i==0 && m%i==0){
//             sum = i;
//         }
//     }
//     return sum;
// }
// int calcGCD(int n, int m)
// {
//     if (m == 0)
//     {
//         return n;
//     }
//     return calcGCD(m, n % m);
// }

int main()
{
    int n =6, m =9;
    cout<<6%3<<endl;
    // cout<< calcGCD(n,m)<<endl;
    return 0;
}