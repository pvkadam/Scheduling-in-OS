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
