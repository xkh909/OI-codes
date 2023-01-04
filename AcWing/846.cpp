#include<bits/stdc++.h>
using std::cin;
using std::cout;
const char endl='\n';
const int N=1e5+5,M=2e5+5;
int max(int a,int b){return a>b?a:b;}
int min(int a,int b){return a<b?a:b;}
int n,h[N],e[M],ne[M],idx,ans=2e9;
bool st[N];
void add(int a,int b){
    e[idx]=b,ne[idx]=h[a],h[a]=idx++;
}
int dfs(int u){
    st[u]=true;
    int sum=1,res=0;
    for(int i=h[u];i!=-1;i=ne[i]){
        int j=e[i];
        if(!st[j]){
            int s=dfs(j);
            res=max(res,s);
            sum+=s;
        }
    }
    res=max(res,n-sum);
    ans=min(ans,res);
    return sum;
}
int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr),cout.tie(nullptr);
    memset(h,-1,sizeof h);
    cin>>n;
    for(int i=0;i<n-1;++i){
        int u,v;cin>>u>>v;
        add(u,v),add(v,u);
    }
    dfs(1);
    cout<<ans<<endl;
    return 0;
}