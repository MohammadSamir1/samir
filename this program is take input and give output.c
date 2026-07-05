#include<stdio.h>
#include<string.h>
typedef struct bank
{
    char bank_name[100];
    char account_number[100];
    char name[100];
    char fathers_name[100];
    char ifsc_code[100];
    char branch[100];
}bk;
int main(){
    bk bank;
    printf("_ _ _enter your bank details_ _ _\n");
    printf("enter your bank name : \n");
    fgets(bank.bank_name,100,stdin);
 
    printf("enter your account number : \n");
    scanf("%s",&bank.account_number);
   getchar();
    printf("enter your  name : \n");
    fgets(bank.name,100,stdin);
 
    printf("enter your fathers name : \n");
     fgets(bank.fathers_name,100,stdin);

    printf("enter your ifsc code : \n");
    scanf("%s",&bank.ifsc_code);

    printf("enter your branch name : \n");
    scanf("%s",&bank.branch);

  printf("_ _ _YOUR BANK DETAILS_ _ _\n");

      printf("Bank name  :");
       puts(bank.bank_name);

       printf("Account number  : %s\n",bank.account_number);

        printf(" Holder Name : ");
        puts(bank.name);

         printf("Fathers Name : ");
         puts(bank.fathers_name);

          printf(" Ifsc code : %s\n",bank.ifsc_code);

          printf(" Branch  :%s \n",bank.branch);
}
