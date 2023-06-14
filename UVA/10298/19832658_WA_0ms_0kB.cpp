#include <bits/stdc++.h>
#define ll long long
#define mx 1000000

using namespace std;
ll a,b,c,ans;
string s;
void trialerror( string h){

    string mnp;
    int xxx=s.size()/h.size();
    for(int i=0 ; i<s.size()/h.size();i++)
        mnp.insert(mnp.end(),h.begin(),h.end());
    ///cout<<mnp<<" == : "<<s<<endl;
    if(mnp==s){
        ans=max(ans*1LL,1LL*xxx );
    }
}
int main()
{
    int  t;
    ios::sync_with_stdio(false);cin.tie(0);
    cin>>t;	int kkk=0;
	for(int k=0 ; k<t ; k++){
        if(kkk) cout<<endl;
        cin>>s;kkk=0;
        ans=1;
        for(int i=1 ; i<= s.size()/2 +1; i++)
        {
            string tmp=s.substr(0,i);
            trialerror(tmp);
            //cout<<tmp<<endl;
        }
        kkk=1;
        cout<<ans<<endl;
	}
}
