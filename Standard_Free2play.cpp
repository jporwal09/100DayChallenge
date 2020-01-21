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
 
	int q;
	cin>>q;
	for(int i =0;i<q;i++){
		int h, n;
		cin>>h>>n;
		vector < int > v1(n+4);
		int c1 = 0;
		for(int j =0;j<n;j++){
			cin>>v1[j];
			if(j == 0 && v1[j] != h){
				c1++;
				v1[j+1] = v1[j];
				v1[j] = h;
				j++;
				n++;
			}
		}
		int j =0;
		while(j<n){
			if(v1[j]>1 && v1[j+1] - v1[j] == -1){
				if(v1[j+2] - v1[j+1] == -1){
					j += 2;
				}
				else{
					c1++;
					j++;
					v1[j] = v1[j]-1;
				}
			}
			else if(v1[j]>1){
				v1[j] = v1[j+1] + 1;
			}
			else{
				break;
			}
		}
		cout<<c1<<'\n';
	}		
	
	return 0;
}
