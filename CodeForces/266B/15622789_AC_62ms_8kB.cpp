/// Never Give UP ///
/*                                  *
 *    joydip007x             	    *
 *    its_simple_i_win              *
 *                                  */
///*	 Never tired :)	:V	*///
/// i repeat , never :)		*///

#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<deque>
using namespace std;
#define sz 100000
#define LOOP(i,L,U) for(int i=(int)L;i<U;i++)
#define LOOPeq(i,L,U) for(int i=(int)L;i<=U;i++)
#define come cout<<"came here :)  "<<endl
int main()
{
    int n,k,b,i,j,a,t,c;
    cin>>n>>k;
    deque<int >dq,udq;
    char x;
    for(i=0;i<n;i++){ cin>>x;   dq.push_back(x); }///cout<<x<<endl; }

    int tahsin=dq.size();
    for(i=0;i<k;i++)
    {
//        while (!udq.empty())
//            {         dq=udq; while(!udq.empty()){udq.pop_front();}          }

        /// if(!udq.empty()){dq=udq;}
    ///while(!udq.empty()) {udq.pop_back();}
    ///if(i!=0){cout<<"loop = "<<i<<endl;}
    ///come;
        while(dq.size()>=2)
        {
            a=dq.front();dq.pop_front();
            b=dq.front();dq.pop_front();
            if(a<b){udq.push_back(b);udq.push_back(a);  if (dq.size()==1) { udq.push_back(dq.front() );dq.pop_front(); }}
            if(a>=b){udq.push_back(a); dq.push_front(b); if(dq.size()==1) {udq.push_back(b);dq.pop_front(); }}

            //         /   if(a==b==71) {udq.push_back(a); dq.push_front(b);}
//            if (a==b==66){udq.push_back(b); dq.push_front(a);}


      ///cout<<"complete loop i "<<i<<"&&   dq.size() "<<dq.size()<<" udq .size() ="<<udq.size()<<endl;
      ///if(dq.size()==1 ){udq.push_back(a);}
     /// while(!dq.empty()){dq.pop_front();}

        }
//        if(dq.size()==1 && tahsin%2==1){udq.push_back(b); cout<<"pushing = "<<b<<endl; }
//            if(dq.size()==1 && tahsin%2==0){udq.push_back(b); cout<<"pushng = "<<a<<enydl;}
        dq=udq;
        while(!udq.empty())
        {
               /// a=udq.front()  ;
                udq.pop_front();
               /// printf("%c~ ",a);
        }
//        while(!dq.empty())
//            {
//             a=dq.front(); dq.pop_front();
//            cout<<" a -"<<a;
//            }
//    while(!udq.empty())
//            {
//              udq.pop_front();
//             a=udq.front();
//            cout<<endl<<" a -"<<a;
//            }
        ///cout<<endl<<endl<<"FINAL loop i "<<i<<"&&   dq.size() "<<dq.size()<<" udq .size() ="<<udq.size()<<endl<<endl;
        ///come;
    }
    while(!dq.empty() && tahsin>=2)
    {
        a=dq.front(); dq.pop_front();
        printf("%c",a);
        a=0;
        ///cout<<atoi(const char* _Str);
    }
    if (tahsin==1){ printf("%c",dq.front());}
}