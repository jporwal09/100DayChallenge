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
 
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s, t;
		cin>>s>>t;
		map < char, int > m1;
		for(int i =0;i<n;i++){
			m1[s[i]]++;
			m1[t[i]]++;
		}
		bool b1 = 1;
		for(auto it : m1){
			if(it.S%2){
				b1 = 0;
				break;
			}
		}
		if(b1 == 0){
			cout<<"no\n";
			continue;
		}
		vector < pair < int, int > > ans;
		for(int i =0;i<n;i++){
			if(s[i] == t[i])
				continue;
			bool b2 = 1;
			for(int j = i+1;j<n;j++){
				if(s[i] == s[j]){
					b2 = 0;
					swap(s[j], t[i]);
					ans.PB(pair < int, int > (j+1, i+1));
					break;
				}
			}
			if(b2){
				for(int j = i+1;j<n;j++){
					if(s[i] == t[j]){
						swap(s[j], t[j]);
						ans.PB(pair < int, int > (j+1, j+1));
						swap(s[j], t[i]);
						ans.PB(pair < int, int > (j+1, i+1));
						break;
					}
				}
			}
		}
		cout<<"yes\n";
		int sz = ans.size();
		cout<<sz<<"\n";
		for(int i =0;i<sz;i++){
			cout<<ans[i].F<<' '<<ans[i].S<<'\n';
		}
	}		
	
	return 0;
}
