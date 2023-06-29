// 입력할 단어 개수 m
// 게임을 진행할 횟수 n
// 단어 개수 m에 맞게 단어 입력
// n의 횟수에 따라 출력
// 단어를 입력하면 숫자가 출력
// 숫자를 입력하면 단어가 출력
// 
// ex) 5 3
// grapes, apple, kiwi, lemon, peach
// 3 -> kiwi
// lemon -> 4
// grapes -> 1
// 
// stoi : string to int

#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <typeinfo>

using namespace std;

int main()
{
	map<int, string> map1;
	map<string, int> map2;

	int m, n;
	cin >> m >> n;

	for (int i = 1; i < m + 1; i++)
	{
		string str;
		cin >> str;
		map1[i] = str;
		map2[str] = i;
	}

	for (const auto& ele : map1)
		cout << ele.first << ' ' << ele.second << ' ';

	cout << endl;

	for (const auto& ele : map2)
		cout << ele.first << ' ' << ele.second << ' ';

	cout << endl;

	for (int i = 0; i < n; i++)
	{
		int a(0);
		string str;
		cin >> str;

		// stoi 자료형 확인
		if (typeid(stoi(str)) == typeid(a))
		{
			for (const auto& ele : map1)
			{
				if (stoi(str) == ele.first)
				{
					cout << ele.second << endl;
					break;
				}
			}
		}
		else
		{
			for (const auto& ele : map2)
			{
				if (str == ele.first)
				{
					cout << ele.second << endl;
					break;
				}
			}
		}
	}

	return 0;
}