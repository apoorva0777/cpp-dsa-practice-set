#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,y;
    cin>>n>>y;
    int sum=0;
    for(int i=n;i<=y;i++){
        sum+=i;
    }
    cout<<sum;
}