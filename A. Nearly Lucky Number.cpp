#include<map>
#include <unordered_map>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ll t;
    cin>>t;
    ll cnt=0;
    while(t>0)
    {
        int ld = t % 10;
        if( ld == 7 or ld == 4)
        {
            cnt++;
        }
        // if(ld==4)
        // {
        //     cnt_4++;
        // }
        t = t/10;
    }
    // cnt = cnt_7 + cnt_4;
    if(cnt==7 or cnt==4)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
}
