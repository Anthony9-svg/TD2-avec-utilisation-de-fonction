
#include <stdio.h>

int maxi(int *tab ,int *a ,int *n)
{
	int i=0,max=0;
	max=*tab;
	for (i=0;i<*n;i++)
	{
		if ( max < *(tab+i))
		{
			max=*(tab+i);
			*a=i;
		}	
	}
	return max;
}
int main ()
{
  int n , i , tab[50] , a , max;
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
  max=maxi(tab,&a,&n);

   printf("Le maximum est tab[%d]=%d\n",a,max);
   return 0;
}
