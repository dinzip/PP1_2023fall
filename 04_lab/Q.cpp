#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; i++) cout << string(n-i, '.') + string(i*2-1, '*') + string(n-i, '.') + "\n";
}