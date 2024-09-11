#include<bits/stdc++.h>
#define ll  long long int
#define NA()                              \
          ios_base::sync_with_stdio(false);\
          cin.tie(NULL);cout.tie(NULL);     \


const ll mod=1e9 +7;
const int N=2e5+10;

using namespace std;
vector<int>adj[N];
bool vis[N],vis1[N];
const int lm=100000;
int ans=0;
int df=0;

void dfs(int df,int x)
{
    if(vis[x])
        return;
    ans++;

    if(ans==lm)
        return;
    vis[x]=1;

    for(auto it: adj[x])
    {
        dfs(df,it);
    }

    vis[x]=0;
}
int main(){

   NA();


      for(int i=0;i<=N;i++)
        vis[i]=0;

      int n,m;
      cin>>n>>m;

      while(m--)
      {
          int x,y;
          cin>>x>>y;

          adj[x].push_back(y);
          adj[y].push_back(x);
      }

      dfs(df,1);
      cout<<ans<<endl;


}

