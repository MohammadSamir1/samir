// this program is print address of 5 people

#include<stdio.h>
#include<string.h>
 typedef struct  address
{
     int house_no;
     char block[40];
     char city[40];
     char state[40];

}ad;
int main(){
     ad address[5];
     // ad address1={25,"partawal","maharajganj","up"};
     // ad address2={26,"paniyara","shyamdeurwa","up"};
     // ad address3={27,"nichalol","gkp","up"};
     // ad address4={28,"partawal","maharajganj","up"};
     // ad address5={29,"partawal","maharajganj","up"};
     // ad address6={30,"partawal","maharajganj","up"};
     printf("enter address of first person : \n");
     printf("enter house no : ");
     scanf("%d",&address[0].house_no);
     printf("\n enter block : ");
      scanf("%s",&address[0].block);
      printf("\n enter city : ");
       scanf("%s",&address[0].city);
       printf(" \n enter your state : ");
        scanf("%s",&address[0].state);

         printf("\nenter address of second person : ");
         printf("\nenter house no : ");
     scanf("%d",&address[1].house_no);
      printf("\n enter block : ");
      scanf("%s",&address[1].block);
      printf("\nenter city : ");
       scanf("%s",&address[1].city);
        printf("\nenter your state : ");
        scanf("%s",&address[1].state);

         printf("\n enter address of third person : ");
         printf("\nenter house no : ");
     scanf("%d",&address[2].house_no);
      printf("\nenter block : \n");
      scanf("%s",&address[2].block);
      printf("\nenter city : ");
       scanf("%s",&address[2].city);
        printf("\nenter your state : ");
        scanf("%s",&address[2].state);

         printf("\nenter address of fourth person : ");
         printf("\nenter house no : ");
     scanf("%d",&address[3].house_no);
      printf("\nenter block : ");
      scanf("%s",&address[3].block);
      printf("\nenter city : ");
       scanf("%s",&address[3].city);
        printf("\nenter your state : ");
        scanf("%s",&address[3].state);

         printf("\nenter address of fifth person : ");
         printf("\nenter house no : ");
     scanf("%d",&address[4].house_no);
      printf("\nenter block : ");
      scanf("%s",&address[4].block);
      printf("\nenter city : ");
       scanf("%s",&address[4].city);
        printf("\nenter your state : ");
        scanf("%s",&address[4].state);
     
        printf("\naddress of first person\n");
        printf("enter house no : \n");
      printf("house no : %d\n",address[0].house_no);
     printf("block is : %s\n",address[0].block);
     printf("city is : %s\n",address[0].city);
     printf("state is : %s\n",address[0].state);
    printf("address of second person\n");
     printf("house no : %d\n",address[1].house_no);
     printf("block is : %s\n",address[1].block);
     printf("city is : %s\n",address[1].city);
     printf("state is : %s\n",address[1].state);
 printf("address of third person\n");
      printf("house no : %d\n",address[2].house_no);
     printf("block is : %s\n",address[2].block);
     printf("city is : %s\n",address[2].city);
     printf("state is : %s\n",address[2].state);
 printf("address of fourth person\n");
      printf("house no : %d\n",address[3].house_no);
     printf("block is : %s\n",address[3].block);
     printf("city is : %s\n",address[3].city);
     printf("state is : %s\n",address[3].state);
 printf("address of fifth person \n");
      printf("house no : %d\n",address[4].house_no);
     printf("block is : %s\n",address[4].block);
     printf("city is : %s\n",address[4].city);
     printf("state is : %s\n",address[4].state);

     
}
