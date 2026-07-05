#include<stdio.h>
int main(){
  int i, n;
  printf("find a finonacci number: ");
  scanf("%d",&n);
  int fib[n];
  fib[0]=0;
  fib[1]=1;
  for ( i = 2; i < n; i++)
  {
    fib[i]=fib[i-1]+fib[i-2];
  printf("fibonacci number is:%d\n",fib[i]);
  }
  return 0;

}