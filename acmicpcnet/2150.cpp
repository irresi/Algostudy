#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;
const int inf=1e9+3;
#define all(x) (x).begin(),(x).end()
#define sync() {ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);} //do not use
int n,m,cnt;
vector<int> ed[10003],red[10003],chk(10003);
vector<vector<int>> ans(10003);
stack<int> st;
void dfs(int num){
	chk[num]=1;
	for(int nxt : ed[num])if(!chk[nxt]){
		dfs(nxt);
	}
	st.push(num);
}
void rdfs(int num){
	chk[num]=0;
	ans[cnt].push_back(num);
	for(int nxt : red[num])if(chk[nxt]){
		rdfs(nxt);
	}
}
int main()
{
	int i,j,a,b;
    cin>>n>>m;
    for(i=1;i<=m;i++){
    	cin>>a>>b;
    	ed[a].push_back(b);
    	red[b].push_back(a);
    }
    for(i=1;i<=n;i++)if(!chk[i]){
    	dfs(i);
    }
    while(!st.empty()){
    	if(chk[st.top()]){
    		++cnt; rdfs(st.top());
    	}
    	st.pop();
    }
    cout<<cnt<<'\n';
    for(i=1;i<=cnt;i++)	sort(all(ans[i]));
    sort(ans.begin()+1,ans.begin()+1+cnt);
    for(i=1;i<=cnt;i++){
    	for(int num : ans[i]) cout<<num<<' ';
    	cout<<"-1\n";
    }
    return 0;
}
