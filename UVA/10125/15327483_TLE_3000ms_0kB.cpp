/// Never Give UP ///
/*                                  *
 *    author-joydip007x             *
 *            *                     *
 *    its_simple_i_win              *
 *                                  */
///*	 Never tired :)	:V	*///
///     Date^>XX/08/2018		*///

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define LOOP(i,L,U) for(long long int i=(long long int)L;i<U;i++)
#define LOOPeq(i,L,U) for(long long int i=(long long int)L;i<=U;i++)
#define preflag long long  int flag=0,i=0,j,k,l,d,p=-1,s,arr[10000],o,xx,h

#define pb push_back
#define pii pair<int , int >
#define msi map< string,long long int>
#define vi vector<int >
#define iit ::iterator it


#define sz 100000
#define check(x) cout<<":::"<<x<<":::"<<endl
#define doublecheck(x,y) cout<<":::"<<x<<":::"<<y
#define i(c) cin>>c
#define mz(c) while(c--)

#define notrue false
#define ifnot else
#define eee cout<<endl

bool acenaki(int arr[], int p,int length)
{ int flag;
    for(int h=0;h<length;h++)
    {
        if (p==arr[h])
        {
           flag=1;
        }
    }
     if(flag!=1) return notrue;
     else return true;
}

int main()
{
 preflag;
 priority_queue<long long >pokki;
 vector <long long >vec;
 vector <long long >::iterator it;
while(i(d) && d!=0)
  {    o=d;
      mz(o)
    {
    cin>>arr[++p];
    }
        LOOP(i,0,d-2)
            {LOOP(j,1,d-1)
                {LOOP(k,2,d)
                    {
                        s=arr[i]+arr[j]+arr[k];
                        ///pokki.push(s);
                        vec.pb(s);
                       /// cout<<s<<endl<<"Used : "<<i<<":"<<j<<":"<<k<<endl;
                    }
                }
            }
            for(long long xx=0;xx<d;xx++)
            {
                            it=vec.begin();
                            it=find(vec.begin(),vec.end(),arr[xx]);
                            if(it!=vec.end()) {flag=1;break;}
              ///  if(vec.find[arr[xx]]) cout<<arr[xx];
                ///cout<<arr[xx]<<": ";
            }
            if(flag==1) cout<<*it<<endl;
 else cout<<"no solution"<<endl;
//            while (pokki.empty() )
//            {
//                xx=pokki.top(); pokki.pop(); cout<<xx<<endl;}
////                //if
//                LOOP(i,0,d)
//                {
//                    cout<<arr[i]<<" :: matching :: "<<xx<<endl;
//                    if(xx==arr[i]) { flag=1;break;}
//                }
//            }
//            if(pokki.empty()) cout<<"no solution"<<endl;
//            else cout<<xx<<endl;
  }

}

