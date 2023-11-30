#include <iostream>
#include <vector>

using namespace std;

// krusal method
void krusal(){
  int vNum, total = 0;
  cin >> vNum;
  vector<pair<int, int>> edges(0);
  vector<vector<int>> setChild(vNum);
  vector<int> weights(0);
  vector<int> vSet(vNum);
  for(int i=0; i<vNum; i++){
    vSet[i] = i;
    setChild[i].push_back(i);
  }
  for(int i=0; i<vNum-1; i++){
    for(int j=i+1; j<vNum; j++){
      int x;
      cin >> x;
      weights.push_back(x);
      edges.push_back({i, j});
    }
  }
  //find minimum edges
  for(int i=0; i<vNum-1; i++){
    int minedge = 0x7fffffff;
    int index = -1;
    for(int j=0; j<edges.size(); j++){
      if(vSet[edges[j].first] != vSet[edges[j].second]
      && weights[j] < minedge){
        minedge = weights[j];
        index = j;
      }
    }
    //add edges
    total += weights[index];
    for(int x : setChild[vSet[edges[index].first]]){
      setChild[vSet[edges[index].second]].push_back(x);
      vSet[x] = vSet[edges[index].second];
    }
  }
  cout << total;
}

// prim method
void prim(){
  int vNum, total = 0;
  cin >> vNum;
  vector<vector<pair<int, int>>> edges(vNum);
  vector<int> nodeCost(vNum, 0);
  nodeCost[0] = 0x7fffffff;
  for(int i=0; i<vNum-1; i++){
    for(int j=i+1; j<vNum; j++){
      int x;
      cin >> x;
      edges[i].push_back({j, x});
      edges[j].push_back({i, x});
    }
  }
  //start with an arbitary node
  for(pair<int, int> pair : edges[0]){
    nodeCost[pair.first] = pair.second;
  }
  //find minimum node
  for(int i=0; i<vNum-1; i++){
    int minnode = 0x7fffffff, index = -1;
    for(int j=0; j<vNum; j++){
      if(nodeCost[j] < minnode){
        minnode = nodeCost[j];
        index = j;
      }
    }
    //add node
    total += minnode;
    nodeCost[index] = 0x7fffffff;
    for(pair<int, int> pair : edges[index]){
      if(nodeCost[pair.first] != 0x7fffffff
      && pair.second < nodeCost[pair.first]){
        nodeCost[pair.first] = pair.second;
      }
    }
  }
  cout << total;
}

int main(){
  prim();
}
