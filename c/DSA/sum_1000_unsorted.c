// we are given an un-sorted array of 'n' terms and we have to find which two elements have sum = 40
// 0 is not an element 
// repeatition is not there in the entries 
// goal is to reduce the time complexity 
#include <stdio.h>

int main()
{   //int a []={1,2,3,4,5,6,7,8,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51};
    //int a []={1,2,3,400,5,600,700,80,90,100,11,12,13,14,  15  ,160,170,180,190,21,22,23,240,25,26,270,280,    29   ,300,31,32,33,34,350,360,370,380,390,40,41,42,43,44,450,46,470,480,490,50};
    int a []={1,2,3,400,5,600,700,80,90,100,  11  ,12,13,140,105,160,170,180,190,20,21,22,23,240,25,26,270,280,    29   ,300,31,32,33,34,350,360,370,380,390,40,41,42,43,44,450,46,470,480,490,50};
    int b[40];
    int sum = 40; 
    int elements = 50;
    
    
    for (int i=0;i<elements;i++)
        {if(a[i]<=sum)
            b[a[i]-1]=a[i];
        else
            b[i]=0;
        //printf("\n  %d = b[%d]", b[i], i);
        }
        
    //for (int j=0;j<sum;j++)
       // printf(" %d  %d\n",j+1 , b[j]);
    
// make a bifercation here for sum to be even write k<sum/2-1 and for odd write k<=sum/2-1

    //for (int k=0; k<sum/2-1; k++)
     //   if(b[k]+b[sum-2-k]==sum)
     //       printf("(%d, %d), ", b[k], b[sum-2-k]);
    if(sum%2==0)
        for (int k=0; k<sum/2-1; k++)
            if(b[k]+b[sum-2-k]==sum)
                printf("(%d, %d), ", b[k], b[sum-2-k]);
    else
        for (int k=0; k<=sum/2-1; k++)
            if(b[k]+b[sum-2-k]==sum)
                printf("(%d, %d), ", b[k], b[sum-2-k]);
                        

    return 0;
}