#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%400==0)cout<<"leap year";
    else if(n%4==0&&n%100!=0)cout<<"leap year";
    else cout<<"not a leap year";
    return 0;
}