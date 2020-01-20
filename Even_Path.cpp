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

int n, q;
vector < int > v1;
vector < int > v2;

int main(){
	#ifndef ONLINE_JUDGE
			freopen("input.txt", "r", stdin);
			freopen("output.txt", "w", stdout);
	#endif

	cin>>n>>q;
	int c1;
	v1.assign(n+1, 0);
	v2.assign(n+1, 0);
	for(int i =1;i<=n;i++){
		int a;
		cin>>a;
		if(i == 1){
			c1 = (a%2);
			v1[1] = 1;
		}
		if(i>1 && (a%2) != c1){
			v1[i] = v1[i-1]+1;
			c1 = (a%2);
		}
		else if(i>1){
			v1[i] = v1[i-1];
		}
	}
	for(int i =1;i<=n;i++){
		int a;
		cin>>a;
		if(i == 1){
			c1 = (a%2);
			v2[i] = 1;
		}
		if(i>1 && (a%2) != c1){
			v2[i] = v2[i-1]+1;
			c1 = (a%2);
		}
		else if(i>1){
			v2[i] = v2[i-1];
		}
	}
	for(int i =0;i<q;i++){
		int a, b, c, d;
		cin>>a>>b>>c>>d;
		if(v1[a] == v1[c] && v2[b] == v2[d]){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}

	return 0;
}
