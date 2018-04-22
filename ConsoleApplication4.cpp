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
#define MAXN 180010
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define ll long long
#define ull unsigned long long
#define Clear(a) memset((a),0,sizeof((a)))
#define MAXIMIZE(a) memset((a),inf,sizeof(a));
#define lowbit(x) ((x)&(-x))

using namespace std;

char str[MAXN << 1];
class SAM {
public:
	int son[MAXN << 1][30], pre[MAXN << 1],len[MAXN<<1];
	int n, total,last;
	void insert(int v) {
		len[++total] = v;
	}
	void Build(){
		total = 0;
		insert(0);
		last = total;
		scanf("%s", str);
		n = strlen(str);
		for (int i = 0; i < n; ++i)Extend(str[i] - 'a');
	}
	void Extend(int ch) {
		insert(len[total] + 1);
		int np = total;
		int p = last;
		for (; p&&!son[p][ch]; p = pre[p])son[p][ch] = np;
		if (!p)pre[np] = 1;
		else {
			int q = son[p][ch];
			if ((len[p] + 1) != len[q]) {
				insert(len[p] + 1);
				int nq = total;
				memcpy(son[nq], son[q], sizeof(son[q]));
				pre[nq] = pre[q];
				pre[q] = pre[np] = nq;
				for (; son[p][ch] == q; p = pre[p])son[p][ch] = nq;
			}else{
				pre[np] = q;
			}
		}
		last = np;
	}

}sam;

int length;
int k, q;

int num[MAXN<<1];
int v[MAXN << 1];
int s[MAXN << 1];
void pre()
{
	for (int i = 1; i <= sam.total; i++)v[sam.len[i]]++;
	for (int i = 1; i <= sam.n; i++)v[i] += v[i - 1];
	for (int i = 1; i <= sam.total; i++)s[v[sam.len[i]]--] = i;
	for (int i = sam.total; i; i--)
	{
		num[s[i]] = 1;
		for (int j = 0; j<26; j++)
			num[s[i]] += num[sam.son[s[i]][j]];
	}
}

int solve() {
	int rt = 1;
	length = 0;
	scanf("%d", &k);
	while (k) {
		for (int i = 0; i < 26; ++i) {
			if (sam.son[rt][i]) {
				if (num[sam.son[rt][i]] < k) {
					k -= num[sam.son[rt][i]];
				}
				else {
					putchar(i + 'a');
					rt = sam.son[rt][i];
					--k;
					break;
				}
			}
		}
	
	}
	printf("\n");
	return 0;
}
int main() {
		sam.Build();
		scanf("%d", &q);
		pre();
		while(q--) {
			
			solve();
		}
		
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
		while ((c = getchar()) != EOF && c != '\n');
	}
	bool flag;
}scan;


int f1, f2, f3, f4;

int main() {
	char c;
	while (scan >> f1 >> c >> f2 >> c >> f3 >> c >> f4) {
		if (f1 > 255 || f2 > 255 || f3 > 255 || f4 > 255)
		{
			print << "none" << '\n';
			continue;
		}
		if (f1 < 0 || f2 < 0 || f3 < 0 || f4 < 0) {
			print << "none" << '\n';
			continue;
		}
		if (f1 >= 1 && f1 <= 127) {
			if (f1==127&&f2 == 0 && f3 == 0 && f4 == 0)
				print << "Loop-back address" << '\n';
			else print << "A" << '\n';
		}
		else if (f1 >= 128 && f1 <= 191) {
			print << "B" << '\n';
		}
		else if (f1 >= 192 && f1 <= 223) {
			print << "C" << '\n';
		}
		else {
			print << "none" << '\n';
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
#include <cmath>
#include <vector>
#include <iomanip>
#include <map>
#include <bitset>
#include <queue>
#include <ctime>
#define MAXN 1000
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
		while ((c = getchar()) != EOF && c != '\n');
	}
	bool flag;
}scan;

int a[MAXN][MAXN];
int x[MAXN];
bool freeX[MAXN];
int freeE[MAXN];
char l[MAXN],p[MAXN];
int n;
int u;
int gauss(int equ, int var) {
	u = 0;
	for (int i = 0; i < var; ++i) {
		freeX[i] = true;
	}
	Clear(x);
	int row, col;
	row = 0;
	col = 0;
	for (row = col = 0; row < equ&&col < var; ++row, ++col) {
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
		for (int i = row + 1; i < equ; ++i) {
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
		int freenum = 0;
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
				if (a[i][j] && j != freeindex) {
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
				temp ^= a[i][j] * x[j];
			}
		}
		x[i] = temp;
	}
	return 0;
}
void Init() {
	Clear(a);
	for (int i = 0; i < n; ++i) {
		a[i][i] = 1;
		if (i > 0) a[i][i-1] = 1;
		if (i < n - 1)a[i][i+1] = 1;
		a[i][n] = (l[i] - '0') ^ (p[i] - '0');
	}
}

int solve(int p, int var) {
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
	while (cin >> l >> p) {
		n = strlen(l);
		Init();
		int temp = solve(gauss(n,n),n);
		cout<< temp << '\n';
		
	}
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
#define MAXN 1001000
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
		while ((c = getchar()) != EOF && c != '\n');
	}
	bool flag;
}scan;


char  str[35][MAXN];

int main() {
	int n, q;
	while (cin >>n) {
		for (int i = 1; i <= n; ++i) {
			cin >> str[i];
		}
		cin >> q;
		for(int i=0;i<q;++i){
			int L, R;
			cin >> L >> R;
			int k = 0, t = strlen(str[R]) - 1;
			while (k<strlen(str[L])&&t>=0&&str[L][k] == str[R][t]) {
				k++;
				t--;
			}
			cout << k << endl;
}
	}
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
		while ((c = getchar()) != EOF && c != '\n');
	}
	bool flag;
}scan;



int a[MAXN];
int ans[MAXN];
int main() {
	int n;
	while (cin >> n) {
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		int minn1 = 0, minn2 = 0,minn3=0;
		int temp;
		for (int i = 1; i < n-3; ++i) {
			if (a[minn1] > a[i])
				minn1 = i;
			if (a[minn2] >= a[i])
				minn2 = i;
		}
		minn3 = minn2;
		for (int i = minn2 + 1; i < n; ++i) {
			if (a[minn3] >= a[i])
				minn3 = i;
		}
		if (minn3 != minn2) {
			for (int i = 0; i <= minn1; ++i) {
				ans[minn1 - i] = a[i];
			}
			temp = minn1 +1;
		}
		else {
			for (int i = 0; i <= minn2; ++i) {
				ans[minn2 - i] = a[i];
			}
			temp = minn2 + 1;
		}
		minn1 = temp;
		minn2 = temp;
		for (int i = temp+1; i < n - 2; ++i) {
			if (a[minn1] > a[i])
				minn1 = i;
			if (a[minn2] >= a[i])
				minn2 = i;
		}
		minn3 = minn2;
		for (int i = minn2 + 1; i < n; ++i) {
			if (a[minn3] >= a[i])
				minn3 = i;
		}
		if (minn3 != minn2) {
			for (int i = temp; i <= minn1; ++i) {
				ans[minn1 - i+temp] = a[i];
			}
			temp = minn1 + 1;
		}
		else {
			for (int i = temp; i <= minn2; ++i) {
				ans[minn2 - i+temp] = a[i];
			}
			temp = minn2 + 1;
		}
		minn1 = temp;
		minn2 = temp;
		for (int i = temp + 1; i < n - 1; ++i) {
			if (a[minn1] > a[i])
				minn1 = i;
			if (a[minn2] >= a[i])
				minn2 = i;
		}
		minn3 = minn2;
		for (int i = minn2 + 1; i < n; ++i) {
			if (a[minn3] >= a[i])
				minn3 = i;
		}
		if (minn3 != minn2) {
			for (int i = temp; i <= minn1; ++i) {
				ans[minn1 - i+temp] = a[i];
			}
			temp = minn1 + 1;
		}
		else {
			for (int i = temp; i <= minn2; ++i) {
				ans[minn2 - i+temp] = a[i];
			}
			temp = minn2 + 1;
		}
		for (int i = temp; i < n; ++i) {
			ans[n - i + temp-1] = a[i];
		}
		for (int i = 0; i < n; ++i)
			cout << ans[i] << ' ';
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
#include <cmath>
#include <vector>
#include <iomanip>
#include <map>
#include <bitset>
#include <queue>
#include <ctime>
#define MAXN 1000
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define ll long long
#define ull unsigned long long
#define Clear(a) memset((a),0,sizeof((a)))
#define MAXIMIZE(a) memset((a),inf,sizeof(a));
#define lowbit(x) ((x)&(-x))
using namespace std;

struct {
	ll a, b;
}a[MAXN];

ll b[1 << 20];
ll *e1, *e2;
ll n, n1, n2;
ll x, y;

int main() {
	ll t;
	scanf("%lld", &t);
	while (t--) {
		scanf("%lld%lld%lld", &n, &x, &y);
		for (int i = 0; i < n; ++i)
			scanf("%lld%lld", &a[i].a, &a[i].b);
		n1 = n / 2;
		n2 = n - n1;
		ll m1 = 1 << n1;
		ll m2 = 1 << n2;
		for (int i = 0; i < m1; ++i) {
			ll sum = 0;
			for (int j = 0; j < n1; ++j) {
				if ((i >> j) & 1) {
					sum += a[j].a*y - a[j].b*x;
				}
			}
			//cout << "s";
			b[i] = sum;
		}
		sort(b, b + m1);
		ll ans = 0;
		for (int i = 0; i < m2; ++i) {
			ll sum = 0;
			for (int j = 0; j < n2; ++j) {
				if ((i >> j) & 1) {
					sum += a[j+n1].b*x - a[j+n1].a*y;
				}
			}
			e1 = lower_bound(b, b + m1, sum);
			e2 = upper_bound(b, b + m1, sum);
			if (*e1 == sum) {
				ans += e2 - e1;
			}
		}
		printf("%lld\n", ans-1);//the reason why need to sub 1 is that there a situation that all is zero
	}
	return 0;
}*///“景驰科技杯”2018年华南理工大学程序设计竞赛 K
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
#define MAXN 300100
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3f
#define ll long long
#define ull unsigned long long
#define Clear(a) memset((a),0,sizeof((a)))
#define MAXIMIZE(a) memset((a),inf,sizeof(a));
#define lowbit(x) ((x)&(-x))
using namespace std;

int nextn[MAXN];
void GetNextval(string& p)
{
	int pLen = p.size();
	nextn[0] = -1;
	int k = -1;
	int j = 0;
	while (j < pLen)
	{
		//p[k]表示前缀，p[j]表示后缀    
		if (k == -1 || p[j] == p[k])
		{
			++j;
			++k;
			//较之前next数组求法，改动在下面4行  
			if (p[j] != p[k])
				nextn[j] = k;   //之前只有这一行  
			else
				//因为不能出现p[j] = p[ next[j ]]，所以当出现时需要继续递归，k = next[k] = next[next[k]]  
				nextn[j] = nextn[k];
		}
		else
		{
			k = nextn[k];
		}
	}
}
int KmpSearch(string&s,string&p)
{
	int i = 0;
	int j = 0;
	int sLen = s.size();
	int pLen = p.size();
	int ans = 0;
	while (i < sLen)
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
			//ans = max(j, ans);	
			j = nextn[j];
		}
	}
	if(i==sLen)
	ans = max(j, ans);
	return ans;
}
vector<string> str;
char temp[MAXN];
int main() {
	int n, q;
	while (scanf("%d", &n) != EOF) {
		
		for (int i = 0; i < n; ++i) {
			scanf("%s", temp);
			str.push_back(temp);
			str[i].shrink_to_fit();
		}
		scanf("%d", &q);
		while (q--) {
			int l, r;
			scanf("%d%d", &l, &r);
			if (l != r) {
				GetNextval(str[r - 1]);
				printf("%d\n", KmpSearch(str[l - 1], str[r - 1]));
			}
			else printf("%d\n", str[l - 1].size());
		}
		str.clear();
	}
	return 0;
}*///“景驰科技杯”2018年华南理工大学程序设计竞赛 E