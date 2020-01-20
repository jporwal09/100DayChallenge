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

vector < int > freq;
vector < int > visi;
vector < vector < int > > v;
vector < int > res;
int n;

int main(){
	#ifndef ONLINE_JUDGE
			freopen("input.txt", "r", stdin);
			freopen("output.txt", "w", stdout);
	#endif

	cin>>n;
	freq.assign(n+1, 0);
	visi.assign(n+1, 0);
	v.assign(n+1, {});
	for(int i =0;i<n-2;i++){
		int a, b, c;
		cin>>a>>b>>c;
		freq[a]++;
		freq[b]++;
		freq[c]++;
		v[a].PB(b);
		v[a].PB(c);
		v[b].PB(c);
		v[b].PB(a);
		v[c].PB(a);
		v[c].PB(b);
	}
	int id;
	for(int i =1;i<n+1;i++){
		if(freq[i] == 1){
			id = i;
			break;
		}
	}
	visi[id]++;
	res.PB(id);
	int as;
	for(int i =0;i<2;i++){
		int a = v[id][i];
		if(freq[a] == 2){
			res.PB(a);
		}
		else{
			as = a;
		}
		visi[a]++;
	}
	res.PB(as);
	int aa = 1;
	while(aa<n-2){
		id = res[aa];
		visi[id]++;
		int sz = v[id].size();
		for(int i =0;i<sz;i++){
			int a = v[id][i];
			if(visi[a] == 0){
				res.PB(a);
			}
			visi[a]++;
		}
		aa++;
	}
	for(int i =0;i<n;i++){
		cout<<res[i]<<' ';
	}
	
	return 0;
}
