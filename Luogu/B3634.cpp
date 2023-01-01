#include<bits/stdc++.h>
#define ll long long
using std::cin;
using std::cout;
const char endl='\n';
ll gcd(ll a,ll b){
    while((a%=b)&&(b%=a));
    return a+b;
}
ll a,b;
int main(){
    std::ios::sync_with_stdio(0);
    cin.tie(nullptr),cout.tie(nullptr);
    cin>>a>>b;
    ll g=gcd(a,b);
    cout<<g<<' '<<a*b/g<<endl;
    return 0;
}