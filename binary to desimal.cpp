#include<iostream>

using namespace std;
int main(){
    int n,base=1,r,de=0;
    cin>>n;
    
    while(n>0){
        
        r=n%10;
        de=de+r*base;
        n/=10;
        base=base*2;
    }
    cout<<de<<endl;
    return 0;
}
