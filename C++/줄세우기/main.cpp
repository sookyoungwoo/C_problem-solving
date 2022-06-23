#include <iostream>
#include <vector>
using namespace std;

// ���� Ž��
// => ���� �ٸ� i�� ���ؼ� target2�� ���� �� ����
// => �ߺ��Ǵ� ����
// => �׷��� ���� Ž�� ��������� �޸������̼��� ������ �����
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

// ��� ȣ�� ����� ���� ��ȹ��
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

// �޸������̼� ����

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
	cout << n - ret << endl;  // �ִ� ���� �κ� ���� ������ �ٸ� �κ�!
	return 0;
}
