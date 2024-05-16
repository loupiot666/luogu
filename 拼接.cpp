#include<bits/stdc++.h>
using namespace std;
string s[25];
int n;
int main(){
	cin >> n;
	for (int i = 1; i <= n;i++)
		cin >> s[i];
	for (int i = 1; i <= n;i++)
		for (int j = 1; j <= n;j++){
			string a, b;
			a = s[i], b = s[j];
			if(s[i]>s[j])//str.size()
				swap(s[i], s[j]);
		}
	for (int i = 1; i <= n;i++)
		cout << s[i];
}