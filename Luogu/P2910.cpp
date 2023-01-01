#include<bits/stdc++.h>
using std::cin;
using std::cout;
const char endl='\n';
const int N=105,M=10005;
int min(int a,int b){return a<b?a:b;}
int n,m,ans,dis[N][N],a[M];
int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr),cout.tie(nullptr);
    cin>>n>>m;
    for(int i=1;i<=m;++i)cin>>a[i];
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            cin>>dis[i][j];
        }
    }
    for(int k=1;k<=n;++k){
        for(int i=1;i<=n;++i){
            for(int j=1;j<=n;++j){
                dis[i][j]=min(dis[i][k]+dis[k][j],dis[i][j]);
            }
        }
    }
    for(int i=2;i<=m;++i){
        ans+=dis[a[i-1]][a[i]];
    }
    cout<<ans<<endl;
    return 0;
}