    #include<bits/stdc++.h>
    using namespace std;
    typedef int ll;
    #define sz 105
    ll n,x ,val[sz][sz][sz],minans ;
    ll movx[ ]={+1,+1,+2,+2,-1,-1,-2,-2 };
    ll movy[ ]={+2,-2,+1,-1,+2,-2,+1,-1 };
     
    ll r,c,mvc=0,cj,nok,curking,wowans;
     
    bool tmpvis[sz][sz] , mvis[sz][sz][sz] ;
    struct kng{
        int sti,stj,pow;
    }kings[sz];
    bool ok( ll a , ll b){
     if( a>=0 and a<r and b>=0 and b<c ) return true;
     return false;
    }
    bool ok2( ll a, ll b){
     
      ///cout<<" chek for "<<a<<" & "<<b<<" ; ";
      wowans=0;
       for(int i=0 ; i<=nok; i++)
       {
           if( !mvis[a][b][i] ) return  false;
           wowans+=val[a][b][i];
       }
       return true;
    }
    ll dfs( ll a , ll b, ll mm){
     
       queue<ll>q;
       tmpvis[a][b]=1;
       val[a][b][curking]=0;
       mvis[a][b][curking]=true;
       q.push(a);
       q.push(b);
       q.push(mm);
       while(q.size() ){
            ll u=q.front();q.pop();
            ll v=q.front();q.pop();
            ll po=q.front();q.pop();
            for(int i=0 ; i<8 ; i++)
            {
                int tmpx=u+movx[i];
                int tmpy=v+movy[i];
                if(tmpvis[tmpx][tmpy] || !ok(tmpx,tmpy)) continue;
                tmpvis[tmpx][tmpy]=true;
                mvis[tmpx][tmpy][curking]=true;
                val[tmpx][tmpy][curking]= min( val[tmpx][tmpy][curking],(cj-1+po+1)/cj  );
                q.push(tmpx),q.push(tmpy),q.push(po+1);
            }
        }
       return 0;
    }
    void seperatefukingview();
    int main()
    {
      int t;
      scanf("%d",&t);
      for(int cas=0 ; cas<t ; cas++){
     
          scanf("%d %d",&r,&c); nok=-1;
          minans=999999;
          for(int i=0 ; i<r ; i++)
          {
               char ch[sz];
               int cc;
               scanf("%s",ch);
               ///cout<<ch<<" :::: \n";
              for(int j=0 ; j<strlen(ch); j++)
              {
                  if(ch[j]>='0' and ch[j]<='9'){
                  cc=ch[j]-48 ;
                  ++nok;
                  kings[nok].sti=i;kings[nok].stj=j;
                  kings[nok].pow=cc;
                  }
              }
          }
          for(int i=0 ; i<=r; i++)
          {   for(int j=0;j<=c;j++){
                 for(int k=0;k<=nok+2+33;k++) {mvis[i][j][k]=false,val[i][j][k]=999999;}
              }
          }
         // cout<<" number of kings - "<<nok<<endl;
          for(int i=0 ; i<=nok ; i++)
          {
              memset(tmpvis, false,sizeof tmpvis);
              cj=kings[i].pow ;
              curking=i;
              dfs(kings[i].sti,kings[i].stj,0);
          }
         // seperatefukingview();
          for(int i=0 ; i<r ; i++)
          {
              for(int j=0 ; j<c; j++){
                if(ok2(i,j) ){
                minans=min(minans ,wowans );
                ///cout<<" judge ["<<i<<","<<j<<"]= \n";///<<" val- "<<val[i][j]<<"\n";
                }
              }
          }
        if(minans==999999) minans=-1;
        printf("Case %d: %d\n",cas+1,minans);
      }
      return 0;
    }
    void seperatefukingview(){
       for(int i=0 ; i<=nok ; i++){
            cout<<"\n fukin KING "<<i<<" \n";
            for(int j=0 ; j<r ; j++)
            {
                for(int k=0 ; k<c; k++)
                {
                    cout<<val[j][k][i]<<" ";
                }cout<<endl;
            }
        }
     }
     
     
     
    ///author-joydip007x         ///
    ///Time&Date-Whenever i submit///
     
