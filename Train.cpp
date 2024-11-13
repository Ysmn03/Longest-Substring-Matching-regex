#include <iostream>
#include<map>
#include<string>
#include<stack>
#include<set>
#include <algorithm>
#include<cmath>
#include <vector>
#include<queue>
#include <iterator>
#include<fstream>
#include<numeric>
#include<list>
#include<cstring>
#include<cstdio>
using namespace std;
#define ll long long
#define ull unsigned long long
#define YES printf("YES\n")
#define NO printf("NO\n")

const int N = 1e6 + 1, MOD = 1e9 + 7;
char str[N], freq[N];
int dp[N];

vector<ll>chr(26);

ull fastPower(ull base, ull exp) {
	ull result = 1;
	while (exp > 0) {
		if (exp % 2 == 1) {
			result = (result * base);
		}
		base = (base * base);
		exp /= 2;
	}
	return (result);
}

bool isPowerOf2(ll n)
{
	return n > 0 && (n & (n - 1)) == 0;
}

void Hashing()
{
	chr[0] = 1;
	for (int i = 1; i < 26; ++i)
		chr[i] = (i * fastPower(31, i) + chr[i - 1]);
}

string intToBinary(ll n) {
	if (n == 0) return "0";

	string binary = "";
	while (n > 0) {
		binary = (n % 2 == 0 ? "0" : "1") + binary;
		n /= 2;
	}
	return binary;
}

int main() {
	/*ios::sync_with_stdio(false);
	cin.tie(0);*/
	string text = "bcd", regex = "*da";
	//cin >> text >> regex;
	int asterisk = regex.find("*");
	string pre = regex.substr(0, asterisk),
		suff = regex.substr(asterisk + 1, regex.length() - asterisk - 1);
	int preInd = text.find(pre), suffInd = text.rfind(suff);
	if (preInd==-1||suffInd==-1||text.length()<regex.length()-1)
		cout << -1;
	else
		cout << suffInd - preInd + suff.length();
}
