/*#include <iostream>
#include <cstdlib>
using namespace std;


int main() {

	int i, com, guess, min = 1, max = 100;

	srand((unsigned)time(NULL));    //0~43��
	com = rand() % 100 + 1;         //��ǻ�Ͱ� ������ ����
	//int i = 1;

	//while (true) {
	    for(i = 0; i < 20; i++) {
		cout << "[" << i + 1 << "ȸ]" << min << "~" << max << "������ �� ����=>";
		cin >> guess;

		//����ó��
		if (guess == com) {
			cout << "�����Դϴ�" << endl;
			break;
		}
		else if (guess > com) {
			cout << "�ʹ�Ŀ��" << endl;
			max = guess;
		}
		else {
			cout << "�ʹ��۾ƿ�" << endl;
			min = guess;
		}
			
	}
	cout << "����:" << com<<endl;
	cout << "��������" << (10 - i) * 10 << endl;
	return 0;
}
*/