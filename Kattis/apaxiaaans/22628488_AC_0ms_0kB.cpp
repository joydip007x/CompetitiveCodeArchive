#include<bits/stdc++.h>
using namespace std;

#define ll long long

#define p printf("First\n")
#define q printf("Second\n")

ll t;
int main(){

       string s,s2="";
       cin>>s;
       for(int i=0 ; i <s.size() ; i++){

               if(!i){

                    s2=s2+s[i];

               }
               else{

                         if(s2.back()!=s[i]) s2=s2+s[i];
               }

       }
       cout<<s2<<endl;

 }
