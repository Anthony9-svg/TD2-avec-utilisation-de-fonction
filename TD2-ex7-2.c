
#include <stdio.h>

int produit(int *u,int *v,int *n)
{
	int i , s=0;
	for (i=0;i<*n;i++)
	{
		s=*(u+i)*(*(v+i))+s;
	}
	return s;
}


int main ()
{
  int n , i , u[3] , v[3] , s;
  do
 {
   printf("Donnez la dimension des vecteurs (2D ou 3D)");
   scanf("%d",&n);
 }
 while (n>3 || n<2 );
 for (i=0;i<n;i++)
  {
    printf("Donnez la %d ème composante du vecteur u: ",i+1);
    scanf("%d",&u[i]);
  }
    printf("\n");
 for (i=0;i<n;i++)
 {
  printf("Donnez la %d ème composante du vecteur v: ",i+1);
  scanf("%d",&v[i]);
 }
 s=produit(u,v,&n);
  printf("Le produit scalaire des deux vecteurs est %d\n ", s);
  return 0;
}
  
    
