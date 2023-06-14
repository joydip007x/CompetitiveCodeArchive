int main()
{   scanf("%d", &t);
while (t--)
    {vector< poo >v;
    vector< poo >::iterator it;
    scanf("%d" ,&num);
    for(int i=0;i<num;i++)
    {scanf("%lld %lld", &te1,&te2);
    v.pb(poo(te1,te2));}
    sort(v.begin(),v.end(),poocomp);
    for(it=v.begin();it!=v.end();it++)
    {
        printf("%d  %d\n",it->first,it->second);
        ///cout<<it->first <<" "<<it->second<<endl;
    }
    }
}
