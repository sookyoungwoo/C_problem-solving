#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<vector<int> > v) {
    vector<int> ans;
    int i,k,p,j;
    cin>>v[0][0];
    cin>>v[0][1];
    cin>>v[1][0];
    cin>>v[1][1];
    cin>>v[2][0];
    cin>>v[2][1];
    if(v[0][0]==v[1][0])
        ans.push_back(v[2][0]);
    if(v[0][0]==v[2][0])
        ans.push_back(v[1][0]);
    if(v[1][0]==v[2][0])
        ans.push_back(v[0][0]);
 
    
    if(v[0][1]==v[1][1])
        ans.push_back(v[2][1]);
    if(v[0][1]==v[2][1])
        ans.push_back(v[1][1]);
    if(v[1][1]==v[2][1])
       ans.push_back(v[0][1]);  
    
    return ans;
}
