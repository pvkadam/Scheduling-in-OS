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