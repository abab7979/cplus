/*#include <iostream>
#include <cstring>
using namespace std;

int main() {
	//�ִ� ���� ã��
	int arr[10] = { 2, 71, 59, 33, 94, 25 };
	char str[] = "game over!";

	//�ִ� ���� ã��
	int maxVal = arr[0];  //�� �� ���� �ִ밪���� ����
	for (int i = 0; i < 6; i++)
		if (maxVal < arr[i]) maxVal = arr[i];

	cout << "maxVal=" << maxVal << endl;

	//�ִ� ���� ã��
	cout << strlen(str) << endl ;
	char maxChar = str[0];  //�� �� ���� �ִ밪���� ����
	for (int i = 0; i < strlen(str); i++)
		if (maxChar < str[i]) maxChar = str[i];

	cout << "maxChar=" << maxChar << endl;

	return 0;


}*/