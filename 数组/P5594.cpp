//机房排布 技巧：先读j再读i
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

int n, m, k, vis[1004]={0}, a[1004][1004];

int main() {
	scanf("%d%d%d", &n, &m, &k);
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= m; j++)
			scanf("%d", &a[i][j]);

	for(int j = 1; j <= m; j++) {
		for(int i = 1; i <= n; i++) {
			if(i!=vis[a[i][j]]) {
				vis[a[i][j]]+=1;
			}
		}
	}
	for(int i = 1; i <= k; i++)
		printf("%d ", vis[i]);
	return 0;
}