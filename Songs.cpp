#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <iomanip>
#define MAXN 0x1001B
using namespace std;

struct song{
	int id;
	double len;
	double fre;
};

song a[MAXN];

bool cmp(song b,song c){
	return b.len/b.fre < c.len /c.fre;
}

int main()
{
	int n,m;
	while(cin >> n){
		for(int i = 0; i < n; i ++){
			cin >> a[i].id >> a[i].len >> a[i].fre;
		}
		cin >> m;
		sort(a,a+n,cmp);
		cout << a[m - 1].id << endl;
	}
	return 0;
}
