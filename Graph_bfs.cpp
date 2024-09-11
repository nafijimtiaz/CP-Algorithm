#include<bits/stdc++.h>
#define ll  long long int
#define NA()                              \
          ios_base::sync_with_stdio(false);\
          cin.tie(NULL);cout.tie(NULL);     \



using namespace std;

const int N=1e5+2;
bool vis[N];
vector<int>adj[N];

int main(){

   NA();


   for(int i=0;i<N;i++)
    vis[i]=0;

   int n,m;
   cin>>n>>m;

   for(int i=0;i<n;i++)
   {
       int x,y;
       cin>>x>>y;

       adj[x].push_back(y);
       adj[y].push_back(x);
   }


   queue<int>q;


   q.push(1);
   vis[1]=1;

   while(!q.empty())
   {
       int node=q.front();
       q.pop();


        cout<<node<<endl;


       for(auto it :adj[node])
       {
           if(!vis[it])
           {
               vis[it]=1;
               q.push(it);
           }
       }
   }



}

