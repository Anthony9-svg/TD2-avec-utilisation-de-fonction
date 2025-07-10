
#include <stdio.h>

int sum (int *t, int *n)
{
	int i=0,sum=0;
	for (i=0;i<*n;i++)
	{
		sum=sum+(*(t +i));
	}
	return sum ;

}

	
int main ()
{
  int n , i , s , tab[50];
  do 
  {
    printf("Entrez une taille inferieure à 50\n");
    scanf("%d",&n);
  }
  while (n>50);
  for (i=0;i<n;i++)
  {
    printf("tab[%d]=",i);
    scanf("%d",&tab[i]);
  }
  printf("\n");
  s=sum(tab,&n);
  printf("Leur somme est égale à %d\n",s);
  return 0;
}
