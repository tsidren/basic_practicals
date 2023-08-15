/*
#include<stdio.h>

struct cricket
{ char name[50],team_name[50];
    float batting_avg;
};

void val(struct cricket *);  // declaration

void screen(struct cricket *,int []);

// void unq_team(int []);

int main(){
    int a;
    struct cricket player[2];
    for(int i=0;i<2;i++)
        val(&player[i]);
    
    // printf("now the team wise list is: ");
    // for (int i=0;i<5;i++)
    //     screen(&player[i]);

    return 0; 
}



void val(struct cricket *a) // defitions
{   printf("enter player_name, team_name and their batting average: \n");
    scanf("%s%s%f", &a->name,&a->team_name,&a->batting_avg);
}


void screen(struct cricket *b,int g[])
{  
    printf("\n \t %s \t %s \t %f ", b->name,b->team_name,b->batting_avg );
    
}
*/


#include<stdio.h>
#include<conio.h>
#include<string.h>
struct cricket
{ char P_Name[20]; char T_Name[20]; float B_Ave; };
void main()
{ struct cricket s[5],t;
int i,j,n=3;
float p;
clrscr();
printf("Enter Data Of %d Player\n",n);
for(i=0;i<n;i++)
{
printf("\nEnter Player Name,Team Name And Bating Average for Player %d :- \n",i+1);
scanf("%s %s %f",s[i].P_Name,s[i].T_Name,&p);
s[i].B_Ave=p;
}
for(i=1;i<=n-1;i++)
{
for(j=0;j<=n-i;j++)
{
if(strcmp(s[j-1].T_Name,s[j].T_Name)>0)
{
t=s[j-1]; s[j-1]=s[j]; s[j]=t; } } }
printf("\nAfter Teamwise Sorting...Player List Is");
for(i=0;i<n;i++)
{
printf("\n%-20s %-20s %.2f",s[i].P_Name,s[i].T_Name,s[i].B_Ave);
}
getch();
}