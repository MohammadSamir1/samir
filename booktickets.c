//  username = mdsamir12
// password = samir123

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct 
{
  char name[100];
  char mobile_n0[20];
    char address[100];
  char name1[100];
  char mobile_n01[20];
    char address1[100];

   char  name2[100];
       char pass2[100];

   char namelg[100];
  char passlg[100];
  int choice1;
 
  char utr[20];
  int tic;
   int  tic1;
}bus;
 void loginsystem(bus *data);
 void booktickets(bus *data);
  void canceltickets(bus *data);
   void checkingbustatus(bus *data);
int main (){
  int choice;
   bus data;
   bus dt;
   data.tic=10;
    strcpy(dt.name2,"mdsamir12");
   strcpy(dt.pass2,"samir123");


      printf("Enter username : ");
     scanf("%s",dt.namelg);
     // remove_newline(data->namelg);
      printf("Enter your password : ");
      scanf("%s",&dt.passlg);
      //remove_newline(data->passlg);
      if (strcmp (dt.namelg,dt.name2) == 0 && strcmp(dt.passlg,dt.pass2)==0)
      {
        printf("Correct password \n");
        printf("Login successful\n\n");
      }
      else
      {
      	printf("INCORRECT PASSWORD\n\n");
        return 0;
      }
   

    printf("_ _ _WELCOME TO BUS SERVICE_ _ _");
  while (1)
  {
  
   printf("\n\n1.BOOKING TICKETS \n");
     printf("2.CANCEL TICKETS \n");
       printf("3.CHECK BUS STATUS  \n");
         printf("4.EXIT \n\n");
         printf("Enter your Choice : ");
         scanf("%d",&choice);
         printf("\n\n");
         while (getchar () != '\n');
         switch (choice)
         {
        
         case 1:
         booktickets(&data);
         break;
         case 2:
         canceltickets(&data);
         break;
          case 3:
        checkingbustatus(&data);
         break;
          case 4:
       if (choice == 4)
       {
       return 0;
       }
       
         break;
         default:
         {
          printf("INVALID CHOICE\n\n");
         }
          break;
         }
  }
  return 0;
    
}

void booktickets(bus *data){
    data->tic = 10;
    while (1)
    {
      
       printf("\n\n1.BHATHAT TO GORAKHPUR\n");
       printf("Price : 37\n");
       printf("time : 06:00:00 AM TO 06:00:00 PM\n");
       printf("\n\n");
        printf("2.PANIYARA TO PARTAWAL\n");
       printf("Price : 40\n");
       printf("time : 06:00:00 AM TO 06:00:00 PM\n");
       printf("\n\n");
        printf("3.BAHBNAULI TO BHATHAT\n");
       printf("Price : 40\n");
       printf("time : 06:00:00 AM TO 06:00:00 PM\n");
       printf("\n\n");
       printf("4.EXIT\n\n");
       printf("Enter your choice : ");
       scanf("%d",&data->choice1);
       printf("\n\n");
       while ( getchar() != '\n');
       if (data->choice1 == NULL)
       {
           printf("\n\nTry again and choose any option \n");
           return;
       }
       
       
      if(data->choice1 >= 1 && data->choice1 <=3 )
      
      {
        printf("Enter your name :");
       scanf(" %[^\n]",data->name);
        
        

        // remove_newline(data->name);
        printf("Enter your mobile no : ");
        scanf("%s",&data->mobile_n0);
        getchar();
         printf("Enter your address : ");
        scanf("%[^\n]",data->address);
        
        //remove_newline(data->address);
        printf("Pay money at this no :9653044864\n");
        printf("Enter  UTR no : ");
          scanf("%s",&data->utr);
        
        if (data->utr == NULL)
        {
            printf("Please enter correct utr no\n\n");
            return;
        }
        else
        {
            printf("Your payment successful\n");
            printf("\n\n");
        }
        printf("Your ticket book successful \n Thankyou for visit my portal \n");
        printf("Your ticket no is :%d",data->tic);
      printf("\n\n");
    
    
      }
      
        if(data->choice1 == 4){
      
        
          return ;
        }
       if(data->choice1 < 1 && data->choice1 >4 ){
      
        printf("INVALID CHOICE\n\n");
       }
      
    return ;
}
}
 void canceltickets(bus *data){
 
       printf("Enter your name :");
        scanf(" %[^\n]",data->name1);
       
        // remove_newline(data->name1);
        printf("Enter your mobile no : ");
        scanf("%s",&data->mobile_n01);
        printf("Enter your ticket no : ");
        scanf("%d",&data->tic1);
        if(strcmp(data->name1,data->name) == 0 &&
        strcmp(data->mobile_n01,data->mobile_n0) == 0 )
        
        {
          if (data->tic1 == data->tic)
         
        {  
          printf("Your ticket cancel successful \n\n");
        }
      }
        else
        {
          printf("Your ticket does not cancel \n Because you enter wrong information \n\n");
        }
       return ;
 }
  void checkingbustatus(bus *data)
  { 
    printf("\n\n");
    printf("BUS : JAGUAR\n");
    printf("Start at morning 07:00:000 AM \n for BHATHAT TO GORAKHPUR \n\n");
      printf("BUS : REOT 01 \n");
      printf("Start at morning 07:00:000 AM \n for BABHANAULI TO BHATHAT \n\n");
        printf("BUS : REOT 02 \n");
      printf("Start at morning 07:00:000 AM \n for PANIYRA TO PARTAWAL \n\n");
return;
  }