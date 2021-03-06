#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;
const int inf=1e9+3;
#define all(x) (x).begin(),(x).end()
#define sync() {ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);} //do not use
int n,m;
vector<int> e[100003];
int p[100003][20],d[100003];
void tmake(int cur,int prev, int lv){
	p[cur][0]=prev;
	d[cur]=lv;
	for(int nxt : e[cur])if(nxt!=prev){
		tmake(nxt,cur,lv+1);
	}
	return;
}
int main()
{
	int a,b,i,j;
    cin>>n;
    for(int i=1;i<n;i++){
    	cin>>a>>b;
    	e[a].push_back(b);
    	e[b].push_back(a);
    }
    tmake(1,1,0);
    for(int j=1;j<20;j++){
    	for(int i=1;i<=n;i++){
    		p[i][j]=p[p[i][j-1]][j-1];
    	}
    }
    cin>>m;
    int ans;
    for(int i=1;i<=m;i++){
    	cin>>a>>b;
    	if(d[a]>d[b]) swap(a,b);
    	for(j=19;j>=0;j--) if(d[b]-(1<<j)>=d[a]) b=p[b][i];
    	if(a==b){cout<<a<<"\n"; continue;}
    	for(j=19;j>=0;j--){
            if(p[a][j]!=p[b][j]) a=p[a][j],b=p[b][j];
    	}
    	cout<<p[a][0]<<'\n';
    }
    return 0;
}
