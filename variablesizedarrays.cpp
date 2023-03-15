#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector<vector<int>> arr;
    
    int n, q, k, i, j, value;
    cin >> n >> q;
    
    while(n)
    {
        cin>>k;
        vector<int>v;
        for(int i=0;i<k;i++){
            cin>>value;
            v.push_back(value);
        }
        arr.push_back(v);
        n--;
    }
    
    while(q)
    {
        cin >> i >> j;
        cout << arr[i][j] << endl;
        q--;
    }
    
    return 0;
}
   
