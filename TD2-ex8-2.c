#include <stdio.h>

int minimum( int *tab ,int *n, int *a)
{
	int min=*tab , i=0;
	for (i=1;i<*n;i++)
	{
		if ( min > *( tab + i ))
		{
			min=*(tab + i);
			*a=i;
		}
	}
	return min;
}
int maximum( int *tab ,int *n , int *a)
{
        int max=*tab , i=0;
        for (i=1;i<*n;i++)
        {
                if ( max < *( tab + i ))
		{
                        max=*(tab + i);
			*a=i;
		}
        }
        return max;
}

int main ()
{
  int i , n , tab[50] , a=0  ;
  printf("Donnez la taille du tableau");
  scanf("%d",&n);
  for (i=0;i<n;i++)
  {
    printf("T[%d]=",i);
    scanf("%d",&tab[i]);
  }
   printf("Le maximum est T[%d]=%d\n",a,maximum(tab,&n,&a));
   a=0;
   printf("Le minimum est T[%d]=%d\n",a,minimum(tab,&n,&a));
   return 0;
}

