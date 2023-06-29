#include <iostream>
#include <vector>
#include <algorithm> // ��� �߰� �ʿ�
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

	shuffle(container.begin(), container.end(), mt); // shuffle �˰���

	for (auto iter = container.begin(); iter != container.end(); iter++)
		cout << *iter << " ";
	cout << endl;

	auto iter = min_element(container.begin(), container.end()); // �ּҰ� ã��
	cout << *iter << endl;
	
	iter = max_element(container.begin(), container.end()); // �ִ밪 ã��
	cout << *iter << endl;

	iter = find(container.begin(), container.end(), 7); // �� ã��
	cout << *iter << endl;

	sort(container.begin(), container.end()); // ����
	for (auto iter = container.begin(); iter != container.end(); iter++)
		cout << *iter << " ";
	cout << endl;

	// �Է��� �ܾ� ���� m
	// ������ ������ Ƚ�� n
	// �ܾ� ���� m�� �°� �ܾ� �Է�
	// n�� Ƚ���� ���� ���
	// �ܾ �Է��ϸ� ���ڰ� ���
	// ���ڸ� �Է��ϸ� �ܾ ���
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