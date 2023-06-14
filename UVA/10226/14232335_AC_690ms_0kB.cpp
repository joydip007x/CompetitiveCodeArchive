#include<iostream>
#include<map>
#include<algorithm>
#include<iomanip>
#include<cstring>
using namespace std;

map<string,double > tre;
string tre_name;
map<string,double >::iterator it;
double tre_num=0;  long long int t_case=0,line=0;

int main( )
{   scanf("%d\n",&t_case);
    for(long long int i=0;i<t_case;i++)
    {
        while(getline(cin,tre_name) && tre_name.size()!=0)
        {
            tre [tre_name] ++;
        }
        ++line;
        for(it=tre.begin();it!=tre.end();it++)   { tre_num=tre_num+(it->second) ; }
        for(it=tre.begin();it!=tre.end();it++)
            {
                cout<< (it->first) <<" ";
                std::cout << std::fixed;
                cout<<setprecision(4)<<(it->second/tre_num)*100<<endl;
                it->second=0;
            }
            if(line<t_case){printf("\n");}
            tre_num=0;
            it=tre.begin();
            tre.erase ( it, tre.end() );

    }
}