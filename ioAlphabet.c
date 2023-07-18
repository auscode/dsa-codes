#include<iostream>
using namespace std;
// User Input / Output

int main() {
	char c;
	cin >>c;
	// capital 65 90
	if (c>='A' && c<= 'Z'){
		cout << "1" << endl;
	}
	// small 97 122
	else if (c>='a' && c<= 'z'){
		cout << "0" << endl;
	}
	else {
		cout<< "-1"<<endl;
	}
	return 0;
}

// capital 1
// small 0
// no ALpha -1