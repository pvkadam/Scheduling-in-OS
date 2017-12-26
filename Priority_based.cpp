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
