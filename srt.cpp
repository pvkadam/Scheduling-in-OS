#include<iostream>
using namespace std;
 
class Srtsched{
public:
    int n,bt[10],at[10],tat[10],wt[10],rt[10],finish[10],twt,ttat,total;
    void readData();
    void computeSRT();
    void Init();
    void dispTime();
    int getNextProcess(int);
   // void computeRR();
};
 
void Srtsched::readData()
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
 
void Srtsched::Init(){
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
 
void Srtsched::computeSRT(){
    readData();
    Init();
    int time,next=0,old,i;
    cout<<"order of scheduling\n ";
    for(time=0;time<total;time++)
    {
        old=next;
        next=getNextProcess(time);
        if(old!=next || time==0) cout<<"("<<time<<")|==P"<<next+1<<"==|";
        rt[next]=rt[next]-1;
        if(rt[next]==0) finish[next]=1;
        for(i=0;i<n;i++)
            if(i!=next && finish[i]==0 && at[i]<=time)
                wt[i]++;
 
    }
    cout<<"("<<total<<")"<<endl;
 
    for(i=0;i<n;i++)
        if(!finish[i]) {cout<<"Scheduling failed, cannot continue\n"; return;}
 
    dispTime();
 
}


void Srtsched::dispTime()
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
