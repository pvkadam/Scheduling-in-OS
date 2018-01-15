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
          else
            {
              start[i-1]=end[i-2];
              end[i-1]=start[i-1]+burst[i-1];
              wait[i-1]=start[i-1]+arrival[i-1];
            }
          //throughput                                                                                                
          if (start[i+1] <= throughput)
            tp = i+1;
        }

      //output                                                                                                        
      cout << "\n\nPROCESS \t BURST TIME\tARRIVAL TIME\tWAIT TIME\tSTART TIME\tEND TIME\n";
      for (i=0;i<n;i++){
        cout << "\nP[" << i + 1 << "]" << "\t\t" << burst[i] << "\t\t" << arrival[i] << "\t\t" << wait[i] << "\t\t" << start[i] << "\t\t" << end[i];
      }
      //avg wait time                                                                                                 
      for(i=1,tot=0;i<n;i++){
        tot+=wait[i-1];
        avgwait=tot/n;
      }
