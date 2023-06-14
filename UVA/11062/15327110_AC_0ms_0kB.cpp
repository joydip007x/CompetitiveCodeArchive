//are bal.. mozilar etokkhon ba ki hoisilo..!! msg jassilo na.. ami pinkir msg er o reply dite paitesilam na.. seen koira r reply jay na.. pore ore phn e msg dilam j lptp e prblm jnne reply dite deri
#include<bits/stdc++.h>
#define LIMIT 111
#define MASK 48
#define SIZE 1111
using namespace std;

vector<string> dic;
vector<string >::iterator it;
///map<string,int> mp;...both does sam
map<string,bool> mp;
char line[SIZE],word[LIMIT];

int main()
{
    int i,j,k;
    j=0;

    while(gets(line))
    {
        k=strlen(line);
     ///   cout<<" <><> "<<k<<" ::: "<<endl;
        for(i=0; i<k; i++)
        {
            if(isalpha(line[i]))
            {
                word[j++]=tolower(line[i]);
            }
            else if(line[i]=='-' && i+1!=k)
                word[j++]='-';
            else if (line[i]=='-' && i+1==k)
            {
                continue;
            }

            if((  ! isalpha(line[i]) && line[i]  !='-') || (i+1==k && line[i]  !='-'))
            {
                word[j]='\0';
                if(j!=0 && !mp.count(word))
                {
                    mp[word]++;
                    dic.push_back(word);
                }
                j=0;
            }
        }
    }

    sort(dic.begin(),dic.end());

    k=dic.size();
//    for(it=dic.begin();it!=dic.end();it++)
//    {
//        cout<<*it<<endl;
//    }
    for(i=0; i<k; i++)
    {
        printf("%s\n",dic[i].c_str());
    }

    return 0;
}
