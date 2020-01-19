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

int n, di, dl, dr;
vector < int > v;

void up(int &dd, int i){
	if(v[i] == 1){
		dd++;
	}
	else{
		dd--;
	}
}

void down(int &dd, int i){
	if(v[i] == 1){
		dd--;
	}
	else{
		dd++;
	}
}

int main(){
	#ifndef ONLINE_JUDGE
			freopen("input.txt", "r", stdin);
			freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;
	while(t--){
		map < int, int > drr;
		n = 0;
		di = 0;
		dl = 0;
		dr = 0;
		cin>>n;
		v.assign(2*n, 0);
		for(int i =0;i<2*n;i++){
			cin>>v[i];
			up(di, i);
			if(i<n)
				up(dl, i);
			if(i>=n)
				up(dr, i);
		}
		drr[dr] = 0;
		for(int i = n;i<2*n;i++){
			down(dr, i);
			if(drr.find(dr) == drr.end()){
				drr[dr] = i-n+1;
			}
		}
		int ans = INF;
		if(drr.find(-dl) != drr.end()){
			ans = min(ans, drr[-dl]);
		}
		for(int i = n-1;i>=0;i--){
			down(dl, i);
			if(drr.find(-dl) != drr.end()){
				ans = min(ans, n-i+drr[-dl]);
			}
		}
		cout<<ans<<'\n';
	}		
	
	return 0;
}
