#include<bits/stdc++.h>
#define fi freopen("input.txt","r",stdin)
#define fo freopen("output.txt","w",stdout)
#define ll long long
using namespace std;
int main(){
    fi;fo;
    string s;
    cin>>s;
    int l = 0;
    ll ab = 0 , ba = 0;
    while(l<s.length()-1){
        if(s[l]=='A' && s[l+1]=='B' && !ab){
            l=l+2;            
            ab=1;
        }
        else if(s[l]=='B' && s[l+1]=='A' && !ba && ab){
            l = l+2;
            ba = 1;
        }
        else l+=1;
    }
    if(ab==0 || ba==0){
        l = 0;ab = 0;ba = 0;
    }
    while(l<s.length()-1){
        if(s[l]=='B' && s[l+1]=='A' && !ba){
            l+=2;
            ba = 1;
        }
        else if(s[l]=='A' && s[l+1]=='B' && !ab && ba){
            l+=2;            
            ab = 1;
        }
        else l+=1;
    }
    if(ab && ba) cout<<"YES \n";
    else cout<<"NO \n";
}