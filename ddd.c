// this program is input vector and count the sum of vector

#include<stdio.h>
#include<string.h>
 typedef struct  vector
{
    int x1i;
    int x2i;
    int y1i;
    int y2i;
} v;

int main(){
    int sum,sum1,sum2;
    v vec[3];
    printf("enter x1 vector: ");
    scanf("%d",&vec[0].x1i);

     printf("enter x2 vector: ");
    scanf("%d",&vec[1].x2i);
    
     printf("enter y1 vector: ");
    scanf("%d",&vec[2].y1i);
    
     printf("enter y2 vector: ");
    scanf("%d",&vec[3].y2i);
    sum=(vec[0].x1i+vec[2].y1i);
    sum1=(vec[1].x2i+vec[3].y2i);
    sum2=sum+sum1;
    printf("sum of vector is : %d",sum2);

    
    
    
    
}