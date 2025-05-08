#include<iostream>
using namespace std;

bool isprime(int x){
    int cnt=0;
    for(int i=1;i<=x;i++){
        if(x%i==0)cnt++;
    }
    if(cnt>2)return false;
    else return true;
}

int main(){
    int n,y;
    cin>>n>>y;
    for(int x=n;x<=y;x++){
        if(isprime(x)){
            cout<<x<<" ";
        }
    }
    return 0;
}