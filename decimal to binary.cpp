#include<iostream>

using namespace std;
int main(){
    int n,c,r;
    cin>>n;
    
    while(n>0){
        
        r=n%2;
        cout<<r;
        n/=2;
    }
    return 0;
}
