#include<iostream>
#include<cmath>
using namespace std;
/*任何一个正整数都可以用 2 的幂次方表示。137 可表示为 2(7)+2(3)+2(0)*/
void ji_suan(int x)
{
	for (int i = 14; i >= 0; i--)//因为题目所给的最大数据不超过2（14）
	{
		if (pow(2, i) <= x) {
			if (i == 0) cout << "2(0)";
			else if (i == 1) cout << "2";//若是很小那么就直接输出，只不过有格式要求
			else {
				cout << "2(";
				ji_suan(i);/*若是比较大，不能用2直接表示，但是里面的数字小了很多*/
				cout << ")";
			}
			x -= pow(2, i);//继续循环分解下面的
			if (x != 0) cout << "+";
		}
	}
}

int main()
{
	int a;
	cin >> a;
	ji_suan(a);
	return 0;
}
