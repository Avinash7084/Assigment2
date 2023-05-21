#include<iostream>
using namespace std;
int main(){
    
    long long i,a[10],size,sum=0;
    int n;
    cin>>n;
    for( i=0; i<n; i++){
        cin>>a[i];
    }
    for( i=0; i<n; i++){
        sum=a[i]+sum;
    }
    cout<<sum<<endl;
    return 0;
}
