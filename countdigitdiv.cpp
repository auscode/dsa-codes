#include <iostream>
using namespace std;

int countDigits(int number){
    int digit = number, remainder = 0, count = 0;
    while (digit > 0) {
        remainder = digit % 10;
        if (remainder != 0 && number % remainder == 0) {
            count++;
        }
        digit /= 10;
    }
    return count;
}


int main()
{
    int n=0;
    cin>>n;

    cout<<countDigits(n);

}
