#include<bits/stdc++.h>
using namespace std;
typedef int ll;

ll n,x  ,y=0,cas=0,m,score;
vector<string>query;
string s;
map< pair<char,char>, ll>lmao;
int main()
{
  int t;
  cin>>t;
  while(t--){
    cin>>n;
    lmao.clear();
    query.clear();
    for(int i=0 ; i<n ; i++) {
        cin>>s;
        lmao[  { s[0], s.back()  } ]++;
    }
    cin>>m;
    getchar();
    for(int i=0 ; i<m ; i++) {getline(cin,s);query.push_back(s);}
    cout<<"Case "<<++cas<<":\n";
//    cout<<"DEBUG MOTHER ::::::::::::::::::::::: \n";
//    for(auto it:lmao ) {
//        cout<<"[ "<<it.first.first<<"-"<<it.first.second<<" ] = "<<it.second<<endl;
//    }
//    for(auto it:query) {
//            cout<<"Q : "<<it<<endl;
//    }
    //////////////////////////////////
    for(int i=0 ; i<m ; i++){
        string tmp=query[i],word="";
       /// cout<<"QUERY NOW : "<<tmp<<endl;
        stringstream ss(tmp);
        score=1;
       while(ss>>word){
                  score=score* lmao[ { word[0], word.back()} ];
        }
        cout<<score<<"\n";
    }


  }
  return 0;
}

/*
2
3
911
97625999
91125426
5
113
12340
123440
12345
98346
*/

///author-joydip007x         ///
///Time&Date-Whenever i submit///
