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
void addEdge(vector<pair<int,int>>graph[],int u,int v,int weight){
   graph[u].emplace_back(make_pair(v,weight));
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
      //  Array of vectors, every vector represents
      //  Adjacency list of a vector
     vector<pair<int,int>> graph[V];
     addEdge(graph,0,1,1);
     addEdge(graph,0,4,5);
     addEdge(graph,1,1,2);
     addEdge(graph,1,2,3);
     addEdge(graph,1,3,4);
     addEdge(graph,1,4,2);
     addEdge(graph,3,2,2);
     addEdge(graph,3,4,3);
     
     cout<<"Adjacent List: "<<endl; 
     for(int i=0;i<V;i++){
      cout<<i;
      for(int j=0;j<graph[i].size();j++){
         cout<<"-> "<<graph[i][j].first<<","<<graph[i][j].second<<" ";
      }
     cout<<endl;
  }
}
	return 0;
}