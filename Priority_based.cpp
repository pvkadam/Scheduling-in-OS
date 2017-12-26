#include<iostream>
 
using namespace std;
 
class Priority
{
    private:
			int bt[20],p[20],wt[20],tat[20],pr[20],i,j,n,temp,pos;
			float avg_wt,avg_tat,total;
	public:
	        Priority()
			{
				total=0;
			} 
			
			void read()
	{
							
  				  cout<<"Enter Total Number of Process:";
   				 cin>>n;
 
    cout<<"\nEnter Burst Time and Priority\n";
    for(i=0;i<n;i++)
    {
        cout<<"\nP["<<i+1<<"]\n";
        cout<<"Burst Time:";
        cin>>bt[i];
        cout<<"Priority:";
        cin>>pr[i];
        p[i]=i+1;           //contains process number
    }
}
void sortPriority()
	{
		//sorting burst time, priority and process number in ascending order using selection sort,least number ll hv more priority
    for( i=0;i<n;i++)
    {
        pos=i;
        for( j=i+1;j<n;j++)
        {
            if(pr[j]<pr[pos])
                pos=j;
        }
 
        temp=pr[i];
        pr[i]=pr[pos];
        pr[pos]=temp;
    
 	
        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;
 
        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
    }
	}
	friend void waittime(Priority);
};
