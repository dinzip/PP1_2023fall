#include <iostream>
using namespace std;
int main(){
    int n, tp, sum=0; cin>>n;
    for(int i=0; i<n; i++){
        cin>>tp; sum+=tp;
    }
    cout<<sum;
}