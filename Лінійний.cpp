#include <iostream>

using namespace std;

int main()
{
	int *array, n, num = 0, k; 

	cin >> n; // ввести розмір масива

	array = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> array[i]; // ввести елементи масиву
	}

	cin >> k; // ввести цифру, що шукається

	for (int i = 0; i < n; i++)
	{
		if (array[i] == k)
		{
			num++;
		}
	}
	cout << num << endl;

	delete array;
	return 0;
}