#include <iostream>
 using namespace std;
 
 int main(){
     
     int n;
     cout<<"Enter n"<<endl;
     cin>>n;
     
     int d = 2;
     bool devided =false;
     
     while(d < n){
         if(n%d==0){
             
             cout<<"Not PRIME"<<endl;
             devided=true;
         }
         d=d+1;
     }
     
        if (!devided){
            
            cout<<"PRIME"<<endl;
        }
 }
 
