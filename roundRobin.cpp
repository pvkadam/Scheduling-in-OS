#include<iostream>
using namespace std;
 
class sched{
public:
    int n,bt[10],at[10],tat[10],wt[10],rt[10],finish[10],twt,ttat,total;
    void readData();
   // void computeSRT();
    void Init();
    void dispTime();
    int getNextProcess(int);
    void computeRR();
};
void sched::readData() // defining fn outside class
{
    cout<<"Enter no. of processes\n";
    cin>>n;
    cout<<"Enter the burst times in order :\n";
    for(int i=0;i<n;i++)
    cin>>bt[i];
    cout<<"Enter the arrival times in order:\n";
    for(int i=0;i<n;i++)
    cin>>at[i];
}
 void sched::Init(){
    total=0;
    twt=0;
    ttat=0;
    for(int i=0; i<n; i++){
        rt[i]=bt[i];
        finish[i]=0;
        wt[i]=0;
        tat[i]=0;
        total+=bt[i];
        }
}
void sched::dispTime()
{
    for(int i=0;i<n;i++)
    {
 
        twt+=wt[i];
        tat[i]=wt[i]+bt[i];
        ttat+=tat[i];
        cout<<"Waiting time for P"<<(i+1)<<" = "<<wt[i]<<", Turnaround time = "<<tat[i]<<endl;
 
    }
 
    cout<<"Avg Waiting time = "<<(double)twt/n<<" and Avg Turnaround time = "<<(double)ttat/n<<endl;
    cout<<"Scheduling complete\n";
}
 int sched::getNextProcess(int time){
 
        int i,low;
        for(i=0;i<n;i++)
            if(finish[i]==0){low=i; break; }
        for(i=0;i<n;i++)
            if(finish[i]!=1)
                if(rt[i]<rt[low] && at[i]<=time)
                        low=i;
        return low;
 
}
