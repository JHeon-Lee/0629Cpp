// �Է��� �ܾ� ���� m
// ������ ������ Ƚ�� n
// �ܾ� ���� m�� �°� �ܾ� �Է�
// n�� Ƚ���� ���� ���
// �ܾ �Է��ϸ� ���ڰ� ���
// ���ڸ� �Է��ϸ� �ܾ ���
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

		// stoi �ڷ��� Ȯ��
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