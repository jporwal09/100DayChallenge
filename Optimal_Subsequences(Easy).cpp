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

bool cmp(pair < int, int > a, pair < int, int > b){
	if(a.F > b.F){
		return true;
	}
	else if(a.F == b.F and a.S < b.S){
		return true;
	}
	return false;
}

bool cmp2(pair < int, int > a, pair < int, int > b){
	if(a.S < b.S){
		return true;
	}
	return false;
}

int main(){
	#ifndef ONLINE_JUDGE
			freopen("input.txt", "r", stdin);
			freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;
	vector < pair < int, int > > v1(n, {0, 0});
	for(int i =0;i<n;i++){
		cin>>v1[i].F;
		v1[i].S = i;
	}
	sort(v1.begin(), v1.end(), cmp);
	int m;
	cin>>m;
	for(int ii =0;ii<m;ii++){
		int a, b;
		cin>>a>>b;
		b--;
		sort(v1.begin(), v1.begin()+a, cmp2);
		cout<<((v1.begin() + b)->F)<<'\n';
		sort(v1.begin(), v1.begin()+a, cmp);
	}
	
	return 0;
}
