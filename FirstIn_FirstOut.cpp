#include<iostream>

using namespace std;

class Fcfs
{
   private: int n,bt[20],wt[20],tat[20],i,j;
    		float avtat,avwt;
   	public:  
	   Fcfs()
   		{  avtat=0;
		   avwt=0;
	  	 }
	  	 
	    void read()             //reading the input ie no of processes nd burst time
   	{
     		 cout<<"Enter total number of processes(maximum 20):";
              cin>>n;

    cout<<"\nEnter Process Burst Time\n";
    for(i=0;i<n;i++)
    {
        cout<<"P["<<i+1<<"]:";
        cin>>bt[i];
    } 
   }
       void waittime()
  {
	   
   		 wt[0]=0;    //waiting time for first process is 0

    //calculating waiting time
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
    }

    cout<<"\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time";
}
