#include <iostream>
#include <string>

const int max = 50;

using namespace std;

bool line(int arr[][max], const int e, const int l, const int n)  //查看是否为行最大
{
	for (int i = 0; i < n; ++i)
		if (e < arr[l][i])                                        //若能在该行中找到一对比e还大的
			return 0;                                             //则不是该行最大，返回0
	return 1;
}

bool row(int arr[][max], const int e, const int r, const int n)  //查看是否为列最小
{
	for (int i = 0; i < n; ++i)
		if (e > arr[i][r])
			return 0;
	return 1;
}

int main()
{
	int n;
	int arr[max][max]{ 0 };

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		for (int k = 0; k < n; ++k)
			cin >> arr[i][k];
	}

	int flag = 0;			       //是否存在一对
	for (int i = 0; i < n; ++i)
	{
		for (int k = 0; k < n; ++k)
		{
			int e = arr[i][k];
			if (line(arr, e, i, n) == 1 && row(arr, e, k, n) == 1)  //如果两个条件都满足的话
			{
				cout << i << " " << k << endl;
				flag = 1;
			}
		}
	}

	if (flag == 0)			//若没有
		cout << "NONE" << endl;
	return 0;
}
