#include <iostream>
    using namespace std;

    int main()
    {
	int n, burst[20], arrival[20], throughput;
    {
      cout << "Output for SJF_Non_Preemptive scheduling algorithm" << endl;

      int i, j, temp, temp2;
      double tot, avgwait, avgturnaround, avgresponse, tp;

      //array instantiations                                                                                          
      int start[n], end[n], wait[n];

      //calculations                                                                                                  
      for(i=1;i<=n;i++)
        {
          for(j=i+1;j<=n;j++)
            {
              if (i>=2 && burst[i-1]>burst[j-1])
                {
                  temp = burst[i-1];
                  temp2 = arrival[i-1];
                  burst[i-1]=burst[j-1];
                  arrival[i-1]=arrival[j-1];
                  burst[j-1]=temp;
                  arrival[j-1]=temp2;
                }
            }
	       if(i==1)
            {
              start[0]=0;
              end[0]=burst[0];
              wait[0]=0;
            }
