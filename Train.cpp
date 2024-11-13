#include <iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string text, regex;
	cin >> text >> regex;
	int asterisk = regex.find("*");
	string pre = regex.substr(0, asterisk),
		suff = regex.substr(asterisk + 1, regex.length() - asterisk - 1);
	int preInd = text.find(pre), suffInd = text.rfind(suff);
	if (preInd==-1||suffInd==-1||text.length()<regex.length()-1)
		cout << -1;
	else
		cout << suffInd - preInd + suff.length();
}
