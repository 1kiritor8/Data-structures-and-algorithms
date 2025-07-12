#include<iostream>

using namespace std;

int main() {

	int num = 1;
	char* ptr = (char*)&num;//0x00000001

	if (*ptr == 1) {
		cout << "该系统为小端序" << endl;
	}
	else {
		cout << "该系统为大端序" << endl;
	}
	return 0;
}