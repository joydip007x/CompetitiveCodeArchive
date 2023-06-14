    #include <iostream>
    #include<algorithm>
     ///原文：https://blog.csdn.net/lsjseu/article/details/8842435 
    using namespace std;
     
    struct stick{
    	int length,weight;
    	bool flag;
    	friend istream& operator>>(istream& in,stick& s){
    		in>>s.weight>>s.length;
    		s.flag = false;
    		return in;
    	}
     
    };
     
    class comp{
    public:
    	bool operator()(const stick& s1,const stick& s2)
    	{
    		if(s1.length==s2.length)return s1.weight<s2.weight;
    		else return s1.length<s2.length;
    	}
    };
     
    class WoodenSticks{
    public:
    	WoodenSticks(int cases){
    		this->cases = cases;
    	}
    	void solution()
    	{
    		int i,j,k;
    		for(i=0;i<cases;i++){
    			int n;//n sticks
    			cin>>n;
    			stick* tmp = new stick[n];
    			int count = 0;
    			for(j=0;j<n;j++)
    				cin>>tmp[j];
     
    			sort(tmp,tmp+n,comp());
       
    			for(j=0;j<n;j++){
    				if(!tmp[j].flag){
    					count++;
    					tmp[j].flag = true;
    					int t = j;
    					if(j!=n-1){//最后一个棒，就不要查找了
    						for(k = j+1;k<n;k++){
    							if(tmp[k].weight>=tmp[t].weight&&!tmp[k].flag){
    								tmp[k].flag = true;
    								t = k;
    							}
    						}
    					}
    				}
    			}
     
                delete[] tmp;
    			cout<<count<<endl;
     
    		}
    	}
    private:
        int cases;
    };
     
     
    int main()
    {
    	int cases;
    	cin>>cases;
    	WoodenSticks poj1060(cases);
    	poj1060.solution();
    	system("pause");
    	return 0;
    }
