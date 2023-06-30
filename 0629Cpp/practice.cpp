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

	//for (const auto& ele : map1)
	//	cout << ele.first << ' ' << ele.second << ' ';

	//cout << endl;

	//for (const auto& ele : map2)
	//	cout << ele.first << ' ' << ele.second << ' ';

	//cout << endl;

	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		bool isNumeric = true;

		for (int i = 0; i < str.length(); i++)
		{
			if (isdigit(str[i]) == false)
			{
				isNumeric = false;
				break;
			}
		}

		if (isNumeric == true)
			cout << map1[stoi(str)] << endl;

		else
			cout << map2[str] << endl;
	}

	return 0;
}