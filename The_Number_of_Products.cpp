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

	ll n;
	cin>>n;
	vector < int > v1(n);
	for(int i =0;i<n;i++){
		cin>>v1[i];
	}		
	ll bal = 0, c1 = 0, c2 = 0, ap = 0;
	for(int i =0;i<n;i++){
		if(v1[i] == 0){
			c1 = c2 = bal = 0;
			continue;
		}
		if(bal%2 == 1){
			c1++;
		}
		else{
			c2++;
		}
		if(v1[i]<0)
			bal++;
		if(bal%2 == 1){
			ap += c1;
		}
		else{
			ap += c2;
		}
	}
	cout<<(n*(n+1))/2 - ap<<' '<<ap<<'\n';
	
	return 0;
}
