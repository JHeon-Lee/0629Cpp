#include <iostream>
#include <vector>
#include <algorithm> // 헤더 추가 필요
#include <random>
#include <string>

using namespace std;

random_device rd;
mt19937_64 mt(rd());

int main()
{
	vector<int> container;

	for (int i = 0; i < 10; i++)
		container.push_back(i);

	shuffle(container.begin(), container.end(), mt); // shuffle 알고리즘

	for (auto iter = container.begin(); iter != container.end(); iter++)
		cout << *iter << " ";
	cout << endl;

	auto iter = min_element(container.begin(), container.end()); // 최소값 찾기
	cout << *iter << endl;
	
	iter = max_element(container.begin(), container.end()); // 최대값 찾기
	cout << *iter << endl;

	iter = find(container.begin(), container.end(), 7); // 값 찾기
	cout << *iter << endl;

	sort(container.begin(), container.end()); // 정렬
	for (auto iter = container.begin(); iter != container.end(); iter++)
		cout << *iter << " ";
	cout << endl;

	// 입력할 단어 개수 m
	// 게임을 진행할 횟수 n
	// 단어 개수 m에 맞게 단어 입력
	// n의 횟수에 따라 출력
	// 단어를 입력하면 숫자가 출력
	// 숫자를 입력하면 단어가 출력
	// ex) 5 3
	// grapes, apple, kiwi, lemon, peach
	// 3 -> kiwi
	// lemon -> 4
	// grapes -> 1
	// stoi : string to int
	string str1 = "123";
	string str2 = "456";

	cout << str1 + str2 << endl;;

	int i1 = stoi(str1);
	int i2 = stoi(str2);

	cout << i1 + i2;

	return 0;
}