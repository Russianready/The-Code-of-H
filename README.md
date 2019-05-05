# The-Code-of-H
//一些简单的题目的代码集锦
#include <iostream>
#include <string>

using namespace std;


int main()
{
	int fish = 0, dry = 0, flag = 0;  //flag 打鱼or晒网的开关， 0表示开启打鱼， 1表示晒网
	int day, N;  //日子
	cin >> day;
	N = day;
	while (day > 0)
	{
		if (flag == 0)
			fish++;        //打鱼
		else if (flag == 1)
			dry++;         //晒网
		day--;
		if (day == 0)      //如果到了第0天，则直接蹦出循环
			break;
		if (fish == 3)
		{
			fish = 0;
			flag = 1;
		}
		else if (dry == 2)
		{
			dry = 0;
			flag = 0;
		}

	}
	if (fish > 0)
		cout << "Fishing in day " << N << endl;
	else
		cout << "Drying in day " << N << endl;
	return 0;
}
