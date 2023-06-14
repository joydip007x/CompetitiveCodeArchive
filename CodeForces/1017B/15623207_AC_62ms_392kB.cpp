#include<bits/stdc++.h>
using namespace std;

	int main()
	{
	 long long   int oz=0, zz=0, oo=0, zo=0;
	long   long  int i,x;
	    string s, t;
	    cin >> i >> s >> t;
	    while(i-->0){
                if(s[i]=='0' && t[i]=='0') zz++;
                else if(s[i]=='1' && t[i]=='0') oz++;
                else if(s[i]=='1' && t[i]=='1') oo++;
                else if(s[i]=='0' && t[i]=='1') zo++;
	    }
	     x=oz*zz +oz*zo + zz*oo; cout <<x;

	}