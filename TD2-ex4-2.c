#include <stdio.h>

void tpos(int *tab,int *Tpos,int *n,int *l)
{
	int i;
	for(i=0;i<*n;i++)
	{
		if ( *(tab +i) > 0 )
		{
			*(Tpos + *l)=*( tab + i);
			*l+=1;
		}
	}
}
void tneg(int *tab,int *Tneg,int *n,int *l)
{
        int i;
        for(i=0;i<*n;i++)
        {
                if ( *(tab +i) < 0 )
                {
                        *(Tneg + *l)=*( tab + i);
                        *l+=1;
                }
        }
}
int main ()
{
  int n , i , tab[50] ,Tpos[50],Tneg[50],l=0 ;
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
  tneg(tab,Tneg,&n,&l);
   for (i=0;i<l;i++)
   {
    printf("Tneg[%d]=%d\n",i,Tneg[i]);
   }  
   printf("\n");
   l=0;
   tpos(tab,Tpos,&n,&l);
  
   for (i=0;i<l;i++)
   {
    printf("Tpos[%d]=%d\n",l,Tpos[i]);
   }
   return 0;
}
