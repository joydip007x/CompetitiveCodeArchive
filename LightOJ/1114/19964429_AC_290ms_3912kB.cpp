#include<bits/stdc++.h>
using namespace std;
typedef int ll;

ll n,x  ,y=0,cas=0,m,score;
vector<string>query;
string s;
map< pair<pair<char,char> ,string>, ll>lmao;
map<string ,ll > single;
ll dodo(string word ){
    if(word.size()<=3) return single[word] ;
    string tm=word.substr(1,word.size()-2);
    sort(tm.begin(), tm.end() );
   /// cout<<word<<":::::::::[ "<<word[0]<<","<<word.back()<<" ]]= "<<lmao[ { {word[0], word.back()},tm  }]<<endl;
    return lmao[ { {word[0], word.back()},tm  }];
}
int main()
{
  int t;
  cin>>t;
  while(t--){
    cin>>n;
    lmao.clear();
    query.clear();
    single.clear(); s.clear();
    for(int i=0 ; i<n ; i++) {
        cin>>s;
        if(s.size()<=3) {single[s]++;continue ;}
        string tmp=s.substr(1,s.size()-2);
        sort(tmp.begin() , tmp.end() );
        lmao[  {{s[0], s.back()},tmp}  ]++;
    }
    cin>>m;
    getchar();
    for(int i=0 ; i<m ; i++) {getline(cin,s);query.push_back(s);}
    cout<<"Case "<<++cas<<":\n";
//    cout<<"DEBUG MOTHER ::::::::::::::::::::::: \n";
//    for(auto it:lmao ) {
//        cout<<"[ "<<it.first.first.first<<"-"<<it.first.first.second<<" ] = "<<it.second<<endl;
//    }
//    for(auto it:query) {
//            cout<<"Q : "<<it<<endl;
//    }
    //////////////////////////////////
    for(int i=0 ; i<m ; i++){
        string tmp=query[i],word;
        score=1; word.clear();
        stringstream ss(tmp);
        while(ss>>word){
            score*=dodo(word);
        }
        cout<<score<<"\n";
    }


  }
  return 0;
}
/*
1
8
baggers
beggars
in
the
blowed
bowled
barn
bran
1
beggars bowled in the barn
*/
///author-joydip007x         ///
///Time&Date-Whenever i submit///
