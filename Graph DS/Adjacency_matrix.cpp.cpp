#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<math.h>
#include<unordered_set>
#include<set>
#include<unordered_map>
using namespace std;
#define ll long long int
#define V 5
void addEdge(int graph[][V],int u,int v){
   graph[u][v]=1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
     int graph[V][V]={0};
     addEdge(graph,0,1);
     addEdge(graph,0,4);
     addEdge(graph,1,1);
     addEdge(graph,1,2);
     addEdge(graph,1,3);
     addEdge(graph,1,4);
     addEdge(graph,3,2);
     addEdge(graph,3,4);
     
     cout<<"Adjacent Matrix: "<<endl; 
     for(int i=0;i<V;i++){
      for(int j=0;j<V;j++){
         cout<<graph[i][j]<<" ";
      }
     cout<<endl;
  }
}
	return 0;
}