/*#include <iostream>
#include <cstdlib>
using namespace std;


int main() {

	int i, com, guess, min = 1, max = 100;

	srand((unsigned)time(NULL));    //0~43억
	com = rand() % 100 + 1;         //컴퓨터가 추측한 숫자
	//int i = 1;

	//while (true) {
	    for(i = 0; i < 20; i++) {
		cout << "[" << i + 1 << "회]" << min << "~" << max << "사이의 값 예측=>";
		cin >> guess;

		//조건처리
		if (guess == com) {
			cout << "정답입니다" << endl;
			break;
		}
		else if (guess > com) {
			cout << "너무커요" << endl;
			max = guess;
		}
		else {
			cout << "너무작아요" << endl;
			min = guess;
		}
			
	}
	cout << "정답:" << com<<endl;
	cout << "최종점수" << (10 - i) * 10 << endl;
	return 0;
}
*/