#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k, sum=0;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    set<int> s(a.begin(), a.end());
    for(int i:s) sum+=i;
    cout<<sum;
}