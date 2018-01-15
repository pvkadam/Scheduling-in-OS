#include<iostream>
 using namespace std;
 

int main()
{    int n=3;
    float total,wait[3]={0};
    float p[3],twaiting=0,waiting=0;
    int proc;
    int stack[3];
    float brust[3],arrival[3],sbrust,temp[3],top=3;

for(int i=0;i<n;i++)
    {
        p[i]=i;
        stack[i]=i;
        cout<<"enter arival time :";
        cin>>arrival[i];
        cout<<endl<<"enter brust time:";
        cin>>brust[i];
        temp[i]=arrival[i];
        sbrust=brust[i]+sbrust;
        
        
    }
    
    for(int i=0;i<sbrust;i++)
    {
        proc=stack[0];
        if(temp[proc]==i)
        {
            //temp[proc]=i+1;;
            twaiting=0;
        }
        else
        {    
            twaiting=i-(temp[proc]);
                  
        }
        temp[proc]=i+1;    
   
