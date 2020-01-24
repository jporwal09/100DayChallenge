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

    int q, x;
    cin>>q>>x;
    vector < int > occ(x, 0);
    set < pair < int, int > > otop;
    for(int i =0;i<x;i++){
        otop.insert(pair < int, int > (0, i));
    }
    for(int ii =0;ii<q;ii++){
        int a;
        cin>>a;
        a = a%x;
        int o = occ[a];
        occ[a] += 1;
        otop.erase(pair < int, int >(o, a));
        otop.insert(pair < int, int >(occ[a], a));
        pair < int, int > ans = *(otop.begin());
        int ca = ans.S + ans.F * x;
        cout<<ca<<'\n';
    }       
    
    return 0;
}
