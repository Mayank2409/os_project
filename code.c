#include<conio.h>
#include<string.h>
#include<stdio.h>

void chart();
void Input_data();
void SJF();

int Total_waiting_time,Total_turnaround_time,Arrival_time[50],Waiting_time[50],m,Burst_time[50];
float Avg_turnaround_time,Avg_wait_time;
char Process_name[20][20];


void Input_data()
{
    int i;
    printf("\n Enter the Total no. of Processes:: ");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        fflush(stdin);
        printf("\n\n Enter Process name: ");
        scanf("%s",&Process_name[i]);
        printf("\n Enter BurstTime for Process %s = ",Process_name[i]);
        scanf("%d",&Burst_time[i]);
        printf("\n Enter Arrival Time for Process %s =  ",Process_name[i]);
        scanf("%d",&Arrival_time[i]);
    }
}
