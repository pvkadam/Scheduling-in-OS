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
