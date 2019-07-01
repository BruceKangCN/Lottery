#include <iostream>
#include <random>
#include <functional>

using namespace std;

int main()
{
	int n = 0;
	int size = 1;

	cout << "Size:\t\t";
	cin >> size;
	cout << "Max number:\t";
	cin >> n;

	random_device rd;
	mt19937 mt(rd());
	uniform_int_distribution<int> dist(0, n);
	auto dice = std::bind(dist, mt);

	for (int i = 0; i < size; i++)
	{
		cout << dice() << endl;
	}

	return 0;
}