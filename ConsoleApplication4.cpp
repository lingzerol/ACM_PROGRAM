// ConsoleApplication4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"



/*
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <cmath>
#include <vector>
#include <iomanip>
#include <map>
#include <bitset>
#include <queue>
#include <ctime>
#define MAXN 1100
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define ll long long
#define ull unsigned long long
#define Clear(a) memset((a),0,sizeof((a)))
#define MAXIMIZE(a) memset((a),inf,sizeof(a));
#define lowbit(x) ((x)&(-x))
using namespace std;

ll a[MAXN][MAXN];
ll n, p;
ll c[MAXN][MAXN];
void solve(ll a1, ll a2, ll &ans, bool&flag, ll a11, ll a12) {
	if ((a1 + a2) % 2 == 0) {
		ll b = (a1 + a2) / 2;
		ll c1, c2;
		c1 = (a1 - b);
		c2 = (b - a2);
		if (c1 == c2) {
			if (((c1 + b) % p == (a11%p)) && (b - c2) % p == a12 % p) {
				flag = true;
				ans = c1;
			}
		}
	}
}
int main() {
	while (cin >> n >> p) {
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				cin >> a[i][j];
			}
		}
		bool flag;
		bool test;
		test = true;
		flag = false;
		Clear(c);
		for (int i = 0; i < n; ++i) {
			for (int j = i + 1; j < n; ++j) {
				flag = false;
				ll  ans = 0;
				a[i][j] %= p;
				a[j][i] %= p;
				solve(a[i][j], a[j][i], ans, flag, a[i][j], a[j][i]);
				if (flag) {
					c[i][j] = ans<0 ? ans + p : ans;
					c[j][i] = -ans<0 ? -ans + p : -ans;
					continue;
				}
				solve(a[i][j] + p, a[j][i], ans, flag, a[i][j], a[j][i]);
				if (flag) {
					c[i][j] = ans<0 ? ans + p : ans;
					c[j][i] = -ans<0 ? -ans + p : -ans;
					continue;
				}
				solve(a[i][j], a[j][i] + p, ans, flag, a[i][j], a[j][i]);
				if (flag) {
					c[i][j] = ans<0 ? ans + p : ans;
					c[j][i] = -ans<0 ? -ans + p : -ans;
					continue;
				}
				solve(a[i][j] + p, a[j][i] + p, ans, flag, a[i][j], a[j][i]);
				if (flag) {
					c[i][j] = ans<0 ? ans + p : ans;
					c[j][i] = -ans<0 ? -ans + p : -ans;
					continue;
				}
				solve(a[i][j] - p, a[j][i], ans, flag, a[i][j], a[j][i]);
				if (flag) {
					c[i][j] = ans<0 ? ans + p : ans;
					c[j][i] = -ans<0 ? -ans + p : -ans;
					//cout << c[i][j] << ' ' << c[j][i] << endl;
					continue;
				}
				solve(a[i][j], a[j][i] - p, ans, flag, a[i][j], a[j][i]);
				if (flag) {
					c[i][j] = ans<0 ? ans + p : ans;
					c[j][i] = -ans<0 ? -ans + p : -ans;
					//cout << c[i][j] << ' ' << c[j][i] << endl;
					continue;
				}
				solve(a[i][j] - p, a[j][i] - p, ans, flag, a[i][j], a[j][i]);
				if (flag) {
					c[i][j] = ans<0?ans+p:ans;
					c[j][i] = -ans<0?-ans+p:-ans;
					//cout << c[i][j] << ' ' << c[j][i]<<endl;
					continue;
				}
				else {
					test = false;
					break;
				}
			}
			if (!test)
				break;
		}
		if (test)
			for (int i = 0; i < n; ++i) {
				for (int j = 0; j < n; ++j) {
					cout << c[i][j] << ' ';
				}
				cout << endl;
			}
		else { cout << "Impossible" << endl; }
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
#include <cmath>
#include <vector>
#include <iomanip>
#include <map>
#include <bitset>
#include <queue>
#include <ctime>
#define MAXN 1100
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define ll long long
#define ull unsigned long long
#define Clear(a) memset((a),0,sizeof((a)))
#define MAXIMIZE(a) memset((a),inf,sizeof(a));
#define lowbit(x) ((x)&(-x))
using namespace std;


int minn;
int n, k;
int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		minn = 1;
		for (int i = 0; i < k; ++i) {
			int temp;
			cin >> temp;
			if (temp == minn) {
				minn += 1;
			}
		}
		cout << minn << endl;
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
#include <cmath>
#include <vector>
#include <iomanip>
#include <map>
#include <bitset>
#include <queue>
#include <ctime>
#define MAXN 1100
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define ll long long
#define ull unsigned long long
#define Clear(a) memset((a),0,sizeof((a)))
#define MAXIMIZE(a) memset((a),inf,sizeof(a));
#define lowbit(x) ((x)&(-x))
using namespace std;

//auto print = printf;
typedef  int(__cdecl*print_type)(const char*_Format, ...);
template<typename T>
print_type print(const T variale) {
	printf(variable);
	return printf;
}
template<> print_type print(const long long variable) {
	printf("%lld", variable);
	return printf;
}
template<> print_type print(const char* variable) {
	printf("%s", variable);
	return printf;
}
template<> print_type print(const char variable) {
	printf("%c", variable);
	return printf;
}
template<> print_type print(const int variable) {
	printf("%d", variable);
	return printf;
}
template<> print_type print(const double variable) {
	printf("%lf", variable);
	return printf;
}
template<> print_type print(const float variable) {
	printf("%f", variable);
	return printf;
}
template<> print_type print(const unsigned int variable) {
	printf("%u", variable);
	return printf;
}
template<> print_type print(const unsigned long long variable) {
	printf("%llu", variable);
	return printf;
}
ll ca = 1;
int main() {
	ll n, t;
	scanf("%lld", &t);
	while (t--) {
		scanf("%lld", &n);
		ll longest,shortest;
		ll a, b,c;
		ll l, r;
		ll temp = sqrt(n);
		a = temp;
		b = n / temp;
		if (a*b == n) {
			c = 0;
		}
		else c = 2;
		shortest = a*2+b*2+c;
		longest = n * 2 + 2;
		//cout << a << " " << b << " "<<c<<endl;
		printf("Case #%lld: %lld %lld\n", ca++, longest, shortest);
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
#include <cmath>
#include <vector>
#include <iomanip>
#include <map>
#include <bitset>
#include <queue>
#include <ctime>
#define MAXN 110
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define ll long long
#define ull unsigned long long
#define Clear(a) memset((a),0,sizeof((a)))
#define MAXIMIZE(a) memset((a),inf,sizeof(a));
#define lowbit(x) ((x)&(-x))
 
using namespace std;
class Print {
public:
	template<class T>
	const Print& operator<<(const T variable) const
	{
	printf(variable);
	return *this;
}
};
const Print print;
template<> const Print& Print::operator<<(const char* variable)const {
	printf("%s", variable);
	return *this;
}
template<> const Print& Print::operator<<(const int variable)const {
	printf("%d", variable);
	return *this;
}
template<> const Print& Print::operator<<(const double variable)const {
	printf("%lf", variable);
	return *this;
}
template<> const Print& Print::operator<<(const float variable)const {
	printf("%f", variable);
	return *this;
}
template<> const Print& Print::operator<<(const unsigned int variable)const {
	printf("%u", variable);
	return *this;
}
template<> const Print& Print::operator<<(const unsigned long long variable)const {
	printf("%llu", variable);
	return *this;
}
template<> const Print& Print::operator<<(const char variable)const {
	printf("%c", variable);
	return *this;
}
template<> const Print& Print::operator<<(const long long variable)const {
	printf("%lld", variable);
	return *this;
}
class Scan {
public:
	Scan() {
		flag = true;
	}
	 Scan operator>>(char* &variable) {
		scanf("%s", variable);
		return *this;
	}
	 Scan operator>>(int &variable){
		scanf("%d", &variable);
		return *this;
	} Scan operator>>(double &variable){
		scanf("%lf", &variable);
		return *this;
	} Scan operator>>(float &variable){
		scanf("%f", &variable);
		return *this;
	} Scan operator>>(unsigned int &variable) {
		scanf("%u", &variable);
		return *this;
	}
	 Scan operator>>(unsigned long long &variable){
		scanf("%llu", &variable);
		return *this;
	}
	 Scan operator>>(char &variable) {
		scanf("%c", &variable);
		return *this;
	}
	 Scan operator>>(long long &variable) {
		 if (this->flag&&scanf("%lld", &variable) == EOF)
		 {
			 this->flag = false;
		 }
		return *this;
	}
	 explicit operator bool()const {
		 return this->flag;
	 }
	 void clear() {
		 flag = true;
	 }
	bool flag;
}scan;
ll a[MAXN];
ll dp[100100];
const ll p = (ll)1e9 + 7;
int main() {
	ll n1, n2, m;
	while (scan>>n1>>n2>>m) {
		for (int i = 0; i < n1 + n2; ++i) {
			scanf("%lld", &a[i]);
			//print << a[i];
		}
		ll bounce = 0;
		for (int i = 0; i <= m; ++i)
			dp[i] = -1;
		dp[0] = 1;
		for (int i = 0; i < n1 + n2; ++i) {
			if (i < n1) {
				for (int j = a[i]; j <= m; ++j) {
					if (dp[j-a[i]] != -1) {
						if (dp[j] == -1)
							dp[j] = 0;
						dp[j] = (dp[j]+dp[j - a[i]])%p;
					}
				}
			}
			else {
				for (int j = m; j >= a[i]; --j) {
					if (dp[j - a[i]] != -1) {
						if (dp[j] == -1) {
							dp[j] = 0;
						}
						dp[j] = (dp[j] + dp[j - a[i]]) % p;
					}
				}
			}
		}
		print << dp[m] << '\n';
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
#include <cmath>
#include <vector>
#include <iomanip>
#include <map>
#include <bitset>
#include <queue>
#include <ctime>
#define MAXN 251000
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define ll long long
#define ull unsigned long long
#define Clear(a) memset((a),0,sizeof((a)))
#define MAXIMIZE(a) memset((a),inf,sizeof(a));
#define lowbit(x) ((x)&(-x))

using namespace std;
class Print {
public:
	template<class T>
	const Print& operator<<(const T variable) const
	{
		printf(variable);
		return *this;
	}
};
const Print print;
template<> const Print& Print::operator<<(const char* variable)const {
	printf("%s", variable);
	return *this;
}
template<> const Print& Print::operator<<(const int variable)const {
	printf("%d", variable);
	return *this;
}
template<> const Print& Print::operator<<(const double variable)const {
	printf("%lf", variable);
	return *this;
}
template<> const Print& Print::operator<<(const float variable)const {
	printf("%f", variable);
	return *this;
}
template<> const Print& Print::operator<<(const unsigned int variable)const {
	printf("%u", variable);
	return *this;
}
template<> const Print& Print::operator<<(const unsigned long long variable)const {
	printf("%llu", variable);
	return *this;
}
template<> const Print& Print::operator<<(const char variable)const {
	printf("%c", variable);
	return *this;
}
template<> const Print& Print::operator<<(const long long variable)const {
	printf("%lld", variable);
	return *this;
}
class Scan {
public:
	Scan() {
		flag = true;
	}
	Scan operator>>(char *variable) {
		if (!this->flag)
			return *this;
		if (scanf("%s", variable) == EOF)
		{
			this->flag = false;
		}
		return *this;
	}
	Scan operator>>(int &variable) {
		if (!this->flag)
			return *this;
		if (scanf("%d", &variable) == EOF)
		{
			this->flag = false;
		}
		return *this;
	} Scan operator>>(double &variable) {
		if (!this->flag)
			return *this;
		if (scanf("%lf", &variable) == EOF)
		{
			this->flag = false;
		}
		return *this;
	} Scan operator>>(float &variable) {
		if (!this->flag)
			return *this;
		if (scanf("%f", &variable) == EOF)
		{
			this->flag = false;
		}
		return *this;
	} Scan operator>>(unsigned int &variable) {
		if (!this->flag)
			return *this;
		if (scanf("%u", &variable) == EOF)
		{
			this->flag = false;
		}
		return *this;
	}
	Scan operator>>(unsigned long long &variable) {
		if (!this->flag)
			return *this;
		if (scanf("%llu", &variable) == EOF)
		{
			this->flag = false;
		}
		return *this;
	}
	Scan operator>>(char &variable) {
		if (!this->flag)
			return *this;
		if (scanf("%c", &variable) == EOF)
		{
			this->flag = false;
		}
		return *this;
	}
	Scan operator>>(long long &variable) {
		if (!this->flag)
			return *this;
		if (scanf("%lld", &variable) == EOF)
		{
			this->flag = false;
		}
		return *this;
	}
	explicit operator bool()const {
		return this->flag;
	}
	void clear() {
		flag = true;
	}
	void ignore() {
		char c;
		while ((c=getchar())!=EOF&&c!='\n');
	}
	bool flag;
}scan;


struct SAM{
	char str[MAXN<<1];
	int n;
	int son[MAXN<<1][28], pre[MAXN<<1];
	int step[MAXN<<1],last,total;
	int right[MAXN<<1], f[MAXN<<1], in[MAXN<<1];
	queue<int>q;
	inline void push_back(int v) {
		step[++total] = v;
	}
	void Extend(int ch) {
		push_back(step[last] + 1);
		right[total] = 1;
		int p = last,np=total;
		for (; p&& !son[p][ch]; p = pre[p]) {
			son[p][ch] = np;
		}
		if (!p)pre[np] = 1;
		else {
			int q = son[p][ch];
			if (step[q] != step[p] + 1) {
				push_back(step[p] + 1);
				int nq = total;
				memcpy(son[nq], son[q], sizeof(int)*28);
				pre[nq] = pre[q];
				pre[q] = pre[np] = nq;
				for (; son[p][ch] == q; p = pre[p])son[p][ch] = nq;
			}
			else pre[np] = q;
		}
		last = np;
	}
	void Build() {
		total = last = 1;
		Clear(son);
		Clear(pre);
		Clear(step);
		Clear(in);
		Clear(right);
		Clear(f);
		queue<int>().swap(q);
		n = strlen(str);
		for (int i = 0, END = strlen(str); i != END; ++i)Extend(str[i] - 'a');
		for (int i = 1; i <= total; ++i) {
			in[pre[i]]++;
		}
		for (int i = 1; i <= total; ++i) {
			if (!in[i])
				q.push(i);
		}
		while (!q.empty()) {
			int temp = q.front();
			q.pop();
			in[pre[temp]]--;
			right[pre[temp]] += right[temp];
			if (!in[pre[temp]])
				q.push(pre[temp]);
		}
	}
	void cal() {
		for (int i = 1; i <= total; ++i) {
			f[step[i]] = max(f[step[i]], right[i]);
		}
		for (int i =n-1; i >= 1; --i) {
			f[i] = max(f[i], f[i + 1]);
		}
	}
}sam;

int main() {
	while (scan>>sam.str) {
		sam.Build();
		sam.cal();
		for (int i = 1; i <= sam.n; ++i) {
			print << sam.f[i] << '\n';
		}
	}
	return 0;
}*///SPOJ NSUBSTR - Substrings 具体做法有点麻烦，可浏览博客
