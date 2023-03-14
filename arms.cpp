#include <iostream>
#include <cmath>

using namespace std;

// function to count the number of digits in a number
int count(int n)
{
    int digits = 0;
    while (n > 0)
    {
        n /= 10;
        digits++;
    }
    return digits;
}
// function to check if a number is an Armstrong number or not
bool isArmstrong(int n)
{
    int digits = count(n);
    int sum = 0;
    int temp = n;
    while (temp > 0)
    {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    return (sum == n);
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isArmstrong(n))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No, " << endl;
    }
    return 0;
}
