/*#include <iostream>
using namespace std;//소속(분류)


int main() {

    //자료형의 크기
	//정수형
	cout << "int형:" << sizeof(int)<<"byte"<<endl;
	cout << "short:" << sizeof(short)<<"byte"<<endl;
	cout << "long형:" << sizeof(long)<<"byte"<<endl;
	
	
	//실수형
	cout << "float형:" << sizeof(float)<<"byte"<<endl;
	cout << "double형:" << sizeof(double)<<"byte"<<endl;

	//문자형
	cout << "char형:" << sizeof(char) << "byte" << endl;

	//논리형
	cout << "bool형:" << sizeof(bool) << "byte" << endl;
	
	//자료형의 범위
	char ch = 97;
	cout << ch << endl;  //a
	char ch2 = 200;      //범위 초과
	cout << ch2 << endl;  // ch형은 -128~127까지이므로 범위 초과

	int num1 = 2147483647;
	cout << num1 << endl;

	int num2 = 2147483648;  //오버플로우
	cout << num2 << endl; -2147483648


	return 0;
}*/