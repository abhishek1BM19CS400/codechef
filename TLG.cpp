#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    int sum1=0,sum2=0;
    int p1,p2;
    int diff;
    int Winner;
    int lead=0;
	cin>>N;
	for(int i=0;i<N;i++)
	{
	    cin>>p1>>p2;
	    sum1 = sum1+p1;
	    sum2 = sum2+p2;
	    if(sum1>sum2)
	    {
	        diff = sum1-sum2;
	        if(diff>lead)
	        {
	            lead=diff;
	            Winner=1;
	        }
	    }
	    else
	    {
	      diff = sum2-sum1;
	      if(diff>lead)
	        {
	            lead=diff;
	            Winner=2;
	    }
	    
	}
	}
	cout<<Winner<<" "<<lead;
	
	
	return 0;
	

}