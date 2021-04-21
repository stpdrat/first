//#include<iostream>
//#include<algorithm>
//using namespace std;
//const int N = 2, M = 5;
//int main()
//{
//	int c, b, n, i, j;
//	int a[N][M] = { 0 };
//	cin >> n;
//	cin >> c >> b;
//	a[0][c % 5] = c;
//	a[0][b % 5] = b;
//	for (i = 1; i < n; i++)
//	{
//		cin >> c >> b;
//		for(j = 0; j < 5; j++)
//			if (a[0][j] > 0)
//			{
//				a[1][(a[0][j] + c) % 5] = max(a[0][j] + c, a[1][(a[0][j] + c) % 5]);
//				a[1][(a[0][j] + b) % 5] = max(a[0][j] + b, a[1][(a[0][j] + b) % 5]);
//			}
//		for (j = 0; j < 5; j++)
//			a[0][j] = a[1][j];
//	}
//	cout << a[1][0] << endl;
//	cin >> i;
//	return 0;
//}