#include<stdio.h>
int main(){

  int i,j,n,k=1;

  printf("ENETR NO OF LINES WANT TO PRINT: ");
  scanf("%d",&n);

  printf("FLOYD'S TRIANGLE\n\n");
  for(i=1;i<=n;i++){
      for(j=1;j<=i;j++,k++)
           printf(" %d",k);
      printf("\n");
  }

  return 0;
}
