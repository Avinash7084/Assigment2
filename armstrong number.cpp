#include<iostream>
#include<math.h>
using namespace std;
int main(){
    
    int arm,i,r,n,temp;

    cout<<"Enter a number:";
    cin>>n;
    
    for(i=1; i<=n; i++){
        int count=0;
        arm = 0;
        temp=i;
        
        while(temp>0){
            temp/=10;
            count++;
        }
        
        temp=i;
        while(temp>0){
            
            r = temp%10;
            arm = arm +pow(r, count);
            temp=temp/10;
        }
        if(arm==i)
        cout<<i<<", "<<endl;
        
    }
 return 0;
}
