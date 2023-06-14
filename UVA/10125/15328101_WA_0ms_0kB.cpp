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
#define preflag long long  int flag=0,i=0,j,k,l,p=-1,s,arr[100000],o,xx,h,ppp,sax

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

int main()
{
long long d;
while(i(d) && d!=0)
  {
      preflag;
       vector <long long >vec;
       ///vector <long long >::iterator it;
       set<long long >sp;
       set<long long >::iterator ip;
        o=d;
       mz(o)
        {
        cin>>arr[++p];
        }
        sort(arr,arr+d);
         for ( sax = d - 1; sax >= 0; --sax)
         {
        LOOP(i,0,d-2)
            {LOOP(j,1,d-1)
                {LOOP(k,2,d)
                    {
                        if(arr[sax]==arr[i]+arr[j]+arr[k]) flag=1;break;
//                        LOOP(ppp,0,d)
//                        {  if(s==arr[p]  ) {/*vec.pb(s);*/ sp.insert(s);break;
                      ///  check(s);
                        }
                        }

                    }
                }  if(flag==1) cout<<arr[sax]<<endl;
            cout<<"no solution"<<endl;
            }

         }
//            for(long long xx=0;xx<d;xx++)
//            {
//                ip=sp.find(arr[xx]);
//                if(ip!=sp.end()){flag=1;break;}
//            }
//           if(sp.size()>0)     {ip=sp.end(); ip--;
//           if(*ip>0)  cout<<*ip<<endl;}
//
//         else if(sp.size()==0) cout<<"no solution"<<endl;
//            for(long long xx=0;xx<d;xx++)
//            {
//                            it=vec.begin();
//                            it=find(vec.begin(),vec.end(),arr[xx]);
//                            if(it!=vec.end()) {flag=1;break;}
//            }
//            if(flag==1) cout<<*it<<endl;
//        else cout<<"no solution"<<endl;
//  }
//
//}

