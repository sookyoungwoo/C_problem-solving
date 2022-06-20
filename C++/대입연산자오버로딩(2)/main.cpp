#include <iostream>
using namespace std;

char arr[100];

int MyIntArray(int n){
	arr[5]='Invalid index';
}

int main(void){
	MyIntArray arr(5);
	for(int i=0;i<5;i++)
	arr[i]=i;
	for(int i=0;i<6;i++)
	cout << arr[i];
	return 0;
}
