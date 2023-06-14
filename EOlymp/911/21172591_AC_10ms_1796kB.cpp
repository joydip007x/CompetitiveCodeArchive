#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int main(){
int  a,b,c,d;
int x1,x2;
cin>>a>>b>>c;
d=(b*b)-(4*a*c);
if(d<0){cout<<"No roots"<<endl; return 0;}
else if(d==0){cout<<"One root: "<<-b/(2*a)<<endl; return 0;}
d=(int)sqrt(d);
x2=(-b+d)/(2*a);
x1=(-b-d)/(2*a);

cout<<"Two roots: "<<min(x1,x2)<<" "<<max(x1,x2)<<endl;
//printf("%lf lf", x1,x2);
return 0;
}
