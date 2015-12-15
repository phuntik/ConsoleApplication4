#include <iostream>
#include <cstdlib>

using namespace std;







void main()
{
	signed int m1[5], m2[5];
	cout << "Input 1st mass" << endl;
	for (int i = 0;i < 5; i++)
	{
		cin >> m1[i];
	}
	cout << "Input 2nd mass" << endl;
	for (int i = 0;i < 5; i++)
	{
		cin >> m2[i];
	}


	for (int i = 0; i < 5; i++)//сортировка 1 массива
	{
		int temp = m1[0]; // буферная переменная
		for (int j = i + 1; j < 5; j++)
		{
			if (m1[i] > m1[j])
			{
				temp = m1[i];
				m1[i] = m1[j];
				m1[j] = temp;
			}
		}
	}

	for (int i = 0; i < 5; i++)//сортировка 2 массива
	{
		int temp = m2[0]; // буферная переменная
		for (int j = i + 1; j < 5; j++)
		{
			if (m2[i] < m2[j])
			{
				temp = m2[i];
				m2[i] = m2[j];
				m2[j] = temp;
			}
		}
	}
	/*
	cout << endl;
	for (int i = 0;i < 5; i++)
	{
	cout << m1[i]<<" ";
	}
	cout << endl;
	for (int i = 0;i < 5; i++)
	{
	cout << m2[i]<<" ";
	}
	cout << endl;
	*/
}