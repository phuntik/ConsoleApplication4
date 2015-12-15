#include <iostream>
#include <cstdlib>

using namespace std;







void main()
{
	signed int m1[5], m2[5], temp;
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
	cout << "First mass sorted:" << endl;
	for (int i = 0;i < 5; i++)
	{
	cout << m1[i]<<" ";
	}
	cout << endl;
	cout << "Second mass sorted:" << endl;
	for (int i = 0;i < 5; i++)
	{
	cout << m2[i]<<" ";
	}
	cout << endl;
	
	for (int i = 0; i < 5; i++)
	{
		if (m1[i] > 0)
			for (int j = 0; j < 5; j++)
			{
				if (m2[j] < 0)
				{
					temp = m1[i];
					m1[i] = m2[j];
					m2[j] = temp;
					break;
				}
				if (m2[4] > 0)
				{
					m1[i] = 0;
				}
			}

	}

	for (int i = 0; i < 5; i++)
	{
		if (m2[i] < 0)
			for (int j = 0; j < 5; j++)
			{
				if (m1[j] > 0)
				{
					temp = m2[i];
					m2[i] = m1[j];
					m1[j] = temp;
					break;
				}
				if (m1[4] < 0)
				{
					m2[i] = 0;
				}
			}

	}

	cout << "First mass replaced:" << endl;
	for (int i = 0;i < 5; i++)
	{
		cout << m1[i] << " ";
	}
	cout << endl;
	cout << "Second mass replaced:" << endl;
	for (int i = 0;i < 5; i++)
	{
		cout << m2[i] << " ";
	}
	cout << endl;

}