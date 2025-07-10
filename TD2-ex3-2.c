
#include <stdio.h>
void recréation (int *tab,int *l,int *n)
{
   int i=0;
   for (i=0;i<*n;i++)
   {
    if (tab[i]!=0)
    {
      tab[*l]=tab[i];
      *l=*l+1;
    }
   }
   
}
int main ()
{
  int n , i , tab[50] , l=0 ;
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
  recréation(tab,&l,&n);

 
  printf("Le tableau sans occurence 0 est :\n");
  for(i=0;i<l;i++)
  {
    printf("tab[%d]=%d\n",i,tab[i]);
  }
  return 0;
}
