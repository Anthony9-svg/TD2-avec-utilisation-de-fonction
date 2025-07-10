#include <stdio.h>

void inverser(int *tab, int *n )
{
	int temp,i=0;
	for (i=0;i<(*n/2);i++)
	{
		temp=*(tab+i);
		*(tab+i)=*(tab + *n - 1 - i);
		*(tab + *n -1 -i)=temp;
	}
}
int main ()
{
  int n , i , tab[50]  ;
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
  inverser (tab,&n);
  printf("L'inverse du tableau est:\n");
  for (i=0;i<n;i++)
  {
      printf("tab[%d]=%d\n",i,tab[i]);
  }
   return 0;  
}
