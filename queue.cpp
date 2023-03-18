#include <iostream>
using namespace std;
#include <queue>

int main()
{
    queue<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << s.front() << endl;

    s.pop();
    cout << s.front() << endl;
    cout << s.size() << endl;
    cout << s.empty() << endl;
}