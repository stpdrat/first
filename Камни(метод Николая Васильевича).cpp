//#include<iostream>
//#include<algorithm>
//#include<iomanip>
//using namespace std;
//const int n = 400, k = 18;
//int main()
//{
//	int a[n][n] = { {0} }, i, j, answer19, answer20_1, answer21, answer20_2;
//	for (j = k + 1; j < n; j++)
//		if (a[0][j - 1] > 0 && a[0][j / 2])
//			a[0][j] = - max(a[0][j - 1], a[0][j / 2]);
//		else
//		{
//			a[0][j] = -1000;
//			if(a[0][j-1]<=0)
//				a[0][j]= max(a[0][j - 1], a[0][j]);
//			if (a[0][j/2] <= 0)
//				a[0][j] = max(a[0][j/2], a[0][j]);
//			a[0][j] = -a[0][j] + 1;
//		}
//	for (j = k + 1; j < n; j++)
//		a[j][0] = a[0][j];
//	for (i = 1; i < n; i++)
//		for (j = max(k + 1 - i, 1); j < n; j++)
//			if (a[i][j - 1] > 0 && a[i][j / 2] > 0 && a[i - 1][j] > 0 && a[i / 2][j] > 0)
//				a[i][j] = -max(max(a[i - 1][j], a[i / 2][j]), max(a[i][j - 1], a[i][j / 2]));
//			else
//			{
//				a[i][j] = -1000;
//				if (a[i - 1][j] <= 0)
//					a[i][j] = max(a[i][j], a[i - 1][j]);
//				if (a[i/2][j] <= 0)
//					a[i][j] = max(a[i][j], a[i / 2][j]);
//				if (a[i][j-1] <= 0)
//					a[i][j] = max(a[i][j], a[i][j-1]);
//				if (a[i][j/2] <= 0)
//					a[i][j] = max(a[i][j], a[i][j/2]);
//				a[i][j] = -a[i][j]+1;
//			}
//	cout << "   ";
//	for (i = 0; i < 40; i++)
//		cout << setw(3) << i;
//	cout << endl;
//	for (i = 0; i < 40; i++)
//	{
//		cout << setw(3) << i;
//		for (j = 0; j < 40; j++)
//			cout << setw(3) << a[i][j];
//		cout << endl;
//	}
//	for (i = 0; i < n; i++)
//		if (a[i][i] == -1)
//			answer19 = i;
//	for (i = 0; i < n; i++)
//		if (a[i][13] == 2)
//			answer20_1 = i;
//	for (i = 0; i < n; i++)
//		if (a[i][13] == 2)
//			{
//				answer20_2 = i;
//				break;
//			}
//	for (i = 0; i < n; i++)
//		if (a[i][i] == -2)
//		{
//			answer21 = i;
//			break;
//		}
//	cout << "first question: " << answer19 << endl;
//	cout << "second question: " << answer20_1<< " " << answer20_2 << endl;
//	cout << "third question: " << answer21 << endl;
//}