#include "Graph.h"

int main()
{
	system("chcp 1251 & cls");

	Graph<int> test(10);
	Graph<int> test2(10);

	test.create_mtx();

	Graph<int> test1(test);
	cout << test;

	test2.create_mtx();
	
	cout << "������� �������� ��� ������ � ������:";
	size_t d;
	cin >> d;
	test2.bft(d);
	
	cout << "������� �������� ��� ������ � �������:";
	cin >> d;
	test2.dft(d);

	system("pause");
	return 0;
}