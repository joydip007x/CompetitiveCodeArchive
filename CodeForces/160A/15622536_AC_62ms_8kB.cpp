/*Imagine that you have a twin brother or sister. Having another person that looks exactly like you seems very unusual. It's hard to say if having something of an alter ego is good or bad. And if you do have a twin, then you very well know what it's like.*/
#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
#include<numeric>
#define pb push_back
using namespace std;
int main()
{
  vector<int>vec;
  int n,i=-1,x,y;
  cin>>n;
  while(n--){cin>>y;vec.push_back(y);}
  x=accumulate(vec.begin(),vec.end(),0);
  x=x/2;
  ///cout<<x;
  sort(vec.rbegin(),vec.rend());
  y=0;
  for(i=0;    ;i++)
  {
       if(y<=x)
       {
            y=y+vec[i];}
    ///cout<<" :v :";}}
    else break;}


  cout<<i;
}
