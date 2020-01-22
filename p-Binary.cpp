#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define llu unsigned long long
#define PB push_back
#define F first
#define S second
#define ck(a) cout<<a<<"@@\n"
#define ct(a) for(auto u:a){ cout<<u<<' '; } cout<<"\n"
#define INF 1000000007
#define MOD 1000000007

string gh = "here";

int n, p;

int main(){
	#ifndef ONLINE_JUDGE
			freopen("input.txt", "r", stdin);
			freopen("output.txt", "w", stdout);
	#endif

	cin>>n>>p;
	n -= p;
	int a = 1;
	while(n >=a && a<32){
		if(__builtin_popcount(n) <= a){
			cout<<a<<'\n';
			return 0;
		}
		a++;
		n -= p;
	}
	cout<<-1<<'\n';
	
	return 0;
}
