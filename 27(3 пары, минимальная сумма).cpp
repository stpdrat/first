//#include<iostream>
//#include<algorithm>
//using namespace std;
//const int N = 2, M = 6;
//int main()
//{
//	int c, b, n, i, j, a, minn = 10000000, s = 0, ost[6] ;
//	cin >> n;
//	for (i = 0; i < 6; i++)
//		ost[i] = 1000000;
//	for (i = 0; i < n; i++)
//	{
//		cin >> a >> b >> c;
//		s = s + (a+b+c-max(max(a,b),c));
//		ost[(abs(a - b)) % 6] = min(abs(a - b), ost[(abs(a - b)) % 6]);
//		ost[(abs(a - c)) % 6] = min(abs(a - c), ost[(abs(a - c)) % 6]);
//		ost[(abs(c - b)) % 6] = min(abs(c - b), ost[(abs(c - b)) % 6]);
//	}
//	if (s % 6 == 0)
//		cout << s << endl;
//	else
//		cout << s + ost[6-s%6] << endl;
//	return 0;
//}