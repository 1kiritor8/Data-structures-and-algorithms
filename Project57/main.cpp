#include<iostream>

using namespace std;

int main() {

	int num = 1;
	char* ptr = (char*)&num;//0x00000001

	if (*ptr == 1) {
		cout << "��ϵͳΪС����" << endl;
	}
	else {
		cout << "��ϵͳΪ�����" << endl;
	}
	return 0;
}