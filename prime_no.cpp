#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(n%i==0)cnt++;
    }
    if(cnt>2)cout<<"composite";
    else cout<<"prime";
    return 0;
}