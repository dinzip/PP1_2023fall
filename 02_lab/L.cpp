#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=0; (1<<i) <= n; i++) cout << (1<<i) << ' ';
}