#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(void) {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, q, q1, q2, val;
    vector <int> v;
    cin >> n;
   
    for(int i = 0; i < n; i++)
    {
        cin >> val;
        v.push_back(val);
    }    
   
    cin >> q;
    cin >> q1 >> q2;
   
    v.erase(v.begin() + q - 1);
    v.erase(v.begin() + q1 - 1, v.begin() + q2 - 1);
   
    cout << v.size() << endl;
    for(int j = 0; j < v.size(); j++)
        cout << v[j] << " ";
    return 0;
}
