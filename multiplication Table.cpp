/* It's a shot in the dark
 				But I will make it */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int inf=1000000000;

bool cmp(pair<int,int> a, pair<int,int> b){
	return a.second<b.second;
}
ll n ,m ,k;

bool ck(ll mid){
	ll cnt =0;
	for(int i=1;i<=n;i++){
		cnt+=min(m,mid/i);
	}
	return cnt<k;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
 	cin >>n>>m>>k;
	ll l =1, h = n*m;
    while(l<h){
    	ll mid= (l+h)/2;
    	
    	if(ck(mid)){
    		l = mid+1;
		}
		else{
		 h =mid;
		}
	}
	
	cout <<l<<"\n";
}

