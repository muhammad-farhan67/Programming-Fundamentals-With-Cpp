#include<iostream>
using namespace std;

                int main(){
int n;
cin>>n;
                    for(int i=1;i<=n;i++)//for this pattern we compare row with n
                {for(int j=1;j<=(n-i);j++){//now we draw two loops inside main for loo
                // one for the priting of spaces ad other for symbols
                    cout<<" ";
            }for(int j=1;j<=(2*i-1);j++) 
             { if(i=1||i==n) { cout<<i;}
             else{cout<<" ";}}// do it again
              cout<<endl; }
                }
            
        
                