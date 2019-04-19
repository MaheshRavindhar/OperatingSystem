#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int pid1=2132,pid2=2102,pid3=2453,pb1=2,pb2=4,pb3=8;
	int pc1,pc2,pc3,pt1,pt2,pt3,pw1,pw2,pw3;
	int pa1=0,pa2=0,pa3=0;
	int Total_Burst_Time=14;
	cout<<"\t\t\t\t\t\t\t\t**********Longest Remaining Time First**********";
	cout<<"\n\nThree Students enter the mess at the same time with the following values";
	cout<<"\n\nProcess\t"<<"Id\t"<<"Arrival_Time\t"<<"Burst_Time";
	cout<<"\n1"<<"\t"<<pid1<<"\t"<<"0\t\t"<<pb1;
	cout<<"\n2"<<"\t"<<pid2<<"\t"<<"0\t\t"<<pb2;
	cout<<"\n3"<<"\t"<<pid3<<"\t"<<"0\t\t"<<pb3<<"\n\n";
	cout<<"\n\t\t******Execution of each process in the Central Processing Unit based on LRTF******\n";
	for(int i=0;i<Total_Burst_Time;i++)
	{
		if(pb1>pb2 && pb1>pb3)
		{
			cout<<"\nAt time T="<<i<<" Process P1 executes:"<<i<<" to "<<i+1<<"sec";
			pc1=i+1;
			pb1=pb1-1;
		}
		else if(pb2>pb3 && pb2>pb1)
		{
			cout<<"\nAt time T="<<i<<" Procee p2 executes:"<<i<<" to "<<i+1<<"sec";
			pc2=i+1;
			pb2=pb2-1;
		}
		else if(pb3>pb1 && pb3>pb2)
		{
			cout<<"\nAt time T="<<i<<" Process p3 executes:"<<i<<" to "<<i+1<<"sec";
			pc3=i+1;
			pb3=pb3-1;
		}
		else if(pb3==pb2)
		{
			if(pid2<pid3)
			{
				cout<<"\nAt time T="<<i<<" Process p2 executes:"<<i<<" to "<<i+1<<"sec";
				pc2=i+1;
				pb2=pb2-1;
			}
		}
		else if(pb1==pb3)
		{
			if(pid1<pid3)
			{
				cout<<"\nAt time T="<<i<<" Process p1 executes:"<<i<<" to "<<i+1<<"sec";
				pc1=i+1;
				pb1=pb1-1;
			}
		}
	}
	cout<<"\n\n\t\t***********************************************************************************\n";
	pb1=2;
	pb2=4;
	pb3=8;
	pt1=pc1-pa1;
	pt2=pc2-pa2;
	pt3=pc3-pa3;
	pw1=pt1-pb1;
	pw2=pt2-pb2;
	pw3=pt3-pb3;
	cout<<"\n\nCompletion Time of Each Process: \n\n";
	cout<<"Process\t\t"<<"Time";
	cout<<"\np1\t\t"<<pc1;
	cout<<"\np2\t\t"<<pc2;
	cout<<"\np3\t\t"<<pc3;
	cout<<"\n\n\t\t**********Final Output after Processing of the Processes**********\n\n\n";
	cout<<"Process\t"<<"Id\t"<<"Arrival_Time\t"<<"Burst_Time\t"<<"Completion_Time\t"<<"Turn_Around_Time\t"<<"Waiting_Time\n";
	cout<<"\np1\t"<<pid1<<"\t"<<pa1<<"\t\t"<<pb1<<"\t\t"<<pc1<<"\t\t"<<pt1<<"\t\t\t"<<pw1;
	cout<<"\np2\t"<<pid2<<"\t"<<pa2<<"\t\t"<<pb2<<"\t\t"<<pc2<<"\t\t"<<pt2<<"\t\t\t"<<pw2;
	cout<<"\np3\t"<<pid3<<"\t"<<pa3<<"\t\t"<<pb3<<"\t\t"<<pc3<<"\t\t"<<pt3<<"\t\t\t"<<pw3;
	float avg_tat=(pt1+pt2+pt3)/3.0;
	float avg_wt=(pw1+pw2+pw3)/3.0;
	cout<<"\n\n\nAverage Turn Around Time:"<<avg_tat<<"sec";
	cout<<"\n\nAverage Waiting Time:"<<avg_wt<<"sec";
}
