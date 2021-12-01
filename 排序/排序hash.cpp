#include <iostream>
#include<cstring>
using namespace std;

const int size=1000001;

int main()
{
	int array[size];
	memset(array, 0, sizeof(array));

	int in_num, ou_num, num;
	cout << "input the quantity of numbers and the quantity you want to output:" << endl;
	cin >> in_num >> ou_num;
	cout << "input the numbers" << endl;
	for (int i = 0; i < in_num; i++)
	{
		cin >> num;
		array[num + size / 2] = num;
	}

	cout << "output the number" << endl;
	int cnt=0;
	for (int i = size - 1; i >= 0; i--)
	{
		if (array[i])
		{
			cout << array[i] << " ";
			cnt++;
		}
		if(cnt==ou_num)
		{
			break;
		}
	}
}
