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

int main(){
	#ifndef ONLINE_JUDGE
			freopen("input.txt", "r", stdin);
			freopen("output.txt", "w", stdout);
	#endif

	cin>>n>>q;
	map < int, bool > mp1, mp2, mp3;
	vector < vector < int > > v(3, vector < int >(n+1));
	int r, c;
	for(int i =0;i<q;i++){
		cin>>r>>c;
		v[r][c] = 1 - v[r][c];
		if(v[r][c] == 1){
			if(r == 1){
				if(v[2][c])	mp1[c] = true;
				if(c<n and v[2][c+1])	mp2[c] = true;
				if(c>1 and v[2][c-1]) 	mp3[c] = true;
			}
			if(r == 2){
				if(v[1][c]) mp1[c] = true;
				if(c>1 and v[1][c-1])	mp2[c-1] = true;
				if(c<n and v[1][c+1])	mp3[c+1] = true;
			}
		}
		if(v[r][c] == 0){
			if(r == 1){
				if(v[2][c])	mp1.erase(c);
				if(c<n and v[2][c+1])	mp2.erase(c);
				if(c>1 and v[2][c-1]) 	mp3.erase(c);
			}
			if(r == 2){
				if(v[1][c]) mp1.erase(c);
				if(c>1 and v[1][c-1])	mp2.erase(c-1);
				if(c<n and v[1][c+1])	mp3.erase(c+1);
			}
		}
		if(mp1.size() == 0 and mp2.size() == 0 and mp3.size() == 0){
			cout<<"Yes\n";
		}
		else{
			cout<<"No\n";
		}
	}
	
	return 0;
}
