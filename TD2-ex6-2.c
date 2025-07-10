#include <stdio.h>

void append(int *A,int *B ,int *n,int *p)
{
  int i=0;
  for (i=0;i<*p;i++)
  {
    A[*n]=B[i];
    *n=*n+1;
  }
  for (i=0;i<*n;i++)
  {
    printf("A[%d]=%d\n",i,A[i]);
  }
}

int main ()
{
  int n , i , p , A[100],B[50];
  printf("Donnez la taille du tableau A\n");
  scanf("%d",&n);
  for (i=0;i<n;i++)
  {
    printf("A[%d]=",i);
    scanf("%d",&A[i]);
  }
  printf("Donnez la taille du tableau B\n");
  scanf("%d",&p);
  for (i=0;i<p;i++)
  {
    printf("B[%d]=",i);
    scanf("%d",&B[i]);
  }
  append(A,B,&n,&p);
  return 0;
}
