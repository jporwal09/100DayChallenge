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
 
int main(){
	#ifndef ONLINE_JUDGE
			freopen("input.txt", "r", stdin);
			freopen("output.txt", "w", stdout);
	#endif
 
	int n;
	cin>>n;
	vector < vector < int > > v(n, vector < int > (4, 0));
	for(int i =0;i<n;i++){
		cin>>v[i][0]>>v[i][1]>>v[i][2];
		v[i][3] = i;
	}
	while(!v.empty()){
		int sz = v.size();
		int a = v[sz-1][0];
		int b = v[sz-1][1];
		int c = v[sz-1][2];
		int d = v[sz-1][3];
		v.pop_back();
		int id;
		ll dist = 1e10;
		for(int i =0;i<(int)v.size();i++){
			int a1 = v[i][0];
			int b1 = v[i][1];
			int c1 = v[i][2];
			int d1 = v[i][3];
			ll dd = abs(a1-a);
			dd += abs(b1-b);
			dd += abs(c1-c);
			if(dd<dist){
				dist = dd;
				id = i;
			}
		}
		cout<<d+1<<' '<<v[id][3]+1<<'\n';
		v.erase(v.begin()+id);
	}
	
	return 0;
}
