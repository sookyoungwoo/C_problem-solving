#include <iostream>
#include <vector>
using namespace std;

// 완전 탐색
// => 서로 다른 i에 대해서 target2는 같을 수 있음
// => 중복되는 문제
// => 그러나 완전 탐색 방법에서는 메모이제이션이 적용이 어려움
int lis1(vector<int>& target)
{
	if(target.empty()) return 0;
	int ret = 0;
	for(int i = 0 ; i < target.size() ; i++) {
		vector<int> target2;
		for(int j = i+1 ; j < target.size() ; j++) {
			if(target[j] > target[i])
				target2.push_back(j);
		ret = max(ret, 1+lis1(target2));
		}
	}
	return ret;
}

// 재귀 호출 기반의 동적 계획법
int n = 7;
int target[500] = {3, 7, 5, 2, 6, 1, 4};
int lis2(int start)
{
	if(start == n) return 0;
	int ret = 1;
	for(int i = start+1 ; i < n ; i++)
		if(target[start] < target[i])
			ret = max(ret, 1+lis2(i));
	return ret;
}

// 메모이제이션 적용

int cache[100];
void init(int val)
{
	for(int i = 0 ; i < 100 ; i++)
			cache[i] = val;
}

int lis3(int start)
{
	if(cache[start] != -1) return cache[start];
	int ret = 1;
	for(int i = start+1 ; i < n ; i++)
		if(target[start] < target[i])
			ret = max(ret, 1+lis3(i));
	cache[start] = ret;
	return cache[start];
}


int main(void)
{
	cin >> n;
	for(int i = 0 ; i < n ; i++)
		cin >> target[i];
	init(-1);
	int ret = 0;
	for(int i = 0 ; i < n ; i++)
		ret = max(ret, lis3(i));
	cout << n - ret << endl;  // 최대 증가 부분 수열 문제와 다른 부분!
	return 0;
}
