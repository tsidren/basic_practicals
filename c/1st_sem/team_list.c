#include<stdio.h>

struct cricket
{ char name[50],team_name[50];
    float batting_avg;
};

void val(struct cricket *);

void screen(struct cricket *);

void unq_team(int []);

int main(){
    struct cricket player[6];
    for(int i=0;i<5;i++)
        val(&player[i]);
    
    // printf("now the team wise list is: ");
    // for (int i=0;i<5;i++)
    //     screen(&player[i]);

    return 0; 
}



void val(struct cricket *a)
{   printf("enter player_name, team_name and their batting average: \n");
    scanf("%s%s%f", &a->name,&a->team_name,&a->batting_avg);
}


void screen(struct cricket *b)
{  
    printf("\n \t %s \t %s \t %f ", b->name,b->team_name,b->batting_avg );



}
