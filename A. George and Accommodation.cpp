#include<map>
#include <unordered_map>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int cnt=0;
    while(t--)
    {

        int a,b;
        cin>>a>>b;
        if((b-a)>=2)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
