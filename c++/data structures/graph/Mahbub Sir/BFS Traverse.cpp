#include <stdlib.h>
#include <stdio.h>
#include <queue>
#include <iostream>
using namespace std;

int visited[5] = {0};    //n is no of vertices and graph is sorted in array G[10][10]
int a[5][5] = {{0, 0, 1,0,0}, {0,0,1,0,1}, { 0,1,0,0,1} , {1,1,0,0,1}, {1,1,0,1,0}};
void bfs(int v, int w);


int main()
{
int v;
cout <<"The adjacency matrix shown as" <<endl;

for(int i=0;i<5;i++)
{
for(int j=0;j<5;j++)
{
    cout << a[i][j] << ", ";
}
cout << endl;
}
 cout <<"Enter the starting node for Breadth First  First search" << endl;
 cin >> v;
  cout <<"Enter the destination  node for Breadth First search" << endl;
 int w;
 cin >> w;

bfs(v, w);
return 0;

}

void bfs(int v, int w)
{

std::queue <int> Q;
Q.push(v);
while(!Q.empty())
    {
  int node = Q.front();
  Q.pop();
   cout << node << "->";
            if (node == w)
                break;

            for(int i=4;i>=0;i--)
                {
                    if(a[node][i]==1 && visited[i]==0)
                        {
                            visited[i]==1;
                        // Enqueue all the unvisited neighbours in the Queue
                            Q.push(i);
                        }
                }


    }