// ConsoleApplication4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
//INSERT-SORT;
/*#include <iostream>
using namespace std;
int main() {
	int A[] = { 0,1,5,6,7,84,15,48,65,125,51,56,89,14,5,26 };
	int n,j,i,key;
	n = 15;
	for (i = 2; i <= n; i++) {
		key = A[i];
		j= i - 1;
		while (key < A[j]&&j>0)
		{
			A[j + 1] = A[j];
			j--;
		}
		A[j + 1] = key;
	}
	for (i = 1; i <= n; i++)
		cout << A[i] << ' ';
	system("pause");
	return 0;
}*/
//MERGE-SORT AND BINARY-SEARCH
/*void MERGE(int[], int, int, int);
void MERGE_SORT(int[],int,int);
int BINARY_SEARCH(int[],int,int);
int main() {
	int A[] = { 0,45,8,49,15,3,15,26,48,47,26,98,78,26,85,84,98,48,165,195,156,12,156,19,06,05,6,651,056,06};
	int r, p,mid;
	r = 29;
	p = 1;
	MERGE_SORT(A, p, r);
	for (p = 1; p <= r; p++) {
		cout << A[p]<<' ';
	}
	cout << endl;
	mid=BINARY_SEARCH(A,r,2);
	if(mid!=NULL)
	cout << endl << "the position of '165' is:" << mid<<endl;
	else cout << endl << "could not find this number";
	system("pause");
}
void MERGE(int A[], int p, int q, int r) {
	int n1 = q - p + 2, n2 = r - q+1,k;
	int *R, *L;
    R = new int[n1];
	L = new int[n2];
	int i, j;
	for (i = 1; i < n1; i++)
		L[i] = A[p + i-1];
	for (j = 1; j < n2; j++)
		R[j] = A[q  + j];
	i = j= 1;
	for (k = p; k <= r; k++) {
		if (i == n1)
		{
			A[k] = R[j++];
		}
		else if (j == n2)
		{
			A[k] = L[i++];
		}
		else if (R[j] <= L[i])
		{
			A[k] = R[j++];
		}
		else A[k] = L[i++];
	}
}
void MERGE_SORT(int A[], int p, int r) {
	int q=0;
	if (p < r) {
		q = (p + r) / 2;
		MERGE_SORT(A, p, q);
		MERGE_SORT(A, q+1, r);
		MERGE(A, p, q, r);
	}
}
int BINARY_SEARCH(int A[],int r,int v) {
	int high = r, low = 1,mid;
	while (low <= high) {
		mid = (low + high) / 2;
		if (A[mid] == v)
			return mid;
		else if (A[mid] > v)
			high = mid - 1;
		else if (A[mid] < v)
			low = mid + 1;
	}
	return NULL;
}*/
/*#include <iostream>
using namespace std;
int main() {
	char a[1000];
	m = 0;
	while (cin >> a) {
		int i, n, len, m;
		len = strlen(a);
		for (i = 0; i<len - 3; i++)
		{
			if (a[i] == 'D' || a[i] == 'd')
			{
				n = i + 1;
				if (a[n] == 'O' || a[n] == 'o')
				{
					n++;
					if (a[n] == 'g' || a[n] == 'G')
					{
						n++;
						if (a[n] == 'E' || a[n] == 'e')
							m++;
					}
				}
			}
		}

	}
	cout << m << endl;
}*/
/*#include <iostream>
using namespace std;
int main() {
	int a[20], right[20], left[20];
	int n, m;
	cin >> n;
	for (m = 0; m<n; m++) {
		int t, b[100001], i, j, sum, left_sum;
		bool jud = false;
		cin >> i;
		b[0] = 0;
		left[m] = t = 1;
		right[m] = 1;
		cin >> b[1];
		sum = left_sum = b[1];
		for (j = 2; j <= i; j++)
		{
			if (sum<0) {
				jud = true;
				sum = 0;
				t = j;
			}
			cin >> b[j];
			sum += b[j];
			if (sum>left_sum) {
				left_sum = sum;
				right[m] = j;
				left[m] = t;
			}
		}
		a[m] = left_sum;
	
	}	for (m = 0; m < n; m++) {
		cout << "Case " << m + 1 << ':' << endl << a[m] << ' ' << left[m] << ' ' << right[m] << endl;
		if (m != n - 1)
			cout << endl;
	}
	system("pause");
	return 0;
}
*/
/*#include<iostream>
#include<vector>
const int N = 100010;
using namespace std;

int main() {
	vector<int>vec;
	int T;
	cin >> T;
	int flag = 1;
	while (T--) {
		int n;
		int first;
		int last = 1;
		cin >> n;
		int a[N], d[N];
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		d[1] = a[1];
		cout << "Case " << flag++ << ":" << endl;
		for (int j = 2; j <= n; j++) {
			if (d[j - 1]<0) {
				d[j] = a[j];
			}
			else {
				d[j] = d[j - 1] + a[j];
			}
		}
		int max = d[1];
		for (int i = 1; i <= n; i++) {
			if (d[i]>max) {
				max = d[i];
				last = i;
			}
		}
		int f = last;
		int t = 0;
		for (int k = f; k>0; k--) {
			t = t + a[k];
			if (t == max)
				first = k;
		}
		cout << max << " " << first << " " << last;
		if (T >= 1)
			cout << endl << endl;
		else
			cout << endl;
	}
	system("pause");
	return 0;
}*/
/*#include <iostream>
using namespace std;
typedef struct Sort{
	Sort *ahead;
	int num;
	Sort *next;
}sort;
int main(){
	int n, m,a,len;
	cin >> n >> m;
	cin >> a;
	sort *sorted, *p, *q,*head, *tail,*h,*t;
	sorted = new sort();
	sorted->num = a;
	sorted->ahead = new sort();
	sorted->next = new sort();
	p = sorted->ahead;
	q = sorted->next;
	p->next = sorted;
	q->ahead = sorted;
	p->ahead = NULL;
	q->next = NULL;
	head = tail = h = t = sorted;
	len = 1;
	n--;
	while (n > 0) {
		cin >> a;
		t = tail;
		h = head;
		if (len < m) {
			if (a > tail->num&&a < head->num)
			{
				q->num = a;
				while (q->num > t->num) {
					int temp;
					temp = t->num;
					t->num = q->num;
					q->num = temp;
					q = q->ahead;
					t = t->ahead;
					if (t == p)
						break;
				}
				tail = tail->next;
				q = t = tail;
				q->next = new sort();
				q = q->next;
				q->ahead = t;
				q->next = NULL;
				len++;
			}
			else if (a <= tail->num)
			{
				q->num = a;
				q->next = new sort();
				tail = t = q;
				q = q->next;
				q->ahead = t;
				q->next = NULL;
				len++;
			}
			else
			{
				p->num = a;
				p->ahead = new sort();
				head = h = p;
				p = p->ahead;
				p->next = h;
				p->ahead = NULL;
				len++;
			}
		}
		else {
			if (a > tail->num) {
                 q->num = a;
				while ((q->num) > (t->num)) {
					int temp;
					temp = t->num;
					t->num = q->num;
					q->num = temp;
					q = q->ahead;
					t = t->ahead;
					if (t == p)
						break;
				}
				q = tail->next;
				t = tail;
			}
		}
		n--;
	}
	while (h->next != NULL)
	{
		cout << h->num;
		h = h->next;
		if (h->next != NULL)
			cout << ' ';
	}
	cout << endl;
	system("pause");
}*/
/*#include <iostream>
using namespace std;
int merge(int[], int, int, int);
int  merge_sort(int[], int, int);
int main() {
	int i, m, n;
	while (cin >> m >> n)
	{
		int *a;
		a = new int[m];
		for (i = 0; i < m; i++)
			cin >> a[i];
		merge_sort(a, 0, i - 1);
		for (i = 0; i < n; i++)
		{
			cout << a[i];
			if (i != n - 1)
				cout << ' ';
		}
		cout << endl;
		delete a;
	}
	return 0;
}
int  merge_sort(int a[], int p, int r) {
	int q;
	if (p<r) {
		q = (p + r) / 2;
		merge_sort(a, p, q);
		merge_sort(a, q + 1, r);
		merge(a, p, q, r);
	}
	return 0;
}
int merge(int a[], int p, int q, int r) {
	int n1, n2;
	int i, j;
	n1 = q - p + 1;
	n2 = r - q;
	int *L, *R;
	L = new int[n1];
	R = new int[n2];
	for (i = 0; i<n1; i++)
		L[i] = a[i + p];
	for (j = 0; j<n2; j++)
		R[j] = a[q + j + 1];
	i = 0;
	j = 0;
	int k;
	for (k = p; k <= r; k++) {
		if (i == n1)
			a[k] = R[j++];
		else if (j == n2)
			a[k] = L[i++];
		else if (R[j] >= L[i])
			a[k] = R[j++];
		else a[k] = L[i++];
	}
	delete L, R;
	return 0;
}*///该算法超时的原因可能是c语言的编译及运行速度快过c++的编译和运行速度，故c语言可以AC但c++不行
/*#include <iostream>
#include <algorithm>
bool cmp(int a,int b) {
	if (a != b)
		return a > b;
}
int main() {
	int n, m;
	while (cin >> n >> m) {
		int *a;
		a = new int[n];
		int i = 0;
		for (i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a + n, cmp);
		for (i = 0; i < m; i++)
		{
			cout << a[i];
			if (i != m - 1)
				cout << ' ';
		}
		cout << endl;
	}
}*///该算法超时的原因可能是c语言的编译及运行速度快过c++的编译和运行速度，故c语言可以AC但c++不行
/*#include <iostream>
using namespace std;
int main() {
	int n, m;
	while (cin >> n >> m) {
		long a[1000001] = { 0 };
		long p, i, j, t;
		t = 500000;
		for (i = 1; i <= n; i++)
		{
			cin >> p;
			p = p + t;
			a[p] = 1;
		}
		j = 0;
		for (i = 1000000; i > 0 && j < m; i--) {
			if (a[i] == 1)
			{
				p = i - t;
				cout << p;
				j++;
				if (j != m)
					cout << ' ';
				else cout << endl;

			}
		}
	}
	return 0;
}*/
/*#include <stdio.h>
int merge(int[], int, int, int);
int  merge_sort(int[], int, int);
int main() {
	int i, m, n, *a;
	while (scanf("%d%d", &n, &m) != EOF)
	{
		a= (int *)malloc(sizeof(int)*n);
		for (i = 0; i < n; i++)
			scanf("%d", &a[i]);
		merge_sort(a, 0, i - 1);
		for (i = 0; i < m; i++)
		{
			printf("%d", a[i]);
			if (i != m- 1)
				printf(" ");
		}
		printf("\n");
		free(a);
	}
	return 0;
}
int  merge_sort(int a[], int p, int r) {
	int q;
	if (p<r) {
		q = (p + r) / 2;
		merge_sort(a, p, q);
		merge_sort(a, q + 1, r);
		merge(a, p, q, r);
	}
	return 0;
}
int merge(int a[], int p, int q, int r) {
	int n1, n2, i, j, k, *L, *R;
	n1 = q - p + 1;
	n2 = r - q;
	L = (int*)malloc(sizeof(int)*n1);
	R = (int *)malloc(sizeof(int)*n2);
	for (i = 0; i<n1; i++)
		L[i] = a[i + p];
	for (j = 0; j<n2; j++)
		R[j] = a[q + j + 1];
	i = 0;
	j = 0;
	for (k = p; k <= r; k++) {
		if (i == n1)
			a[k] = R[j++];
		else if (j == n2)
			a[k] = L[i++];
		else if (R[j] >= L[i])
			a[k] = R[j++];
		else a[k] = L[i++];
	}
	free(L);
	free(R);
	return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
	long n;
	while (cin >> n) {
		if (n % 8 == 2 || n % 8 == 6)
			cout << "yes" << endl;
		else cout << "no" << endl;
	}
	return 0;
}*/
#/*include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double f = 3.1415926535;
	cout << f << endl;           // 3.14159
	cout << setiosflags(ios::fixed);  //只有在这项设置后，setprecision才是设置小数的位数。
	cout << setprecision(0) << f << endl;    //输出0位小数，3
	cout << setprecision(1) << f << endl;    //输出1位小数，3.1
	cout << setprecision(2) << f << endl;    //输出2位小数，3.14
	cout << setprecision(3) << f << endl;    //输出3位小数，3.142
	cout << setprecision(4) << f << endl;    //输出4位小数，3.1416
	system("pause");
	return 0;
}*///控制小数点后的位数程序
/*#include <iostream>
#include <iomanip>
using namespace std;
void merge_sort(double *,double*, int, int);
void merge(double*,double*,int,int,int);
int main() {
	double m, n;
	while (cin >> m >> n) {
		if (m < 0 || n < 0)
			break;
		double sum = 0;
		if (n != 0) {
			double *j, *f;
			int i = 0, temp = 0;
			j = new double[n];
			f = new double[n];
			for (i = 0; i < n; i++)
			{
				cin >> j[i] >> f[i];
				if (f[i] == 0)
				{
					sum += j[i];
					i--;
					n--;
				}
			}
			if(n-1>0)
			merge_sort(j, f, 0, n - 1);
			i = 0;
			while (m >0) {
				if (m >= f[i]) {
					sum += j[i];
					m = m - f[i];
					i++;
					if (i == n)
						break;
				}
				else {
					double rate;
					rate = m / f[i];
					sum += rate*j[i];
					m = -1;
					i++;
				}
			}
			delete j,f;
		}
		else sum = 0;
		cout << setiosflags(ios::fixed);
		cout << setprecision(3)<<sum << endl;
		
	}
	return 0;
}
void merge_sort(double *j,double *f, int p, int r) {
	int q = 0;
	if (p < r)
	{
		q = (p + r) / 2;
		merge_sort(j,f, p, q);
		merge_sort(j,f, q + 1, r);
		merge(j,f, p, q, r);
	}
}
void merge(double *j,double *f, int p, int q, int r) {
	int n1, n2, m,n, k;
	double *LD,*LU,*RD,*RU;
	double temp1, temp2;
	n1 = q - p + 1;
	n2 = r - q;
	LD = new double[n1];
	RD = new double[n2];
	LU = new double[n1];
	RU = new double[n2];
	for (m = 0; m < n1; m++)
	{
		LU[m] = j[p + m];
		LD[m] = f[p + m];
	}
	for (n = 0; n < n2; n++)
	{
		RU[n] = j[q + n + 1];
		RD[n] = f[q + n + 1];
	}
	m = 0;
	n = 0;
	temp1 = 0;
	temp2 = 0;
	for (k = p; k <= r; k++)
	{if(m!=n1)
		temp1 = LU[m] / LD[m];
	if(n!=n2)
		temp2 = RU[n] / RD[n];
		if (m == n1)
		{
			j[k] = RU[n];
			f[k] = RD[n++];
		}
		else if (n == n2)
		{
			j[k] = LU[m];
			f[k] = LD[m++];
		}
		else if (temp1 > temp2)
		{
			j[k] = LU[m];
			f[k] = LD[m++];
		}
		else {
			j[k] = RU[n];
			f[k] = RD[n++];
		}
		
	}
	delete RU, RD, LU, LD;
}*/
/*#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int i = 1, j;
	double temp, sum;
	cout << setiosflags(ios::fixed);
	cout << "n e" << endl << "- -----------" << endl;
	cout << "0 1"<<endl;
	cout << "1 2" << endl;
	cout << "2 2.5" << endl;
	i = 3;
	while (i<10) {
		temp = 1;
		sum = 1;
		for (j = 1; j <= i; j++)
		{
			temp = temp / j;
			sum = sum + temp;
		}
		cout << i << ' ' <<setprecision(9)<< sum<<endl;
		i++;
	}
	system("pause");
}*///acm1012

/*#include<stdio.h>
int main()
{
	long int a, b, n, T, s[101];
	while (cin>>a>>b>>n && (a != 0 && b != 0 && n != 0))
	{
		int i, j, T;
		s[0] = 1;
		s[1] = 1;
		for (i = 2; i<101; i++) {//第一个循环

			s[i] = (a*s[i - 1] + b*s[i - 2]) % 7;
			for (j = 1; j<i - 1; j++)//第二个循环
			{
				if (s[j - 1] == s[i - 1] && s[j] == s[i]) {
					T = i - j;
					break;
				}
			}
		}
		n = n%T;
		printf("%ld\n", s[n - 1]);
	}
	return 0;
}*/
//         A                     CCCCCC                M      M               1005
//        A A                   C                     M  M   M M              1005
//       A   A                 C                     M    M M   M             1005
//      A     A               C                     M      M     M            1005
//     A       A              C                    M              M           1005
//    A AAAAAAA A              C                  M                M          1005
//   A           A              C                M                  M         1005
//  A             A              CCCCCC         M                    M        1005
/*#include <iostream>
using namespace std;
typedef struct NODE {
	int a[20];
	NODE *next;
}Node;
Node ring(int,Node*);
int main(){
	
	int n;
	while (cin >> n) {
	Node *head, *p;
	p = new Node();
	p->next = NULL;

	}

}
Node ring(int i) {

}*/
/*
#include <iostream>
using namespace std;
bool Primer(int p, int q) {
	int l, sum = p + q;
	for (l = 2; l <= sum / 2; l++)
	{
		if (sum%l == 0)
			return false;
	}
	return true;
}
int get_ring(int *a, int *b, int i, int n) {
	if (i < n) {
		int j;
		bool jud;
		for (j = 1; j <= n; j++)
		{
			jud = false;
			if (b[j] == 0) {
				jud = Primer(a[i], j);
				if (jud == true) {
					int k;
					a[i + 1] = j;
					b[j] = 1;
					get_ring(a, b, i + 1, n);
					a[i + 1] = 0;
					b[j] = 0;
				}
			}
		}
	}
	else {
		bool jud;
		jud = false;
		jud = Primer(a[n], 1);
		if (jud == true) {
			int t;
			for (t = 1; t <n; t++) {
				cout << a[t] << ' ';
			}
			cout << a[n];
			cout << endl;
		}
	}
	return 0;
}
int main() {
	int n, g;
	g = 1;
	while (cin >> n&&(n>0)&&(n<20)) {
		int a[21] = {0}, b[21] = { 0 }, i;
		a[1] = 1;
		b[1] = 1;
		i = 1;
		cout << "Case " << g << ':' << endl;
		get_ring(a, b, i, n);
		cout << endl;
		g++;
	}
	return 0;
}*/
/*#include <iostream>
#include <iomanip>
using namespace std;
void judge(double&left, double&right) {
	double n = 3600.0*24.0;
	if (right > n&&left < n)
		right = n;
	if (left > n&&right > n)
	{
		left = n;
		right = n;
	}
	if (left < 0 && right>0)
		left = 0;
	if (right < 0 && left < 0)
		left = right = 0;
}
int main() {
	double i;
	double h = 1.0 / 240.0;
	double m = 0.1;
	double s = 6.0f;
	double ms = s - m, hm = m - h, hs = s - h;
	while (cin >> i) {
		double t,temp, sum = 0,left[3],right[3],l,r;
		int rad;
		bool jud = false;
		for (rad = 0.0; rad < 60*24;rad +=1)
		{
			left[0] = (i + rad * 6.0) / hm;
			right[0] = (360 - i + rad *6.0) / hm;
			judge(left[0], right[0]);
		
			//cout << r <<' '<< l <<endl;
		}
		sum = (sum) / (36*2400);
		cout << setiosflags(ios::fixed);
		cout << setprecision(3)<<sum<<endl;
	}
}*/
/*#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int i;
	const double hs = 6.0 - 1.0 / 240.0,hm=0.1-1.0/240.0,ms=6.0-0.1;
	while (cin >> i) {
		double t,t0, t1,k, tl[3], tr[3],rad[3], sum = 0;
		t = hs/ms;
		tl[0]=( i) / hm;
		tr[0]=(360 - 2 * i) / hm;
		rad[1] = tl[0] * ms;
		rad[2] = tl[0] * hs;
		while (rad[1] >= 360.0)
			rad[1] -= 360.0;
		while (rad[2] >= 360.0)
			rad[2] -= 360.0;
		if (rad[1] >= i&&rad[1] <= (360 - 2*i))
		{
			tl[1] = rad[1] / ms;
			tl[1] = (360.0 - 2*i) / ms;
		}
		else if (rad[1] < i)
		{
		tl[1] = i / ms;
		tr[1] = (360 - 2 * i) / ms;
		}
		else {
			tl[1] = tr[1] = 0;
		}
		if (rad[2] >= 2 * i&&rad[2] <= (360 - i))
		{
			tl[2] = rad[2] / hs;
			tr[2] = (360.0 - i) / hs;
		}
		else if (rad[2] < 2 * i)
		{
			tl[2] = 2.0 * i / hs;
			tr[2] = (360.0 - i) / hs;
		}
		else {
			tl[2] = tr[2] = 0;
		}
		if (tl[1] < tl[2])
			tl[1] = tl[2];
		if (tr[1] > tr[2])
			tr[1] = tr[2];
		if(tr[1]>=tl[1])
		sum += tr[1] - tl[1];
		for (k = 1; k <= (tr[0] - tl[0]) / hs;k++)
		{
			tl[1] = (i + (int)(k * 360 * hs / ms )- rad[1]) / ms;
			tr[1] = (360.0 - 2 * i + (int)(k * 360 * hs / ms) - rad[1]) / ms;
			tl[2] = (2 * i + k*360.0 - rad[2]) / hs;
			tr[2] = (360.0 - i + k*360.0 - rad[2]) / hs;
			if (tl[1] < tl[2])
				tl[1] = tl[2];
			if (tr[1] > tr[2])
				tr[1] = tr[2];
			if (tr[1] >= tl[1])
				sum += tr[1] - tl[1];
		}
		sum = sum / (1800);
		cout << sum << endl;
	}
}*/
/*#include <iostream>
using namespace std;
int main() {
	int N, i = 1, kase; double n, m;
	
	while (cin>>N)
	{
		while (N--) {
			int num = 0;
			while (cin >> n >> m && (m + n)) {
				double a, b;
				kase = 0;
				for (b = 2.0; b <= n; b++)
					for (a = 1.0; a < b; a++)
					{
						double temp1, temp2;
						temp1 = (a*a + b*b + m) / (a*b);
						temp2 = (int)temp1;
						if (temp1 == temp2)
							kase++;
					}
				num++;
				cout << "Case " << num << ':' << kase << endl;
			}
			if (N)cout << endl;
		}
	}
}*/
/*#include <stdio.h>
int main(void)

{
	char  buffer[200], s[] = "computer", c = 'l';
	int   i = 35, j;
	float fp = 1.7320534f;
	// 格式化并打印各种数据到buffer
	j = sprintf(buffer, "   String:    %s\n", s); // C4996
	j += sprintf(buffer + j, "   Character: %c\n", c); // C4996
	j += sprintf(buffer + j, "   Integer:   %d\n", i); // C4996
	j += sprintf(buffer + j, "   Real:      %f\n", fp);// C4996
	
	printf("Output:\n%s\ncharacter count = %d\n", buffer, j);
}*/
/*#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int n,i;
	cin >> n;
		while (n>0) {
			float A, B;
			char C;
			cin >> C >> A >> B;
			switch (C) {
			case '+':A = A + B; break;
			case '-':A = A - B; break;
			case '/':A = A / B; break;
			case '*':A = A*B; break;
			}
			if (A == (int)A)
			{
				cout << (int)A;
			}
			else {
				cout << setiosflags(ios::fixed);
				cout << setprecision(2) << A;
			}
			n--;
				cout << endl;
		}
	
	return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
	char a[4];
	while (cin >> a[0] >> a[1] >> a[2]) {
		char temp;
		int i, j;
		for (j = 1; j <= 2; j++) {
			temp = a[j];
			i = j - 1;
			while (a[i] > temp&&i >= 0) {
				a[i + 1] = a[i];
				i--;
			}
			a[i + 1] = temp;
		}
		cout << a[0] << ' ' << a[1] << ' ' << a[2] << endl;
	}
	return 0;
}
*/
/*#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main() {
	float x1,y1,x2,y2;
	cout << setiosflags(ios::fixed);
	while (cin >> x1>>y1>>x2>>y2) {
		float result, temp;
		temp = (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
		result = sqrt(temp);
		cout << setprecision(2) << result << endl;
	}
}*///计算两点之间的距离
//计算球的体积
/*#include <iostream>
#include <iomanip>
#define PI 3.1415927
using namespace std;
int main() {
	double r;
	cout << setiosflags(ios::fixed);
	while (cin >> r) {
		double v;
		v = (4.0 / 3.0)*PI*r*r*r;
		cout << setprecision(3) << v << endl;
	}
	return 0;
}*/
/*#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main() {
	int i;
	const double hm =0.1- 1.0 / 240.0, sm = 6.0-0.1, hs = 6.0-1.0/240.0;
	while (cin >> i) {
		double sum = 0, hmr, msr, hsr, j;
		for (j = 1; j <= 3600*24; j++)
		{
			hmr = hm*j;
			msr = sm*j;
			hsr = hs*j;
			hmr = fmod(hmr, 360);
			msr = fmod(msr, 360.0);
			hsr = fmod(hsr, 360.0);
			if (hmr >= i&&msr >= i && (360 - hmr - msr) >= i)
			{
				sum += 1;
				//cout << hsr << ' ' << msr << ' ' << hmr << endl;
			}
			else if (msr >= i&&hsr >= i && (360 - msr - hsr) >= i)
			{
				sum += 1; //cout << hsr << ' ' << msr << ' ' << hmr << endl<<endl;
			}
		}
		sum = sum/ (36*24);
		cout << setiosflags(ios::fixed);
		cout << setprecision(3)<<sum << endl;
	}
	return 0;
}*/
/*#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main() {
	double n;
	cout << setiosflags(ios::fixed);
	while (cin >> n) {
		n=fabs(n);
		cout <<setprecision(2)<< n << endl;
	}
	return 0;
}*///计算绝对值
//换算成绩
/*#include <iostream>
using namespace std;
int main() {
	float n;
	char s;
	while (cin >> n) {
		if (n < 0 || n>100)
		{
			cout << "Score is error!" << endl;
			
		}
		else {
			int k;
			k = (int)n / 10;
			switch (k) {
			case 10:s = 'A'; break;
			case 9:s = 'A'; break;
			case 8:s = 'B'; break;
			case 7:s = 'C'; break;
			case 6:s = 'D'; break;
			default:s = 'E'; break;
			}
			cout << s << endl;
		}
	}
	return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
	long  a[5000],i=0,n;
	while (cin >> n)
	{
		i = 0;
		long long j,m,temp=0,temps;
		a[0] = 1;
		for (j = 1; j <= n; j++) {
			temp = 0;
			for (m = 0; m <= i; m++) {
				 temps= a[m] * j+temp;
				temp = 0;
				
				if (a[m] >= 10)
				{
					temp = a[m] / 10;
					a[m] = a[m] % 10;
				}
				if (m == i&&temp > 0)
				{
					a[m + 1] = temp;
					i++;
					break;
				}
			}
			
		}
		for (m = i; m >= 0; m--)
			cout << a[m];
		cout << endl;
	}
}*/


/*#include <iostream>
const int MAX = 5;
int main() {
	using namespace std;
	int i,j,x,a[12] = { 12,5,6,12,13 };
	i = -1;
	j = 5;
	x = 12;
	while (true) {
		do {
			j--;
		} while (a[j] > x);
		do {
			i++;
		} while (a[i] < x);
		if (i < j) {
			int temp;
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
		else break;

	}
	for (int n = 0; n < 5; ++n) {
		cout << a[n] << ' ';
	}
	cout << endl << j;
	cout << endl;
	system("pause");
	return 0;
}*/


/*
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int main() {
	int n, m;
	while (cin >> n >> m) {
		int l[101], a[101], b[101] = {0};
		memset(a, -1, sizeof(int) * 101);
		bool jud = true,jud2=false,jud3=true;
		for (int i = 1; i <= m; i++) {
			cin >> l[i];
		}
			for (int i = 1; i < m; i++)
			{
				int t;
				if (l[i + 1] < l[i])
					t = l[i + 1] + n;
				else t = l[i + 1];
				a[l[i]] = t - l[i];
				if (a[l[i]] == 0)
					a[l[i]] = n;
				b[l[i]]++;
			}
			for(int i=0;i<=n;i++)
				if (b[i] == 0) {
					jud = false;
				}
			if (!jud)
				cout << "-1" << endl;
			else {
				for (int i = 1; i <= n; i++)
					cout << a[i] << ' ';
				cout << endl;
			}
	}
	return 0;
}*/



/*
#include<stdio.h>  
#include <iostream>
#include<algorithm>  
using namespace std;

int f[10001];
int p[10001];

struct Mouse {
	int w;
	int s;
	int n;
}Mic[10001];

bool compare(const Mouse &a, const Mouse &b) {
	if (a.w == b.w)
		return a.s > b.s;
	else
		return a.w < b.w;
}

void printLIS(int max_l) {
	if (p[max_l] == max_l) {
		printf("%d\n", Mic[max_l].n);
		return;
	}
	printLIS(p[max_l]);
	printf("%d\n", Mic[max_l].n);
}

int main() {
	int i = 1, max = 0, max_l = 0;
	while (cin>>Mic[i].w>>Mic[i].s) {
		f[i] = 1;
		p[i] = i;
		Mic[i].n = i;
		i++;
	}
	sort(Mic + 1, Mic + i, compare);

	for (int k = 1; k<i + 1; k++) {
		for (int j = 1; j<k; j++) {
			if (Mic[j].s>Mic[k].s&&Mic[j].w<Mic[k].w) {
				if ((f[j] + 1)>f[k]) {
					f[k] = f[j] + 1;
					p[k] = j;
					if (f[k]>max) {
						max = f[k];
						max_l = k;
					}
				}
			}
		}
	}
	printf("%d\n", max);
	printLIS(max_l);
	system("pause");
	return 0;
}*///ACM1160



/*
#include <iostream>
#include <string>
using namespace std;
struct Chara {
	char c;
	int t;
	bool used;
	int len;
	Chara *LeftChild;
	Chara *RightChild;
}c[27],*t[27];
void Build_Tree();
void getLenth(Chara*, int);
int main() {
	int n;
	cin >> n;

	while (n--) {
		string s;
		int m;
		cin >> m;
		cin.get();
		cin >> s;
		c[0].c = 'a' - 1;
		c[0].t = 0;
		c[0].used = false;
		for (int i = 1; i < 27; i++) {
			c[i].c = c[i - 1].c + 1;
			c[i].t = 0;
			c[i].len = 0;
			c[i].used = false;
			c[i].LeftChild = NULL;
			c[i].RightChild = NULL;
		}
		for (int i = 0; i < s.size(); i++) {
			int temp;
			temp = s[i] - 'a' + 1;
			c[temp].t++;
		}
		int lenth=0;
		Build_Tree();//建最优二叉树
		for (int i = 0; i < s.size(); i++) {
			int temp;
			temp = s[i] - 'a' + 1;
			lenth += c[temp].len;
		}
		cout << lenth;
		if (lenth > m)
			cout << "no";
		else cout << "yes";
		cout << endl;
	}
	system("pause");
}
void Build_Tree() {
	int p=-1;
	Chara *head=NULL;
	while (true) {
		Chara *f, *s;
		f = s = NULL;
		for (int i = 1; i < 27; i++) {
			if (f == NULL&&s == NULL&&c[i].t != 0&&c[i].used==false)
				f = s = &c[i];
			if (s!=NULL&&c[i].used == false && c[i].t <= s->t&&c[i].t!=0)
			{
				f = s;
				s = &c[i];
			}
		}
		for (int i = 0; i <= p; i++) {
			if (f == NULL&&s == NULL&&t[i]->t != 0 && t[i]->used == false)
				f = s = t[i];
			if (s!=NULL&&t[i]->used == false && t[i]->t <= s->t) {
				f = s;
				s = t[i];
			}
		}//找最小左子树和右子树
		if (f == s) {
			s->used = true;
			f = NULL;
			for (int i = 1; i < 27; i++) {
				if (f == NULL&&c[i].t != 0 && c[i].used == false)
					f = &c[i];
				if (f != NULL&&c[i].used == false && c[i].t <= f->t&&c[i].t != 0)
				{
					f = s;
					s = &c[i];
				}
			}
			for (int i = 0; i <= p; i++) {
				if (f == NULL&&t[i]->t != 0 && t[i]->used == false)
					f = t[i];
				if (f != NULL&&t[i]->used == false && t[i]->t <= f->t) {
					f = t[i];
				}
			}
		}
			if (f ==NULL)break;
		head = new Chara;
		head->LeftChild = f;
		head->RightChild = s;
		head->c = '\0';
		head->used = false;
		head->t = s->t + f->t;
		f->used = true;
		s->used = true;
		p++;
		t[p] = head;
	}
	getLenth(head, 0);
	for (int i = 0; i <= p; i++)
		delete t[i];
}
void getLenth(Chara* p, int n){
	if (p->c >= 'a'&&p->c <= 'z') {
		c[(p->c - 'a' + 1)].len = n;
	}
	else {
		getLenth(p->LeftChild, n+1);
		getLenth(p->RightChild, n+1);
	}
}
*/



/*
#include <iostream>
using namespace std;
int main() {
	int n;
	while (cin >> n&&n!=0) {
		int a[1000];
		long long b[1000];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		b[0] = a[0];
		for (int i = 1; i < n; i++) {
			long long max=-10000;
			bool jud = false;
			for (int j = 0; j < i; j++) {
				if(a[i]>a[j]&&max<b[j])
				{
					max = b[j];
					jud = true;
				}
			}
			if (jud) {
				b[i] = a[i] + max;
			}
			else {
				b[i] = a[i];
			}
		}
		long long max=-10000;
		for (int i = 0; i < n; i++) {
			if (max < b[i])
				max = b[i];
		}
		cout << max<<endl;
	}
}*/


/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <algorithm>
using namespace std;
int cmp(const char* a, const char* b) {
	return strlen(a) < strlen(b);
}
int main() {
	int t;
	cin >> t;
		while (t--) {
			int n,m;
			char* s[100];
			for (int i = 0; i < 100; i++)
				s[i] = new char[101];
			cin >> n;
			cin.get();
			m = n;
			while (m) {
				m--;
			cin.getline(s[m],101);
			}
			sort(s,s+n-1,cmp);
			//找出最长子串;
			int length, max = 0;
			length =strlen(s[0]) ;
			for (int i = 0; i < length; i++) {
				for (int j = length - 1; j >= i; j--) {
					char str1[101],str2[101];
					bool jud = true;
					strncpy(str1, s[0] + i, (j - i + 1));
					str1[j - i + 1] = '\0';
					strcpy(str2, str1);
					_strrev(str2);
					//cout << str1 << ' ' << str2<<endl;
					for (int a = 1; a < n; a++) {
						/*const char *p = str1, *q = str2;
						char c[10] = "no";
						char *l, *k;
						l = strstr(s[a], q);
						k = strstr(s[a], p);
						if (l == NULL)
							l = c;
						if (k == NULL)
							k = c;
						cout << l << ' ' << k << endl;*//*
						if (strstr(s[a], str1)==NULL && strstr(s[a], str2)==NULL)
						{
							jud = false;
							//break;
						}
					}
					//cout << jud <<' '<<strlen(str1)<<' '<<max<<' '<< (max<((int)strlen(str1))) << endl << endl;
					if (jud&& (max<(int)strlen(str1)))
					{
						max = j - i + 1;
						//break;
					}
				}
			}
			//cout << s[0]+2;
			cout << max<<endl;
			
		}
	}*///acm1238



/*
#include <iostream>
#include <algorithm>
using namespace std;
int a[21][1000] = {0};
int b[21] = {0};
bool cmp(int a, int b) {
	return a < b;
}
void unit() {
	a[0][0] = 0;
	b[0]=1;
	a[1][0] = 0;
	b[1] = 1;
	a[2][0] = 0;
	a[2][1] = 1;
	b[2] = 2;
	a[3][0] = 0;
	a[3][1] = 2;
	a[3][2] = 3;
	b[3] = 3;
	for (int m = 4; m <= 20; m++) {
		for (int r = 0; r < m; r++) {
			int temp;
			for (int i = 0; i < b[r]; i++) {
				temp = (m - r)*r + a[r][i];
				bool jud = true;
				for (int j = 0; j < b[m]; j++) {
				if(temp==a[m][j])
				{
					jud = false;
					break;
				}
				}
				if (jud)a[m][b[m]++] = temp;
			}
		}
		sort(a[m], a[m] + b[m], cmp);
	}
}
int main() {
	unit();
	int n;
	while (cin >> n) {
		for (int i = 0; i < b[n]; i++)
			cout << a[n][i] << ' ';
	}
}*/





/*
#include <iostream>
#include <string>
using namespace std;
int k[100][100] = { 0 };
int main() {
	string a, b;
	while (cin >> a >> b) {		
		int temp=0;
		for (int i = 0; i < a.size(); i++) {
			if (a[i] == b[0])
				temp = 1;
			k[i][0] = temp;
		}
		temp = 0;
		for (int i = 0; i <= b.size(); i++) {
			if (a[0] == b[i])
				temp = 1;
			k[0][i] = temp;
		}
		for (int i = 1; i <= a.size(); i++) {
			for (int j = 1; j < b.size(); j++) {
				if (a[i] == b[j])
					k[i][j] = k[i - 1][j - 1]+1;
				else {
					if (k[i-1][j] > k[i][j - 1])
						k[i][j] = k[i-1][j];
					else k[i][j] = k[i][j-1];
				}
			}
		}
		
		cout << k[a.size()-1][b.size()-1]<< endl;
	}
}
*/
//acmn1159



/*
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
struct Position {
	int x;
	int p;
	int t;
}p[100000],f[100000];
bool cmp(Position a, Position b) {
	return a.t < b.t;
}
void put_right(Position p[], int t) {
	Position key = p[t-1];
	int j = t - 2;
	while (key.p < p[j].p&&j>=0) {
		p[j + 1] = p[j];
		j--;
	}
	p[j + 1] = key;
}
int main() {
	int n, t = 0;
	while (scanf("%d", &n)!=EOF,n) {
		for (int i = 0; i < n; i++) {
			scanf("%d%d", &f[i].x, &f[i].t);
			f[i].p = 1;
		}
		sort(f, f + n, cmp);
		p[0].x = 5;
		p[0].t = 0;
		p[0].p = 0;
		t = 1;
		for (int i = 0; i < n; i++) {
			Position max;
			int j = t - 1;
			max.p = -1;
		while(max.p==-1&&j>=0) {
				if (abs(f[i].x - p[j].x) <= abs(f[i].t - p[j].t) && max.p < p[j].p) {
					max = p[j];
				}	
				j--;
			}
			if (max.p != -1) {
				max.p += f[i].p;
				max.t = f[i].t;
				max.x = f[i].x;
				//cout << t << ' ' << max.t << ' ' << max.p << ' ' << max.t << endl;;
				p[t++] = max;
			}
			put_right(p, t);
		}
		int max = 0;
		for (int i = 0; i < t; i++) {
			if (max < p[i].p)
				max = p[i].p;
		}
		cout << max << endl;
	}
}*/




/*
#include <iostream>
#include <algorithm>
using namespace std;
long long a[2001][2001] = {0};
long long b[2001];
int n, k;
long long tired;
bool cmp(long long a, long long b) {
	return a < b;
}
int main() {
	while (cin >> n >> k) {
		for (int i = 1; i <= n; i++)
		{
			cin >> b[i];
		}
		sort(b+1, b + n+1, cmp);
		for(int j=1;j<=k;j++)
		{
			for (int i = 2*j; i <= n; i++) {
				long temp = a[i - 2][j - 1] + (b[i] - b[i - 1])*(b[i] - b[i - 1]);
				if (i == 2 * j)
					a[i][j] = temp;
				else if (a[i - 1][j] < temp)
					a[i][j] = a[i - 1][j];
				else a[i][j] = temp;
			}
		}
		cout << a[n][k] << endl;
	}
}*///acm1421;


/*
#include <iostream>
using namespace std;
int a[6000];
int main() {
	int n;
	int se=1, th=1, fi=1, sev=1;
	a[1] = 1;
	for (int i = 2; i < 5843; i++) {
		if (a[se] * 2 <= a[th] * 3 && a[se] * 2 <= 5 * a[fi]&&a[se] * 2 <= a[sev] * 7) {
			a[i] = a[se] * 2;
			se++;
		}
		else if (a[th] * 3 <= a[se] * 2 && a[th] * 3 <= a[fi] * 5 && a[th] * 3 <= a[sev] * 7) {
			a[i] = a[th] * 3;
			th++;
		}
		else if (a[fi] * 5 <= a[se] * 2 && a[fi] * 5 <= a[th] * 3 && a[fi] * 5 <= a[sev] * 7) {
			a[i] = a[fi] * 5;
			fi++;
		}
		else if (a[sev] * 7 <= a[se] * 2 && a[sev]*7 <= a[th] * 3 && a[sev] * 7 <= a[fi] * 5) {
			a[i] = a[sev] * 7;
			sev++;
		}
		while (a[i] == a[i - 1])
			i--;
	}
	while (cin >> n,n) {
		cout << "The " << n ;
		if (n % 10 == 1 && n / 10 != 1)
		{
			cout << "st";
		}
		else if (n % 10 == 2 && n / 10 != 1) {
			cout << "nd";
		}
		else if (n % 10 == 3 && n / 10 != 1) {
			cout << "rd";
		}
		else cout << "th";
		cout << " humble number is " << a[n] << "." << endl;
	}
}*///acm1058




/*
#include <iostream>
#include <cstdlib>
using namespace std;
struct Dpnode {
	int cost;
	int reduce;
	int pre;
}dp[1<<16];
struct Work {
	char homework[110];
	int cost;
	int deadline;
}work[16];
bool done[1 << 16];
void output(int status) {
	int curjob = dp[status].pre^status;
	int curid = 0;
	curjob >>= 1;
	while (curjob) {
		curid++;
		curjob >>= 1;
	}
	if (dp[status].pre != 0) {
		output(dp[status].pre);
	}
	cout << work[curid].homework << endl;
}
int main()
{
	int t, n;
	cin >> n;
	while (n--) {
		cin >> t;
		for (int i = 0; i < t; i++) {
			cin >> work[i].homework >> work[i].deadline >> work[i].cost;
		}
		memset(done, false, sizeof(done));
		dp[0].cost = 0;
		dp[0].pre = -1;
		dp[0].reduce = 0;
		done[0] = true;
		int upper = (1 << t) - 1;
		for (int i = 0; i < upper; i++) {
			for (int j = 0; j < t; j++) {
				int temp = 1 << j;
				if ((temp&i) == 0) {
					int next = temp | i;
					int cost = dp[i].cost + work[j].cost;
					int reduce = cost - work[j].deadline;
					dp[next].cost = cost;
					if (reduce < 0)reduce = 0;
					reduce = dp[i].reduce + reduce;
					if (done[next]) {
						if (reduce < dp[next].reduce) {
							dp[next].reduce = reduce;
							dp[next].pre = i;
						}
						/*else if (reduce == dp[next].reduce) {
							if (dp[next].pre > i) {
								dp[next].pre = i;
							}
						}
					}*///这部分可以省略因为j是从小到大搜索的，默认已经是字典序了，所以不需要再处理
				/*	}
					else {
							done[next] = true;
							dp[next].reduce = reduce;
							dp[next].pre = i;
						}
					}
				}
			}
		cout << dp[upper].reduce << endl;
		output(upper);
	}
	return 0;
}*///acm1074

/*
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
string good, bad;
string str;
int question[28], star[28];
int b, e;
bool getstar;
long n;
void judge() {
	int i = 0,j;
	bool same = true;
	getstar = false;
	do{
		if (bad[i] == '*')
		{
			b = i;
			getstar = true;
			break;
		}
		while (bad[i] == '?')
		{
			question[str[i] - 'a' + 1] = 1;
			i++;
		}
		if (bad[i] == '*')
		{
			b = i;
			getstar = true;
			break;
		}
		if (bad[i] != str[i])
		{
			same = false;
		}
		i++;
	} while (same&&i<(bad.size()<str.size()?bad.size():str.size()));
	if (!same) {
		cout << "NO" << endl;
		return;
	}
	if (getstar) {
		i = str.size()-1;
		j = bad.size() - 1;
		do {
			if (bad[j] == '*')
			{
				e = i;
				break;
			}
			while (bad[j] == '?')
			{
				question[str[i] - 'a' + 1] = 1;
				i--;
				j--;
			}
			if (bad[j] == '*')
			{
				e = i;
				break;
			}
			if (bad[j] != str[i])
			same = false;
			i--;
			j--;
		} while (same&&i>=0);
	}
	if (!same) {
		cout << "NO" << endl;
		return;
	}
	if (getstar) {
		for (i = b; i <= e; i++) {
			star[str[i] - 'a' + 1] = 1;
			
		}
	}
	for (i = 1; i <= 26; i++) {
		if (question[i] == 1) {
			char c = i + 'a' - 1;
			bool inside = false;
			for (j = 0; j < good.size(); j++) {
				if (c == good[j])
				{
					inside = true;
					break;
				}
			}
			if (!inside) {
				cout << "NO" << endl;
				return;
			}
		}
	}
	if(getstar)
	for (i = 1; i <= 26; i++) {
		if (star[i] == 1) {
			char c =i + 'a' - 1;
			bool outside = true;
			for (j = 0; j < good.size(); j++) {
				if (c == good[j])
				{
					outside = false;
					break;
				}
			}
			if (!outside) {
				cout << "NO" << endl;
				return;
			}
		}
	}
	cout << "YES" << endl;
}
int main() {
	while (cin >> good >> bad>>n) {
	
		for (int i = 0; i < n; i++) {
			memset(question, 0, sizeof(question));
			memset(star, 0, sizeof(star));
			cin >> str;
			judge();
		}
	}
}*/


/**
#include <iostream>
#include <cmath>
using namespace std;
const double x = log10(10.0) / log10(2.0);
long long k[100001];
int i = 1;
int main() {
	long long m;
	for (double j = 1; j <= 100000; j++) {
		k[(long long)j] = j/x;
	}
	while (cin >> m) {
		cout <<"Case #"<<i<<": "<<k[m] << endl;
		i++;
	}
}*/


/*
#include <iostream>
using namespace std;
long long n, k;
long long temp,t;
int i = 1;
int main() {
	while (cin >> n >> k) {
		t = (n - 1) * 2;
		temp = (k - n) % t + n - 1;
		if (temp >= n&&temp < 2 * n - 1)
			temp = temp - n;
		else if (temp >= 2 * n - 1 && temp < 3 * n - 3)
			temp = temp - (2 * n - 1);
		cout <<"Case #"<<i<<": "<<temp+1 << endl;
		i++;
	}
	return 0;
}
*/


/*
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <cstring>
using namespace std;
struct Node {
	int x;
	Node *next;
	Node *end;
}a[200001];
int b[200001], c[200001];//数组b为使用过的结点i，c数组为出现过的颜色ci
int n;
int sum = 0;
int t = 1;
void Find(int i) {
	Node *p;
	p = a[i].next;
	while (p != NULL) {
		if (b[p->x] != 1) {
			b[p->x] = 1;
			c[a[p->x].x]++;
			for (int k = 1; k <= n; k++) {
				if (c[k] != 0)
					sum++;
			}
			Find(p->x);
			b[p->x] = 0;
			c[a[p->x].x]--;
		}
		p = p->next;
	}
}
int main() {
	while (cin >> n) {
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i].x;
			a[i].end = &a[i];
			a[i].next = NULL;
		}
		for (int i = 1; i < n; i++) {
			int k, l;
			Node *p;
			cin >> k >> l;
			p = new Node;
			p->x = l;
			p->next = NULL;
			p->end = NULL;
			a[k].end->next = p;
			a[k].end = p;
			p = new Node;
			p->x = k;
			p->next = NULL;
			p->end = NULL;
			a[l].end->next = p;
			a[l].end = p;
		}
		/*for (int i = 1; i <= n; i++) {
		Node *p;
		p = a[i].next;
		cout << i << ' ';
		while (p != NULL) {
		cout << p->x << ' ';
		p = p->next;
		}
		cout << endl;
		}
		sum = 0;
		for (int i = 1; i <= n; i++) {
			memset(b, 0, sizeof(b));
			memset(c, 0, sizeof(c));
			b[i] = 1;
			c[a[i].x] = 1;
			Find(i);
			//b[i] = 0;
			c[a[i].x]--;
		}
		for (int i = 1; i <= n; i++) {
			Node *p, *q;
			p = a[i].next;
			if (p != NULL)
				q = p->next;
			else q = NULL;
			while (p != NULL) {
				delete p;
				p = q;
				if (q != NULL)
					q = q->next;
			}
		}
		cout << "Case #" << t << ": " << sum / 2 << endl;
		t++;
	}
	return 0;
}
*/


/*
#include <iostream>
using namespace std;
const char cw[9] = "v<^>v<^>";
const char ccw[9] = "v>^<v>^<";
int main() {
	char a, b;
	long long t;
	while (cin >> a >> b >> t) {
		int position1, position2;
		t = t &3;
		for (int i = 0; i < 8; i++) {
			if (cw[i] == a)
			{
				position1 = i;
				break;
			}
		}
		for (int i = 0; i < 8; i++) {
			if (ccw[i] == a) {
				position2 = i;
				break;
			}
		}
		if (cw[position1 + t] == b&&ccw[position2 + t] == b)
		{
			cout << "undefined";
		}
		else if (cw[position1 + t] == b) {
			cout << "cw";
		}
		else if (ccw[position2 + t] == b) {
			cout << "ccw";
		}
	}
	return 0;
}*/



/*
#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
using namespace std;
int chara[27];
bool stand[27];
string s;
void judge(int n, int k) {
	int p;
	for (int i = 0; i < s.size(); i++) {
		p=s[i] - 'a' + 1;
		chara[p]--;
		if (!stand[p]) {
			k--;
			stand[p] = true;
		}
		if (k < 0)
		{
			cout << "YES" << endl;
			return;
		}
		if (chara[p] == 0) {
			k++;
		}
	}
	cout << "NO" << endl;
	return;
}
int main() {
	int n, k;
	while (cin >> n >> k >> s) {
		memset(chara, 0, sizeof(chara));
		memset(stand, 0, sizeof(stand));
		for (int i = 0; i < s.size(); i++) {
			chara[s[i] - 'a' + 1]++;
		}
		judge(n,k);
	}
}*/



/*
#include <iostream>
using namespace std;
int s, v1, v2, t1, t2;
int first, second;
int main() {
	while (cin >> s >> v1 >> v2 >> t1 >> t2) {
		first = s*v1 + t1 * 2;
		second = s*v2 + t2 * 2;
		if (first < second) {
			cout << "First" << endl;
		}
		else if (second < first) {
			cout << "Second" << endl;
		}
		else cout << "Friendship" << endl;
	}
	return 0;
}*/



/*
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;
char a[100010];
int n[12];
int  k;
int sum;
int num;
int temp;
bool cmp(char a, char b) {
	return a < b;
}
int main() {
	while (cin >> k >> a) {
		num = 0;
		sum = 0;
		//cin >> a;
		//sort(a, a + strlen(a), cmp);
		memset(n, 0, sizeof(n));
		for (int i = 0; i < strlen(a); i++) {
			sum += a[i] - '0';
			n['9'-a[i]]++;
		}
		temp = k - sum;
		if (sum >= k) {
			cout << num << endl;
		}
		else {
			for (int i = 9; i >= 0&&temp>0; i--) {
				if (n[i] > 0) {
					if (temp <= i*n[i]) {
						int p = (temp / i)*i;
						if (temp > p) {
							num += temp / i + 1;
						}
						else num += temp / i;
						temp = 0;
						break;
					}
					else {
						temp -= i*n[i];
						num += n[i];
					}
				}
			}
			cout << num << endl;
		}
		//memset(a, 0, sizeof(a));
	}
	return 0;
}*/




/*
#include <iostream>
using namespace std;
long long a,b;
int t;
void  get_b(long long a) {
	if (a % 2 == 0) {
		b = a / 2 +1;
	}
	else b = a / 2 + 2;
	cout << b << endl;
}
int main() {
	cin >> t;
		while (t--) {
			cin >> a;
			get_b(a);
		}
		return 0;
}*/





/*
#include <iostream>
using namespace std;
int a[10000010];
int n,c;
int main() {
	int j = 1;
	a[1] = a[0] = 1;
	a[2] = a[3] = 2;
	j = 3;
	for (int i = 3; j <= 10000000; i++) {
		int temp;
		if (2 == a[j]) {
			temp = 1;
		}
		else temp = 2;
		if (a[i] == 2) {
			a[j + 1] = a[j+2]=temp;
			j += 2;
		}
		else {
			a[j + 1] = temp;
			j++;
		}
	
	
	}
	cin >> c;
	while (c--) {
		cin >> n;
		cout << a[n] << endl;
	}
	return 0;
}*/



/*
#include <iostream>
using namespace std;
unsigned int a[200010], b[200010];
unsigned int n, m,t;
int i, j;
bool flag = true;
int main() {
	cin >> t;
	while (t--) {
		cin >> n >> m;
		flag = true;
		for (i = 1; i <= n; i++) {
			cin >> a[i];
		}
		if (n <= 32&&m>=(1<<(n-1))) {
			m = m % (1 << (n-1));
		}
		cout << m << endl;
		if (m != 0) {
			b[1] = a[1];
			for (i = 2; i <= n; i++) {
				b[i] = b[i - 1] ^ a[i];
			}
			j = 1;
			for (j = 2; j <= m; j++) {
				for (i = 1; i <= n; i++) {
					b[i] = b[i - 1] ^ b[i];
				}
			}
			for (i = 1; i <= n; i++) {
				cout << b[i] << ' ';
			}
			cout << endl;
		}
		else {
			for (i = 1; i <= n; i++) {
				cout << a[i] << ' ';
			}
			cout << endl;
		}
			
	}
	return 0;
}
*/




/*
#include <iostream>
using namespace std;

int main()
{
	cout << "Content-type:text/html\r\n\r\n";
	cout << "<html>\n";
	cout << "<head>\n";
	cout << "<title>Hello World - First CGI Program</title>\n";
	cout << "<style type=\"text\/css\">\n";
	cout << "body{\n";
	cout << "background:Pink;\n";
	cout << "}\n";
	cout << "#fontposition{\n";
	cout << "position: fixed;top:50%;left:50%;width:50%;height:50%;-webkit-transform:translateX(-50%) translateY(-50%); \n";
	cout << "}\n";
	cout << "</style>\n";
	cout << "</head>\n";
	cout << "<body>\n";
	cout << "<div id=\"fontposition\">\n";
	cout << "<h2 style=\"text-align:center;\">Hello World! This is my first CGI program</h2>\n";
	cout << "<h3 style=\"text-align:center;\">Created by Lin KaiTong.</h3>\n";
	cout << "<h4 style=\"text-align:center;\">------a real new programmer.</h4>\n";
	cout << "</div>";
	cout << "</body>\n";
	cout << "</html>\n";
	
	return 0;
}*/



/*
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int t, n;
char a[3001][10] = { 0 };
int  b[3001];
int temp, k = 0;
bool flag = true;
int i, j;
bool check(int cp, int lp) {
	for (int i = 0; i <2; i++) {
		if (a[cp][i] == lp)
			return false;
	}
	return true;
}
int main() {
	cin >> t;
	while (t--) {
		cin >> n;
	   flag = true;
		for (i = 1; i < n; i++) {
			//memset(a[i], 0, sizeof(a[i]));
			k = 0;
			for (j = i + 1; j <= n; j++) {
				cin >> temp;
				if (temp == 1 && k<4) {
					a[i][k] = j;
					k++;
				}
			}
			b[i] = k;
			if (k >= 3 && flag)
				flag = false;
		}
		for (i = 1; i < n; i++) {
			if (flag)
			{
				if (b[i]== 2) {
					flag = check(a[i][0], a[i][1]);
				}
			}
			else break;
		}
		if (flag)
			cout << "Great Team!" << endl;
		else cout << "Bad Team!" << endl;
	}
	return 0;
}*/



/*
#include <iostream>
#include <cmath>
using namespace std;
long long n,temp;
int t,result;
long long min(long long i, long long j) {
	if (i > j)
		return j;
	else return i;
}
long long max(long long i, long long j) {
	if (i < j)
		return j;
	else return i;
}
void check(long long  temp1, int i) {
	if (2 * i * i >= n)
		temp1 = min(temp1, 4 * i);
	if (2 * i * (i + 1) >= n)
		temp1 = min(temp1, 4 * i + 2);
	if (2 * i * i + i - 1 >= n)
		temp1 = min(temp1, 4 * i + 1);
	if (2 * i * (i + 1) + i >= n)
		temp1 = min(temp1, 4 * i + 3);
}
int main() {
	cin >> t;
	while (t--) {
		cin >> n;
		long long temp1 = 1e9,temp2=sqrt(n/2);
		for (int i = max(1, temp2 - 10); i <= temp2 + 10; i++) {
			check(&temp1, &i);
		}
		cout << temp1 << endl;
	}
	return 0;
}
*/


/*
#include <iostream>
#include <cmath>
using namespace std;

const int SIZE = 1e6 + 20;
const int MOD = 1e9 + 7;
int a[SIZE];
long long b[SIZE];
char s1[SIZE], s2[SIZE];
long long ans;
int t;

int main()
{
	scanf("%d", &t);

	while (t--)
	{
		memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));

		cin >> s1 + 1;
		cin >> s2 + 2;

		int n = strlen(s1 + 1);
		int m = strlen(s2 + 1);

		reverse(s1 + 1, s1 + n + 1);
		reverse(s2 + 1, s2 + m + 1);

		for (int i = 2; i <= m; ++i)
		{
			int tmp = a[i - 1];
			while (tmp && s2[tmp + 1] != s2[i]) tmp = a[tmp];
			if (s2[tmp + 1] == s2[i]) a[i] = tmp + 1;
			else a[i] = 0;
		}

		int tmp = 0;
		for (int i = 1; i <= n; ++i)
		{
			while (tmp && s2[tmp + 1] != s1[i]) tmp = gg[tmp];
			if (s2[tmp + 1] == s1[i]) ++tmp;
			if (tmp) ++b[tmp];
		}

		for (int i = m; i > 0; --i)
		{
			if (b[i]) b[a[i]] += b[i];
		}

		ans = 0;
		for (long long i = 1; i <= m; ++i)
		{
			ans = (ans + i * b[i]) % MOD;
		}
		cout << ans << endl;
	}
	return 0;
}*/





/*
#include <iostream>
#include <algorithm>
using namespace std;

class Node{
public:Node() {
	head = tail = 0;
}
	int head;
	int tail;
	bool mid;
};


Node a[10001];
int t;
int n, m;
int u, v;
int num;
int c[100000], d[100000];
void keep(int u, int v);
bool cmp(Node a, Node b) {
	return a.head < b.head;
}
int main() {
	cin >> t;
	while (t--) {
		for (int i = 0; i <=10000; i++) {
			a[i].head = i;
			a[i].tail = 0;
			a[i].mid = false;
		}
		int b = 0;
		num = 0;
		cin >> n >> m;
		b = m;
		for (int i = 0; i <= n; i++) {
			a[i].head = i;
			a[i].tail = 0;
			a[i].mid = false;
		}
		while (b--) {
			cin >> u >> v;
			c[b] = u;
			d[b] = v;
		}
		for (int i = m-1; i >= 0; i--) {
			keep(c[i], d[i]);
		}
		sort(a + 1, a + n, cmp);
		int temp = a[1].head, l = 0;
		num += a[a[1].head].tail;
		for (int i = 2; i <= n; i++) {
			if (temp != a[i].head)
			{
				l++;
				temp = a[i].head;
				num += a[a[i].head].tail;
			}
		}
		cout << num <<endl;
	}
}

void keep(int u, int v) {
	int i = a[u].head;
	int j = a[v].head;
	if (i == j) {
		if (a[u].tail == 0)
		{
			a[i].tail=(u==v?a[i].tail:(a[i].tail-1));
			a[u].tail= (u == v ? a[u].tail : (a[u].tail + 1));
		}
	}
	else if (a[u].mid==false && false == a[v].mid) {
		a[u].tail += a[v].tail == 0 ? 1 : a[v].tail;
		a[v].head = i;
		a[v].mid = true;
		for (int k = 1; k <= n; k++) {
			if (a[k].head == j)
				a[k].head = i;
		}
	}
	else if (a[u].mid != false&&a[v].mid == false) {
		if (a[u].tail != 0)
		{
			a[u].tail += a[v].tail + 1;
			a[i].tail += (a[v].tail == 0 ? 1 : a[v].tail);
		}
		else {
			a[u].tail += a[v].tail + 1;
			a[i].tail += (a[v].tail == 0 ? 1 : a[v].tail)-1;
		}
		a[v].head = i;
		a[v].mid = true;
		for (int k = 1; k <= n; k++) {
			if (a[k].head == j)
				a[k].head = i;
		}
	}
	else if (a[u].mid == false&&a[v].mid != false){
		num++;
		a[u].head = j;
		a[u].mid = true;
		if (a[v].tail == 0) {
			a[v].tail += a[u].tail + 1;
			a[j].tail += (a[u].tail == 0 ? 1 : a[u].tail) - 1;
		}
		else {
			a[v].tail += a[u].tail + 1;
			a[j].tail += (a[u].tail == 0 ? 1 : a[u].tail);
		}
		for (int k = 1; k <= n; k++) {
			if (a[k].head == i)
				a[k].head = j;
		}
	}
	else if (a[u].mid != false&&a[v].mid != false) {
		num++;
		a[i].head = j;
		a[i].mid = true;
		if (a[v].tail == 0) {
			a[v].tail += a[u].tail + 1;
			a[j].tail += (a[u].tail == 0 ? (a[i].tail == 1 ? 0 : (a[i].tail - 2)) : (a[i].tail-1));
		}
		else {
			a[v].tail += a[u].tail + 1;
			a[j].tail += a[u].tail == 0 ? (a[i].tail == 1 ? 1 : (a[i].tail - 1)) : (a[i].tail);
		}
		for (int k = 1; k <= n; k++) {
			if (a[k].head == i)
				a[k].head = j;
		}
	}
}
*/

/*
#include <iostream>
using namespace std;
unsigned long long m, k;
unsigned long long n;
int main() {

	while (cin >> m >> k) {
		n = (m - k)*k + k;
		cout << n << endl;
	}
	return 0;
}*/

/*
#include <iostream>
#include <cstring>
int temple[100][100], result[100][100];
int main() {

	int t,i,j,h,max;
	std::cin >> t;
	while (t--) {
		std::cin >> h;
		for (i = 0; i < h; i++) {
			for (j = 0; j <= i; j++) {
				std::cin >> temple[i][j];
			}
		}
		memset(result, 0, sizeof(result));
		for (j = 0; j < h; j++) {
			result[h - 1][j] = temple[h - 1][j];
		}
		for (i = h - 2; i >= 0; --i) {
			for (j = 0; j <= i; ++j) {
				if (result[i + 1][j] < result[i + 1][j + 1]) {
					max = result[i + 1][j + 1];
				}
				else max = result[i + 1][j];
				result[i][j] = max+temple[i][j];
			}
		}
		std::cout << result[0][0] << endl;
	}
	return 0;
}*/


/*
#include <iostream>
#include <string>
unsigned int w[1001], v[1001],result[1001][1001];
unsigned int N, V, t;
long long max(const long long&a,const long long&b) {
	if (a < b)
		return b;
	else return a;
}
int main(){
	int i, j;
	unsigned int m;
	std::cin >> t;
	while (t--) {
		std::cin >> N >> V;
		for (i = 0; i < N; i++)
		{
			std::cin >> v[i];
		}
		for (i = 0; i < N; i++) {
			std::cin >> w[i];
		} 
		for (i = w[0]; i <= V; ++i) {
			result[0][i] = v[0];
		}
		for (i = 1; i < N; i++) {
			for (j = 0; j <= V; j++)
			{
				if (j<w[i])
					result[i][j] = result[i - 1][j];
				else
					result[i][j] = max(result[i - 1][j], result[i - 1][j - w[i]] + v[i]);
			}
		}
		m = 0;
		for (i = 0; i <= V; ++i) {
			if (result[N - 1][i] > m)
				m = result[N - 1][i];
		}
		std::cout << m << std::endl;
		memset(result, 0, sizeof(result));
	}
	return 0;
}*/



/*
#include <iostream>
#include <algorithm>
int n[1001], dp[1001];
int N, M, i, j, m;
int max_(const int &a, const int &b) {
	if (a < b)
		return b;
	else return a;
}
bool cmp(int a, int b) {
	return a > b;
}
int main() {
	while (std::cin >> N, N) {
		int temp;
		for (i = 0; i < N; i++) {
			std::cin >> n[i];
		}
		std::cin >> M;
		if(M<5)
		{
			std::cout << M << std::endl;
			continue;
		}
		m = 0;
		for (i = 1; i < N; i++) {
			if (n[m] < n[i])
				m = i;
		}
		temp = n[0];
		n[0] = n[m];
		n[m] = temp;
		memset(dp, 0, sizeof(dp));
		for (i = 1; i < N; ++i) {
			for (j = M - 5; j >= 1; --j) {
				if (j >= n[i])
					dp[j] = max_(dp[j], dp[j - n[i]] + n[i]);
			}
		}
		M = M - dp[M - 5] - n[0];
		std::cout << M << std::endl;
	}
	return 0;
}*/









/*
#include <iostream>
#include <string>
#include <algorithm>
float P, p[110],dp[10100];
int T, N, m[110];
int i, j,sum,maxi;
float max_(const float&a, const float&b) {
	if (a < b)
		return b;
	else return a;
}
int main() {
	std::cin >> T;
	while (T--) {
		std::cin >> P >> N;
		P = 1 - P;
		sum = 0;
		for (i = 0; i < N; i++) {
			std::cin >> m[i]>>p[i];
			sum += m[i];
			p[i] = 1 - p[i];
		}
		memset(dp, 0, sizeof(dp));
		dp[0] = 1;

		for (i = 0; i < N; ++i) {
			for (j = sum; j >= m[i]; --j) {
				dp[j] = max_(dp[j], dp[j - m[i]] * p[i]);
			}
		}
		for (i = sum; i >= 0; --i) {
			if (dp[i]>=P) {
				break;
			}
		}
		std::cout << i<< std::endl;
	}
	return 0;
}*/


/*
#include <iostream>
#include <cstring>
#include <algorithm>
int N, V, M,T;
int dp[2510], v[51],m[101];
int i, j, k,sum,mid;
int A, B;

int main() {
	while (std::cin >> N&&N >= 0) {
		sum = 0;
		for (i = 1; i <= N; ++i) {
			std::cin >> v[i] >> m[i];
			sum += v[i] * m[i];
		}
		memset(dp, 0, sizeof(dp));
		mid = sum % 2==1? sum / 2 + 1 : sum / 2;
		for (i = 1; i <= N; ++i) {
			for (j = 1; j <= m[i]; j *= 2) {
				for (k = mid; k >= j*v[i]; --k) {
					dp[k] = max(dp[k], dp[k - j*v[i]] + j*v[i]);
				}
			}
		}
		A = (sum - dp[mid]) > dp[mid] ? (sum - dp[mid]) : dp[mid];
		B = sum - A;
		std::cout << A << ' ' << B << std::endl;
	}
	return 0;
}*/


/*
#include <iostream>

float Q;
int  N,P;
float goods[3], temp;
unsigned int  dp[5000000],p[35];
unsigned int i, j, k, m,a,b,c,x,top;
float sum,price;
char c1,c2;
bool flag;

const unsigned int& max_(const int  &a, const unsigned int &b) {
	if (a < b)
		return b;
	else return a;
}

int main() {
	std::cout.setf(std::ios::fixed);
	std::cout.precision(2);
	while (std::cin >> Q >> N&&N) {
		top = Q * 100;
		std::cin >> m;
		for (j = 0; j < m; j++)
		{
			cin >> c1 >> c2>>price;
			x = (int)(price * 100);
			if (c1 == 'A')
			{
				a += x;
			}
			else if (c1 == 'B')
			{
				b += x;
			}
			else if(c1 == 'C')
			{
				c += x;
			}
			else
			{
				flag = 1;
			}
		}
		if (flag != 1 && a + b + c <= 100000 && a <= 60000 && b <= 60000 && c <= 60000)
		{
			p[i] = a + b + c;
		}
		else
		{
		p[i] = top + 1;
		}
		memset(dp, 0, sizeof(dp));
		for (i = 0; i < N; ++i) {
			for (j = (unsigned int)(Q * 100); j >= p[i]; --j) {
				dp[j] = max_(dp[j], dp[j - p[i]] + p[i]);
			}
		}
		std::cout << dp[(unsigned int)(Q * 100)]/100.0 << std::endl;
	
	}
	return 0;
}*/







/*
#include <iostream>

int n, k;
int dp[101][101],food[101][101];
int i, j;
const int direction[4][2]{ {1,0},{-1,0},{0,1},{0,-1} };
int dfs(int, int);
int MAX_(int a, int b) {
	if (a < b)
		return b;
	else return a;
}
int main() {

	while (std::cin >> n >> k&&n>=1&&n<=100&&k<=100&&k>=1) {
		for (i = 0; i < n; ++i) {
			for (j = 0; j < n; ++j) {
				std::cin >> food[i][j];

			}
		}
		memset(dp, 0, sizeof(dp));
		std::cout<<dfs(0, 0)<<std::endl;
	}
	return 0;
}
int dfs(const int x,const int y) {
	int temp=0,i,j;
	if (dp[x][y]>0)
		return dp[x][y];
	for (i = 1; i <= k; ++i) {
		for (j = 0; j < 4; ++j) {
			int xx, yy;
			xx = x + direction[j][0] * i;
			yy = y + direction[j][1] * i;
			if (xx < 0 || yy < 0 || xx >=n || yy >= n) {
				continue;
			}
			if (food[xx][yy] > food[x][y])
				temp = MAX_(temp, dfs(xx,yy));
		}
	}
	dp[x][y] = temp + food[x][y];
	return dp[x][y];
}*/



/*#include <iostream>
int t, x;

int main() {
	std::cin >> t;
	while (t--) {
		int i;
		std::cin >> x;
		for (i = 0; i < 233; ++i)
			std::cout << "10000000";
		std::cout << std::endl;
	}
	return 0;
}*/


/*
#include <iostream>

_int64 h[100010], l[100010], r[100010];
int n;


int main() {
	while (std::cin >> n&&n > 0) {
		for (int i = 0; i < n; ++i) {
			std::cin >> h[i];
			l[i] = i;
			r[i] = i;
		}
		for (int i = 0; i < n; ++i) {
			while (l[i]>=1&&h[l[i] - 1] >= h[i])
				l[i] = l[l[i] - 1];
		}
		for (int i = n - 1; i >= 0; --i) {
			while (r[i]<(n-1)&&h[r[i] + 1] >= h[i]) {
				r[i] = r[r[i]+1];
			}
		}
		_int64 max=0;
		for (int i = 0; i < n; ++i) {
			_int64 sum;
			sum = (r[i] - l[i] + 1)*h[i];
			if (max < sum)
				max = sum;
		}
		std::cout << max << std::endl;
	}
	return 0;
}*/



/*
#include <iostream>

char a[1010][1010];
int u[1010][1010],l[1010][1010],r[1010][1010];
int N, M,K;

int main() {
	std::cin >> K;
	while (K--) {
		std::cin >> M >> N;
		char c;
		memset(a, 0, sizeof(a));
		memset(u, 0,sizeof(u));
		for (int i = 1; i <=M; ++i) {
			for (int j = 1; j <=N; ++j) {
				std::cin >> a[i][j];
				if (a[i][j] == ' ')
					j--;
				else {
					if(a[i][j]=='F')
					u[i][j] = u[i - 1][j] + 1;
					l[i][j] = r[i][j]=j;
				}
			}
		}
		for (int i = 1; i <=M; ++i) {
			for (int j = 1; j <= N; ++j) {
				while (u[i][j]!=0&&l[i][j]>1&&u[i][l[i][j] - 1] >= u[i][j])
					l[i][j] = l[i][l[i][j] - 1];
				while (u[i][j]!=0&&r[i][j] < N&&u[i][r[i][j] + 1] >= u[i][j])
					r[i][j] = r[i][r[i][j] + 1];
			}
		}
		int max = 0;
		for (int i = 1; i <= M; ++i) {
			for (int j = 1; j <= N; ++j) {
				if (u[i][j]) {
					int sum;
					sum = (r[i][j] - l[i][j] + 1)*u[i][j];
					if (max < sum)
						max = sum;
				}
			}
		}
		std::cout << max*3 << std::endl;
	}
	return 0;
}*/





/*
#include <iostream>

int N;
int dp[110][110], l[110][110], r[110][110], a[110][110],b[110][110];

int main() {
	while (std::cin >> N) {
		memset(b, 0, sizeof(b));
		for (int i = 1; i <= N; ++i) {
			for (int j = 1; j <= N; ++j) {
				std::cin >> a[i][j];
				b[i][j] = b[i][j - 1] + a[i][j];
				r[i][j] = l[i][j] = i;			}
		}
		memset(dp, 0, sizeof(dp));
		for (int i = 1; i <= N; ++i) {
			int temp = 1, max, maxsum;

			max = maxsum =0;

			for (int j = 1; j <= N; ++j) {
				max = max + a[i][j];
				if (max >=0) {

					dp[i][j] = temp;
					temp++;

				}
				else {

					max = 0;
					temp = 1;

				}
			}
		}
		for (int i = 1; i <= N; ++i) {
			for (int j = 0; j <= N; ++j) {
				int sum = 0,maxsum=0;
				if (dp[i][j] != 0) {
					maxsum=sum = a[i][j] - a[i][j - dp[i][i] + 1];
					while (l[i][j]<=N&&sum >= 0) {
					}
				}
			}
		}
	}
}*/


/*
#include <iostream>
#include <cstring>
const char sign[12][50] = { "rat","ox", "tiger", "rabbit", "dragon", "snake", "horse", "sheep", "monkey", "rooster", "dog","pig" };

int min(const char *c1, const char *c2) {
	if (strlen(c1) < strlen(c2))
		return strlen(c1);
	else return strlen(c2);
}
int judge(char*c) {
	bool flag;
	for (int i = 0; i < 12; ++i)
	{
		flag = true;
		for (int j = 0; j < min(c, sign[i]); ++j) {
			if (c[j] != sign[i][j])
			{
				flag = false;
				break;
			}
		}
		if (flag)
			return i;
	}
}

int main() {
	int T;
	std::cin >> T;
	while(T--){
		char c1[50], c2[50];
		int a1, a2,result;

		std::cin >> c1 >> c2;

		a1 = judge(c1);
		a2 = judge(c2);
		if (a2 > a1)
			result = a2 - a1;
		else if (a1 > a2)
			result = 12 - (a1 - a2);
		else result = 12;
		std::cout << result << std::endl;
	}
	return 0;
}*/




/*
#include<iostream> 
#include<string>

using namespace std;

int _next[256];
string d[100010];
void GetNext(string &pattern,string &dest)
{
	int len = pattern.size();//get the length

	for (int i = 0; i < 256; i++)
		_next[i] = -1;

	for (int i = 0; i < len; i++)
		_next[pattern[i]] = i;
}

int SundaySearch(string &pattern,string &dest)
{
	GetNext(pattern,dest);

	int destLen = dest.size();
	int patternLen = pattern.size();

	if (destLen == 0) return -1;

	for (int i = 0; i <= destLen - patternLen;)
	{
		int j = i;//dest[j]
		int k = 0;//pattern[k]

		for (; k<patternLen&&j < destLen&&dest[j] == pattern[k]; j++, k++)
			;//do nothing

		if (k == patternLen)//great! find it!
			return i;
		else
		{
			if (i + patternLen < destLen)
				i += (patternLen - _next[dest[i + patternLen]]);
			else
				return -1;
		}
	}

	return -1;
}
int main() {
	int T;
	std::cin >> T;
	while (T--) {
		int N,max;
		bool flag = true;
		std::cin >> N;
		max = 0;
		for (int i = 0; i < N; i++) {
			std::cin >> d[i];
		
		}
		for (int i = 0; i < N; ++i) {
			if (d[i].length() > d[max].length())
				max = i;
		}
		for (int i = 0; i < N; i++) {
			if (i != max)
			{
				int result;
				result = SundaySearch(d[i],d[max]);
				if (result == -1) {
					flag = false;
					break;
				}
			}
		}
		if (flag)
			std::cout << d[max] << std::endl;
		else std::cout << "No" << std::endl;
	}
}*/


/*
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int T;
	std::cin >> T;
	while (T--) {
		unsigned long long p,max,min;
		bool flag = false;
	std::cin >> p;
	max = sqrt(p / 3.0) + 100;
	min = sqrt(p / 3.0) > 100 ? sqrt(p / 3.0) - 100 : 0;
	for (unsigned long long i = min; i <= max; ++i) {
		unsigned long long sum = i*i + i*(i - 1) + (i - 1)*(i - 1);
		if (sum == p)
		{
			flag = true;
			break;
		}
	}
	if (flag)
		cout << "YES" << endl;
	else cout << "NO" << endl;
	}
	return 0;
}*/



/*
#include <iostream>
#include <cstring>
struct Node {
	int val;
	Node *prev;
	Node *next;
}*head,nil;
Node *des[100010];
void List_Insert(int);
void List_Delete(Node*);
void Delete_all() {
	Node *p = nil.next,*q;
	while (p != &nil) {
		q = p->next;
		delete p;
		p = q;
	}
	nil.next = NULL;
	nil.prev = NULL;
}
void Init() {
	nil.prev = &nil;
	nil.next = &nil;
	head = &nil;
}

int main() {
	int T;
	std::cin >> T;
	while (T--) {
		int N,x,M,m;
		bool flag = false;
		std::cin >> N;
		Init();
		for (int i = 0; i < N; ++i) {
			std::cin >> x;
			List_Insert(x);
		}
		M = N;
		while (!flag&&nil.prev!=&nil) {
			Node *p;
			m = 0;
			p = nil.prev;
			memset(des, 0, sizeof(des));
			while (p != &nil)
			{
				if (p != nil.prev && p != nil.next) {
					if (p->next->val > p->val || p->prev->val < p->val) {
						des[m++] = p;
					}
				}
				else if (p == nil.prev) {
					if (p->prev->val < p->val) {
						des[m++] = p;
					}
				}
				else if (p == nil.next) {
					if (p->next->val > p->val) {
						des[m++] = p;
					}
				}
				p = p->prev;
			}
			if (m) {
				for (int i = 0; i < m; ++i) {
					List_Delete(des[i]);
				}
			}
			else{
			flag = true;
			}
			M-=m;
		}
		Node *p;
		p = nil.prev;
		std::cout << M<<endl;
		while (M&&p != &nil) {
			std::cout << p->val<<' ';
			p=p->prev;
		}
		if (!M)
			std::cout << ' ';
		std::cout << std::endl;
	}
}
void List_Insert(int x) {
	Node *p = new Node;
	p->val = x;
	p->next = nil.next;
	nil.next->prev = p;
	nil.next = p;
	p->prev = &nil;
}
void List_Delete(Node *x) {
	x->prev->next = x->next;
	x->next->prev = x->prev;
	delete x;
}*/


/*
#include <iostream>
int a[100010],dp[100010];
int main() {
	int T;
	std::cin >> T;
	while (T--) {
		int N,M=0;
		std::cin >> N;
		a[0] = 0;
		dp[0] = 0;
		M = N;
		for (int i = 1; i <=N; i++) {
			std::cin >> a[i];
			dp[i] = i;
		}
		for (int i = 1; i <= N; ++i) {
			if (a[i - 1] > a[i]) {
				if (dp[i - 1] != (i - 1))
				{
					dp[i] = dp[i - 1];
					M--;
				}
				else {
					dp[i - 1]--;
					dp[i] = dp[i - 1];
					M -= 2;
				}
			}
			else {
				int j = dp[i - 1];
				while (j != dp[j]) {
					j = dp[j];
				}
				if (a[j] > a[i]) {
					dp[j]--;
					dp[i] = dp[j];
					M -= 2;
				}
			}
		}
		std::cout << M << std::endl;
		for (int i = 1,j=0; i <= N&&j<M; ++i) {
			if (dp[i] == i)
			{
				std::cout << a[i] << ' ';
				++j;
			}
		}
		std::cout << std::endl;
	}
}*/





/*
#include <iostream>

int a[110][110], m[110][110];

int main() {
	int N;
	while (std::cin >> N) {
		memset(m, 0, sizeof(m));
		for (int i = 1; i <= N; ++i) {
			for (int j = 1; j <= N; ++j) {
				std::cin >> a[i][j];
				m[i][j] = m[i][j - 1] + a[i][j];
			}
		}
		int max = INT_MIN;
		for (int i = 1; i <= N; ++i) {
			for (int j = 1; j <= N; ++j) {
				for (int p = j; p >= 1; --p) {
					int msum1 = INT_MIN, msum2 = INT_MIN, sum = 0, spa = p;
					for (int k = i; k <= N; ++k) {
						sum += m[k][j] - m[k][j - spa];
						if (sum > msum1)
							msum1 = sum;
					}
					sum = 0;
					for (int k = i; k >= 1; --k) {
						sum += m[k][j] - m[k][j - spa];
						if (sum > msum2)
							msum2 = sum;
					}
					msum1 = msum1 + msum2 - (m[i][j] - m[i][j - spa]);
					if (msum1 > max)
						max = msum1;
				}
			}
		}
		std::cout << max << std::endl;
	}
	return 0;
}*/



/*

#include <iostream>

int a[110][110];
int dp[110][110];
int R, C;
const int direction[4][2] = { {1,0},{-1,0},{0,1},{0,-1} };
int MAX_(int a, int b) {
	if (a < b)
		return b;
	else return a;
}

int dfs(int x, int y) {
	int max = 1;
	if (dp[x][y] != 0)
		return dp[x][y];
	for (int i = 0; i < 4; ++i) {
		int xx=0, yy=0;
		xx = x+direction[i][0];
		yy = y+direction[i][1];
		if (xx < 1 || xx > R||yy< 1 || yy > C)
			continue;
		 if (a[xx][yy] > a[x][y])
		{
			max = MAX_(max, dfs(xx, yy) + 1);
		}
	}
	dp[x][y] = max;
	return max;
}
int main() {
	while (std::cin >> R >> C) {
		for (int i = 1; i <= R; ++i) {
			for (int j = 1; j <= C; ++j)
			{
				std::cin >> a[i][j];
			}
		}
		memset(dp, 0, sizeof(dp));
		for (int i = 1; i <= R; ++i) {
			for (int j = 1; j <= R; ++j) {
				dfs(i, j);
			}
		}
		int max = INT_MIN;
		for (int i = 1; i <= R; ++i) {
			for (int j = 1; j <= C; ++j) {
				max = MAX_(max, dp[i][j]);
			}
		}
		std::cout << max << std::endl;
	}
	return 0;
}*/




/*

#include <iostream>
#include <cstring>
#include <cstdio>
#define INF 0x3f3f3f3f

int a[21][1100], dp[21][1100],v[21][1100];
int R, C;

int MAX_(int a, int b) {
	if (a < b)
		return b;
	else return a;
}


bool judge(int x, int y) {
	if (x>=1 && x<=R && y>=1 && y<=C)
		return true;
	else return false;
}

int dfs(int x, int y) {
	if (v[x][y] != 0) {
		return dp[x][y];
	}
	int pre_max = INT_MIN;
	int xx, yy;
	if (judge(x+1, y))
		pre_max = MAX_(pre_max, dfs(x+1, y));
	if (judge(x, y+1))
		pre_max = MAX_(pre_max, dfs(x, y+1));
	for (int i = 2; y*i <= C;++i) {
		xx = x;
		yy = y*i;
		if(judge(xx,yy))
		pre_max = MAX_(pre_max, dfs(xx, yy));
	}
	if (pre_max == INT_MIN)
		pre_max = 0;
	dp[x][y] = pre_max+a[x][y];
	v[x][y] = 1;
	return dp[x][y];
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &R, &C);
		memset(a, 0, sizeof(a));
		for (int i = 1; i <= R; ++i) {
			for (int j = 1; j <= C; ++j) {
				scanf("%d", &a[i][j]);
			}
		}
		memset(dp, 0, sizeof(dp));
		memset(v, 0, sizeof(v));
		printf("%d\n", dfs(1, 1));
	}
	return 0;
}*/



/*
#include <iostream>

int L, N, C, T, VR, VT1, VT2;
int a[110],m[110];
float dp[110];

float MIN_(float a, float b) {
	if (a > b)
		return b;
	else return a;
}


int main() {
	while (std::cin >> L) {
		std::cin >> N >> C >> T;
		std::cin >> VR >> VT1 >> VT2;
		float tr;
		memset(m, 0, sizeof(m));
		for (int i = 1; i <= N; i++) {
			std::cin >> a[i];
			m[i] = a[i];
			dp[i] = INT_MAX;
		}
		m[N + 1] = L;
		dp[0] = 0;
		dp[N + 1] = INT_MAX;
			for (int i = 0; i <= N; ++i) {
			for (int j = N+1; j >= i+1; --j) {
				float t1, t2,away;
				away = m[j] - m[i];
				t1 = (i==0?0:T) + ((C > away) ? away/VT1:((float)C/VT1+(float)(away-C)/VT2));
				t2 = away / VT2;
				t1 = MIN_(t1, t2);
				dp[j] = MIN_(dp[j], dp[i]+t1);
			}
		}
			tr = (float)L / VR;
			if (tr < dp[N + 1])
				std::cout << "Good job,rabbit!" << std::endl;
			else std::cout << "What a pity rabbit!" << std::endl;
	}
	return 0;
}*/


/*
#include <iostream>
#include <cstring>
#define inf (0x3f3f3f3f) 

int N,s[110],f[110],dp[210000];
const int mid = 100000;
const int maxnum = 200000;
int MAX_(int a, int b) {
	if (a < b)
		return b;
	else return a;
}

int main() {
	while (std::cin >> N) {
		memset(s, 0, sizeof(s));
		memset(f, 0, sizeof(f));
		for (int i = 1; i <= N; ++i) {
			std::cin >> s[i]>>f[i];
		}
		//memset(dp, -inf, sizeof(dp));
		for (int i = 0; i <= maxnum; i++)
			dp[i] = -inf;
		dp[mid] = 0;
		for (int i = 1; i <= N; ++i) {
			if (s[i] < 0) {
				for (int j = s[i]; j <= maxnum+s[i]; ++j) {
					if(dp[j-s[i]]>-inf)
					dp[j] = MAX_(dp[j], dp[j - s[i]] + f[i]);
				}
			}
			else {
				for (int j = maxnum; j >= s[i]; --j) {
					if(dp[j-s[i]]>-inf)
					dp[j] = MAX_(dp[j], dp[j - s[i]] + f[i]);
				}
			}
		}
		int max = -inf;
		for (int i = mid; i <= maxnum; ++i) {
			if (dp[i] >= 0) {
				max = MAX_(max,dp[i]+i-mid);
			}
		}
		std::cout << max << std::endl;
	}
	return 0;
}
*/


/*
#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
using namespace std;
int next1[10010];
string d[10010];
void makeNext(string &P, int next[])
 {
	     int q, k;//q:模版字符串下标；k:最大前后缀长度
	     int m = P.length();//模版字符串长度
	     next[0] = 0;//模版字符串的第一个字符的最大前后缀长度为0
	     for (q = 1, k = 0; q < m; ++q)//for循环，从第二个字符开始，依次计算每一个字符对应的next值
		    {
	         while (k > 0 && P[q] != P[k])//递归的求出P[0]···P[q]的最大的相同的前后缀长度k
			             k = next[k - 1];          //不理解没关系看下面的分析，这个while循环是整段代码的精髓所在，确实不好理解  
		        if (P[q] == P[k])//如果相等，那么最大相同前后缀长度加1
			        {
			            k++;
		        }
		        next[q] = k;
		    }
	 }
int KmpSearch(string &s, string &p)
{	
	int i = 0;
	int j = 0;
	int sLen = s.length();
	int pLen = p.length();
	
	while (i < sLen && j < pLen)
	{
		//①如果j = -1，或者当前字符匹配成功（即S[i] == P[j]），都令i++，j++      
		if (j == -1 || s[i] == p[j])
		{
			i++;
			j++;
		}
		else
		{
			//②如果j != -1，且当前字符匹配失败（即S[i] != P[j]），则令 i 不变，j = next[j]      
			//next[j]即为j所对应的next值        
			j = next1[j];
		}
	}
	if (j == pLen)
		return i - j;
	else
		return -1;
}


int main() {
	int T;
	scanf("%d",&T);
	while (T--) {
		int N, max;
		bool flag = true;
		scanf("%d", &N);
		max = 0;
		for (int i = 0; i < N; i++) {
			getline(cin, d[i]);
		}
		for (int i = 0; i < N; ++i) {
			if (d[i].length() > d[max].length())
				max = i;
		}
		for (int i = 0; i < N; i++) {
			if (i != max)
			{
				memset(next1, 0, sizeof(next1));
				makeNext(d[i], next1);
				int result;
				result = KmpSearch(d[max], d[i]);
				if (result == -1) {
					flag = false;
					break;
				}
			}
		}
		if (flag)
			std::cout << d[max] << std::endl;
		else std::cout << "No" << std::endl;
	}
}*/





/*
#include <iostream>
#include <cstring>
#include <stdio.h>
#define inf (0x3f3f3f3f) 
struct Item {
	int c[5];
	int val;
	int code;
	int num;
}a[1100];

int dp[6][6][6][6][6];

int B;


int MIN_(int a, int b) {
	if (a > b)
		return b;
	else return a;
}
int MAX_(int a, int b) {
	if (a < b)
		return b;
	else return a;
}

int main(){
	while (scanf("%d", &B)!=EOF) {
		int p = 5,sum[5],sub=0;
		memset(a, 0, sizeof(a));
		for (int i = 0; i < B; ++i) {
			scanf("%d%d%d", &a[i].code, &a[i].num, &a[i].val);
			a[i].c[i] = 1;
			a[i].val = a[i].val;
			sub += a[i].num;
		}
		int s;
		scanf("%d", &s);
		for (int i = 0; i < s; ++i) {
			int num;
			scanf("%d", &num);
			for (int j = 0; j < num; ++j) {
					int code, count,position=0;
					scanf("%d%d", &code, &count);
					while (a[position].code != code) {
						position++;
					}
					
					a[p].c[position] = count;
				}
				int val;
				scanf("%d", &val);
				a[p].num++;
				//sub++;
				a[p++].val =val;
		}
		memset(dp, inf, sizeof(dp));
		dp[0][0][0][0][0] = 0;
		for (int i = 0; i < p; ++i) {
			if (B >= 1) {
					for (int j = a[i].c[0]; j <= a[0].num; ++j) {
						if (B >= 2) {
							for (int k = a[i].c[1]; k <= a[1].num; ++k) {
								if (B >= 3) {
									for (int z = a[i].c[2]; z <= a[2].num; ++z) {
										if (B >= 4) {
											for (int g = a[i].c[3]; g <= a[3].num; ++g) {
												if (B >= 5) {
													for (int u = a[i].c[4]; u <= a[4].num; ++u) {
														//if (dp[u - a[i].c[4]][g - a[i].c[3]][z - a[i].c[2]][k - a[i].c[1]][j - a[i].c[0]] != inf) {
															//dp[u][g][z][k][j] = dp[u][g][z][k][j] == inf ? 0 : dp[u][g][z][k][j];
															dp[u][g][z][k][j] = MIN_(dp[u][g][z][k][j], dp[u - a[i].c[4]][g - a[i].c[3]][z - a[i].c[2]][k - a[i].c[1]][j - a[i].c[0]] + a[i].val);
														//}
													}
												}
												else {
													//if (dp[0][g - a[i].c[3]][z - a[i].c[2]][k - a[i].c[1]][j - a[i].c[0]] != inf) {
														//dp[0][g][z][k][j] = dp[0][g][z][k][j] == inf ? 0 : dp[0][g][z][k][j];
														dp[0][g][z][k][j] = MIN_(dp[0][g][z][k][j], dp[0][g - a[i].c[3]][z - a[i].c[2]][k - a[i].c[1]][j - a[i].c[0]] + a[i].val);
													//}
												}
											}
										}
										else {
											//if (dp[0][0][z - a[i].c[2]][k - a[i].c[1]][j - a[i].c[0]] != inf) {
												//dp[0][0][z][k][j] = dp[0][0][z][k][j] == inf ? 0 : dp[0][0][z][k][j];
												dp[0][0][z][k][j] = MIN_(dp[0][0][z][k][j], dp[0][0][z - a[i].c[2]][k - a[i].c[1]][j - a[i].c[0]] + a[i].val);
											//}
										}
									}
								}
								else {
									//if (dp[0][0][0][k - a[i].c[1]][j - a[i].c[0]] != inf) {
										//dp[0][0][0][k][j] = dp[0][0][0][k][j] == inf ? 0 : dp[0][0][0][k][j];
										dp[0][0][0][k][j] = MIN_(dp[0][0][0][k][j], dp[0][0][0][k - a[i].c[1]][j - a[i].c[0]] + a[i].val);
									//}
								}
							}
						}
						else {
							//if (dp[0][0][0][0][j - a[i].c[0]] != inf) {
								//dp[0][0][0][0][j] = dp[0][0][0][0][j] == inf ? 0 : dp[0][0][0][0][j];
								dp[0][0][0][0][j] = MIN_(dp[0][0][0][0][j], dp[0][0][0][0][j - a[i].c[0]] + a[i].val);
							//}
						}
					}
				}
		
		}
			printf("%d\n", dp[a[4].num][a[3].num][a[2].num][a[1].num][a[0].num]);
	}
}
*/



/*
#include <iostream>
#include <stdio.h>
#include <cstring>
#define inf (0x3f3f3f3f)
const int SIX[10] = { 1,6,36,216,1296,7776,46656,279936 };
int HASH[1005],dp[500005];

struct Item{
	int has;
	int num;
	int val;
	int weight;
}item[205];

int MIN_(int a, int b) {
	if (a < b)
		return a;
	else return b;
}


int main() {
	int B,i,j,ans,sum,c,m,k,n,y,count;
	while (scanf("%d", &B) != EOF) {
		ans = sum = 0;
		memset(HASH, -1, sizeof(HASH));
		memset(item, 0, sizeof(item));
		for (i = 0; i < B; ++i) {
			scanf("%d%d%d", &c, &item[i].num, &item[i].val);
			HASH[c] = SIX[i];
			item[i].has = SIX[i];
			ans += item[i].num*item[i].val;
			sum += SIX[i] * item[i].num;          //把六进制总数当作背包容量
			item[i].weight = SIX[i];              //把每个物品的重量变成六进制，因为是完全背包所以不用考虑是否控制物品塞入背包的数目，但是存在一个问题背包容量不会限制了其个数，如例子2 7 1 0 8 1 2 0，最终输出是0，但是正确但应为2；
		}										  //但是加上了weight属性而不改变num属性的化，这样就解决了原来的问题了，而解法从原来的把问题看成完全背包问题改成了看成01背包和完全背包的合体
		scanf("%d", &m);
		for (i = 0; i < m; ++i) {
			scanf("%d", &k);
			while (k--) {
				scanf("%d%d", &c, &y);
				if (HASH[c] == -1)
					continue;
				item[i + B].weight += HASH[c] * y;//将套餐变成六进制
			}
			item[i + B].num ++;
			scanf("%d", &item[i+B].val);
		}
		memset(dp, inf, sizeof(dp));
		dp[0]=0;
		for (i = 0; i < B + m; ++i)
		{
			if (i < B) {
				count = item[i].num;
				while (count--)
					for (j = sum; j >= item[i].weight; --j)
						dp[j] = MIN_(dp[j], dp[j - item[i].weight] + item[i].val);//01背包问题
			}
			else for (j = item[i].weight; j <= sum; ++j)
				dp[j] = MIN_(dp[j], dp[j - item[i].weight] + item[i].val);//完全背包问题
		}
		printf("%d\n", MIN_(ans,dp[sum]));
	}
	return 0;
}*/


/*
#include <iostream>
#define inf 0x3f3f3f3f

int dp[110],p[110];
int m, n,t;


int MIN_(int a, int b) {
	if (a < b)
		return a;
	else return b;
}

int main() {

	while (scanf("%d%d", &n, &m) != EOF) {
		for (int i = 0; i < n; ++i) {
			scanf("%d", &p[i]);
		}
		scanf("%d", &t);
		for (int i = 0; i < t; ++i) {
			int d;
			scanf("%d", &d);
			p[d] = -1;
		}
		p[109] = 2000;
		int a=109,b=109;
		for (int i = 0; i < n; ++i) {
			if(p[i]!=-1){
			int tempmin = 109;
			int traffic = 0;
			int k = m;
			int j;
			for (j = i+1; j < (k+i)&&j<n; ++j) {
				if (p[j] != -1)
				{
					if (p[j] < p[tempmin])
						tempmin = j;
				}
				else {
					traffic++;
					k++;
				}
			}
			if ((j - m - i) == traffic)
				if (p[a] + p[b] > p[i] + p[tempmin])
				{
					a = i;
					b = tempmin;
				}
			}
		}
		printf("%d %d\n", a,b);
	}
	return 0;

}


*/



/*

#include <iostream>
#include <stdio.h>
#define inf 0x3f3f3f3f
#define maxn 100007  //元素总个数
#define ls l,m,rt<<1
#define rs m+1,r,rt<<1|1

int a[1000000];
int Sum[maxn << 2], Add[maxn << 2];//Sum求和，Add为懒惰标记 
int A[maxn], n;//存原数组数据下标[1,n] 
void PushUp(int rt);
void Update(int L, int C, int l, int r, int rt);
void Update(int L, int R, int C, int l, int r, int rt);
void PushDown(int rt, int ln, int rn);
int Query(int L, int R, int l, int r, int rt);

int pow4(int a, int b)
{
	int r = 1, base = a;
	while (b != 0)
	{
		if (b & 1)
			r *= base;
		base *= base;
		b >>= 1;
	}
	return r;
}

int main() {
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &k);
		n=pow4(2, k);
		for (int i = 0; i < n; ++i) {
			scanf("%d", &a[i]);
		}
		int q;
		scanf("%d", &q);
		for (int i = 0; i < q; ++i) {
			int num, c, d;
			scanf("%d%d%d", &num, &c, &d);
			if (num == 1) {
				output_min(c, d);

			}
			else {
				change_xy(c, d);
			}
		}
	}
	return 0;
}

//PushUp函数更新节点信息 ，这里是求和
void PushUp(int rt) { Sum[rt] = Sum[rt << 1] + Sum[rt << 1 | 1]; }
//Build函数建树 
void Build(int l, int r, int rt) { //l,r表示当前节点区间，rt表示当前节点编号
	if (l == r) {//若到达叶节点 
		Sum[rt] = A[l];//储存数组值 
		return;
	}
	int m = (l + r) >> 1;
	//左右递归 
	Build(l, m, rt << 1);
	Build(m + 1, r, rt << 1 | 1);
	//更新信息 
	PushUp(rt);
}
void Update(int L, int C, int l, int r, int rt) {//l,r表示当前节点区间，rt表示当前节点编号
	if (l == r) {//到叶节点，修改 
		Sum[rt] += C;
		return;
	}
	int m = (l + r) >> 1;
	//根据条件判断往左子树调用还是往右 
	if (L <= m) Update(L, C, l, m, rt << 1);
	else       Update(L, C, m + 1, r, rt << 1 | 1);
	PushUp(rt);//子节点更新了，所以本节点也需要更新信息 
}
void Update(int L, int R, int C, int l, int r, int rt) {//L,R表示操作区间，l,r表示当前节点区间，rt表示当前节点编号 
	if (L <= l && r <= R) {//如果本区间完全在操作区间[L,R]以内 
		Sum[rt] += C*(r - l + 1);//更新数字和，向上保持正确
		Add[rt] += C;//增加Add标记，表示本区间的Sum正确，子区间的Sum仍需要根据Add的值来调整
		return;
	}
	int m = (l + r) >> 1;
	PushDown(rt, m - l + 1, r - m);//下推标记
								   //这里判断左右子树跟[L,R]有无交集，有交集才递归 
	if (L <= m) Update(L, R, C, l, m, rt << 1);
	if (R >  m) Update(L, R, C, m + 1, r, rt << 1 | 1);
	PushUp(rt);//更新本节点信息 
}
void PushDown(int rt, int ln, int rn) {
	//ln,rn为左子树，右子树的数字数量。 
	if (Add[rt]) {
		//下推标记 
		Add[rt << 1] += Add[rt];
		Add[rt << 1 | 1] += Add[rt];
		//修改子节点的Sum使之与对应的Add相对应 
		Sum[rt << 1] += Add[rt] * ln;
		Sum[rt << 1 | 1] += Add[rt] * rn;
		//清除本节点标记 
		Add[rt] = 0;
	}
}
int Query(int L, int R, int l, int r, int rt) {//L,R表示操作区间，l,r表示当前节点区间，rt表示当前节点编号
	if (L <= l && r <= R) {
		//在区间内，直接返回 
		return Sum[rt];
	}
	int m = (l + r) >> 1;
	//下推标记，否则Sum可能不正确
	PushDown(rt, m - l + 1, r - m);

	//累计答案
	int ANS = 0;
	if (L <= m) ANS += Query(L, R, l, m, rt << 1);
	if (R >  m) ANS += Query(L, R, m + 1, r, rt << 1 | 1);
	return ANS;
}

*/




/*
#include <iostream>
#include <cstring>
#define inf 0x3f3f3f3f
int M[1620][1620];
int a[310][310],dp[310],b[310][310];
int MIN_(int a, int b) {
	if (a < b)
		return a;
	else return b;
}

void Push_Up(int rt1,int rt2) {
	int a, b, c, d;
	a = M[rt1 << 1][rt2];
	b = M[rt1 << 1 | 1][rt2];
	c = M[rt1][rt2 << 1];
	d = M[rt1][rt2 << 1 | 1];
	M[rt1][rt2] = MIN_(a, MIN_(b, MIN_(c, d)));
}


void Build_Tree(int x1, int x2,int y1,int y2, int rt1,int rt2) {
	if (x1 > x2 || y1 > y2)
	{
		M[rt1][rt2] = inf;
		return;
	}
	if (x1 == x2&&y1 == y2) {
		M[rt1][rt2] = a[x1][y2];
		return;
	}
	int midx, midy;
	midx = (x1 + x2) >> 1;
	midy = (y1 + y2) >> 1;
	Build_Tree(x1, midx, y1, midy, rt1 << 1, rt2);
	Build_Tree(midx + 1, x2, y1, midy, rt1 << 1 | 1, rt2);
	Build_Tree(x1, midx, midy + 1, y2, rt1, rt2 << 1);
	Build_Tree(midx + 1, x2, midy + 1, y2, rt1, rt2 << 1 | 1);
	Push_Up(rt1, rt2);
}


int Query(int X1, int X2, int Y1, int Y2, int x1, int x2, int y1, int y2, int rt1, int rt2) {
	if (X1 <= x1&&Y1 <= y1&&X2 >= x2&&Y2 >= y2) {
		return M[rt1][rt2];
	}
	int min = inf;
	int midx, midy;
	midx = (x1 + x2) >> 1;
	midy = (y1 + y2) >> 1;
	int a, b, c, d;
	a = b = c = d = inf;
	if (X1 <= midx&&Y1<=midy)
		a=Query(X1, X2, Y1, Y2, x1, midx, y1, midy, rt1 << 1, rt2);
	if (X2 > midx&&Y2 > midy)
		b=Query(X1, X2, Y1, Y2, midx + 1, x2, midy + 1, y2, rt1, rt2 << 1 | 1);
	if (X1 <= midx&&Y2 > midy)
		c=Query(X1, X2, Y1, Y2, x1, midx, midy + 1, y2, rt1, rt2 << 1);
	if (X2 > midx&&Y1 <= midy)
		d=Query(X1, X2, Y1, Y2, midx + 1, x2, y1, midy, rt1 << 1 | 1, rt2);
	min = MIN_(a, MIN_(b, MIN_(c, d)));
	return min;
}


int main() {
	int N, m, P;
	while (scanf("%d%d%d", &N, &m, &P) != EOF) {
		memset(M, 0, sizeof(M));
		memset(a, 0, sizeof(a));
		for (int i = 1; i <= N; ++i) {
			for (int j = 1; j <= m; ++j) {
				scanf("%d", &a[i][j]);
				b[i][j] = b[i - 1][j] + a[i][j];
			}
		}
		Build_Tree(1, N, 1, m, 1, 1);
		int maxsum = -inf;
		for (int i = 0; i <= N - 1; ++i) {
			for (int j = 1; j <= N; ++j) {
				int temp_beg=1;
				memset(dp, 0, sizeof(dp));
				dp[1] = b[j][1] - b[i][1]+P-Query(i + 1, j, 1, 1, 1, N, 1, m, 1, 1);
				for (int p = 2; p <= m; ++p) {
					if (dp[p - 1] >= 0) {
						dp[p] =dp[p-1]+b[j][p] - b[i][p]+Query(i+1,j,temp_beg,p-1,1,N,1,m,1,1)- Query(i + 1, j, temp_beg, p, 1, N, 1, m, 1, 1);
					}
					else {
						dp[p] = b[j][p] - b[i][p] + P - Query(i + 1, j, p, p, 1, N, 1, m, 1, 1);
						temp_beg = p;
					}
					if (dp[p] > maxsum)maxsum = dp[p];
				}

			}
		}
		printf("%d\n", maxsum);
	}
	return 0;
}*/


/*
#include <iostream>
#define inf 0x3f3f3f3f
int a[310][310], dp[310], m[310][310];

int main() {
	int N, M, P;
	while (scanf("%d%d%d", &N, &M, &P) != EOF) {
		for (int i = 1; i <= N; ++i)
			for (int j = 1; j <= M; ++j)
			{
				scanf("%d", &a[i][j]);
				m[i][j] = m[i - 1][j] + a[i][j];
			}
		int max = -inf;
		for (int i = 0; i < N; ++i) {
			for (int j = i+1; j <= N; ++j) {
				for (int p = 1; p <= M; ++p) {
					int r = p, l = p,ll=0,rr=0;
					int min =inf;
					int rsum=-inf, lsum=-inf,sum;
					lsum =rsum= -inf;
					for (int k = i + 1; k <= j; ++k) {
						if (min > a[k][p])
							min = a[k][p];
					}
					sum = 0;
					while (r <= M) {
						sum += m[j][r] - m[i][r];
						if (sum > rsum)
						{
							rsum = sum;
							rr = r;
						}
						r++;
					}
					rsum -=m[j][p]-m[i][p];
					sum = 0;
					while (l >=1) {
						sum += m[j][l] - m[i][l];
						if (sum > lsum)
						{
							lsum = sum;
							ll = l;
						}
						l--;
					}
					sum = rsum + lsum;
					if (min <= P) {
						sum += P - min;
					}
					else {
						if (i == 0 && j == N&&ll == 1 && rr == M) {
							sum += P - min;
						}
					}
					if (max < sum)
						max = sum;
				}
			}
		}
		printf("%d\n", max);
	}
	return 0;
}*/

/*
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#define inf 0x3f3f3f3f
#define maxn 1000000+5
#define ll long long
using namespace std;

int pos[maxn * 2];

struct {
	ll cover;ll len;//cover该节点被覆盖的情况，len该区间被覆盖的长度
	ll l, r;//显示该区间的位置
}tt[maxn*4+5];

struct Sides{
	ll l, r, h;//边所在的位置及其高度
	ll f;//用于区分上下边
}ss[maxn*2];

void Build_Tree(ll l, ll r, ll rt) {
	tt[rt].l = l;
	tt[rt].r = r;
	tt[rt].cover = tt[rt].len = 0;
	if (l == r)
		return;
	ll mid = (l + r) / 2;
	Build_Tree(l, mid, rt << 1);
	Build_Tree(mid + 1, r, rt << 1 | 1);
}

void Push_Up(ll rt) {
	if (tt[rt].cover) {
		tt[rt].len = pos[tt[rt].r+1] - pos[tt[rt].l];
	}//cover不为零，则存有线段覆盖整个区间
	else if (tt[rt].r == tt[rt].l)
		tt[rt].len = 0;//该区间非线段情况
	else tt[rt].len = tt[rt << 1].len + tt[rt << 1 | 1].len;//不存在cover的情况，及该区间没有完全覆盖其的线段
}


void Update(ll l, ll r, ll f,ll rt) {
	if (tt[rt].l >= l&&tt[rt].r<=r) {
		tt[rt].cover += f;
		Push_Up(rt);
		return;
	}
	ll mid = (tt[rt].l + tt[rt].r) / 2;
	if (l <= mid)
		Update(l, r, f, rt<<1);
	if (r > mid) Update(l, r, f, rt << 1 | 1);
	Push_Up(rt);//把上层节点的信息给更新
}//更新节点信息

ll Binary_Search(ll key, ll beg, ll end) {
	ll mid;
	while (beg <= end) {
		mid = (beg + end) / 2;
		if (pos[mid] == key)
			return mid;
		if (pos[mid] < key)
			beg = mid + 1;
		else end = mid - 1;
	}
	return -1;
}//二分查找查找出ss[i].x1和ss[i].x2在pos的位置


bool cmp(Sides a, Sides b) {
	return a.h < b.h;
}

int main() {
	int N;
	while (scanf("%d", &N) != EOF&&N!=0) {
		memset(ss, 0, sizeof(ss));
		memset(tt, 0, sizeof(tt));
		memset(pos, 0, sizeof(pos));
		ll x1, x2, y1, y2;
		ll num=0, m=1;
		for (int i = 0; i < N; ++i) {
			scanf("%lld%lld%lld%lld",&x1, &y1, &x2, &y2);
			ss[num].l = x1;
			ss[num].r = x2;
			ss[num].h = y1;
			ss[num].f = 1;
			//下边的f值为1

			ss[num+1].l = x1;
			ss[num+1].r = x2;
			ss[num+1].h = y2;
			ss[num+1].f = -1;
			//上边的f值为-1
			//上述操作为保存每条边的信息

			pos[num] = x1;
			pos[num+1] = x2;
			//保存边界点的值
			num+=2;

		}



		sort(ss, ss + num, cmp);//根据纵坐边，使数据以升序排序
		sort(pos, pos + num);//使坐标值以升序排序

		m = 1;

		for (int i = 1; i < num; ++i) {
			if (pos[i] != pos[i - 1]) {
				pos[m] = pos[i];
				m++;
			}
		}

		
		Build_Tree(0, m - 1, 1);//先建树	
		ll ans =0;//ans保存矩阵的面积
		for (int i = 0; i < num; ++i) {
			ll l, r;
			l = Binary_Search(ss[i].l, 0, m - 1);
			r = Binary_Search(ss[i].r, 0, m - 1)-1;
			Update(l, r, ss[i].f, 1);
			ans += (ss[i + 1].h - ss[i].h)*tt[1].len;
		}
		printf("%lld\n", ans);
	}
	printf("*");
	return 0;
}*/




/*
#include <iostream>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define inf 0x3f3f3f3f
int dp[2][310], a[310][310],sum[310],mn[310], len[310];
bool flag;

int N, M, P;


int solve() {
	int ret = -inf;
	len[0] = 0;
	memset(dp, 0, sizeof(dp));
	for (int k = 1; k <= M; ++k) {
		if (dp[0][k - 1] >= 0) {
			dp[0][k] =dp[0][k-1]+ sum[k];
			len[k]=len[k-1]+1;
		}
		else {
			dp[0][k] = sum[k];
			len[k] = 1;
		}
		if (k == 1) {
			dp[1][k] = sum[k] - mn[k] + P;
		}
		else {
			if (dp[0][k - 1] > 0) {
				dp[1][k] = dp[0][k - 1] + sum[k] - mn[k] + P;
			}
			else dp[1][k] = sum[k] - mn[k] + P;
			dp[1][k] = max(dp[1][k], dp[1][k - 1] + sum[k]);
		}
		ret = max(ret, dp[1][k]);
		if (len[k] == M&&flag)continue;
		ret = max(ret, dp[0][k]);
	}
	return ret;
}


int main() {
	while (scanf("%d%d%d", &N, &M, &P) != EOF) {
		for (int i = 1; i <= N; ++i) {
			for (int j = 1; j <= M; ++j) {
				scanf("%d", &a[i][j]);
			}
		}
		int ans = -inf;
		for (int i = 1; i <= N; ++i) {
			memset(sum, 0, sizeof(sum));
			memset(mn, inf, sizeof(mn));
			flag = false;
			for (int j = i; j <= N; ++j) {
				for (int k = 1; k <= M; ++k) {
					sum[k] += a[j][k];
					mn[k] = min(mn[k], a[j][k]);
				}
				if (i == 1 && j == N)flag = true;
				ans = max(ans,solve());
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}*/



/*
#include <iostream>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#define inf 0x3f3f3f3f
using namespace std;

int a[10010],dp[10010];

int main() {
	int n;
	while (scanf("%d", &n)!=EOF) {
		for (int i = 1; i <=n; ++i)
			scanf("%d", &a[i]);
		memset(dp, -inf, sizeof(dp));
		int maxn=-inf;
		for (int i = 1; i <=n; ++i) {
			dp[i] = 1;
			for (int j = 1; j <= i-1; ++j) {
				if (a[j] < a[i]) {
					dp[i] = max(dp[i], dp[j]+1);
				}
			}

			maxn = max(maxn, dp[i]);
		}
		printf("%d\n",maxn);
	}
	return 0;
}*/


/*
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

#define inf 0x3f3f3f3f
#define Clean(a,b) memset(a,b,sizeof(a))


using namespace std;


struct Cookies{
	int bounce;
	int fun;
	int d;
	int group;
}a[2000];

int group[10][2000], dp[2000], tmp[2000];
int N, D, G;


int ZeroOnePack(int d, int fun, int *f) {
	for (int i = D; i >= d; --i) {
		f[i] = max(f[i], f[i - d] + fun);
	}
	return 0;
}
int CompletePack(int d, int fun, int *f) {
	for (int i = d; i <= D; ++i) {
		f[i] = max(f[i], f[i - d] + fun);
	}
	return 0;
}
int MultiplePack(int d, int fun, int bounce, int *f) {
	if (d*bounce >= D) {
		CompletePack(d, fun, f);
		return 0;
	}


	int k = 1;
	while (k < bounce) {
		ZeroOnePack(d*k, fun*k, f);
		bounce -= k;
		k <<= 1;
	}
	ZeroOnePack(d*bounce, fun*bounce, f);
	return 0;
}

int main() {
	while (~scanf("%d%d", &N, &D)) {
		Clean(a, 0);
		for (int i = 1; i <=N; ++i) {
			scanf("%d%d%d", &a[i].bounce, &a[i].fun, &a[i].d);
		}
		scanf("%d", &G);getchar();
		for (int i = 1; i <= G; ++i) {
			int temp;
			char c;
			Clean(group[i], -inf);
			group[i][0] = 0;
			do {
				scanf("%d%c", &temp, &c);
				a[temp].group = i;
			} while (c != '\n');
		}
		Clean(dp, -inf);
		dp[0] = 0;
		for (int i = 1; i <= N; ++i) {
			if (a[i].group) {
				Clean(tmp, -inf);
				tmp[0] = 0;
			}
			if (a[i].bounce) {
				MultiplePack(a[i].d, a[i].fun, a[i].bounce, a[i].group ? tmp : dp);
			}
			else CompletePack(a[i].d, a[i].fun, a[i].group ? tmp : dp);
			if (a[i].group) {
				for (int j = 1; j <= D; ++j) {
					group[a[i].group][j] = max(group[a[i].group][j], tmp[j]);
				}
			}
		}
		for (int i = 1; i <= G; ++i) {
			for (int k = D; k >=0 ; --k) {
				for (int j = 1; j <= k; ++j) {
					dp[k] = max(dp[k], dp[k - j] + group[i][j]);
				}
			}
		}
		if (dp[D] >= 0)
			printf("%d\n", dp[D]);
		else printf("i'm sorry...\n");
	}
	return 0;
}*/




/*
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
#define inf 0x3f3f3f3f
using namespace std;


const int MAXN = 300005;


int tt[2*MAXN];

int c[MAXN], wa[MAXN], wb[MAXN], sa[MAXN], Height[MAXN], ran[MAXN];
int n, m;
char str[MAXN];
void sort_sa(int m, int n) {
	int *x = wa, *y = wb, p = 0;
	for (int i = 0; i<m; i++)  c[i] = 0;
	for (int i = 0; i<n; i++)  c[x[i] = str[i]]++;
	for (int i = 1; i<m; i++)  c[i] += c[i - 1];
	for (int i = n - 1; i >= 0; i--) sa[--c[x[i]]] = i;
	for (int k = 1; p<n; k <<= 1, m = p) {
		p = 0;
		for (int i = n - k; i<n; i++) y[p++] = i;//按个位排序  
		for (int i = 0; i<n; i++)  if (sa[i] >= k) y[p++] = sa[i] - k;
		for (int i = 0; i<m; i++) c[i] = 0;
		for (int i = 0; i<n; i++) c[x[y[i]]]++;
		for (int i = 1; i<m; i++) c[i] += c[i - 1];
		for (int i = n - 1; i >= 0; i--)  sa[--c[x[y[i]]]] = y[i];
		swap(x, y); x[sa[0]] = 0, p = 1;
		for (int i = 1; i<n; i++)
			if (y[sa[i]] == y[sa[i - 1]] && y[sa[i] + k] == y[sa[i - 1] + k]) x[sa[i]] = p - 1;
			else x[sa[i]] = p++;
	}
}
void Gethight() {
	int k = 0, len = strlen(str);
	for (int i = 1; i <= len; i++) ran[sa[i]] = i;
	for (int i = 0; i<len; i++) {
		if (k) k--;
		int j = sa[ran[i] - 1];
		while (str[j + k] == str[i + k]) k++;
		Height[ran[i]] = k;
	}
}
void Init() {
	scanf("%s", str);
	n = strlen(str);
}

void Push_up(int l, int r, int rt) {
	tt[rt] = min(tt[rt << 1], tt[rt << 1 | 1]);
}
void Build_Tree(int l, int r, int rt) {
	if (l == r) {
		tt[rt] = Height[l];
		return;
	}
	int mid = (l + r) >> 1;
	Build_Tree(l, mid, rt << 1);
	Build_Tree(mid + 1, r, rt << 1 | 1);
	Push_up(l, r, rt);
}
int Query(int L, int R, int l, int r, int rt) {
	if (L <= l&&R >= r) {
		return tt[rt];
	}
	int mid = (l + r) >> 1;
	int ans = inf;
	if (L <= mid)ans = min(ans, Query(L, R, l, mid, rt << 1));
	if (R > mid)ans = min(ans, Query(L, R, mid + 1, r, rt << 1 | 1));
	return ans;
}
int main() {
	int t, len;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &len);
		Init();
		sort_sa(200, n + 1);
		Gethight();
		int ans = 0;
		Height[n+1] = inf;
		Build_Tree(1, n, 1);
		/*for (int i = 1; i <= n; ++i) {
		printf("%d ", Height[i]);
		}
		printf("\n");
		for (int i = 1; i <= n; ++i) {
			printf("%d ", SA[i]);
		}
		printf("\n");
*/		/*if (len > n) {
			printf("0\n");
			continue;
		}
		if (len == 1) {
			ans += n - sa[1] - Height[2];
			ans += n - sa[n] - Height[n];
			for (int i = 2; i <= n - 1; ++i) {
				ans += n - sa[i] - max(Height[i], Height[i + 1]);
			}
			printf("%d\n", ans);
			continue;
		}
		int R, L;
		R = Query(2, len, 1, n, 1);
		L = min(R, Height[len + 1]);
		ans += R - L;
		for (int i = 3; i <= n - len + 1; ++i) {
			R = Query(i, i + len - 2, 1, n, 1);
			L = max(min(R, Height[i - 1]), min(R, Height[i + len - 1]));
			ans += R - L;
		}
		R = Query(n - len + 2, n, 1, n, 1);
		L = min(R, Height[n - len + 1]);
		ans += R - L;
		printf("%d\n", ans);
	}
	return 0;
}

*/





/*
#include <iostream>
#include <stdio.h>
#include <cstring>

#define inf 0x3f3f3f3f
#define MAXN 510
#define Couple 1010

using namespace std;


int link[MAXN][MAXN],girl[MAXN];
bool used[MAXN];
int N,M;

int find(int x) {
	for (int i = 1; i <=M; ++i) {
		if (link[x][i] && !used[i]) {
			used[i] = true;
			if (girl[i] == 0 || find(girl[i])) {
				girl[i] = x;
				return true;
			}
		}
	}
	return false;
}

int main() {
	int K;
	while (~scanf("%d", &K) && K != 0) {
		scanf("%d%d", &M, &N);
		int x, y;
		int all = 0;
		memset(link, 0, sizeof(link));
		memset(girl, 0, sizeof(girl));
		for (int i = 0; i < K; ++i) {
			scanf("%d%d", &y, &x);
			link[x][y]=1;
		}
		for (int i = 1; i <= N;++i) {
			memset(used, 0, sizeof(used));
			if (find(i)) all++;
		}
		printf("%d\n", all);
	}
	return 0;
}

*/


/*
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cstring>


#define MAXN 20010
#define inf 0x3f3f3f3f
#define Range 1000010

using namespace std;

char ch[MAXN], All[MAXN];
int SA[MAXN], rank1[MAXN], Height[MAXN], tax[Range], tp[MAXN], a[MAXN], n, m;
char str[MAXN];
//rank[i] 第i个后缀的排名; SA[i] 排名为i的后缀位置; Height[i] 排名为i的后缀与排名为(i-1)的后缀的LCP
//tax[i] 计数排序辅助数组; tp[i] rank的辅助数组(计数排序中的第二关键字),与SA意义一样。
//a为原串
void RSort(int *rank1,int *tp) {
	//rank第一关键字,tp第二关键字。
	for (int i = 0; i <= m; i++) tax[i] = 0;
	for (int i = 1; i <= n; i++) tax[rank1[tp[i]]] ++;
	for (int i = 1; i <= m; i++) tax[i] += tax[i - 1];
	for (int i = n; i >= 1; i--) SA[tax[rank1[tp[i]]] --] = tp[i]; //确保满足第一关键字的同时，再满足第二关键字的要求
} //计数排序,把新的二元组排序。

int cmp(int *f, int x, int y, int w) { return f[x] == f[y] && f[x + w] == f[y + w]; }
//通过二元组两个下标的比较，确定两个子串是否相同

void Suffix(int *rank1,int *tp) {
	//SA
	for (int i = 1; i <= n; i++) rank1[i] = a[i], tp[i] = i;
	 RSort(rank1,tp); //一开始是以单个字符为单位，所以(m = 127)

	for (int w = 1, p = 1, i; p < n; w += w, m = p) { //把子串长度翻倍,更新rank

													  //w 当前一个子串的长度; m 当前离散后的排名种类数
													  //当前的tp(第二关键字)可直接由上一次的SA的得到
		for (p = 0, i = n - w + 1; i <= n; i++) tp[++p] = i; //长度越界,第二关键字为0
		for (i = 1; i <= n; i++) if (SA[i] > w) tp[++p] = SA[i] - w;

		//更新SA值,并用tp暂时存下上一轮的rank(用于cmp比较)
		RSort(rank1,tp), swap(rank1, tp), rank1[SA[1]] = p = 1;

		//用已经完成的SA来更新与它互逆的rank,并离散rank
		for (i = 2; i <= n; i++) rank1[SA[i]] = cmp(tp, SA[i], SA[i - 1], w) ? p : ++p;
	}
	//离散：把相等的字符串的rank设为相同。
	//LCP
	int j, k = 0;
	for (int i = 1; i <= n; Height[rank1[i++]] = k)
		for (k = k ? k - 1 : k, j = SA[rank1[i] - 1]; a[i + k] == a[j + k]; ++k);
	//这个知道原理后就比较好理解程序
}

int tt[MAXN << 2];
void Push_up(int rt) {
	tt[rt] = min(tt[rt << 1], tt[rt] << 1 | 1);
}
int Build_Tree(int l, int r, int rt) {
	if (l == r) {
		tt[rt] = Height[l];
		return 0;
	}
	int mid = (l + r) >> 1;
	Build_Tree(l, mid, rt << 1);
	Build_Tree(mid + 1, r, rt << 1 | 1);
	Push_up(rt);
	return 0;
}
int Query(int L, int R, int l, int r, int rt) {
	if (L <= l&&R >=r ) {
		return tt[rt];
	}
	int mid = (l + r) >> 1;
	int ans = inf;
	if (L <= mid)ans=Query(L, R, l, mid, rt << 1);
	if (R > mid)ans=min(ans,Query(L, R, mid + 1, r, rt << 1 | 1));
	return ans;
}
int main() {
	int N, K;
	while (~scanf("%d%d", &N, &K)) {
		m = -inf;
		n = N;
		for (int i = 1; i <= N; ++i) { scanf("%d", &a[i]); m = max(m, a[i]); }
		Suffix(rank1,tp);
		int maxn = 0;
		/*Build_Tree(1, N, 1);
		for (int i = 2; i <= N - K+2; ++i) {
			maxn = max(maxn, Query(i, i + K - 2, 1, N, 1));
		}*/
		/*int l = 1, r = n;
		while (l <= r) {
			int cnt = 1;
			int mid = l + r >> 1;
			for (int i = 1; i <= n; i++) {
				if (Height[i] >= mid)cnt++;
				else cnt = 1;
				if (cnt >= K)break;
			}
			if (cnt >= K)l = mid + 1;
			else r = mid - 1;

		}
		printf("%d\n", r);

	//	printf("%d\n", maxn);
	}
	return 0;
}*/


/*
#include <iostream>
#include <algorithm>
#include <cstring>
#include <stdio.h>

#define inf 0x3f3f3f3f
#define MAXN 200020

using namespace std;

char ch[MAXN], All[MAXN];
int SA[MAXN], rank1[MAXN], Height[MAXN], tax[MAXN], tp[MAXN], a[MAXN], n, m;
char str1[MAXN],str2[MAXN];
int len1, len2;
//rank[i] 第i个后缀的排名; SA[i] 排名为i的后缀位置; Height[i] 排名为i的后缀与排名为(i-1)的后缀的LCP
//tax[i] 计数排序辅助数组; tp[i] rank的辅助数组(计数排序中的第二关键字),与SA意义一样。
//a为原串
void RSort(int *rank1,int *tp) {
	//rank第一关键字,tp第二关键字。
	for (int i = 0; i <= m; i++) tax[i] = 0;
	for (int i = 1; i <= n; i++) tax[rank1[tp[i]]] ++;
	for (int i = 1; i <= m; i++) tax[i] += tax[i - 1];
	for (int i = n; i >= 1; i--) SA[tax[rank1[tp[i]]] --] = tp[i]; //确保满足第一关键字的同时，再满足第二关键字的要求
} //计数排序,把新的二元组排序。

int cmp(int *f, int x, int y, int w) { return f[x] == f[y] && f[x + w] == f[y + w]; }
//通过二元组两个下标的比较，确定两个子串是否相同

void Suffix(int *rank1,int *tp) {
	//SA
	for (int i = 1; i <= n; i++) rank1[i] = a[i], tp[i] = i;
	m = 127, RSort(rank1,tp); //一开始是以单个字符为单位，所以(m = 127)

	for (int w = 1, p = 1, i; p < n; w += w, m = p) { //把子串长度翻倍,更新rank

													  //w 当前一个子串的长度; m 当前离散后的排名种类数
													  //当前的tp(第二关键字)可直接由上一次的SA的得到
		for (p = 0, i = n - w + 1; i <= n; i++) tp[++p] = i; //长度越界,第二关键字为0
		for (i = 1; i <= n; i++) if (SA[i] > w) tp[++p] = SA[i] - w;

		//更新SA值,并用tp暂时存下上一轮的rank(用于cmp比较)
		RSort(rank1,tp), swap(rank1, tp), rank1[SA[1]] = p = 1;

		//用已经完成的SA来更新与它互逆的rank,并离散rank
		for (i = 2; i <= n; i++) rank1[SA[i]] = cmp(tp, SA[i], SA[i - 1], w) ? p : ++p;
	}
	//离散：把相等的字符串的rank设为相同。
	//LCP
	int j, k = 0;
	for (int i = 1; i <= n; Height[rank1[i++]] = k)
		for (k = k ? k - 1 : k, j = SA[rank1[i] - 1]; a[i + k] == a[j + k]; ++k);
	//这个知道原理后就比较好理解程序
}

void Init() {

	len1 = strlen(str1);
	len2 = strlen(str2);
	n = len1+len2;
	for (int i = 0; i < len1; i++) a[i + 1] = str1[i];
	for (int i = len1; i < n; ++i) a[i + 1] = str2[i-len1];
}

int main() {
	while (~scanf("%s%s", str1, str2)) {
		Init();
		Suffix(rank1, tp);
		int maxn = -inf;
		for (int i = 2; i <= n; ++i) {
			if ((SA[i] > len1&&SA[i - 1] <= len1) || (SA[i] <= len1&&SA[i - 1] > len1)) {
				maxn =max(Height[i], maxn);
			}
		}
		printf("%d\n", maxn);
	}
	return 0;
}*/




/*
#include <iostream>
#include <algorithm>
#include <cstring>
#include <stdio.h>

#define inf 0x3f3f3f3f
#define MAXN 1000000
#define NUM 4010

using namespace std;



int SA[MAXN], rank1[MAXN], Height[MAXN], tax[MAXN], tp[MAXN], a[MAXN], n, m;
char str[MAXN];
int ans, len;
int judge[NUM], id[MAXN];
//rank[i] 第i个后缀的排名; SA[i] 排名为i的后缀位置; Height[i] 排名为i的后缀与排名为(i-1)的后缀的LCP
//tax[i] 计数排序辅助数组; tp[i] rank的辅助数组(计数排序中的第二关键字),与SA意义一样。
//a为原串
void RSort(int *rank1, int *tp) {
	//rank第一关键字,tp第二关键字。
	for (int i = 0; i <= m; i++) tax[i] = 0;
	for (int i = 1; i <= n; i++) tax[rank1[tp[i]]] ++;
	for (int i = 1; i <= m; i++) tax[i] += tax[i - 1];
	for (int i = n; i >= 1; i--) SA[tax[rank1[tp[i]]] --] = tp[i]; //确保满足第一关键字的同时，再满足第二关键字的要求
} //计数排序,把新的二元组排序。

int cmp(int *f, int x, int y, int w) { return f[x] == f[y] && f[x + w] == f[y + w]; }
//通过二元组两个下标的比较，确定两个子串是否相同

void Suffix(int *rank1, int *tp) {
	//SA
	for (int i = 1; i <= n; i++) rank1[i] = a[i], tp[i] = i;
	m = 5000, RSort(rank1, tp); //一开始是以单个字符为单位，所以(m = 127)

	for (int w = 1, p = 1, i; p < n; w += w, m = p) { //把子串长度翻倍,更新rank

													  //w 当前一个子串的长度; m 当前离散后的排名种类数
													  //当前的tp(第二关键字)可直接由上一次的SA的得到
		for (p = 0, i = n - w + 1; i <= n; i++) tp[++p] = i; //长度越界,第二关键字为0
		for (i = 1; i <= n; i++) if (SA[i] > w) tp[++p] = SA[i] - w;

		//更新SA值,并用tp暂时存下上一轮的rank(用于cmp比较)
		RSort(rank1, tp), swap(rank1, tp), rank1[SA[1]] = p = 1;

		//用已经完成的SA来更新与它互逆的rank,并离散rank
		for (i = 2; i <= n; i++) rank1[SA[i]] = cmp(tp, SA[i], SA[i - 1], w) ? p : ++p;
	}
	//离散：把相等的字符串的rank设为相同。
	//LCP
	int j, k = 0;
	for (int i = 1; i <= n; Height[rank1[i++]] = k)
		for (k = k ? k - 1 : k, j = SA[rank1[i] - 1]; a[i + k] == a[j + k]; ++k);
	//这个知道原理后就比较好理解程序
}

int  check(int mid, int N, int n) {
	int cnt = 0;
	memset(judge, 0, sizeof(judge));
	for (int i = 2; i <= n; ++i) {
		if (Height[i] < mid) {
			cnt = 0;
			memset(judge, 0, sizeof(judge));
			continue;
		}
		if (!judge[id[SA[i]]]) {
			cnt++;
			judge[id[SA[i]]] = 1;
		}
		if (!judge[id[SA[i - 1]]]) {
			cnt++;
			judge[id[SA[i - 1]]] = 1;
		}
		if (cnt == N) {
			ans = SA[i];
			len = mid;
			return 1;
		}
	}
	return 0;
}
int main() {
	int N;
	while (~scanf("%d", &N) && N) {

		n = 1;
		int temp;
		for (int i = 1; i <= N; ++i) {
			scanf("%s", str + n);
			temp = strlen(str + n);
			int p = n;
			for (int j = 0; j < temp; ++j) {
				a[n] = (str + p)[j];
				id[n] = i;
				n++;
			}
			a[n] = 128 + i;
			id[n] = 128 + i;
			n++;
		}
		n--;

		//Init();
		Suffix(rank1, tp);
		int l = 1, r = n;
		int flag = 0;
		while (l <= r) {
			int mid = (l + r) >> 1;
			if (check(mid, N, n)) {
				l = mid + 1;
				flag = 1;
			}
			else r = mid - 1;
		}
		str[ans + len] = '\0';
		if (flag)
			printf("%s\n", str + ans);
		else printf("IDENTITY LOST\n");
	}
	return 0;
}*/




/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define MAXN  64
#define Sid 8
int direction[8][2] = { { -2,1 },{ -1,2 },{ 1,2 },{ 2,1 },{ 2,-1 },{ 1,-2 },{ -1,-2 },{ -2,-1 } };

typedef struct {
	int x, y, k;
	int divideDirection[8];
}Position;
typedef struct Stack{
	Position *base, *top;
	Position *elem;
	int size;
}Stack;

Stack stack;


void Init(Stack *s) {
	s->size = 64;
	s->base = (Position *)malloc(sizeof(Position)*s->size);
	s->top = s->base;
}
void Push(Position *e) {
	memcpy(stack.top++, e, sizeof(Position));
}
void Pop(Position *e) {
	memcpy(e, --stack.top, sizeof(Position));
}
int map[8][8];
int check(Position *elem) {
	if (elem->x >= 0 && elem->x < 8 && elem->y >= 0 && elem->y < 8 && map[elem->x][elem->y] == 0) {
		return 1;
	}
	return 0;
}
int empty() {
	if (stack.top != stack.base)
		return 0;
	else return 1;
}
void SortDirection(Position *Pos) {
	int i, j,tmp;
	Position Next1, Next2;
	int pos[8];
	for (i = 0; i < 8; ++i) {
		pos[i] = 0;
		Next1.x = Pos->x + direction[i][0];
		Next1.y = Pos->y + direction[i][1];
		if(check(&Next1))
		for (j = 0; j < 8; ++j) {
			Next2.x = Next1.x + direction[j][0];
			Next2.y = Next1.y + direction[j][1];
			if(check(&Next2))pos[i]++;
		}
	}

	for (i = 0; i < 8; ++i)Pos->divideDirection[i] = i;
	for (i = 0; i < 8; ++i) {
		for (j = i + 1; j < 8; ++j) {
			if (pos[i]>pos[j]) {
				tmp = pos[i]; pos[i] = pos[j]; pos[j] = tmp;
				tmp = Pos->divideDirection[i];
				Pos->divideDirection[i] = Pos->divideDirection[j];
				Pos->divideDirection[j] = tmp;
			}
		}
	}
	i = 0;
	while (pos[i] == 0)i++;
	Pos->k = i - 1;
}//作用：找出空闲位置，然后按照不同方向的可跳道路的数目排序，先跳到可跳道路数目少的地方，再跳到可跳数目多的地方，防止出现调到非常空的位置去，从而无法实现跳满整个棋盘

int main() {
	Position start, Nextp,Nowp,Nextnp;
	int m = 1;
	int i, j;
	int flag;
	memset(map, 0, sizeof(map));
	start.x = 2;
	start.y = 3;
	start.k = 0;
	map[2][3] = 1;
	SortDirection(&start);
	Init(&stack);
	Push(&start);
	while (!empty()) {
		Pop(&Nowp);
		Nowp.k++;
		if (Nowp.k < 8) {
			Nextp.x = Nowp.x + direction[Nowp.divideDirection[Nowp.k]][0];
			Nextp.y = Nowp.y + direction[Nowp.divideDirection[Nowp.k]][1];
			map[Nextp.x][Nextp.y] = map[Nowp.x][Nowp.y]+1;
			SortDirection(&Nextp);
			if (map[Nextp.x][Nextp.y] == 63) {
				for (i = 0; i < 8; ++i) {
					Nextnp.x = Nextp.x + direction[i][0];
					Nextnp.y = Nextp.y + direction[i][1];
					if (check(&Nextnp)) {
						map[Nextnp.x][Nextnp.y] = 64;
						break;
					}
				}
				if (i < 8) {
					break;
				}
			}
		}
		Push(&Nowp);
		Push(&Nextp);
	}
	if (!empty())
	{
		for (i = 0; i < 8; ++i) {
			for (j = 0; j < 8; ++j) {
				printf("%d ", map[i][j]);
			}
			printf("\n");
		}
	}
	else printf("no");
	scanf("%d", &m);
}*/



/*
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <stdio.h>
#include <algorithm>


#define MAXN 200100
#define inf 0x3f3f3f3f
#define ll long long

using namespace std;

char ch[MAXN];
ll SA[MAXN], rank1[MAXN], Height[MAXN], tax[MAXN], tp[MAXN], a[MAXN], n, m;
char str[MAXN];
//rank[i] 第i个后缀的排名; SA[i] 排名为i的后缀位置; Height[i] 排名为i的后缀与排名为(i-1)的后缀的LCP
//tax[i] 计数排序辅助数组; tp[i] rank的辅助数组(计数排序中的第二关键字),与SA意义一样。
//a为原串
void RSort(ll *rank1, ll *tp) {
	//rank第一关键字,tp第二关键字。
	for (int i = 0; i <= m; i++) tax[i] = 0;
	for (int i = 1; i <= n; i++) tax[rank1[tp[i]]] ++;
	for (int i = 1; i <= m; i++) tax[i] += tax[i - 1];
	for (int i = n; i >= 1; i--) SA[tax[rank1[tp[i]]] --] = tp[i]; //确保满足第一关键字的同时，再满足第二关键字的要求
} //计数排序,把新的二元组排序。

ll cmp(ll *f, ll x, ll y, int w) { return f[x] == f[y] && f[x + w] == f[y + w]; }
//通过二元组两个下标的比较，确定两个子串是否相同

void Suffix(ll *rank1, ll *tp) {
	//SA
	for (int i = 1; i <= n; i++) rank1[i] = a[i], tp[i] = i;
	m = 130, RSort(rank1, tp); //一开始是以单个字符为单位，所以(m = 127)

	for (int w = 1, p = 1, i; p < n; w += w, m = p) { //把子串长度翻倍,更新rank

													  //w 当前一个子串的长度; m 当前离散后的排名种类数
													  //当前的tp(第二关键字)可直接由上一次的SA的得到
		for (p = 0, i = n - w + 1; i <= n; i++) tp[++p] = i; //长度越界,第二关键字为0
		for (i = 1; i <= n; i++) if (SA[i] > w) tp[++p] = SA[i] - w;

		//更新SA值,并用tp暂时存下上一轮的rank(用于cmp比较)
		RSort(rank1, tp), swap(rank1, tp), rank1[SA[1]] = p = 1;

		//用已经完成的SA来更新与它互逆的rank,并离散rank
		for (i = 2; i <= n; i++) rank1[SA[i]] = cmp(tp, SA[i], SA[i - 1], w) ? p : ++p;
	}
	//离散：把相等的字符串的rank设为相同。
	//LCP
	int j, k = 0;
	for (int i = 1; i <= n; Height[rank1[i++]] = k)
		for (k = k ? k - 1 : k, j = SA[rank1[i] - 1]; a[i + k] == a[j + k]; ++k);
	//这个知道原理后就比较好理解程序
}

void Init() {
	n = strlen(str);
	for (int i = 0; i < n; i++) a[i + 1] = str[i];
}


ll K;
ll s[MAXN][2];
int main() {
	while (scanf("%ld", &K)!=EOF && K) {
		long long len1, len2, num = 0;
		scanf("%s", str);
		len1 = strlen(str);
		str[len1] = '@';
		scanf("%s", str + len1 + 1);
		len2 = strlen(str) - len1;
		Init();
		Suffix(rank1, tp);
		long long tot , top = 0;
		tot = top = 0;
		num = 0;
		for (int i =2; i <= n; ++i) {
			if (Height[i] < K) { tot = top = 0; }
			else {
				ll cnt = 0;
				if (SA[i-1] > len1 + 1) {
					cnt++;
					tot += Height[i] - K + 1;
				}
				while (top > 0 && Height[i] <= s[top-1][0]) {
					top--;
					tot -= s[top][1] * (s[top][0] - Height[i]);
					cnt += s[top][1];
				}
				s[top][0] = Height[i];
				s[top++][1] = cnt;
				if (SA[i] <= len1)num += tot;
			}
		}
		tot = top = 0;
		for (int i = 2; i <= n; ++i) {
			if (Height[i] < K) { tot = top = 0; }
			else {
				ll cnt = 0;
				if (SA[i-1]<= len1) {
					cnt++;
					tot += Height[i] - K + 1;
				}
				while (top > 0 && Height[i] <= s[top - 1][0]) {
					top--;
					tot -= s[top][1] * (s[top][0] - Height[i]);
					cnt += s[top][1];
				}
				s[top][0] = Height[i];
				s[top++][1] = cnt;
				if (SA[i] > len1+1)num += tot;
			}
		}
		printf("%I64d\n", num);
	}
	return 0;
}*/


/*
#include<cstdio>//最长公共子串
#include<cstring>
#define Max(a, b)   a>b?a:b
const int maxn = 101001;
int wa[maxn], wb[maxn], wv[maxn], ws[maxn], rank[maxn], height[maxn], sa[maxn], s[maxn], loc[maxn];
bool vis[1001];
char str[1001], ans[1001];
int n;
int cmp(int *r, int a, int b, int l) {
	return r[a] == r[b] && r[a + l] == r[b + l];
}
int abs(int a) {
	return a<0 ? -a : a;
}
void da(int *r, int n, int m) {
	int i, j, p, *x = wa, *y = wb, *t;
	for (i = 0; i<m; i++) ws[i] = 0;
	for (i = 0; i<n; i++) ws[x[i] = r[i]] ++;
	for (i = 1; i<m; i++) ws[i] += ws[i - 1];
	for (i = n - 1; i >= 0; i--) sa[--ws[x[i]]] = i;
	for (j = 1, p = 1; p<n; j *= 2, m = p) {
		for (p = 0, i = n - j; i<n; i++) y[p++] = i;
		for (i = 0; i<n; i++) if (sa[i] >= j) y[p++] = sa[i] - j;
		for (i = 0; i<n; i++) wv[i] = x[y[i]];
		for (i = 0; i<m; i++) ws[i] = 0;
		for (i = 0; i<n; i++) ws[wv[i]] ++;
		for (i = 1; i<m; i++) ws[i] += ws[i - 1];
		for (i = n - 1; i >= 0; i--) sa[--ws[wv[i]]] = y[i];
		for (t = x, x = y, y = t, p = 1, x[sa[0]] = 0, i = 1; i<n; i++)
			x[sa[i]] = cmp(y, sa[i - 1], sa[i], j) ? p - 1 : p++;
	}
	return;
}
void calheight(int *r, int n) {
	int i, j, k = 0;
	for (i = 1; i <= n; i++) rank[sa[i]] = i;//获取rank值 O(n)
	for (i = 0; i<n; height[rank[i++]] = k)
		for (k ? k-- : 0, j = sa[rank[i] - 1]; r[i + k] == r[j + k]; k++);
	return;
}


bool check(int k, int len) {
	int flag = 0;
	int tmp = 0;
	int count = 0;
	memset(vis, 0, sizeof(vis));
	for (int i = 1; i <= len; ++i) {
		if (height[i] < k) {
			memset(vis, 0, sizeof(vis));
			count = 0;
			continue;
		}
		if (!vis[loc[sa[i - 1]]])
			vis[loc[sa[i - 1]]] = true, count++;
		if (!vis[loc[sa[i]]])
			vis[loc[sa[i]]] = true, count++;
		if (count > n/2) {
			return 1;
		}
	}
	return 0;
}

bool print(int mid, int len) {
	int flag = 0;
	int tmp = 0;
	int tag = 0;
	int count = 0;
	memset(vis, 0, sizeof(vis));
	for (int i = 1; i <= len; ++i) {
		if (height[i] < mid) {
			memset(vis, 0, sizeof(vis));
			count = 0;
			tag = 0;
			continue;
		}
		if (!vis[loc[sa[i - 1]]])
			vis[loc[sa[i - 1]]] = true, count++;
		if (!vis[loc[sa[i]]])
			vis[loc[sa[i]]] = true, count++;
		if (count > n/2 && !tag) {
			for (int j = 0; j<mid; j++)
				ans[j] = s[sa[i] + j] + 'a' - 1;
			ans[mid] = '\0';
			printf("%s\n", ans);
			tag = 1;
		}
	}
	return 0;
}

int main() {
	int i, j, m, max, t, flag, x, temp, min;
	while (~scanf("%d", &n) && n) {
		flag = 0;
		m = 0;
		min = maxn;
		temp = 30;
		for (i = 0; i<n; i++) {
			scanf("%s", str);
			if (strlen(str)<min)    min = strlen(str);
			for (j = 0; str[j]; j++) {
				s[m] = str[j] - 'a' + 1;
				loc[m++] = i;
			}
			s[m] = temp;
			loc[m++] = temp++;
		}
		s[m] = 0;
		da(s, m + 1, temp);
		calheight(s, m);
		int left = 0, right = min, mid;
		while (right >= left) {
			mid = (right + left) / 2;
			if (check(mid, m)) {
				left = mid + 1;
				flag = mid;
			}
			else
				right = mid - 1;
		}
		if (flag) {
			print(flag, m);
			printf("\n");
		}
		else
			printf("?\n\n");
	}
	return 0;
}*/


/*
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#define ll long long
#define inf 0x3f3f3f3f
using namespace std;

int n, k,ans,a[100010];
void find() {
	if (k == 1) {
		ans = 10e9;
		for (int i = 0; i < n; ++i) {
			if (a[i] < ans) {
				ans = a[i];
			}
		}
		return;
	}
	if (k == 2) {
		ans = a[n - 1];
		if (ans < a[0])
			ans = a[0];
		return;
	}
	if (k > 2) {
		ans = -10e9;
		for (int i = 0; i < n; ++i) {
			if (a[i] > ans)
				ans = a[i];
		}
		return;
	}
}
int main() {
	while (~scanf("%d%d", &n, &k)) {
		for (int i = 0; i < n; ++i) {
			scanf("%d", &a[i]);
		}
		find();
		printf("%d\n", ans);
	}
	return 0;
}*/

/*

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#define ll long long
#define inf 0x3f3f3f3f
using namespace std;

int a[20], b[20], c[20];
int n, m;
int main() {
	while (~scanf("%d%d", &n, &m)) {
		memset(c, 0, sizeof(c));
		for (int i = 0; i < n; ++i) {
			scanf("%d", &a[i]);
			c[a[i]]=1;
		}
		for (int i = 0; i < m; ++i) {
			scanf("%d", &b[i]);
			if (c[b[i]] == 1) {
				c[b[i]] = 2;
			}
			else if (c[b[i]] == 0) {
				c[b[i]] = 3;
			}
		}
		int p=0, q=0,ans=0;
		for (int i = 1; i < 10; ++i) {
			if (c[i] == 2)
			{
				ans = i;
				break;
			}
			if (c[i] == 1 && p == 0) {
				p = i;
			}
			if (c[i] == 3 && q == 0) {
				q = i;
			}
		}
		if (p>q)
		{
			int t;
			t = p;
			p = q;
			q = t;
		}
		if (ans) {
			printf("%d\n",ans);
		}
		else printf("%d%d\n", p, q);
	}
	return 0;
}*/




/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXN 1000

typedef struct Node {
	char c;
	struct Node *parent, *left, *right;
}Node;

typedef struct Tree {
	Node *head;
	int num;
}Tree;

int Add_Node(char,Node **,Node **);
int Build_Tree(char *,int l,int r,Node **,Node **q);
int Init(Tree **t);
int Output(Node *);
int Input(char *);
int main() {
	char str[MAXN];
	Tree *T;
	if (!Input(str)) {
		printf("inptut error!\n");
		return 0;
	}
	if (!Init(&T)) {
		printf("error:cannot creat a tree");
		return 0;
	}

		if (!Build_Tree(str,0,strlen(str),&T->head,NULL) ){
			printf("error:cannot add nodes");
			return 0;
		}
	Output(T->head);
	printf("\n");
	system("pause");
	return 1;
}

int Build_Tree(char *str,int l,int r,Node **p,Node **q) {
	int mid;
	if (l == r) {
		Add_Node(str[l], p,q);
		return 1;
	}
	mid = (l + r) / 2;
	Add_Node(str[mid], p,q);
	if (l < mid)Build_Tree(str, l, mid - 1, &(*p)->left,p);
	if (r > mid)Build_Tree(str, mid + 1, r, &(*p)->right,p);
	
	return 1;
}
int Add_Node(char c, Node **p,Node **q) {
	*p = (Node *)malloc(sizeof(Node));
	(*p)->c = c;
	(*p)->left = NULL;
	(*p)->right = NULL;
	if(q!=NULL)
	(*p)->parent = (*q);
	else (*p)->parent = NULL;
	return 1;
}
int Init(Tree **t) {
	(*t) = (Tree *)malloc(sizeof(Tree));
	(*t)->head = NULL;
	(*t)->num = 0;
	return 1;
}
int Input(char *str) {
	scanf("%s", str);
	return 1;
}
int Output(Node *p) {
	Node* q[MAXN],*temp;
	int head,tail,k;
	if (p)
		return 0;
	memset(q, 0, sizeof(q));
	head = 0;
	tail = 1;
	q[0] = p;
	/*while (head != tail&&tail+1!=head) {
		k = head - tail;
		while (k--) {
			temp = q[head];
			head++;
			printf("%c     ", temp->c);
			if (temp->left != NULL)
				q[tail++] = temp->left;
			if (temp->right != NULL)
				q[tail++] = temp -> right;
		}
		printf("/n");
	}
	return 1;
}*/


/*
#include <iostream>
#include <stdio.h>
#include <cstring>
#include <cstdlib>
#include <algorithm>

#define inf 0x3f3f3f3f
#define MAXN 200
#define EDGE 6000
#define WE 6000

using namespace std;

int dis[MAXN], w[MAXN][MAXN], w2[MAXN][MAXN],disw[MAXN],vis[MAXN];

 int dijkstra(int n)
{
	 memset(vis, 0, sizeof(vis));
	 memset(dis, inf, sizeof(dis));
	 memset(disw, inf, sizeof(disw));
	 for (int i = 1; i < n; ++i) {
		 dis[i] = w[0][i];
		 disw[i] = w2[0][i];
	 }
	dis[0] = 0;
	disw[0] = 0;
	 vis[0] = 1;
	 for (int i = 1; i < n; ++i) {
		 int minn = inf, k = 0;
		 for (int j = 0; j < n; ++j) { 
			 if (!vis[j]&&disw[j]<minn) {
				 minn = disw[j], k = j;
			 }
		 }
		 vis[k] = 1;
		 int minn2 = dis[k];
		 for (int j = 1; j < n; ++j) {
			 if (!vis[j] && minn + w2[k][j] < disw[j]) {
				 dis[j] = minn2 + w[k][j];
				 disw[j] = minn + w2[k][j];
			 }
		 }
	 }
	 return 1;
 }

 int n, m1, m2, L;
 int T;
 int main() {
	 scanf("%d", &T);
	 while (T--) {
		 scanf("%d%d%d%d", &n, &m1, &m2, &L);
		 int a, b, c;
		 memset(w, inf, sizeof(w));
		 memset(w2, inf, sizeof(w2));
		 for (int i = 0; i < m1; ++i) {
			 scanf("%d%d", &a, &b);
			 w[a-1][b-1] = 1;
			 w2[a-1][b-1] = 0;
		 }
		 for (int i = 0; i < m2; ++i) {
			 scanf("%d%d%d", &a, &b, &c);
			 if (w[a-1][b-1] > c) {
				 w[a-1][b-1] = c;
				 w2[a-1][b-1] = c;
			 }
		 }
		 dijkstra(n);
		 if (dis[n - 1] <=L) {
			 printf("%d\n",disw[n-1]);
			 continue;
		 }
		 /*for (int i = 0; i < n; ++i) {
			 for (int j = 0; j < n; ++j)
				 printf("%d ", w[i][j]);
			 printf("\n");
		 }*/
		/* for (int i = 0; i < n; ++i)
			 printf("%d ", disw[i]);
		 disw[n - 1] = inf;
		 for (int i = 0; i < n-1; ++i) {
			 if (w[i][n - 1] != inf) {
				 int temp1,temp2;
				 temp1 = w[i][n - 1] + dis[i];
				 temp2 = w2[i][n - 1] + disw[i];
				 //printf("%ds", temp2);
				 if (temp1 <= L&&temp2 < disw[n - 1]) {
					 disw[n - 1] = temp2;
					 dis[n - 1] = temp1;

				 }
			 }
		 }
		 /*for (int i = 0; i < n; ++i) {
			/* for(int j=0;j<n;++j)
			 printf("%d ", w[i][j]);
			 printf("%d ", disw[i]);
		 }
		 if(dis[n-1]<=L)
		 printf("%d\n", disw[n - 1]);
		 else printf("-1\n");
	 }
	 return 0;
 }*/
/*
#include <iostream>
#include <stdio.h>
#include <cstring>
#include <cstdlib>
#include <algorithm>

#define inf 0x3f3f3f3f
#define MAXN 200
#define EDGE 6000
#define WE 6000

using namespace std;

int dis[MAXN], w[MAXN][MAXN], w2[MAXN][MAXN], disw[MAXN], vis[MAXN];
/*
int dijkstra(int n)
{
	memset(vis, 0, sizeof(vis));
	memset(dis, inf, sizeof(dis));
	memset(disw, inf, sizeof(disw));
	for (int i = 1; i < n; ++i) {
		dis[i] = w[0][i];
		disw[i] = w2[0][i];
	}
	dis[0] = 0;
	disw[0] = 0;
	vis[0] = 1;
	for (int i = 1; i < n; ++i) {
		int minn = inf, k = 0;
		for (int j = 0; j < n; ++j) {
			if (!vis[j] && disw[j]<minn) {
				minn = disw[j], k = j;
			}
		}
		vis[k] = 1;
		int minn2 = dis[k];
		for (int j = 1; j < n; ++j) {
			if (!vis[j] && minn + w2[k][j] < disw[j]) {
				dis[j] = minn2 + w[k][j];
				disw[j] = minn + w2[k][j];
			}
		}
	}
	return 1;
}
*/
/*
#include <iostream>
#define MAXN 20
#define cube(a,b,c) ((a)*(b)*(c))
using namespace std;
int main() {
	int t;
	while (~scanf("%d", &t) && t != -1) {
		char name[MAXN][MAXN];
		int max, min;
		int p = 0, q = 0;
		int a, b, c;
		scanf("%d%d%d%s", &a, &b, &c, name[0]);
		max = min = cube(a, b, c);
		for (int i = 1; i<t; ++i) {
			scanf("%d%d%d%s", &a, &b, &c, name[i]);
			int temp = cube(a, b, c);
			if (temp>max)
				q = i;
			if (temp<min)
				p = i;
		}
		printf("%s took clay from %s.\n", name[p], name[q]);
	}
}*/

/*
#include <iostream>
#include <stdio.h>
#include <cstring>
#include <cstdlib>
#include <algorithm>

#define MAXN 210
#define inf 0x3f3f3f3f

using namespace std;

int dp[210][MAXN], a[2][MAXN],b[MAXN][MAXN];
int n;

int main() {
	while (~scanf("%d", &n)) {
		memset(a, 0, sizeof(a));
		for (int i = 1; i <= n; ++i) {
			for (int j = 1; j <= n; ++j) {
				scanf("%d", &b[i][j]);
				a[0][j] += b[i][j]; a[1][j] -= b[i][j];
			}
		}
		memset(dp, -inf, sizeof(dp));
		dp[0][0] = 0;
		for (int i = 1; i <= n; ++i) {
			dp[0][i] = dp[0][i - 1] + a[0][i];
			for (int j = 1; j <= i; ++j) {
				dp[j][i] = max(dp[j][i - 1] + a[0][i], dp[j - 1][i - 1] + a[1][i]);
			}
		}
		int ans = -inf;
		for (int i = 0; i <= n; ++i) {
			ans = max(ans, dp[i][n]);
		}
		printf("%d\n", ans);
	}
	return 0;
}*/





/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXN 100
#define inf 0x3f3f3f3f

int adjMat[MAXN][MAXN];
char str[MAXN];
typedef struct ArcNode {
	int val;
	ArcNode *next;
	char c;
	int info;
}ArcNode;
typedef struct VNode{
	int val;
	struct ArcNode *first;
}VNode;

typedef struct Node {
	int val;
	int left, right,parent;
}Node;


typedef struct Tree {
	Node *head;
}Tree;

void Init_VNode(VNode **a,int n) {
	int i;
	*a = (VNode*)malloc(sizeof(VNode)*(n+1));
	for (i = 1; i <= n; ++i) {
		(*a)[i].val = i;
		(*a)[i].first = NULL;
	}
}

void Insert(VNode *p, int j) {
	ArcNode *q;
	q = (ArcNode*)malloc(sizeof(ArcNode));
	q->val = j;
	q->next = p->first;
	p->first = q;
}

VNode* Matrix_to_List(int a[MAXN][MAXN], int n) {
	int i, j;
	VNode *b;
	Init_VNode(&b,n);
	for (i = 1; i <= n; ++i) {
		for (j = 1; j <= n; ++j) {
			if (a[i][j] != 0) {
				Insert(&b[i], j);
			}
		}
	}
	return b;
}

Node* Init_Tree(Tree **b, int n) {
	Node *p;
	int i;
	*b = (Tree*)malloc(sizeof(Tree));
	p = (Node *)malloc(sizeof(Node)*(n+2));
	for (i = 1; i <= n; ++i) {
		p[i].val = i;
		p[i].left = 0;
		p[i].right = 0;
		p[i].parent = 0;
	}
	(*b)->head = NULL;
	return p;
}
int visit[MAXN][MAXN];
void dfs(Node *p, VNode *a, int position, int n) {
	int i;
	int w[MAXN] = {0}, size = 0;
	ArcNode *t;
	int k=position,temp;
	t = a[position].first;
	while (t != NULL&&visit[t->val][position])t=t->next;
	if (t != NULL) {
		k = temp = t->val;
		t = t->next;
	}
	else k = temp = 0;
	while (t != NULL) {
		if (!visit[t->val][position]) {
			p[k].right = t->val;
			p[t->val].parent = k;
			k = t->val;
			visit[t->val][position] =visit[position][t->val]=1;
			w[size++] = k;
		}
		t = t->next;
	}
	p[temp].parent = position;
	p[position].left = temp;
	visit[temp][position] = visit[position][temp] = 1;
	if (temp != 0) {
		dfs(p, a, temp, n);
		for (i = 0; i < size; ++i)
			dfs(p, a, w[i], n);
	}
}
Node* List_to_Tree(VNode *a, int n) {
	Tree *b;
	Node *p;
	int i;
	p=Init_Tree(&b,n);
	memset(visit, 0, sizeof(visit));
		dfs(p, a, 1,n);
	return p;
}



void output(Node *p,int c,int space){
	int i;
	for (i = 1; i <= space; ++i)printf(" ");
	printf("%c\n",str[c-1]);
	if (p[c].left != 0) {
		output(p, p[c].left, space + 1);
		}
	if (p[c].right != 0) {
		output(p, p[c].right, space);
	}
}


int main() {
	int edges,i,j,a,b;
	VNode *vn;
	Node *p;
	scanf("%s",str);
	printf("edges:");
	scanf("%d", &edges);
	for (i = 0; i < edges; ++i)
	{
		scanf("%d%d", &a, &b);
		adjMat[a][b] = 1;
		adjMat[b][a] = 1;
	}
	vn = Matrix_to_List(adjMat,strlen(str));
	/*for (i = 1; i <= strlen(str); ++i)
	{
		printf("%d:", vn[i].val);
		ArcNode *t;
		t = vn[i].first;
		while (t != NULL)
			printf("%d ", t->val), t=t->next;
		printf("\n");
	}
	system("pause");
	p = List_to_Tree(vn, strlen(str));
	for (i = 1; i <= strlen(str); ++i) {
		printf("%d %d %d %d\n", p[i].val, p[i].parent, p[i].right, p[i].left);
	}
	for (i = 1; i <= strlen(str); ++i) {
		if (p[i].parent == 0)
			output(p, i, 0);
	}
	/*for (i = 1; i <= strlen(str); ++i) {
		for (j = 1; j <= strlen(str); ++j)
			printf("%d ", visit[i][j]);
		printf("\n");
	}
	system("pause");
}*/


/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXN
typedef int Typename;

typedef struct Node {
	Typename key; 
	struct Node *left, *right,*p;
}Node;
typedef struct Tree {
	Node*head;
	int size;
}Tree;

Node* Tree_Search(Node *x, Typename k) {
	if (x == NULL || x->key == k) {
		return x;
	}
	if (k < x->key) {
		return Tree_Search(x->left, k);
	}
	else return Tree_Search(x->right, k);
}
Node* Tree_Minimum(Node *x) {
	while (x->left != NULL) {
		x = x->left;
	}
	return x;
}
Node* Tree_Maximum(Node *x) {
	while (x->right != NULL)
		x = x->right;
	return x;
}
Node* Tree_Successor(Node *x) {
	if (x->right != NULL)
		return Tree_Minimum(x->right);
	Node *y = x->p;
	while (y != NULL&&y == x->right) {
		x = y;
		y = y->p;
	}
	return y;
}
Node* Tree_Predecessor(Node *x) {
	if (x->left != NULL)
		return Tree_Maximum(x->left);
	Node *y = x->p;
	while (y != NULL&&y == x->left) {
		x = y;
		y = y->p;
	}
	return y;
}
void Tree_Insert(Tree *T, Node *z) {
	Node *y = NULL;
	Node *x = T->head;
	while (x != NULL) {
		y = x;
		if (z->key < x->key)
			x = x->left;
		else x = x->right;
	}
	z->p = y;
	if (y == NULL)
		T->head = z;
	else if (z->key < y->key)
		y->left = z;
	else y->right = z;
	z->left = z->right = NULL;
	T->size++;
}
void Transplant(Tree*T, Node *u, Node *v) {
	if (u->p == NULL)
		T->head = v;
	else if (u == u->p->left)
		u->p->left = v;
	else u->p->right = v;
	if (v != NULL)
		v->p = u->p;
}
void Tree_Delete(Tree *T, Node *z) {
	Node *y;
	if (z->left == NULL) {
		Transplant(T, z, z->right);
	}
	else if (z->right == NULL)
		Transplant(T, z, z->left);
	else { y = Tree_Minimum(z->right); 
	if (y->p != z) {
		Transplant(T, y, y->right);
		y->right = z->right;
		y->right->p = y;
	}
	Transplant(T, z, y);
	y->left = z->left;
	y->left->p = y;
	}
	delete z;
	T->size--;
}
void Tree_Output(Node *x, int level) {
	int i;
	if (x == NULL)
		return;
	Tree_Output(x->left, level + 5);
	for (i = 0; i < level; ++i) {
		printf(" ");
	}
	printf("%d\n", x->key);
	Tree_Output(x->right, level + 5);
}
void Tree_Display(Tree *T) {
	if (T->head == NULL) {
		printf("empty tree!\n");
	}
	else {
		Tree_Output(T->head,0);
	}
}
void Tree_Init(Tree **T) {
	(*T)->head = NULL;
	(*T)->size = 0;
}

int main() {
	int direction;
	Tree *T=(Tree*)malloc(sizeof(Tree));
	Node *temp;
	int n;
	Tree_Init(&T);
	printf("0:insert,1:search,2:delete,3:display\n");
	while (~scanf("%d", &direction)) {

		if (direction == 0) {
			printf("Please input a number:");
			scanf("%d",&n);
			temp = (Node*)malloc(sizeof(Node));
			temp->key = n;
			Tree_Insert(T, temp);
		}
		else if (direction == 1) {
			printf("Please input a key that you want to find:");
			scanf("%d",&n);
			temp = Tree_Search(T->head, n);
			if(temp->p!=NULL)
			printf("Its father is %d.\n", temp->p->key);
			if (temp->left != NULL)
				printf("Its left-child is %d.\n", temp->left->key);
			if (temp->right != NULL)
				printf("Its right-child is %d.\n", temp->right->key);
		}
		else if (direction == 2) {
			printf("Please input a number you want to delete:");
			scanf("%d", &n);
			temp = Tree_Search(T->head, n);
			if(temp!=NULL)
			Tree_Delete(T,temp);
		}
		else if (direction == 3) {
			Tree_Display(T);
		}
		printf("0:insert,1:search,2:delete,3:display\n");
	}
	return 0;
}*/



/*
#include <iostream>
#include <algorithm>
#include <cstdlib>

#define MAXN 100
#define inf 0x3f3f3f3f

using namespace std;

typedef struct ArcBox {
	int val;
	int cost;
	ArcBox *next;
}ArcBox;

typedef struct VexNode {
	int val;
	ArcBox *first;
}VexNode;

typedef struct Stack {
	int *ele;
	int size;
	int capacity;
	int top;
	int bottom;
}Stack;

VexNode* Creat_AdjList(int);
void Insert(VexNode&,int,int);
void Init(VexNode *&head,int n);

void key_path_top_sort(VexNode*,int);

bool empty_stack(Stack  *);
bool full_stack(Stack  *);
void Push(Stack *, int);
int Pop(Stack *);
void Init_stack(Stack &stack);

int main() {
	VexNode *L;
	L = Creat_AdjList(9);
	key_path_top_sort(L, 9);
	system("pause");
	return 0;
}

void Insert(VexNode &Node, int head,int cost) {
	ArcBox *temp;
	temp = new ArcBox;
	temp->val = head;
	temp->cost = cost;
	temp->next = Node.first;
	Node.first = temp;
}


void Init(VexNode *&List,int n) {
	for (int i = 1; i <= n; ++i) {
		List[i].val = i;
		List[i].first = NULL;
	}
}
VexNode* Creat_AdjList(int n) {
	VexNode *List;
	int num;
	int tail, head,cost;
	
	List = new VexNode[n+1];
	Init(List,n);
	cout << "How much Arc you want to input:";
	cin >> num;
	cout << "Please input the Arc of the Chart:\n";
	while (num--) {
		cin >> tail >> head>>cost;
		Insert(List[tail], head,cost);
	}
	return List;
}


bool empty_stack(Stack *stack) {
	if (stack->size==0) {
		return false;
	}
	return true;
}
bool full_stack(Stack *stack) {
	if (stack->size == stack->capacity) {
		return false;
	}
	return true;
}
void Push(Stack *stack, int i) {
	stack->ele[stack->top] = i;
	stack->top++;
	stack->size++;
}
int Pop(Stack *stack) {
	stack->top--;
	stack->size--;
	return stack->ele[stack->top];
}

void Init_stack(Stack &stack) {
	stack.ele = new int[MAXN];
	memset(stack.ele, 0, sizeof(int)*MAXN);
	stack.size = 0;
	stack.capacity = MAXN;
	stack.top = stack.bottom = 0;
}

void key_path_top_sort(VexNode*L, int n) {
	int  in_degree[MAXN] = { 0 };
	int e[MAXN], l[MAXN],num=n;
	memset(e, 0, sizeof(e));
	memset(l, 0, sizeof(l));
	memset(in_degree, 0, sizeof(in_degree));
	Stack stack,s;
	Init_stack(stack);
	Init_stack(s);
	for (int i = 1; i<=n; ++i) {
		ArcBox *temp;
		temp = L[i].first;
		while (temp!=NULL) {
			in_degree[temp->val]++;
			temp = temp->next;
		}
	}
	for (int i = 1; i <= n; ++i) {
		if (in_degree[i] == 0) {
			if (full_stack(&stack)) {
				Push(&stack,i);
				Push(&s, i);
			}
		}
	}
	if (!empty_stack(&stack)) {
		return;
	}
	while (num--) {
		if (!empty_stack(&stack)) {
			return;
		}
		int temp = Pop(&stack);
		cout << temp << " ";
		ArcBox *t = L[temp].first;
		while (t != NULL) {
			in_degree[t->val]--;
			if (0 == in_degree[t->val]) {
				Push(&stack,t->val);
				Push(&s, t->val);
			}
			e[t->val] = max(e[t->val], e[temp] + t->cost);
			t = t->next;
		}
	}
	for (int i = 1; i <=n; ++i) {
		l[i] = e[n];
	}
	while (empty_stack(&s)) {
		int temp = Pop(&s);
		ArcBox *t = L[temp].first;
		while (t != NULL) {
			l[temp] = min(l[t->val] - t->cost, l[temp]);
			t = t->next;
		}
	}
	cout << "array e is:";
	for (int i = 1; i <=n; ++i) {
		cout << e[i]<<" ";
	}
	cout << "\narray l is:";
	for (int i = 1; i <=n; ++i) {
		cout << l[i]<<" ";
	}
}*/



/*
#include <iostream>
#include <stdio.h>
#include <cstring>
#include <cstdlib>
#include <algorithm>

#define MAXN 210
#define inf 0x3f3f3f3f

using namespace std;

int a[MAXN];

int main() {
	int n;
	while (~scanf("%d", &n)) {
		for (int i = 0; i < n; ++i) {
			scanf("%d", &a[i]);
		}
		int c1, c2,i=0,spe=3;
		bool flag = true;
		c1 = 1;
		c2 = 2;
		while (n--) {
			int temp;
			if (a[i] == c1) {
				temp = c2;
				c2 = spe;
				spe = temp;
			}
			else if (a[i] == c2) {
				temp = c1;
				c1 = spe;
				spe = temp;
			}
			else {
				flag = false;
				break;
			}
			++i;
		}
		if (flag) {
			printf("YES\n");
		}
		else printf("NO\n");
	}
	return 0;
}*/



/*
#include <iostream>
#include <stdio.h>
#include <cstring>
#include <cstdlib>
#include <algorithm>

#define MAXN 10000
#define inf 0x3f3f3f3f

using namespace std;

unsigned int a[MAXN];
int main() {
	unsigned int k;
	unsigned int temp;
	unsigned int n;
	k = 1;
	do {
		temp = ((1 << k) - 1)<< (k - 1);
		a[k] = temp;
		++k;

	} while (temp<10e5);
	k--;
	while (~scanf("%d", &n)) {
		temp = n;
		unsigned int ans=0;
		unsigned int i = log2(n) / 2 + 50;
		if (i > k)
			i = k;
		for (; i >= 1; --i) {
			if (n%a[i] == 0)
			{
				ans = a[i];
				break;
			}
		}

			printf("%u\n", ans);
	}
	return 0;
}*/


/*
#include <iostream>
#include <stdio.h>
#include <cstring>
#include <cstdlib>
#include <algorithm>

#define MAXN 100100
#define inf 0x3f3f3f3f

using namespace std;

long long cost[MAXN],p[MAXN];
int N, M;


long long find_head(long long a) {
	if (p[a] != a)
		p[a] = find_head(p[a]);
	return p[a];
}

int main() {
	while (~scanf("%d%d", &N, &M)) {
		for (int i = 1; i <= N; ++i) {
			scanf("%lld", &cost[i]);
			p[i] = i;
		}
		long long a, b;
		for (int i = 1; i <= M; ++i) {
			scanf("%lld%lld", &a, &b);
			int temp1,temp2;
			temp1 = find_head(a);
			temp2 = find_head(b);
			cost[temp1] = min(cost[temp1], cost[temp2]);
			cost[temp2] = 0;
			p[temp2] = temp1;
		}
		long long ans=0;
		for (int i = 1; i <= N; ++i) {
			ans += cost[i];
		}
		printf("%lld\n", ans);
	}
	return 0;
}*/

/*
#include <stdio.h>

typedef struct Node {
	struct Node* prev;
	char c;
	struct Node* next;
}Node;


typedef struct {
	struct Node* head;
	struct Node* rear;
	int count;
}List;
void List_insert(List*, char);
void List_Delete(List*);
void BigMathPlus(List*, List*, int);
void show(List*, char);
void Delete_zero(List*);
int main() {
	char c1[1000], c2[1000], sign1, sign2;
	List num1, num2;
	Node *p, *q;
	int temp = 0;
	int i, j;
	bool flag = true;
	Node *temp1, *temp2;
	num1.head = (Node *)malloc(sizeof(Node));
	num2.head = (Node *)malloc(sizeof(Node));
	num1.rear = num1.head;
	num1.head->next = NULL;
	num1.head->prev = NULL;
	num1.count = 0;
	num2.rear = num2.head;
	num2.head->next = NULL;
	num2.head->prev = NULL;
	num2.count = 0;


	scanf("%s%s", &c1, &c2);
	for (i = 0; i<strlen(c1); ++i) {
		if (c1[i]<'0' || c1[i]>'9')
			continue;
		List_insert(&num1, c1[i]);
	}
	for (j = 0; j<strlen(c2); ++j) {
		if (c2[j]<'0' || c2[j]>'9')
			continue;
		List_insert(&num2, c2[j]);
	}
	sign1 = c1[0];
	sign2 = c2[0];
	if (sign2 != '+'&&sign2 != '-') {
		sign2 = '+';
	}
	if (sign1 != '+'&&sign1 != '-') {
		sign1 = '+';
	}
	q = num2.rear;

	if (sign1 == sign2) {
		if (num1.count > num2.count) {
			BigMathPlus(&num1, &num2, 1);
			Delete_zero(&num1);
			show(&num1, sign2);
		}
		else {
			BigMathPlus(&num2, &num1, 1);
			Delete_zero(&num2);
			show(&num2, sign2);
		}
	}
	else {
		if (num1.count > num2.count) {
			BigMathPlus(&num1, &num2, -1);
			Delete_zero(&num1);
			show(&num1, sign1);
		}
		else {
			flag = true;
			if (num1.count == num2.count) {
				temp1 = num1.rear;
				temp2 = num2.rear;
				while (temp1->c == temp2->c && (temp1 != num1.head || temp2 != num2.head)) {
					temp1 = temp1->prev;
					temp2 = temp2->prev;
				}
				if (temp1 != num1.head&&temp2 != num2.head) {
					if (temp1->c > temp2->c)
						flag = true;
					else flag = false;
				}
			}
			if (!flag) {
				BigMathPlus(&num2, &num1, -1);
				Delete_zero(&num2);
				show(&num2, sign2);
			}
			else {
				BigMathPlus(&num1, &num2, -1);
				Delete_zero(&num1);
				show(&num1, sign1);
			}
		}
	}

	system("pause");

}


void List_insert(List *num, char c) {
	Node *p;
	p = num->head->next;
	num->head->next = (Node *)malloc(sizeof(Node));
	num->head->next->c = c;
	num->head->next->prev = num->head;
	num->head->next->next = p;
	if (p != NULL)
		p->prev = num->head->next;
	num->count++;
	if (num->count == 1)
		num->rear = num->head->next;
}

void List_Delete(List *num) {
	Node *p, *q;
	p = num->head->next;
	q = p->next;
	while (q != NULL) {
		free(p);
		p = q;
		q = p->next;
	}
	free(p);
}
void BigMathPlus(List *num1, List *num2, int sign) {
	int temp = 0, a, b, sum;
	Node *p = num1->head->next, *q = num2->head->next;
	Node *lp = p, *lq = q;
	while (p && q) {
		a = p->c - '0';
		b = q->c - '0';
		sum = a + b*sign + temp;
		temp = 0;
		if (sum>9) {
			temp = sum / 10;
			sum = sum % 10;
		}
		if (sum<0) {
			temp = -1;
			sum = 10 + sum;
		}
		p->c = '0' + sum;
		lp = p;
		lq = q;
		p = p->next;
		q = q->next;
		sum = 0;
	}
	while (temp != 0) {
		if (NULL == p)
		{
			lp->next = (Node*)malloc(sizeof(Node));
			num1->rear = lp->next;
			p = lp->next;
				p->next = NULL;
				p->prev = lp;
				p->c = '0';
		}
		a = p->c - '0';
		b = temp % 10;
		sum = a + b;
		temp = temp / 10;
		if (sum>9) {
			temp = sum / 10;
			sum = sum % 10;
		}
		if (sum<0) {
			temp = -1;
			sum = 10 + sum;
		}
		p->c = '0' + sum;
		lp = p;
		p = p->next;

		sum = 0;
	}
	List_Delete(num2);
}

void show(List* num, char sign) {
	Node* p = num->rear;
	int i = 0;
	if (num->count != 0 && sign == '-')
		printf("-");
	while (p != num->head) {
		printf("%c", p->c);
		i++;
		if ((num->count - i) % 4 == 0 && (num->count != i))
			printf(",");
		p = p->prev;
	}
	printf("\n");
}
void Delete_zero(List* num) {
	Node *p;
	p = num->rear;
	while (p != NULL&&p->c == '0'&&num->count>1) {
		num->rear = p->prev;
		free(p);
		p = num->rear;
		p->next = NULL;
		num->count--;
	}
}
*/

/*
#include <iostream>
#include <stdio.h>
#include <cstring>
#include <cstdlib>
#include <algorithm>

#define MAXN 1001000
#define inf 0x3f3f3f3f

using namespace std;

char a[MAXN];

int main() {
	int n=1;
	memset(a, 0, sizeof(a));
	for (int i = 1; i <= 1000; ++i) {
		int temp = i,size=0;
		if (temp % 10 == 0)temp =temp+ 1;
		while (temp) {
			temp /=10;
			size++;
		}
		temp = i;
		int temp3 = size;
		while (size--) {
			int temp2 = temp % 10;
			temp /= 10;
			a[n + size] = temp2+'0';
		}
		n += temp3;
	}
	while (cin >> n) {
		cout << a[n] << endl;
	}
	return 0;
}*/

/*
#include <iostream>
#include <stdio.h>
#include <cstring>
#include <cstdlib>
#include <algorithm>

#define MAXN 200
#define inf 0x3f3f3f3f

using namespace std;

int a[MAXN*MAXN][2],sign[MAXN],s[MAXN];

int main() {
	int n;
	while (cin >> n) {
		int N = n*(n - 1) / 2;
		int no1,no2;
		memset(sign, 0, sizeof(sign));
		memset(a, 0, sizeof(a));
		memset(s, 0, sizeof(s));
		for (int i = 1; i < N; ++i) {
			cin >> a[i][0] >> a[i][1];
			sign[a[i][0]]++;
			sign[a[i][1]]++;
			s[a[i][0]]++;
		}
		no1 = no2 = 0;
		for (int i = 1; i <= n; ++i) {
			if (sign[i] != (n - 1) && !no1)
			{
				no1 = i;
			}
			else if (sign[i] != (n - 1) && !no2&&no1)
			{
				no2 = i;
			}
		}
		if (s[no1] <s[no2])
		{
			cout << no2 << ' ' << no1<<endl;
		}
		else cout << no1 << ' ' << no2 << endl;
	}
	return 0;
}*/



/*
#include <iostream>
#include <stdio.h>
#include <cstring>
#include <cstdlib>
#include <algorithm>

#define MAXN 200
#define inf 0x3f3f3f3f

using namespace std;

unsigned long long a, b;

int main() {
	while (cin >> a >> b) {
		unsigned long long i,ans=1;
		for (i = a + 1; i <= b; i++) {
			ans*= (i % 10);
			ans = ans % 10;
		}
		cout << ans << endl;
	}
	return 0;
}*/


/*
#include <iostream>
#include <stdio.h>
#include <cstring>
#include <cstdlib>
#include <algorithm>

#define MAXN 200
#define inf 0x3f3f3f3f

using namespace std;
unsigned long long a[MAXN][MAXN];

int main() {
	unsigned long long n, k;
	memset(a, 0, sizeof(a));
	a[0][0] = 0;
	for (int i = 1; i <= 100; ++i) {
		for (int j = 1; j<= 100; ++j) {
			unsigned long long temp=1;
			for (int k = 0; k <= i; ++k) {
				temp += a[k][j - 1];
				temp = temp % 1000000;
			}
			a[i][j] = temp%1000000;
		}
	}

	while (cin >> n >> k) {
		if (n == 0 && k == 0)break;
		cout << a[n][k]%1000000 << endl;
	}
	return 0;
}*/

/*
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <algorithm>

#define MAXN 100100
#define inf 0x3f3f3f3f

using namespace std;

int a[MAXN], b[MAXN],c[MAXN];
int n;
int d[MAXN] = { 0,1,8,9,7,6 };

bool cmp(int a, int b) {
	return a < b;
}

int main() {
	while (cin >> n&&n>=1&&n<=10000) {
		int m = 0,mi=inf;
		long long ans = 0;
		memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));
		memset(c, 0, sizeof(c));
		for (int i = 1; i <= n; ++i) {
			cin >> a[i];
			b[a[i]]++;
			m = max(a[i], m);
			mi = min(a[i], mi);
		}
		for (int i = 1; i <= m; ++i) {
			b[i] += b[i - 1];
		}
		for (int i = n; i >= 1; --i) {
			c[i] = b[a[i]]--;
		}
		memset(b, 0, sizeof(b));
		for (int i = 1; i <= n; ++i) {
			if (b[i] == 0&&c[i]!=i) {
				int k, num;
				k = i;
				num = 0;
				b[k] = 1;
				while (c[k] != i) {
					ans += a[k];
					k = c[k];
					b[k] = 1;
					num++;
				}
				ans += (num*a[k])>(num*mi+mi*2+a[k]*2)? (num*mi + mi*2 + a[k]*2):(num*a[k]);
			}
			else { b[i] = 1; }
		}
		cout << ans<<endl;
	}
	return 0;
}*/


/*
#include <iostream>
#include <stdio.h>
#include <cstring>
#include <cstdlib>
#include <algorithm>

#define MAXN 2000
#define inf 0x3f3f3f3f

using namespace std;

int len[MAXN], a[MAXN];
int n;

int locate(int n,int k){
	int low, high,mid;
	low = 1;
	high = k;
	while (low <= high) {
		mid = (low + high) / 2;
		if (len[mid] == n)return mid;
      else if (len[mid] > n)
			high = mid - 1;
		else low = mid + 1;
	}
	return low;
}

int main() {
	while (cin >> n) {
		int k = 0;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		memset(len, 0, sizeof(len));
		for (int i = 0; i < n; ++i) {
			if (len[k] < a[i]) {
				len[++k] = a[i];
			}
			else {
				int temp;
				temp=locate(a[i], k);
				len[temp] = a[i];
			}
		}
		cout << k << endl;
	}
	return 0;
}*/



/*
#include <iostream>
#include <stdio.h>
#include <cstring>
#include <cstdlib>
#include <algorithm>

#define MAXN 2000
#define inf 0x3f3f3f3f

using namespace std;

int a[MAXN][MAXN];
char str1[MAXN], str2[MAXN];
int n;

int maxi(int a, int b) {
	if (a < b)
		return b;
	else return a;
}

int main() {
	while (cin >> str1>>str2) {
		memset(a, 0, sizeof(a));
		for (int i = 0; i<strlen(str1); ++i) {
			for (int j = 0; j<strlen(str2); ++j) {
				if (str1[i] == str2[j]) {
					a[i + 1][j + 1] = a[i][j] + 1;
				}
				else {
					a[i + 1][j + 1] = maxi(a[i][j + 1], a[i + 1][j]);
				}
			}
		}
		cout << a[strlen(str1)][strlen(str2)]<<endl;
	}
	return 0;
}*/


/*
#include <iostream>
#include <stdio.h>
#include <cstring>
#include <cstdlib>
#include <algorithm>

#define MAXN 2000
#define inf 0x3f3f3f3f

using namespace std;

int a[MAXN], b[2000100];
int n;

int main() {
	while (cin >> n) {
		int k = 0,ans=0;
		memset(b, 0, sizeof(b));
		for (int i = 0; i < n; ++i) {
			int temp;
			cin >> temp;
			if (!b[temp]) {
				k++;
				a[k] = temp+a[k-1];
				b[temp] = 1;
			}
		}
		for (int i = 0; i <= k; ++i) {
			for (int j = i+1; j <= k; ++j) {
				ans ^= a[j] - a[i];
			}
		}
		cout << ans << endl;
	}
	return 0;
}*/


/*
#include <iostream>
#include <stdio.h>
#include <cstring>
#include <cstdlib>
#include <algorithm>

#define MAXN 2000
#define inf 0x3f3f3f3f

using namespace std;

char c[MAXN],b[MAXN];
int n;
int main() {
	cin >> n;
	while (n--) {
		int k = 0;
		cin >> c;
		memset(a, 0, sizeof(a));
		for (int i = strlen(c)-1; i >= 0; --i) {
			if (c[i] == '@'){
				break;
			}
			if (c[i] == '#') {
				i--;
				continue;
			}
			b[k++] = c[i];
		}
		for (int i = k - 1; i >= 0; --i) {
			cout << b[i];
		}
		cout << endl;
	}
	return 0;
}*/






/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>

#define MAXN 110
#define inf 0x3f3f3f3f3f3f
#define ll long long

using namespace std;

ll sum, ans, n;

int main() {
	while (cin >> n) {
		ll m=-inf;
		ll temp;
		ans = sum = 0;
		for (int i = 0; i < n; ++i) {
			cin >> temp;
			sum += temp;
			m = m < temp ? temp : m;
		}
		ans = m*n - sum;
		cout << ans << endl;
	}
	return 0;
}*/



/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>

#define MAXN 1100
#define inf 0x3f3f3f3f3f3f
#define ll long long

using namespace std;

int f[MAXN], g[MAXN],a[MAXN];
int p, q, r;
int main() {
	f[1] = 1;
	f[2] = 2;
	g[0] = 0;
	for (int i = 3; i <= 1000; ++i) {
		f[i] = f[i - 1] + f[i - 2];
	}
	for (int i = 1; i <= 1000; ++i) {
		int j=1;
		int m = -inf;
		memset(a, 0, sizeof(a));
		while (i >= f[j]) {
			a[g[i - f[j]]]++;
			m = max(m, g[i - f[j]]);
			j++;
		}
		for (int k = 0; k <= m+1; ++k) {
			if (a[k] == 0)
			{
				g[i] = k;
				break;
			}
		}
	}
	while (cin >> p >> q >> r&&p&&q&&r) {
		int ans;
		ans = g[p]^g[q]^g[r];
		if (ans != 0) {
			cout << "Fibo" << endl;
		}
		else cout << "Nacci" << endl;
	}
	return 0;
}*/

/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>

#define MAXN 220
#define inf 0x3f3f3f3f
#define ll long long

using namespace std;

int a[MAXN],s[MAXN],b[MAXN<<1][MAXN];
char str[MAXN];

int gcd(int a, int b) {
	int temp;
	while (a%b != 0) {
		temp = a%b;
		a = b;
		b = temp;
	}
	return b;
}

void fast_trans(int n, int k) {
	int num = 0;
	memset(s, 0, sizeof(s));
	memset(b, 0,sizeof(b));
	for (int i = 1; i <= n; ++i) {
		if (s[i] == 0) {
			s[i] = 1;
			if (a[i] == i)
			{
				b[num][0] = 1;
				b[num++][1] = i;
				continue;
			}
			int start = i,temp=a[i];
			int p = 1;
			b[num][1] = i;
			while (temp != start) {
				s[temp] = 1;
				b[num][++p] = temp;
				temp = a[temp];
			}
			s[temp] = 1;
			b[num++][0] = p;
	}
	}
	int ans = num;
	for (int i = 0; i <ans; ++i) {
		int m = k%b[i][0];
		if (m == 0) {
			continue;
		}
		if (b[i][0] % m == 0) {
			for (int j = 1; j <= b[i][0]; ++j) {
				b[num + (j - 1) % m][++b[num + (j - 1) % m][0]] = b[i][j];
			}
			num += m;
		}
		else if (gcd(b[i][0],m) == 1) {
			for (int j = 1; j <= b[i][0]; ++j) {
				b[num][j] = b[i][(((m + b[i][0])*(j-1)) % b[i][0])+1];
			}
			b[num++][0] = b[i][0];
		}
		else {
			int q = gcd(b[i][0], m);
			for (int j = 1; j <=b[i][0]; ++j) {
				b[num + (j - 1) % q][++b[num + (j - 1) % q][0]] = b[i][j];
			}
			num += q;
		}
	}
	for (int i = ans; i < num; ++i) {
		int start = b[i][1];
		for (int j = 2; j <= b[i][0]; ++j) {
			char c;
			c = str[start-1];
			str[start-1] = str[b[i][j]-1];
			str[b[i][j]-1] = c;
		}
	}
}

int main() {
	int n,k;
	while (cin >> n&&n) {
		for (int i = 1; i <= n; ++i) {
			cin >> a[i];
		}
		while (cin >> k&&k) {
			getchar();
			cin.get(str, MAXN);
			if (strlen(str) < n) {
				for (int i = strlen(str); i < n; ++i) {
					str[i] = ' ';
				}
				str[n] = '\0';
			}
			fast_trans(n, k);
			cout << str << endl;
		}
	}
	return 0;
}*/

/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#define MAXN 220
#define inf 0x3f3f3f3f
#define ll long long

using namespace std;

char str[MAXN];
int n;
bool check(char c, char d) {
	if ((c == '('&&d == ')') || (c == '['&&d == ']'))
		return true;
	else return false;
}
int main() {
	cin >> n;
	cin.get();
	while (n--) {
		char d;
		bool flag = true;
		stack<char> a;
		cin.getline(str, MAXN);
		for (int i = 0; i < strlen(str); ++i) {
			if (str[i] == ']' || str[i] == ')') {
				if (a.empty()) {
					flag = false;
					break;
				}
				d = a.top();
				a.pop();
				if (!check(d,str[i])) {
					flag = false;
					break;
				}
			
			}
			else a.push(str[i]);
		}
		if (!a.empty())
			flag = false;
		if (flag)
			cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}*/



/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#define MAXN 1000000
#define inf 0x3f3f3f3f
#define ll long long

using namespace std;

int a[MAXN];
int A, B, N;

int main() {
	while (cin >> A >> B >> N&&A&&B&&N) {
		int i=1;
		memset(a, 0, sizeof(a));
		a[0] = a[1] = 1;
		int T;
		for (i = 2; i<101; i++) {//第一个循环
			a[i] = (A*a[i - 1] + B*a[i - 2]) % 7;
			for (int j = 1; j<i - 1; j++)//第二个循环
			{
				if (a[j] == a[i] && a[i - 1] == a[j - 1]) {
					T = i - j;
					cout << T << ' ';
					break;//原因：有可能无法回到a[i]=a[i-1]=1的情况
				}
			}
		}
		cout << endl;
		N %= T;
		cout << a[N-1] << endl;
	}
	return 0;
}*/
/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#define MAXN 1000000
#define inf 0x3f3f3f3f3f3f
#define ll long long

using namespace std;

ll a[MAXN],d[MAXN],b,e;
ll n,t;
int main() {
	cin >> t;
	a[0] = 0;
	for (int k = 1; k <= t;++k) {
		ll m ;
		ll sum = 0;
		memset(d, 0, sizeof(d));
		if (k != 1)
			cout << endl;
		b = e = 0;
		d[0] = 1;
		cin >> n;
		for (int i = 1; i <=n; ++i) {
			cin >> a[i];
		}
		m = -inf;

		for (int i = 1; i <=n; ++i) {
			sum += a[i];
			d[i] = d[i - 1];
			if (m < sum)
			{
				m = sum;
				b = d[i];
				e = i;
			}
			if (sum < 0) {
				d[i] = i + 1;
				sum = 0;
			}
		}
		cout << "Case " << k << ":" << endl;
		cout << m << ' ' << b << ' ' << e << endl;
	}
	return 0;
}*/

/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#define MAXN 1000000
#define inf 0x3f3f3f3f3f3f
#define ll long long

using namespace std;

char str[MAXN];
int n;
bool check(char *str) {
	if (str[0] != '#')
		return true;
	else return false;
}

void set_sign(int n, int p) {
	if (str[p] == 'e') {
		if (n % 2 == 0) {
			str[p] = '0';
		}
		else {
			str[p] = '1';
		}
	}
	else {
		if (n % 2 == 0) {
			str[p] = '1';
		}
		else str[p] = '0';
	}
}

int main() {
	while (cin >> str&&check(str)) {
		n = 0;
		for (int i = 0; i < strlen(str);++i) {
			if (str[i] == '1')
			{
				n++;
			}
		}
			set_sign(n, strlen(str) - 1);
			cout << str << endl;
	}
	return 0;
}*/

/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#define MAXN 220
#define inf 0x3f3f3f3f3f3f
#define ll long long

using namespace std;

int a[MAXN], result[MAXN], ring[MAXN][MAXN], sign[MAXN], num[MAXN];
int n;
char str[MAXN];



int main() {
	while (cin >> n&&n) {
		for (int i = 1; i <= n; ++i)
			cin >> a[i];
		int k, t = 0;
		memset(ring, 0, sizeof(ring));
		memset(num, 0, sizeof(num));
		memset(sign, 0, sizeof(sign));
		for (int i = 1; i <= n; ++i) {
			if (sign[i] == 0) {
				int temp = i;
				int p = -1;
				do {
					ring[t][++p] = temp;
					sign[temp] = 1;
					temp = a[temp];
				} while (temp != i);
				num[t] = p + 1;
				++t;
			}
		}
		while (cin >> k&&k) {
			cin.get();
			cin.getline(str, MAXN);
			if (strlen(str) < n) {
				for (int i = strlen(str); i < n; ++i)
					str[i] = ' ';
				str[n] = '\0';
			}
			memset(result, 0, sizeof(result));
			memset(sign, 0, sizeof(sign));
			for (int i = 0; i <t; ++i) {
				for (int j = 0; j < num[i]; ++j) {
					if (sign[ring[i][j]] == 0) {
						int p = num[i];
						int o = 1;
						int temp;
						int step;
						result[0] = temp = (ring[i][(j + k) % p]);
						step = (j + k)%p;
						do {
							sign[result[o - 1]] = 1;
							result[o] = ring[i][(step + k) % p];
							step = (step + k)%p;
							++o;
						} while (result[o - 1] != temp);
						int q;
						q = result[o-1];
						o--;
						for (int l = o-1; l > 0; --l) {
							char c;
							c = str[q - 1];
							str[q - 1] = str[result[l] - 1];
							str[result[l] - 1] = c;
							q = result[l];
						}

					}
				}
			}
			cout << str << endl;
		}
		cout << endl;
	}
}*/


/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#define MAXN 220
#define inf 0x3f3f3f3f3f3f
#define ll long long

using namespace std;

int ans, n;
int main() {
	while (scanf("%d",&n)&&n) {
		int temp;
		ans = 0;
		for (int i = 0; i < n; ++i) {
			scanf("%d", &temp);
			ans ^= temp;
		}
		printf("%d\n", ans);
	}
	return 0;
}*/
/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#define MAXN 50010
#define inf 0x3f3f3f3f3f3f
#define ll long long

using namespace std;


int a[MAXN];
int n,m,ans;
int t = 1;
int find_root(int k) {
	if (a[k] != k) {
		a[k] = find_root(a[k]);
	}
	return a[k];
}
void union_node(int p, int q) {
	int c = find_root(p);
	int d = find_root(q);
	if (c != d) {
		--ans;
	}
	a[c] = d;
}
int main() {
	while (scanf("%d%d", &n, &m)&&n&&m) {
		int p1, p2;
		for (int i = 1; i <= n; ++i) {
			a[i] = i;
		}
		ans = n;
		for (int j = 1; j <= m; ++j) {
			scanf("%d%d", &p1, &p2);
			if(ans>1)
			union_node(p1, p2);
		}
		printf("Case %d: %d\n",t, ans);
		++t;
	}
	return 0;
}*/


/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#define MAXN 100
#define inf 0x3f3f3f3f3f3f
#define ll long long

using namespace std;


ll a[MAXN],b[MAXN],c[MAXN],d[MAXN]; 
ll n;
ll Hanoi(ll *P, ll k, ll other) {
	if (k <= 0)
		return 0;
	if (P[k] == other) {
		return Hanoi(P, k - 1, other);
	}
	else return Hanoi(P, k - 1, 6 - P[k] - other) + (1LL << (k - 1));
}
int main() {
	ll Case = 1;
	while (scanf("%lld", &n)&&n) {
		for (int i = 1; i <= n; ++i)
			scanf("%lld", &a[i]);
		for (int i = 1; i <= n; ++i) {
			scanf("%lld", &b[i]);
		}
		int k = n;
		for (int i = k; i >= 1; --i) {
			if (a[i] == b[i])
				--k;
			else break;
		}
		ll ans = 0;
		if (k >= 1) {
			ll other = 6 - a[k] - b[k];
			ans+=Hanoi(a,k-1,other)+Hanoi(b,k-1,other)+1;
		}
		printf("Case %lld: %lld\n", Case++, ans);
	}
	return 0;
}*/

/**
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#define MAXN 110
#define inf 0x3f3f3f3f3f3f
#define ll long long
#define Clear(a) memset(a,0,sizeof(a))
using namespace std;

int graph[MAXN][MAXN],in_degree[MAXN],sign[MAXN];
int n, m;

int main() {
	while (cin >> n >> m&&(n)) {
		int a, b;
		Clear(graph);
		Clear(in_degree);
		Clear(sign);
		queue<int> L, S;
		for (int i = 0; i < m; ++i) {
			cin >> a >> b;
			graph[a][b]++;
			in_degree[b]++;
		}
		for (int i = 0; i < n; ++i) {
			if (in_degree[i] == 0||(in_degree[i]==1&&graph[i][i])) {
				S.push(i);
			}
		}
		while (!S.empty()) {
			int temp = S.front();
			S.pop();
			sign[temp] = 1;
			L.push(temp);
			for (int i = 0; i < n; ++i) {
				if (graph[temp][i] != 0) {
					in_degree[i]-=graph[temp][i];
					m-=graph[temp][i];
					if (in_degree[i] == 0&&!sign[i])
						S.push(i);
				}
			}
		}
		if (m > 0)
			cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	return 0;
}*/

/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#define MAXN 110
#define inf 0x3f3f3f3f3f3f
#define ll long long
#define Clear(a) memset(a,0,sizeof(a))
using namespace std;

int h, m;
int x;
int main() {
	while (cin >> x >> h >> m) {
		int ans = 0;
		if ((h / 10) == 7 || (h % 10) == 7 || (m / 10) == 7 || (m % 10) == 7)
		{
			cout << "0"; continue;
		}
		while (!((h / 10) == 7 || (h % 10) == 7 || (m / 10) == 7 || (m % 10) == 7)) {
			m -= x;
			while (m < 0) {
				h--;
				m += 60;
			}
			while (h < 0) {
				h += 24;
			}
			ans++;
		}
		cout << ans<< endl;
	}
	return 0;
}*/


/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#define MAXN 110
#define inf 0x3f3f3f3f3f3f
#define ll long long
#define Clear(a) memset(a,0,sizeof(a))
using namespace std;

 long long bin[MAXN];
long long n,m;
void output(int x) {
	int i = x;
	cout << "Yes" << endl;
	while (i >= 0) {
		if (bin[i] > 0) {
			while(bin[i]--)
			cout << i-19<<' ';
		}
		--i;
	}
	cout << endl;
}
int main() {
	long long r;
	while (cin >> n >> m) {
		int num = 0, x=0;
		Clear(bin);
		r = n;
		long long temp = 1;
		int k = 19;
		do {
			if ((temp&r)) {
				bin[k] = 1;
				num++;
				x = k;
			}
			++k;
			temp <<= 1;
		} while (k <= 50); 
		/*for (int i = 18; i <= x; ++i) {
			cout << bin[i] << ' ';
		}
		cout << endl;*//*
		if (num == m) { output(x); continue; }
		if (num > m)
		{		cout << "No" << endl;
				continue;
			}
		while (num < m) {
			if ((bin[x] + num) < m) {
				bin[x - 1] += bin[x] * 2;
				num += bin[x];
				--x;
			}
			else if ((bin[x] + num) >= m) {
				bin[x - 1] += (m-num)*2;
				bin[x] -= (m-num);
				num = m;
			}
		}
		output(x);
	}
	return 0;
}*/


/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#define MAXN 110
#define inf 0x3f3f3f3f3f3f
#define ll long long
#define Clear(a) memset(a,0,sizeof(a))
using namespace std;


int a, b, c;
const int height = 168;

int main() {
	while (cin >> a >> b >> c) {
		if (height > a) {
			cout << "CRASH " << a<<endl;
		}
		else if (height > b) {
			cout << "CRASH " << b << endl;
		}
		else if (height > c) {
			cout << "CRASH " << c << endl;
		}
		else cout << "NO CRASH" << endl;
	}
	return 0;
}*/

/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <iomanip>
#define MAXN 110
#define inf 0x3f3f3f3f3f3f
#define ll long long
#define Clear(a) memset(a,0,sizeof(a))
using namespace std;


float node[MAXN][2];
struct distance {
	float dis;
	int p1, p2;
}d[MAXN*MAXN];
int sign[MAXN];
int cmp(const void *a,const void *b) {
	return ((struct distance *)(a))->dis > ((struct distance *)(b))->dis;
}
int find_root(int n) {
	if (sign[n] != n) {
		sign[n] = find_root(sign[n]);
	}
	return sign[n];
}
int main() {
	int n; 
	cout << setiosflags(ios::fixed) << setprecision(2);
	while (cin >> n) {
		Clear(sign);
		Clear(d);
		int k = 0;
		float ans = 0;
		for (int i = 0; i < n; ++i) {
			cin >> node[i][0] >> node[i][1];
		}
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				if (i == j)
					continue;
				d[k].dis = sqrt((node[i][0] - node[j][0])*(node[i][0] - node[j][0]) + (node[i][1] - node[j][1])*(node[i][1] - node[j][1]));
				d[k].p1 = i;
				d[k].p2 = j;
				k++;
			}
		}
		
		for (int i = 0; i < k; ++i)
			sign[i] = i;
		qsort(d, k, sizeof(d[k]), cmp);
		for (int i = 0; i < k; ++i) {
			int a = find_root(d[i].p1), b = find_root(d[i].p2);
			if (a != b) {
				ans += d[i].dis;
				sign[a]=b;
			}
		}
		cout << ans << endl;
		}
	}
*/
/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <iomanip>
#define MAXN 210
#define inf 0x3f3f3f3f
#define ll long long
#define Clear(a) memset((a),0,sizeof((a)))
using namespace std;

int  t,n,k;
int  a[MAXN];
int main() {
	t = 1;
	cin >> t;
	while (t--) {
		int ans=0;
		cin >> n >> k;
		for (int i = 1; i <= k; ++i) {
			cin >> a[i];
		}
		for (int i = 2; i <= k; ++i) {
			int temp = a[i] - a[i - 1];
			if (temp > ans)
				ans = temp;
		}
		int temp1 = a[1], temp2 = n + 1 - a[k];
		if (ans) {
			if ((ans - 1) % 2)
				ans = (ans - 1) / 2 + 2;
			else ans = (ans - 1) / 2 + 1;
		}
		if (temp1 > ans)
			ans = temp1;
		if (temp2 > ans)
			ans = temp2;
		cout << ans << endl;
	}
	return 0;
}*/


/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <iomanip>
#define MAXN 1210
#define inf 0x3f3f3f3f
#define ll long long
#define Clear(a) memset((a),0,sizeof((a)))
using namespace std;


int l[MAXN], r[MAXN];
int t, n;

int main() {
	t = 1;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 1; i <= n; ++i) {
			cin >> l[i]>>r[i];
		}
		int time=1;
		for (int i = 1; i <= n; ++i) {
			if (l[i] <= time) {
				if (time <= r[i])
				{  
					cout << time << ' ';
					time++;
				}
				else cout << "0 ";
			}
			else {
				cout << l[i] << ' ';
				time = l[i] + 1;
			}
		}
		cout << endl;
	}
	return 0;
}*/



/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <iomanip>
#define MAXN 200020
#define inf 0x3f3f3f3f
#define ll long long
#define Clear(a) memset((a),0,sizeof((a)))
using namespace std;


int a[MAXN],b[MAXN],l[MAXN],r[MAXN];
int n;

int main() {
	while (cin >> n) {
		for (int i = 1; i <=n; ++i) {
			cin >> a[i];
		}
		for (int i = 1; i < n; ++i) {
			char c;

			cin>>c;
			b[i] = c - '0';
		}
		int p=0, q=n;
		for (int i = 1; i <= n; ++i) {
			if (b[i] == 0) {
				if (b[i - 1] != 0) {
					l[i] = p;
					p = 0;
				}
				else {
					l[i] = i;
					p = 0;
				}
			}
			else {
				if (p) {
					l[i] = p;
				}
				else {
					l[i] = i;
					p = i;
				}
			}
		}
		q = 0;
		for (int i = n; i >= 1; --i) {
			if (b[i] == 0)
			{
				if (b[i] == 0 && b[i - 1] == 1)
				{
					r[i] = i;
					q = i;
				}
				else {
					r[i] = i;
					q = 0;
				}
			}
			if (b[i]) {
				if (q) {
					r[i] = q;
				}
				else {
					r[i] = i;
					q = i;
				}
			}
		}
		/*for (int i = 1; i <= n; ++i)
			cout << l[i] << ' ';
		cout << endl;
		for (int i = 1; i <= n; ++i)
			cout << r[i] << ' ';*//*
		bool flag = true;
		for (int i = 1; i <= n; ++i) {
			if (!(l[i] <= a[i] && r[i] >= a[i])) {
				flag = false;
				break;
			}
		}
		if(flag)
		cout << "YES" << endl;
		else
		cout << "NO" << endl;
	}
}*/
/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <iomanip>
#define MAXN 11000
#define inf 0x3f3f3f3f
#define ll long long
#define Clear(a) memset((a),0,sizeof((a)))
using namespace std;
int cmp(const void *a, const void *b) {
	return *((int *)a) - *((int *)b);
}
int a[MAXN], b[MAXN], c[MAXN*2];
int n, m;


int main() {
	while (cin >> n >> m&&n>0&&m>0) {
		int k=0;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			c[k++] = a[i];
		}
		for (int j = 0; j < m; ++j) {
			cin >> b[j];
			c[k++] = b[j];
		}
		qsort(c, k, sizeof(int), cmp);
		if (c[k - 1] == c[k - 2])
			k--;
		for (int i = 0; i < k-1; ++i) {
			if (!(i != 0 && c[i - 1] == c[i])) {
				cout << c[i] << ' ';
			}
		}
		cout << c[k - 1];
		cout << endl;
	}
	return 0;
}*/

/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <iomanip>
#define MAXN 11000
#define inf 0x3f3f3f3f
#define ll long long
#define Clear(a) memset((a),0,sizeof((a)))
using namespace std;
int cmp(const void *a, const void *b) {
	return *((int *)a) - *((int *)b);
}

int a, b;

int main() {
	while (cin >> a >> b) {
		cout << (a - 1)*b - a << ' ' << (a - 1)*(b - 1) / 2 << endl;
	}
	return 0;
}*/
/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <iomanip>
#define MAXN 110000
#define inf 0x3f3f3f3f
#define ll long long
#define Clear(a) memset((a),0,sizeof((a)))
using namespace std;

int a[MAXN];
int n, k;
bool check(ll mid) {
	ll sum = 0;
	for (int i = 0; i < n; ++i) {
		if (a[i] - mid > 0) {
			sum += (a[i] - mid+k-2) / (k - 1);
			if (sum > mid)return false;
		}
	}
	return true;
}
int main() {
	while (scanf("%d",&n)!=EOF) {
		ll min = inf, max = -inf;
		for (int i = 0; i < n; ++i) {
			scanf("%d", &a[i]);
			min = min > a[i] ? a[i] : min;
			max = max < a[i] ? a[i] : max;
		}
		scanf("%d", &k);
		if (k == 1) {
			printf("%d\n", max);
			continue;
		}
		ll l = min/k, r = max;
		while (l <= r) {
			ll mid = (l + r) >> 1;
			if (check(mid)) {
				r = mid - 1;
			}
			else {
				l = mid + 1;
			}
			//cout << l << ' ' << r << endl;
		}printf("%d\n", l);
	}
	return 0;
}*/


/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <iomanip>
#define MAXN 330
#define inf 0x3f3f3f3f
#define ll long long
#define Clear(a) memset((a),0,sizeof((a)))
using namespace std;

#define DATA 90
int visit[MAXN], edge[MAXN][DATA],used[MAXN],pairn[DATA];
int n, t;
bool find(int k) {
	for (int i = 1; i <= 7*12; ++i) {
		if (edge[k][i] && !used[i]) {
			used[i] = 1;
			if (pairn[i] == 0 || find(pairn[i])) {
				pairn[i] = k;
				return true;
			}
		}
	}
	return false;
}
int main() {
	while (cin >> n) {
		Clear(visit);
		Clear(edge);
		Clear(pairn);
		for (int i = 1; i <= n; ++i) {
			cin >> t;
			while (t--) {
				int a, b,p;
				cin >> a >> b;
				p = (a - 1) * 12 + b;
				edge[i][p] = 1;
			}
		}
		int num = 0;
		for (int i = 1; i <= n; ++i) {
			Clear(used);
			if (find(i))++num;
		}cout << num << endl;
	}
	return 0;
}*/


/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <iomanip>
#define MAXN 1100
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f
#define ll long long
#define Clear(a) memset((a),0,sizeof((a)))
using namespace std;

int a[MAXN][2];
int n, k;
struct Node{
	int i,j;
	float dis;
}node[MAXN*MAXN];
int t[MAXN];
bool cmp(Node a, Node b) {
	return a.dis<b.dis;
}

int find_head(int k) {
	if (t[k] != k) {
		t[k] = find_head(t[k]);
	}
	return t[k];
}
int main() {
	cout << setiosflags(ios::fixed) << setprecision(2);
	while (cin >> n >> k) {
		for (int i = 0; i < n; ++i) {
			cin >> a[i][0] >> a[i][1];
		}
		int p = 0;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				if (i != j) {
					node[p].dis = sqrt((float)(a[i][0] - a[j][0])*(a[i][0] - a[j][0]) + (a[i][1] - a[j][1])*(a[i][1] - a[j][1]));
					node[p].i = i;
					node[p++].j = j;
				}
			}
		}
		sort(node,node+p,cmp);
		for (int i = 0; i < n; ++i) {
			t[i] = i;
		}
		/*for (int i = 0; i < p; ++i)
			cout << node[i].dis << ' ';
		cout << endl;*//*
		int num = n,i;
		for (i = 0; i<p; ++i) {
			int p1 = node[i].i, p2 = node[i].j;
			p1 = find_head(p1);
			p2 = find_head(p2);
			if (p1 != p2) {
				t[p1] = p2;
				if (num > k)
					--num;
				else { cout << node[i].dis << endl; break; }
			}
		}
		//cout << i;
	}
	return 0;
}*/

/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <iomanip>
#define MAXN 60
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f
#define ll long long
#define Clear(a) memset((a),0,sizeof((a)))
using namespace std;

int p,q,t;
ll a[MAXN];
int main() {
	a[1] = 1;
	a[2] = 1;
	for (int i = 3; i < MAXN; ++i) {
		a[i] = a[i -1] + a[i - 2];
	}
	cin >> t;
	while(t--)
	{
	cin >> p >> q; 
		q = q - p + 1;
		cout << a[q] << endl;
	}
	return 0;
}*/

/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <iomanip>
#define MAXN 60
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f
#define ll long long
#define Clear(a) memset((a),0,sizeof((a)))
using namespace std;


int a,m, n,k;
int t;

int gcd(int a, int b) {
	while (a%b) {
		int temp = a;
		a = b;
		b = temp % b;
	}
	return b;
}
ll power(ll a, ll b, ll mod) {
	ll ans=1;
	while (b) {
		if (b & 1) {
			ans = (ans*a)%mod;
			--b;
		}
		else {
			a = (a*a)%mod;
			b >>= 1;
		}
	}
	return ans;
}
int main() {
	cin >> t;
	while (t--) {
		cin >> a >> m >> n >> k;
		ll s;
		//cout << gcd(m, n) << endl;
		s = (power(a,gcd(m,n),k)-1+k)%(ll)k;
		cout << s << endl;
	}
	return 0;
}*/


/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <iomanip>
#define MAXN 1000100
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f
#define ll long long
#define Clear(a) memset((a),0,sizeof((a)))
using namespace std;

int a[MAXN],pri[MAXN];
ll f[MAXN];
int n;

ll Divide(int n) {
	int num = 0, div;
	for (int j = 0; pri[j] <= (int)sqrt(n*1.0); ++j) {
		if (n%pri[j] == 0) {
			num++;
			while (n%pri[j] == 0)n /= pri[j];
			div = pri[j];
		}
		if (num > 1)
			return  1;
	}
	if (n > 1) {
		num++;
		div = n;
	}//因为循环中素数的大小到了根号n就没了，所以n可能还剩下素因子
	if (n == 1)return div;
	else return 1;
}
int main() {
	Clear(a);
	int k = 0;
	for (int i = 2; i < MAXN - 10; ++i) {
		if (!a[i])
		{
			pri[k++] = i;
			for (int j = 2; j <= (MAXN - 10) / i; ++j) {
				a[i*j] = 1;
			}
		}
	}
	f[3] = 3;
	for (int i = 4; i < MAXN - 10; ++i) {
		if (!a[i]) {
			f[i] = f[i - 1] + i;
		}
		else {
			f[i] = f[i - 1] + Divide(i);
		}
	}
	while (cin >> n) {
		cout << f[n] << endl;
	}
	return 0;
}*/



/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <iomanip>
#define MAXN 50
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f
#define ll long long
#define Clear(a) memset((a),0,sizeof((a)))
using namespace std;

int order[MAXN], a[MAXN], len[MAXN],order_s[MAXN];
int n;
int find_position(int key,int k) {
	int l = 1, r = k;
	while (l <= r) {
		int mid = (l + r) >> 1;
		if (len[mid] < key) {
			l = mid + 1;
		}
		else {
			r = mid - 1;
		}
	}
	return l;
}
int main() {
	cin >> n;
	int q = 0;
	for (int i = 1; i <=n; ++i) {
		cin >> order[i];
	}
	while (true) {
		bool flag=true;
		int p = 1;
		for (int i = 1; i <=n; ++i) {
			int temp;
			if (cin >> temp) {
				order_s[temp] = p++;
			}
			else {
				flag = false;
				break;
			}
		}
		if (!flag)break;
		for (int i = 1; i <= n; ++i) {
			a[i] = order[order_s[i]];
		}
		len[1] = a[1];
		int k = 1;
		for (int i = 2; i <= n; ++i) {
			if (a[i] > len[k]) {
				len[++k] = a[i];
			}
			else {
				int p=find_position(a[i],k);
				if(len[p]>a[i])
				len[p] = a[i];
			}
		}
		cout << k << endl;
	}
	return 0;
}*/


/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <vector>
#include <iomanip>
#define MAXN 10
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f
#define ll long long
#define Clear(a) memset((a),0,sizeof((a)))
using namespace std;
const int direction[4][2] = { {1,0},{0,1},{-1,0},{0,-1} };
struct situation {
	int a[MAXN];
	int step;
};
queue<situation> v;
int a[MAXN][MAXN],b[MAXN][MAXN];
int n, m,k;
int dfs(situation);
int sign[MAXN][MAXN];
bool end_s(situation &s) {
	bool flag = true;
	for (int i = 0; i < n; ++i) {
		if (s.a[i]) {
			flag = false; break;
		}
	}
	if (flag) {
		return true;
	}
	else return false;
}
void find_way(int i, int j,int key, int a[MAXN][MAXN], int c[MAXN][MAXN]) {
	c[i][j] =b[i][j]= 1;
	for (int k = 0; k < 4; ++k) {
		int p = i + direction[k][0], q = j + direction[k][1];
		if (c[p][q] == 0 && a[p][q] == key&&q>=0&&p>=0&&p<n&&q<m) {
			find_way(p, q, key, a, c);
		}
	}
}
void compressed(situation &s) {
	for (int i = 0; i < n; ++i) {
		int compress = 0;
		for (int j = 0; j < m; ++j) {
			compress = compress * 10 + a[i][j];
		}
		s.a[i]=compress;
	}
}
int Destroy(int i, int j) {
	int b[MAXN][MAXN];
	Clear(b);
	find_way(i, j,a[i][j], a, b);
	/*for (int i = 0; i < n; ++i)
	{
		for (int j = 0;j < m; ++j)
			cout << b[i][j] << ' ';
		cout << endl;
	}
	cout << endl;
	*//*
	for (int j = m - 1; j >= 0; --j) {
		int t = 0, c[MAXN];
		for (int i = n - 1; i >= 0; --i) {
			if (b[i][j] == 0&&a[i][j]!=0) {
				c[t++] = a[i][j];
			}
		}
		if (t == 0) {
			for (int l = j + 1; l <= m; ++l) {
				for (int h = 0; h < n; ++h) {
					a[h][l - 1] = a[h][l];
					a[h][l] = 0;
				}
			}
			//cout << a[n - 1][m - 1] << "tttt";
		}
		else {
			for (int i = n-1; i>=0; --i) {
				if ((n - 1 - i) < t) {
					a[i][j] = c[n - 1 - i];
				}
				else a[i][j] = 0;
			}
		}
	}*/
	/*for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}*//*
	return 0;
}
void decode(int s[MAXN]) {
	for (int i = 0; i < n; ++i) {
		for (int j = m - 1; j >= 0; --j) {
			a[i][j] = s[i] % 10;
			s[i] /= 10;
		}
	}
}
int ans;
int bfs(situation s){
	while (!v.empty()) { v.pop(); }v.push(s);
	while (!v.empty()) {
		s = v.front();
		v.pop();
		decode(s.a);
		int temp[MAXN][MAXN];
		Clear(b);
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				temp[i][j] = a[i][j];
			}
		}
		for (int j = 0; j < m; ++j) {
			for (int i = n-1; i>=0; --i) {
				if (a[i][j] == 0)break;
				if (b[i][j])continue;
				Destroy(i, j);
				situation u;
				u.step = s.step + 1;
				*//*cout <<"s"<< u.step<<"s";
				for (int i = 0; i < n; ++i) {
					for (int j = 0; j < m; ++j) {
						cout << a[i][j] << ' ';
					}cout << endl;
				}cout << endl;*//*
				compressed(u);
				if (end_s(u)) { ans = u.step; return ans; }
				v.push(u);
				for (int i = 0; i < n; ++i) { for (int j = 0; j < m; ++j)a[i][j] = temp[i][j]; }
			}
		}
	}return 0;
}
int main() {
	while (cin >> n >> m) {
		situation temp;
		k = 0;
		for (int i = 0; i < n; ++i) {
			int compressed=0;
			for (int j = 0; j < m; ++j) {
				cin >> a[i][j];
				compressed = compressed * 10 + a[i][j];
			}
			temp.a[i] = compressed;
		}
		temp.step = 0;
		cout<<bfs(temp)<<endl;
	}
	return 0;
}*/



/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <vector>
#include <iomanip>
#define MAXN 600100
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f
#define ll long long
#define Clear(a) memset((a),0,sizeof((a)))
using namespace std;

int a, b;
int gcd(int a, int b) {
	while (a%b) {
		int temp = a;
		a = b;
		b = temp % b;
	}
	return b;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		int c, temp;
		temp = a / b;
		for (int i = 2; i <= temp; ++i) {
			int result = gcd(i, temp);
			if (result == 1) {
				c = i;
				break;
			}
		}
		cout << c*b << endl;
	}
	return 0;
}*/

/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <vector>
#include <iomanip>
#include <map>
#define MAXN 600100
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f
#define ll long long
#define Clear(a) memset((a),0,sizeof((a)))
using namespace std;

int t, n;
int mole[MAXN];
struct Node {
	int val;
	int minn, maxn;
	int left, right;
	int parent;
};
Node tree[(int)(MAXN * 2)];
int cnt;
//map<int, int> tree, minn, maxn;
char str[MAXN * 2];
char sample[7100];
int nextn[7100];
void Insert(int key,int i,int p) {
	if (tree[i].val == 0) {
		tree[i].val = key;
		tree[i].minn = key;
		tree[i].maxn = key;
		tree[i].left = 0;
		tree[i].right = 0;
		tree[i].parent = p;
		cnt++;
		return;
	}
	//cout << tree[i].val<< ' ';
	if (key < tree[i].val) {
		tree[i].minn = tree[i].minn > key ? key : tree[i].minn;
		if (tree[i].left == 0) {
			tree[i].left = cnt;
			Insert(key, cnt,i);
			
		}
		else {
			Insert(key, tree[i].left,i);
		}
	}
	else {
	 tree[i].maxn = tree[i].maxn < key ? key : tree[i].maxn;
	 if (tree[i].right == 0) {
		 tree[i].right = cnt;
		 Insert(key, cnt,i);
	 }
	 else {
		 Insert(key, tree[i].right,i);
	 }
	}
	
}
int nowpos;
char get_gender() {
	if (tree[nowpos].val % 2) {
		return '1';
	}
	else return '0';
}
int len = 0;
int Search(int key) {
	if (tree[nowpos].val == key) {
		return 0;
	}
	*(str + len) = get_gender();
	len++;
	str[len] = '\0'; //cout << str<<":";
	//cout <<tree[nowpos].val<<' '<<tree[nowpos].minn<<' '<<tree[nowpos].maxn << endl; system("pause");
	int temp = nowpos;
	int parent = tree[nowpos].parent;
	if (tree[nowpos].maxn<key || tree[nowpos].minn>key) {
		nowpos = parent;
	}
	else if (key>tree[nowpos].val) {
		nowpos = tree[nowpos].right;
	}
	else if (key<tree[nowpos].val) {
		nowpos = tree[nowpos].left;
	}
	if (temp == nowpos)return 0;
	//if (len >MAXN)return 0;
	if (tree[nowpos].val == key)
		return 2;
	else { int ans = Search(key) + 1; return ans; }
}
int get_next() {
	Clear(nextn);
	int plen = strlen(sample) + 1;
	nextn[0] = -1;
	sample[plen - 1] = sample[0];
	int j = 0;
	int k = -1;
	while (j < plen - 1) {
		if (k == -1 || sample[j] == sample[k]) {
			++k;
			++j;
			nextn[j] = k;

		}
		else {
			k = nextn[k];
		}
	}
	sample[plen - 1] = '\0';
	return 0;
}
int kmp() {
	int ans = 0;
	int i = 0;
	int j = 0;
	int slen = strlen(str);
	int plen = strlen(sample);
	if (slen < plen)
		return 0;
	while (i < slen) {
		if (j == -1 || str[i] == sample[j]) {
			++i;
			++j;
		}
		else {
			j = nextn[j];
		}
		if (j == plen - 1 && i<slen) {
			ans++; //j = nextn[j]; //cout << i<<'-'<<j << ' ';
		}
	}
	return ans;
}
int main() {
	int Case = 1;
	cin >> t;
	//cout << tree.max_size() << "s";
	while (t--) {
		cin >> n;
		cnt = 1;
		for (int i = 0; i < n; ++i) {
			cin >> mole[i];
		}
		Clear(tree);
		//tree[1] = mole[0];
		for (int i = 0; i < n; ++i) {
		
			//cout << mole[i] << ":";	
			Insert(mole[i], 1,0);
			//cout << endl;
			//cout << "cnt:" << cnt << endl;
		}
		//cout << tree[1] << endl;
		nowpos = 1;
		len = 0;
		for (int i = 1; i <= n; ++i) {
			Search(i);
		}
		Search(mole[0]);
		str[len] = get_gender();
		str[len + 1] = '\0';
		cin >> sample;
		get_next();
		//cout << str<<endl;
		cout << "Case #" << Case++ << ": " << kmp() << endl;
	}
	return 0;
}*/






/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <vector>
#include <iomanip>
#include <map>
#define MAXN 32000
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f
#define ll long long
#define Clear(a) memset((a),0,sizeof((a)))
using namespace std;

double k, d, t;
double ans;
struct {
	double ans,tk,i;
}a[MAXN];

int main() {
	while (cin >> k >> d >> t) {
		int tim = k / d;
		ans = 0;
		while (t > 0) {
			if (t <= (tim*d+(k-tim*d)+(d-k+tim*d)/2)) {
				if (t <= tim * d)
				{
					ans += t, t = 0;
					break;
				}
				else ans += tim * d;
				t -= tim * d;
				if (t <= (k - tim * d)) {
					ans+=t;
					t = 0;
				}
				else {
					ans += k-tim*d;
					t = t - (k - tim * d);
					ans += t * 2;
					t = 0;
				}
			}
			else {
				t -= (tim*d + (k - tim * d) + (d - k + tim * d) / 2);
				ans += (tim+1) * d;
			}
		}
		cout << ans << endl;
	}
	return 0;
}*/


/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <vector>
#include <iomanip>
#include <map>
#define MAXN 32000
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f
#define ll long long
#define Clear(a) memset((a),0,sizeof((a)))
using namespace std;


int n;
int main() {
	while (cin >> n) {
		ll ans;
		ans = 0;
		for (int i = 2; i <= n; ++i) {
			cout << "i=" << i << ":";
			ll sum = 0;
			for (int j = 1; j < i; ++j) {
				long temp;
				temp = j | (i - j);
				sum += j | (i - j);
				cout << temp << ' ';
			}
			ans += sum;
			cout << "//ans:" << ans<<"//sum:"<<sum;
			cout << endl;
		}
		cout << ans << endl;
	}
	return 0;
}*/
/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <vector>
#include <iomanip>
#include <map>
#define MAXN 1100000
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f
#define ll long long
#define Clear(a) memset((a),0,sizeof((a)))
using namespace std;
bool cmp(int a, int b) {
	return a < b;
}
int a[MAXN],s[MAXN];
int n,q;

int main() {
	while (scanf("%d%d",&n,&q)) {
		Clear(a);
		Clear(s);
		int ans=0,temp;
		for (int i = 1; i <= n; ++i) {
			cin >> a[i];
			ans^= a[i];
			s[i] = ans;
		}
		for (int i = 1; i <= q; ++i) {
			int l, r;
			scanf("%d%d",&l,&r);
			
			ans = s[n] ^ (s[l - 1] ^ s[r]);
			printf("%d\n", ans);
		}
		
	}
	return 0;
}*/



/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <vector>
#include <iomanip>
#include <map>
#define MAXN 362890
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f
#define ll long long
#define Clear(a) memset((a),0,sizeof((a)))
using namespace std;

int c[MAXN];
int num[10];

int main() {
	int n;
	Clear(c);
	Clear(num);
	c[1] = 1;
	num[1] = 1;
	cin >> n;
	for (int i = 2; i <=n; ++i) {
		int p = 1,k=num[i-1]*i;
		for (int j = num[i - 1]; j >0; --j) {
			int temp;
			p = 1;
			for (int z = 1; z <= i; ++z) {
				temp = (c[j] / p) * 10 + i;
				c[k] = temp * p + c[j] % p;
				--k;
				p *= 10;
			}
		}
		num[i] = num[i - 1] * i;
	}
	int ans = 0;
	for (int i = 1; i <= num[n]; ++i) {
		ans ^= c[i];
	}
	cout << ans << endl;
	return 0;
}*/







/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <vector>
#include <iomanip>
#include <map>
#define MAXN 320
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f
#define ll long long
#define Clear(a) memset((a),0,sizeof((a)))
using namespace std;


int t, n;
int num[MAXN];

int main() {
	cin >> t;
	num[1] = 0;
	for (int i = 2; i <= 300; ++i) {
		int sum = 2;
		int rema = i - 3;
		for (int j = 1; j <= rema; ++j) {
			sum += j * (i-1 - j-1) + 1;
		}
		num[i] = sum+num[i-1];
		//cout << num[i] << ' ';
	}
	num[1] = 1;
	while (t--) {
		cin >> n;
		cout << num[n]<<endl;
	}
	return 0;
}*/


/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <vector>
#include <iomanip>
#include <map>
#define MAXN 320
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f
#define ll long long
#define Clear(a) memset((a),0,sizeof((a)))
using namespace std;


ll n;
int sum;
int main() {
	cin >> n;
	sum = 0;
	while (n) {
		sum += n % 10;
		n /= 10;
		if (sum > 23)
			break;
	}
	if (sum == 23)
		cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}*/

/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <vector>
#include <iomanip>
#include <map>
#define MAXN 320
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f
#define ll long long
#define Clear(a) memset((a),0,sizeof((a)))
using namespace std;


ll n,ans;

int main() {
	ans = 0;
	ll i = 0;
	cin >> n;
	while (i < n) {	++ans;
		ll temp=ans,sum=0;
		while (temp) {
			sum += temp % 10;
			temp /= 10;
			if (sum > 23)
				break;
		}
		if (sum == 23)
			++i;
	
	}
	cout << ans << endl;
	return 0;
}
*/

/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <vector>
#include <iomanip>
#include <map>
#define MAXN 1001000
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f
#define ll long long
#define ull unsigned long long
#define Clear(a) memset((a),0,sizeof((a)))
using namespace std;

int n, m;
ull a[MAXN];
int main() {
	cin >> n >> m;
	ull maxn = 0,tmaxn=0;
	ull ans = 0;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		if (a[i] > maxn)
			maxn = a[i];
	}
	ull sum = 0;
	for (int i = 1; i <= n; ++i) {
		if (tmaxn < a[i])
			tmaxn = a[i];
		sum += a[i];
		if (i%m == 0) {
			
			sum = tmaxn * m - sum;
			ans += sum;
			sum = 0;tmaxn = 0;
		}
	}
	if (n%m) {
		sum = tmaxn * (n%m) - sum;
		ans += sum;
	}
	cout << ans << endl;
	//system("pause");
	return 0;
}
*/
/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <vector>
#include <iomanip>
#include <map>
#define MAXN 100100
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f
#define ll long long
#define ull unsigned long long
#define Clear(a) memset((a),0,sizeof((a)))
using namespace std;

struct bound {
	int x1,x2;
	int h;
	int flag;
	bool sign;
}b[5];

int x11, y11, x12, y12;
int n;
void exchange(int &a, int &b) {
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}
void coordinate_to_bounce() {
	if (x11 > x12) {
		exchange(x11, x12);
	}
	if (y11 > y12)
		exchange(y11, y12);
	b[n].x1 = b[n + 1].x1 = x11;
	b[n].x2 = b[n + 1].x2 = x12;
	b[n].h = y11;
	b[n + 1].h = y12;
	b[n].sign = true;
	b[n + 1].sign = false;
	b[n].flag = n;
	b[n + 1].flag = n;
	n+=2;
}
bool cmp(bound a, bound b) {
	return a.h < b.h;
}
int main() {
	while (cin >> x11 >> y11 >> x12 >> y12) {
		n = 0;
		coordinate_to_bounce();
		cin >> x11 >> y11 >> x12 >> y12;
		coordinate_to_bounce();
		sort(b, b + n, cmp);
		int ans=0;

		ans += (b[1].h - b[0].h)*(b[0].x2 - b[0].x1);
		int len;
		if (b[1].sign == true) {
			if ((b[1].x1<=b[0].x1)&&(b[0].x1<b[1].x2)||(b[1].x1<b[0].x2)&&(b[0].x2<=b[1].x2)|| (b[0].x1 <= b[1].x1) && (b[1].x1<b[0].x2) || (b[0].x1<b[1].x2) && (b[1].x2 <= b[0].x2)) {
				len = -((b[1].x1 > b[0].x1 ? b[0].x1 : b[1].x1)- (b[1].x2 < b[0].x2 ? b[0].x2 : b[1].x2));
			}
			else {
				len=b[1].x2 - b[1].x1 + b[0].x2 - b[0].x1;
			}
			//cout << len << "s";
			ans += len * (b[2].h - b[1].h);
			if (b[2].flag == b[1].flag)len = b[0].x2 - b[0].x1;
			else len = b[1].x2 - b[1].x1;
			ans += len * (b[3].h - b[2].h);
		}
		else {
			ans += (b[2].x2 - b[2].x1)*(b[3].h - b[2].h);
		}
		cout << ans <<endl;
	}return 0;
}*/


/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <vector>
#include <iomanip>
#include <map>
#define MAXN 600
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f
#define ll long long
#define ull unsigned long long
#define Clear(a) memset((a),0,sizeof((a)))
using namespace std;
queue<int> situa;

int step[MAXN];
void translate(int &n, char c[4][4]) {
	n = 0;
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			n <<= 1;
			n += c[i][j] - '0';
		}
	}
}
void detranslate(int n, char c[4][4]) {
	for (int i = 2; i >= 0; --i) {
		for (int j = 2; j >= 0; --j) {
			c[i][j] = '0' + (n & 1);// cout << c[i][j];
			n >>= 1;
		}
	}
}
void change_light(char c[4][4], int i, int j) {
	if (i - 1 >= 0)c[i - 1][j] = ((c[i - 1][j] - '0') + 1) % 2 + '0';
	if(i+1<3)c[i + 1][j] = ((c[i + 1][j] - '0') + 1) % 2 + '0';
	if (j - 1 >= 0) c[i][j-1] = ((c[i][j-1] - '0') + 1) % 2 + '0';
	if(j+1<3)c[i][j+1] = ((c[i][j+1] - '0') + 1) % 2 + '0';
	c[i][j] = ((c[i][j] - '0') + 1) % 2 + '0';
}
void bfs() {
	while (!situa.empty()) {
		int n = situa.front();
		char c[4][4];
		situa.pop();
		//cout << n;
		if (n == 511)return;
		detranslate(n, c);
		for (int i = 0; i < 3; ++i) {
			for (int j = 0; j < 3; ++j) {
				change_light(c, i, j);//cout << c[0] << endl << c[1] << endl << c[2] << endl << endl << endl;
				int temp = 0;
				translate(temp, c); 
				change_light(c, i, j);
				if (step[temp] > step[n] + 1)
					step[temp] = step[n] + 1;
				else continue;
				//cout << temp << endl;
				//system("pause");
				if (temp == 511)
					return;
				situa.push(temp);
			}
		}
	}
}
int main() {
	char c[4][4];
	int n=0;
	for (int i = 0; i < 3; ++i)
		cin >> c[i];
	translate(n, c);
	memset(step, inf, sizeof(step));
	step[n] = 0;
	situa.push(n);
	bfs();
	cout << step[511]<<endl;
	return 0;
}*/


/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <vector>
#include <iomanip>
#include <map>
#define MAXN 50
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f
#define ll long long
#define ull unsigned long long
#define Clear(a) memset((a),0,sizeof((a)))
using namespace std;

int a[MAXN][MAXN];
int x[MAXN];
bool freeX[MAXN];
void gauss(int equ, int var) {
	int row, col;
	row = col = 0;
	Clear(x);
	for (int i = 0; i < var; ++i) {
		freeX[i] = true;
	}

	for (row = col = 0; row < equ&&col < var; ++row, ++col) {
		int maxrow = row;
		for (int i = row + 1; i < equ; ++i) {
			if (abs(a[maxrow][col]) < abs(a[i][col])) {
				maxrow = i;
			}
		}
		
		if (maxrow!= row) {
			for (int i = row; i < var+1; ++i) {
				swap(a[maxrow][i], a[row][i]);
			}
	}if (a[row][col] == 0) {
			row--;
			continue;
		}
		for (int i = row + 1; i < equ; ++i) {
			if(a[i][col]!=0)
			for (int j = col; j < var+1; ++j) {
				a[i][j] ^= a[row][j];
			}
		}
	}
	/*for (int i = row; i < equ; ++i) {
		for (int j = 0; j < var+1; ++j) {
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
	cout << endl << endl;*//*
	for (int i = var - 1; i >= 0; --i) {
		x[i] = a[i][var];
		for (int j = i+1; j < var; ++j) {
			x[i] ^= (x[j] && a[i][j]);
		}
	}
}

void Init(){
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 6; ++j) {
			int t = i * 6 + j;
			a[t][t] = 1;
			if (i > 0)a[(i-1)*6+j][t] = 1;
			if (i < 4)a[(i + 1) * 6 + j][t] = 1;
			if (j > 0)a[i * 6 + j - 1][t] = 1;
			if (j < 5)a[i * 6 + j + 1][t] = 1;
		}
	}
}

int main() {
	int t;
	cin >> t;
	int p = 1;
	while (t--) {Clear(a);
		for (int i = 0; i < 30; ++i) {
			cin >> a[i][30];
		}
		
		Init();
		gauss(30,30);
		cout << "PUZZLE #" << p << endl;
		for (int i = 0; i < 30; ++i) {
			cout << x[i] << ' ';
			if ((i + 1) % 6 == 0) {
				cout << endl;
			}
		}
		++p;
	}
	return 0;
}*/


/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <vector>
#include <iomanip>
#include <map>
#define MAXN 50
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f
#define ll long long
#define ull unsigned long long
#define Clear(a) memset((a),0,sizeof((a)))
using namespace std;

int a[MAXN][MAXN];
int d[MAXN], L[MAXN];
bool freeX[MAXN];
int x[MAXN];


int gauss(int equ, int var) {
	for (int i = 0; i <= var; ++i) {
		freeX[i] = true;
	}
	Clear(x);
	int row = 0;
	int col = 0;
	for (row = col = 0; row < equ&&col < var; ++row, ++col) {
		int maxrow = row;
		for (int i = row + 1; i < equ; ++i) {
			if (abs(a[i][col]) > abs(a[maxrow][col])) {
				maxrow = i;
			}
		}
		if (a[maxrow][col] == 0) {
			row--;
			continue;
		}
		if (maxrow != row) {
			for (int j = 0; j <= var; ++j) {
				swap(a[row][j], a[maxrow][j]);
			}
		}
		for (int i = row + 1; i < equ; ++i) {
			if(a[i][col]==1)
			for (int j = col; j <= var; ++j) {
				a[i][j] ^= a[row][j];
			}
		}
	}
	for (int i = row; i < equ; ++i) {
		if (a[i][var]) {
			return -1;
		}
	}
	if (row < var) {
		int freenum = 0;
		int freeindex = 0;
		for (int i = row - 1; i >= 0; --i) {
			freenum = 0;
			freeindex = 0;
			for (int j = 0; j < var; ++j) {
				if (a[i][j] != 0 && freeX[j]) {
					freenum++;
					freeindex = j;
				}
			}
			if (freenum > 1) {
				continue;
			}
			int temp = a[i][var];
			for (int j = i+1; j < var; ++j) {
				if (a[i][j]&&j!=freeindex) {
					temp ^= a[i][j]^x[j];
				}
			}
			x[freeindex] = temp;
			freeX[freeindex] = false;
		}
		return var - row;
	}
	for (int i = var - 1; i >= 0; --i) {
		int temp = a[i][var];
		for (int j = i+1; j < var; ++j) {
			if (a[i][j] != 0) {
				temp ^= a[i][j] ^ x[j];
			}
		}
		x[i] = temp;
	}
	return 0;
}

int main() {
	int k, n;
	cin >> k;
	while (k--) {
		cin >> n;
		Clear(a);
		Clear(x);
		Clear(d);
		Clear(L);
		for (int i = 0; i < n; ++i) {
			cin >> L[i];
			a[i][i] = 1;
		}
		for (int i = 0; i < n; ++i) {
			cin >> d[i];
			a[i][n] = d[i] ^ L[i];
		}
		int x, y;
		while (cin >> x >> y && (x||y)) {
			a[y - 1][x - 1]=1;
		}
		int num=0;
		num=gauss(n, n);
		/*for (int i = 0; i < n; ++i) {
			for (int j = 0; j <= n; ++j) {
				cout << a[i][j] << ' ';
			}
			cout << endl;
		}cout << endl;*//*
		if (num == 0)
			cout<<"1"<<endl;
		else if (num < 0) {
			cout << "Oh,it's impossible~!!" << endl;
		}
		else cout << (1<<num) << endl;
	}
	return 0;
}*/


/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <vector>
#include <iomanip>
#include <map>
#define MAXN 1000
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f
#define ll long long
#define ull unsigned long long
#define Clear(a) memset((a),0,sizeof((a)))
using namespace std;

int a[MAXN][MAXN];
int x[MAXN];
bool freeX[MAXN];
int freeE[MAXN];
char c[MAXN][MAXN];
int n;
int u;
int gauss(int equ,int var) {
	u = 0;
	for (int i = 0; i < var; ++i) {
		freeX[i] = true;
	}
	Clear(x);
	int row, col;
	row = 0;
	col = 0;
	for (row = col = 0; row < equ&&col < var; ++row,++col) {
		int maxrow = row;
		for (int i = row + 1; i < equ; ++i) {
			if (abs(a[i][col]) > abs(a[maxrow][col])) {
				maxrow = i;
			}
		}
		if (a[maxrow][col] == 0) {
			--row;
			freeE[u++] = col;
			continue;
		}
		if (maxrow != row) {
			for (int j = 0; j <= var; ++j) {
				swap(a[row][j], a[maxrow][j]);
			}
		}
		for (int i = row+1; i < equ; ++i) {
			if (a[i][col] != 0) {
				for (int j = col; j <= var; ++j) {
					a[i][j] ^= a[row][j];
				}
			}
		}
	}

	for (int i = row; i < var; ++i) {
		if (a[i][var]) {
			return -1;
		}
	}
	if (row < var) {
		int freenum=0;
		int freeindex = 0;
		for (int i = row - 1; i >= 0; --i) {
			freenum = 0;
			freeindex = 0;
			for (int j = 0; j < var; ++j) {
				if (a[i][j] && freeX[j]) {
					++freenum;
					freeindex = j;
				}
			}
			if (freenum > 1) {
				continue;
			}
			int temp = a[i][var];
			for (int j = 0; j < var; ++j) {
				if (a[i][j] &&j!=freeindex) {
					temp ^= x[j] ^ a[i][j];
				}
			}
			x[freeindex] = temp;
			freeX[freeindex] = false;
		
		}return var - row;
	}
	for (int i = var - 1; i >= 0; --i) {
		int temp = a[i][var];
		for (int j = 0; j < var; ++j) {
			if (a[i][j]) {
				temp ^= a[i][j]*x[j];
			}
		}
		x[i] = temp;

	}	
	return 0;
}
void Init() {
	Clear(a);
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			int t = i * n + j;
			a[t][t] = 1;
			if (i > 0) a[(i - 1)*n + j][t]=1;
			if (i < n - 1)a[(i + 1)*n + j][t] = 1;
			if (j > 0) a[i * n + j-1][t]=1;
			if (j < n - 1)a[i * n + j + 1][t]=1;
			if (c[i][j] == 'w') {
				a[t][n*n] = 1;
			}
			else a[t][n*n] = 0;
		}
	}
}

int solve(int p,int var) {
	if (p == 0) {
		int ans = 0;
		for (int i = 0; i < var; ++i) {
			ans += x[i];
		}
		return ans;
	}
	else if (p == -1) {
		return -1;
	}
	int ans = inf;
	int total = 1 << p;
	for (int i = 0; i < total; ++i) {
		int cnt = 0;
		for (int j = 0; j < u; ++j) {
			if (i&(1 << j)) {
				x[freeE[j]] = 1;
				cnt++;
			}
			else {
				x[freeE[j]] = 0;
			}
		}
		for (int k = var - u - 1; k >= 0; --k) {
			int q = 0;
			for (q = k; q < var; ++q) {
				if (a[k][q])break;
			}
			x[q] = a[k][var];
			for (int t = q + 1; t < var; ++t) {
				if (a[k][t]) {
					x[q] ^= x[t];
				}
			}
			cnt += x[q];
		}
		ans = min(ans, cnt);
	}
	return ans;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		Clear(c);
		for (int i = 0; i < n; ++i) {
			cin >> c[i];
		}
		Init();
		int num=0;
		num=solve(gauss(n*n, n*n),n*n);
		if(num>=0)
		cout << num << endl;
		else cout << "inf" << endl;
	}
	return 0;
}*/
/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <vector>
#include <iomanip>
#include <map>
#define MAXN 1000
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f
#define ll long long
#define ull unsigned long long
#define Clear(a) memset((a),0,sizeof((a)))
using namespace std;

int n;
int a[MAXN];
int main() {
	cin >> n;
	Clear(a);
	for (int i = 1; i <= n; ++i) {
		a[i * 2 - 1]=i;
	}
	for (int i = 2 * n; i > 0; --i) {
		if (a[i] != 0) {
			for (int j = i - 1; j > 0; --j) {
				if (a[j] == 0) {
					swap(a[i], a[j]);
					break;
				}
			}
		}
	}
	for (int i = 1; i <= n;++i) {
		cout << a[i];
	}cout << endl;
	return 0;
}*/



/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <vector>
#include <iomanip>
#include <map>
#define MAXN 20000000
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f
#define ll long long
#define ull unsigned long long
#define Clear(a) memset((a),0,sizeof((a)))
using namespace std;

bool flag[MAXN];
int shaifa(int n) {
	Clear(flag);
	int num = 0;
	for (int i = 2; i <= sqrt(MAXN-1); ++i) {
		if (!flag[i]) {	
	
			for (int j = 2; j <= (MAXN-1 / i) + 1 && i*j <= MAXN-1; ++j) {
				flag[i*j] = true;
			}
		}
	}
	for (int i = 2; i < MAXN; ++i) {
		if (!flag[i]) {
			++num;
			if (num == n)
				return i;		//cout << num<<' ';
		}
	}
	return 0;
}

int main() {
	int n;
	while (cin >> n)
	{
		cout << shaifa(n) << endl;

	}
	return 0;
}*/
/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <vector>
#include <iomanip>
#include <map>
#define MAXN 100
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f
#define ll long long
#define ull unsigned long long
#define Clear(a) memset((a),0,sizeof((a)))
using namespace std;


int dp[MAXN][MAXN];

int main() {
	int n,m;
	cin >> n>>m;
	dp[1][1] = 2;
	dp[1][0] = 1;
	dp[0][1] = 1;
	for (int i = 2; i < 11; ++i) {
		dp[i][0] = 1;
		dp[0][i] = 1;
		for (int j = 1; j <= i; ++j) {
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
			dp[j][i] = dp[j - 1][i] + dp[j][i - 1];
		}
	}
	for (int i = 0; i <= n; ++i) {
		for (int j = 0; j < n; ++j) {
			cout << dp[i][j] << '\t';
		}
		cout << endl;
	}
	cout << dp[m][n] << endl;
	system("pause");
	return 0;
}*/

/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <vector>
#include <iomanip>
#include <map>
#define MAXN 110
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f
#define ll long long
#define ull unsigned long long
#define Clear(a) memset((a),0,sizeof((a)))
using namespace std;

ll a[MAXN][MAXN],result[MAXN][MAXN];	
int n, m, k;
ll temp[MAXN][MAXN];
	
void square_matrix_multiply(ll result[MAXN][MAXN],ll a[MAXN][MAXN]) {
Clear(temp);
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			temp[i][j] = result[i][j];
		}
	}
	
	for (int i = 1; i <=n; ++i) {
		for (int j = 1; j <= n; ++j) {
			ll sum = 0;
			for (int k = 1; k <= n; ++k) {
				sum += (temp[i][k] * a[k][j]);
				//cout << result[i][k] << ' ' << a[k][j] <<' '<<sum<< endl;
			}
			result[i][j] = sum;
		}
	}
}
int main() {

	cin >> n >> m >> k;
	Clear(a);
	Clear(result);
	for (int i = 0; i < m; ++i) {
		int u, v;
		cin >> u >> v;
		a[u][v]=1;
		result[u][v] = 1;
	}

	for (int i = 2; i <=k; ++i) {
		square_matrix_multiply(result, a);
	}
	ll ans=0;
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			ans += result[i][j];
			ans %= 19260817;
			//cout << result[i][j] << ' ';
		}
	}
	cout << ans << endl;

	return 0;
}*/

/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <vector>
#include <iomanip>
#include <map>
#define MAXN 5000010
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f
#define ll long long
#define ull unsigned long long
#define Clear(a) memset((a),0,sizeof((a)))
using namespace std;

int n;
bool primer[MAXN+10];
int a[MAXN];
void Eratosthenes() {
	Clear(primer);
	for (int i = 2; i <= sqrt(MAXN); ++i) {
		if (!primer[i]) {
			for (int j = 2; j <= (MAXN) / i + 1 && i*j <= MAXN; ++j) {
				primer[i*j] = true;
			}
		}
	}
}
int primer_divider(int p) {
	if (!primer[p])
		return p;
	for (int i = 2; i <= p; ++i) {
		if (!primer[i]&&p%i==0) {
			return i;
		}
	}
}
int big_primer_divider(int p) {
	if (!primer[p])
		return p;
	for (int i = p/2; i >= 2; --i) {
		if (!primer[i]&&p%i == 0) {
			return i;
		}
	}
}
int main() {
	Eratosthenes();
	for (int i = 2; i <= 100; ++i) {
		int temp = 0;
		for (int j = 2; j <= i; ++j) {
			temp += primer_divider(j)^big_primer_divider(j);
			//cout << big_primer_divider(j) << ' ' << primer_divider(j)<<' ';
		}//cout << endl;
		a[i] = temp;
		cout <<i<<":"<< temp << "   ";
		if (i % 10 == 0)
			cout << endl;
	}
	cout << endl;
	cin >> n;
}*/

/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <vector>
#include <iomanip>
#include <map>
#define MAXN 32200
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f
#define ll long long
#define ull unsigned long long
#define Clear(a) memset((a),0,sizeof((a)))
#define lowbit(x) ((x)&(-x))
using namespace std;

int a[MAXN];
int suma[MAXN];

int get_sum(int x) {
	int ans = 0;
	for (int i = x; i > 0; i -= lowbit(i)) {
		ans += a[i];
	}
	return ans;
}

void add(int x) {
	for (int i = x; i < MAXN; i += lowbit(i)) {
		a[i]++;
	}
}

int main() {
	int n;
	while (cin >> n) {
		Clear(a);
		Clear(suma);
		for (int i = 0; i < n; ++i) {
			int x, y;
			cin >> x >> y;
			x++;
			suma[get_sum(x)]++;
			add(x);
		}
		for (int i = 0; i < n; ++i)
			cout << suma[i] << endl;
	}
	return 0;
}*/

/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <vector>
#include <iomanip>
#include <map>
#define MAXN 70000
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f
#define ll long long
#define ull unsigned long long
#define Clear(a) memset((a),0,sizeof((a)))
#define lowbit(x) ((x)&(-x))
using namespace std;


int T[MAXN],sumn[MAXN*32],L[MAXN*32],R[MAXN*32],S[MAXN];
int ul[MAXN], ur[MAXN];
int h[MAXN], a[MAXN];
int n, m;
int tot;
int num = 0;
void build(int &rt, int l, int r) {
	rt = ++tot;
	sumn[tot] = 0;
	L[tot] = 0;
	R[tot] = 0;
	if (l == r)return;
	int mid = (l + r) >> 1;
	build(L[tot], l, mid);
	build(R[tot], l, mid);
}
void update(int &rt, int pre, int l, int r, int x, int val) {
	rt = ++tot;
	L[rt] = L[pre];
	R[rt] = R[pre];
	sumn[rt] = sumn[pre] + val;
	if (l == r)return;
	int mid = (l + r) >> 1;
	if (x <= mid)update(L[rt], L[pre], l, mid, x, val);
	else update(R[rt], R[pre], mid + 1, r, x, val);
}

int Sum(int x, bool flag) {
	int temp = 0;
	while (x) {
		if (flag) {
			temp += sumn[L[ur[x]]];
		}
		else temp += sumn[L[ul[x]]];
		x -= lowbit(x);
	}
	return temp;
}
int query(int s, int e, int ts, int te, int l, int r, int k) {
	if (l == r)return l;
	int res = Sum(e, true) - Sum(s, false) + sumn[L[te]] - sumn[L[ts]];
	int mid = (l + r) >> 1;
	if (k <= res) {
		for (int i = e; i > 0; i -= lowbit(i))ur[i] = L[ur[i]];
		for (int i = s; i > 0; i -= lowbit(i))ul[i] = L[ul[i]];
		return query(s, e, L[ts], L[te], l, mid, k);
	}
	else {
		for (int i = e; i > 0; i -= lowbit(i))ur[i] = R[ur[i]];
		for (int i = s; i > 0; i -= lowbit(i))ul[i] = R[ul[i]];
		return query(s, e, R[ts], R[te], mid + 1, r, k-res);
	}
}
void add(int x, int val) {
	int res = lower_bound(h + 1, h + 1 + num, a[x]) - h;
	while (x<=n) {
		update(S[x], S[x], 1, num,res,val);
		x += lowbit(x);
	}
}
struct Element {
	int l, r, k;
	bool flag;
}Q[MAXN];
int main() {
	int t;
	cin >> t;
	while (t--) {
		
		cin >> n >> m;
		tot = 0;
		Clear(T);
		Clear(S);
		Clear(sumn);
		Clear(L);
		Clear(R);
		Clear(h);
		Clear(a);

		
		for (int i = 1; i <= n; ++i) {
			cin >> a[i];
			h[++num] = a[i];
		}
		for (int i = 1; i <= m; ++i) {
			char c;
			cin >> c;
			if (c == 'Q') {
				cin >> Q[i].l >> Q[i].r >> Q[i].k;
				Q[i].flag = true;
			}
			else {
				cin >> Q[i].l >> Q[i].r;
				Q[i].flag = false;
				h[++num] = Q[i].r;
			}
		}
		sort(h + 1, h + num + 1);
		num = unique(h + 1, h + 1 + num) - h - 1;
		build(T[0], 1, num);
		for (int i = 1; i <= n; ++i)update(T[i], T[i - 1], 1, num, lower_bound(h + 1, h + 1 + num, a[i]) - h, 1);
		for (int i = 1; i <= n; ++i)S[i] = T[0];
		for (int i=1; i <= m; ++i) {
			if (Q[i].flag) {
				for (int j = Q[i].l-1; j > 0; j -= lowbit(j))ul[j] = S[j];
				for (int j = Q[i].r; j > 0; j -= lowbit(j))ur[j] = S[j];
				int ans = query(Q[i].l - 1, Q[i].r, T[Q[i].l - 1], T[Q[i].r], 1, num, Q[i].k);
				cout << h[ans] << endl;
			}
			else {
				add(Q[i].l, -1);
				a[Q[i].l] = Q[i].r;
				add(Q[i].l, 1);
			}
		}
	}
	return 0;
}*/
/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <vector>
#include <iomanip>
#include <map>
#include <bitset>
#define MAXN 2000010
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f
#define ll long long
#define ull unsigned long long
#define Clear(a) memset((a),0,sizeof((a)))
#define MAXIMIZE(a) memset((a),inf,sizeof(a));
#define lowbit(x) ((x)&(-x))
using namespace std;


bitset<MAXN + 10> fu;
int n;
int main() {
	while (cin >> n) {
		fu.set(0);
		for (int i = 0; i < n; ++i) {
			int a;
			cin >> a;
			fu ^= fu << a;
		}
		int ans = 0;
		for (int i = 0; i <= MAXN-10; ++i) {
			if (fu[i])
				ans ^= i;
		}
		cout << ans << endl;
	}
	return 0;
}*/

/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <vector>
#include <iomanip>
#include <map>
#include <bitset>
#define MAXN 51000
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f
#define ll long long
#define ull unsigned long long
#define Clear(a) memset((a),0,sizeof((a)))
#define MAXIMIZE(a) memset((a),inf,sizeof(a));
#define lowbit(x) ((x)&(-x))
using namespace std;

int a[MAXN],b[MAXN],c[MAXN],d[MAXN];
struct node {
	int l, r, k;
	bool flag;
}Q[MAXN];

int insertion_sort_select(int* c, int p, int r,int num,bool flag) {
	for (int i = p + 1; i <= r; ++i) {
		int j = i - 1;
		int key = c[i];
		int sign = i;
		while (j >= p && c[j] > key) {
			c[j + 1] = c[j];
			if (flag) {
				d[j + 1] = d[j];
			}
			--j;
		}
		c[j + 1] = key;
		if (flag)
			d[j + 1] = sign;
	}
	d[num] = (p + r) / 2;
	return c[(p + r) / 2];
}

int find_middle(int p, int r) {
	int num=0;
	Clear(c);
	Clear(d);
	for (int i = p; (i+4) <= r; i += 5) {
		c[++num]=insertion_sort_select(a, i, i+4,num,false);
	}
	if ((r - p + 1) % 5) {
		++num;
		//cout << p << ' ' << r << ' ' << num << endl;
		//system("pause");
		
		c[num]=insertion_sort_select(a,(num-1) * 5 + p, r,num,false);
	}
	 insertion_sort_select(c, 1, num,num+1,true);
	 return d[d[num+1]];
}
int partition(int p, int r) {
	int x = a[r];
	int i = p - 1;
	for (int j = p; j <= r - 1; ++j) {
		if (a[j] <= x)
		{
			++i;
			swap(a[i], a[j]);
		}
	}
	swap(a[i + 1], a[r]);
	return i + 1;
}

int randomized_partition(int p, int r) {
	int i = find_middle(p,r);
	swap(a[r], a[i]);
	return partition(p, r);
}

int randomized_select(int p, int r, int i) {
	if (p == r)
		return a[p];
	int q = randomized_partition(p, r);
	int k = q - p + 1;
	if (i == k)
		return a[q];
	else if (i < k)
		return randomized_select(p, q - 1, i);
	else return randomized_select(q + 1, r, i - k);
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		for (int i = 1; i <= n; ++i) {
			cin >> b[i];
		}
		for (int i = 1; i <= m; ++i) {
			char c;
			cin >> c;
			if (c == 'Q') {
				cin >> Q[i].l >> Q[i].r >> Q[i].k;
				Q[i].flag = true;
			}
			else {
				cin >> Q[i].l >> Q[i].r;
				Q[i].flag = false;
			}
		}
		n = unique(b + 1, b + 1 + n) - b-1;
		for (int i = 1; i <= m; ++i) {
			if (Q[i].flag) {
				for (int i = 1; i <= n; ++i) {
					a[i] = b[i];
				}
				cout << randomized_select(Q[i].l, Q[i].r, Q[i].k) << endl;
			}
			else {
				b[Q[i].l] = Q[i].r;
			}
		}
	}
	return 0;
}*/

/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <vector>
#include <iomanip>
#include <map>
#include <bitset>
#define MAXN 51000
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f
#define ll long long
#define ull unsigned long long
#define Clear(a) memset((a),0,sizeof((a)))
#define MAXIMIZE(a) memset((a),inf,sizeof(a));
#define lowbit(x) ((x)&(-x))
using namespace std;

int a[MAXN];
int n;

int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; ++i)
			cin >> a[i];
		int ans = n;
		for (int i = n - 1; i >= 0; --i) {
			if (a[i] == ans) {
				--ans;
			}
		}
		
		cout << ans << endl;
	}
	return 0;
}*///hdu5500


/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <vector>
#include <iomanip>
#include <map>
#include <bitset>
#define MAXN 51000
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f
#define ll long long
#define ull unsigned long long
#define Clear(a) memset((a),0,sizeof((a)))
#define MAXIMIZE(a) memset((a),inf,sizeof(a));
#define lowbit(x) ((x)&(-x))
using namespace std;

int n;
ull a[MAXN];
ull suma[MAXN];
int main() {
	while (cin >> n) {
		Clear(a);
		Clear(suma);
		for (int i = 1; i <= n; ++i) {
			cin >> a[i];
			suma[i] = suma[i - 1] + a[i];
		}
		ull ans = 0;
		int sum1, sum2, sum3;
			sum1 = sum2 = sum3 = 0;
			for (int i = 1; i <= n - 1; ++i) {
				int temp[5];
				Clear(temp);
				sum1 = sum2 = sum3=0;
				for (int j = 1; j < i; ++j) {
					temp[1] = suma[j] - suma[0];
					temp[2] = suma[i] - suma[j];
					temp[3] = suma[n] - suma[i];
				
				sort(temp + 1, temp + 4);
				if (temp[2] == sum2&&temp[1]<sum1) {
					sum1 = temp[1];
					sum2 = temp[2];
					sum3 = temp[3];
				}
				if (temp[2] > sum2) {
					sum2 = temp[2];
					sum1 = temp[1];
					sum3 = temp[3];
				}
				}
				for (int j = n - 1; j > i; --j) {
					temp[1] = suma[i] - suma[0];
					temp[2] = suma[j] - suma[i];
					temp[3] = suma[n] - suma[j];

					sort(temp + 1, temp + 4);
					if (temp[2] == sum2 && temp[1]<sum1) {
						sum1 = temp[1];
						sum2 = temp[2];
						sum3 = temp[3];
					}
					if (temp[2] > sum2) {
						sum2 = temp[2];
						sum1 = temp[1];
						sum3 = temp[3];
					}
				}
				if (sum1 > ans)
					ans = sum1;
		}
		cout << ans << endl;
	}
	return 0;
}*///hdu2615暴力violent method

/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <vector>
#include <iomanip>
#include <map>
#include <bitset>
#define MAXN 1000
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f
#define ll long long
#define ull unsigned long long
#define Clear(a) memset((a),0,sizeof((a)))
#define MAXIMIZE(a) memset((a),inf,sizeof(a));
#define lowbit(x) ((x)&(-x))
using namespace std;

int a[MAXN];
int dp[MAXN][2];

int main() {
	int n;
	while (cin >> n) {
		for (int i = 1; i <= n; ++i) {
			char c;
			cin >> c;
			if (c == 'U')
			a[i] = 1;
			else a[i] = 0;
		}
		Clear(dp);
		for (int i = 2; i <= n; ++i) {
			if (a[i] == 1 && a[i - 1] == 0 || a[i] == 0 && a[i - 1] == 1) {
				dp[i][1] = dp[i - 1][0]+1;
				dp[i][0] = dp[i - 1][1];
			}
			else {
				dp[i][0] = max(dp[i - 1][0], dp[i - 1][1]);
				dp[i][1] = 0;
			}
		}
		cout << n-max(dp[n][0], dp[n][1])<<endl;
	}
	return 0;
}*///the problem A


/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <vector>
#include <iomanip>
#include <map>
#include <bitset>
#define MAXN 1000
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f
#define ll long long
#define ull unsigned long long
#define Clear(a) memset((a),0,sizeof((a)))
#define MAXIMIZE(a) memset((a),inf,sizeof(a));
#define lowbit(x) ((x)&(-x))
using namespace std;

int sa[MAXN], c[MAXN], wa[MAXN], wb[MAXN], Height[MAXN], ran[MAXN];
int n, m;
char str[MAXN];
int sort_sa(int m, int n) {
	int *x = wa, *y = wb, p = 0;
	Clear(wa);
	Clear(wb);
	Clear(c);
	Clear(sa);
	for (int i = 0; i < n; ++i)c[x[i] = str[i]]++;
	for (int i = 1; i < m; ++i)c[i] += c[i - 1];
	for (int i = n - 1; i >= 0; --i)sa[--c[x[i]]] = i;
	for (int k = 1; p < n; k <<= 1, m = p) {
		p = 0;
		for (int i = n - k; i < n; ++i)y[p++] = i;
		for (int i = 0; i < n; ++i)if (sa[i] >= k)y[p++] = sa[i] - k;
		Clear(c);
		for (int i = 0; i < n; ++i)c[x[y[i]]]++;
		for (int i = 1; i < m; ++i)c[i] += c[i - 1];
		for (int i = n - 1; i >= 0; --i)sa[--c[x[y[i]]]] = y[i];
		swap(x, y); x[sa[0]] = 0; p = 1;
		for (int i = 1; i < n; ++i) {
			if (y[sa[i]] == y[sa[i - 1]] && y[sa[i] + k] == y[sa[i - 1] + k])x[sa[i]] = p - 1;
			else x[sa[i]] = p++;
		}
	}
	return 1;
}
void Getheight() {
	int k = 0, len = strlen(str);
	Clear(ran);
	Clear(Height);
	for (int i = 0; i < len; ++i)ran[sa[i]] = i;
	for (int i = 0; i < len; ++i) {
		if (k)--k;
		if (ran[i] != 0) {
			int j = sa[ran[i] - 1];
			while (str[j + k] == str[i + k]) ++k;
			Height[ran[i]] = k;
		}
	}
}
int dp[MAXN];
int main() {
	while (cin >> n) {
		cin >> str;
		sort_sa(130, n);
		Getheight();
		//for (int i = 0; i < n + 1; ++i)cout << sa[i] << ' ' << endl;
		for (int i = 0; i < n; ++i) {
			dp[i] = inf;
		}
		dp[0] = 1;
		//cout << ran[0] << ' ';
		for (int i = 1; i < n; ++i) {
			int p = ran[0], q = ran[i];
			int minn = inf;
			if (p > q)
				swap(p, q);
			for (int j = p + 1; j <= q; ++j) {
				if (Height[j] < minn)
					minn = Height[j];
			}
			if (minn!=inf&&minn >= i)
			{
				dp[2 * i - 1] = min(dp[i - 1] + 1, dp[2 * i - 1]);
			}
			dp[i] = min(dp[i],dp[i - 1] + 1);
		}
		/*for (int i = 0; i < n; ++i)cout << dp[i] << ' ';
		cout << endl;*//*
		cout << dp[n - 1] << endl;
	}
}*///B 其实可以暴力。。。

/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <vector>
#include <iomanip>
#include <map>
#include <bitset>
#define MAXN 210000
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f
#define ll long long
#define ull unsigned long long
#define Clear(a) memset((a),0,sizeof((a)))
#define MAXIMIZE(a) memset((a),inf,sizeof(a));
#define lowbit(x) ((x)&(-x))
using namespace std;

ll a[MAXN];
int main() {
	int n;
	while (cin >> n) {
		for (int i = 0; i < n; ++i)
			cin >> a[i];
		ll x, y;
		x = y = inf;
		ll temp = inf;
		ll maxn = a[0];
		//n=unique(a, a + n) - a;
		bool flag= true;
		for (int i = 1; i < n; ++i) {
			if (abs(a[i] - a[i - 1]) == 0) 
			{
				flag = false;
				break;
			}
			 if (abs(a[i] - a[i - 1]) > 1) {
				if (temp == inf) {
					temp = abs(a[i] - a[i - 1]);
					y = temp;
				}
				int t = abs(a[i] - a[i - 1]);
				if (t != temp) {
					flag = false;
					break;
				}
			}
			maxn = maxn > a[i] ? maxn : a[i];
		}
		//cout << temp;
		if(temp!=inf&&flag)
		for (int i = 1; i < n; ++i) {
			if (abs(a[i] - a[i - 1]) == 1) {
				int y1 = a[i] % temp ? (a[i] / temp + 1) : a[i] / temp;
				int y2 = a[i - 1] % temp ? (a[i - 1] / temp + 1) : a[i - 1] / temp;
				if (y1!=y2) {
					flag = false;
					//cout << a[i] << ' ' << a[i - 1];
					break;
				}
			}
		}
		if (!flag) { cout << "NO" << endl; continue; }
		
		
		if (temp == inf) {
			cout << "YES" << endl;
			cout << "1 " << maxn << endl;
		}
		else {
				if(maxn%temp)
				x = (maxn / temp) + 1;
				else x = maxn / temp;
				if (x > 10e9 || y > 10e9) {
					cout << "NO" << endl; continue;
				}
				cout << "YES" << endl;
				cout << x << ' ' << y << endl;
		}
	}
	return 0;
}*///C

/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <vector>
#include <iomanip>
#include <map>
#include <bitset>
#define MAXN 210000
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f
#define ll long long
#define ull unsigned long long
#define Clear(a) memset((a),0,sizeof((a)))
#define MAXIMIZE(a) memset((a),inf,sizeof(a));
#define lowbit(x) ((x)&(-x))
using namespace std;

int dp[MAXN];

int main(){
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		Clear(dp);
		dp[0] = 1;

		for (int i = 1; i <= n; ++i) {
			for (int j = 0; j < i; ++j) {
				dp[i] += dp[j];
			}
		}
		cout << dp[n] << endl;
	}
return 0;
}*/

/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <vector>
#include <iomanip>
#include <map>
#include <bitset>
#define MAXN 2000
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f
#define ll long long
#define ull unsigned long long
#define Clear(a) memset((a),0,sizeof((a)))
#define MAXIMIZE(a) memset((a),inf,sizeof(a));
#define lowbit(x) ((x)&(-x))
using namespace std;


int dp[MAXN];
string str;
int main() {
	while (cin>>str) {
		Clear(dp);
		for (int i = 0; i < str.size(); ++i)
		{
			dp[i] = 1;
			if (str[i] >= 'A'&&str[i] <= 'Z')
				str[i] += 32;
		}
		for (int i = (int)str.size() - 1; i >= 0; --i) {
			int res = 0;
			for (int j = i + 1; j < (int)str.size(); ++j) {
				int temp = dp[j];
				if (str[i] == str[j])
					dp[j] = res + 2;
				res = max(temp, res);
			}
		}
		int temp=0;
		for (int i = 0; i < str.size(); ++i) {
			temp = temp < dp[i] ? dp[i] : temp;
		}
		cout << (int)str.size() - temp << endl;
	}
	return 0;
}*/
/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <vector>
#include <iomanip>
#include <map>
#include <bitset>
#define MAXN 2000
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f
#define ll long long
#define ull unsigned long long
#define Clear(a) memset((a),0,sizeof((a)))
#define MAXIMIZE(a) memset((a),inf,sizeof(a));
#define lowbit(x) ((x)&(-x))
using namespace std;

ll x[MAXN], y[MAXN];
ll d[MAXN];
ll dis(ll x1, ll x2, ll y1, ll y2) {
	return (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2);
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int i = 0; i < n; ++i) {
			cin >> x[i]>>y[i];
		}
		ll ans=0;
		for (int j = 0; j < n; ++j) {
			int num = 0;
			for (int i = 0; i < n; ++i) {
				if (i == j)
					continue;
				d[num++] = dis(x[i], x[j], y[i], y[j]);
			}
			sort(d, d + num);
			int temp=1;
			//cout << d[0] << ' ';
			for (int i = 1; i < num; ++i) {
				if (d[i] == d[i - 1]) {
					++temp;
				}
				else {
					ans += temp * (temp - 1);
					temp = 1;
				}
				//cout << d[i] << ' ';
			}
			if (temp > 1)
				ans += (temp)*(temp - 1);
			//cout << endl;
		}
		if(ans)
		cout << ans << endl;
		else cout << "WA" << endl;
	}
	return 0;
}*/







/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <vector>
#include <iomanip>
#include <map>
#include <bitset>
#define MAXN 20000
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f
#define ll long long
#define ull unsigned long long
#define Clear(a) memset((a),0,sizeof((a)))
#define MAXIMIZE(a) memset((a),inf,sizeof(a));
#define lowbit(x) ((x)&(-x))
using namespace std;

int a[MAXN];

int main() {
	int n;
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		Clear(a);
		int num = 0;
		for (int i = 2; i*i < n; ++i) {
			int cnt = 0;
			while (n%i == 0) {
				n /= i;
				cnt++;
			}
			if (cnt > 0) {
				a[num++] = cnt;
			}
		}
		if (n > 1)
			a[num++] = 1;
		ll ans=1;
		for (int i = 0; i < num; ++i) {
			ans *= (a[i] * 2 + 1);
		}
		cout << (ans + 1) / 2 << endl;
	}
	return 0;
}*/