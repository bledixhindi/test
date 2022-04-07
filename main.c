#include <stdio.h>

int main()
{
	int m;
	int n;
	int i;
	int j;
	int min;
	int max;
	
	printf("Vendos vlerat e m:\n");
	scanf("%d",&m);
	printf("Vendos vlerat e n:\n");
	scanf("%d",&n);
	
	int v[m][n];
	
	printf("Mbush matricen me element:\n");
	
	for (i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{	
			printf("Vendos elementet e matrices [%d][%d]:",i,j);
			scanf("%d",&v[i][j]);
		}
		
		printf("\n");
	}
	
	printf("Matrica e dhene eshte:\n");
	
	for (i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{	
			printf("\n %d",&v[i][j]);
		}
	}
	
	printf("\n");
	
	return 0;
	
}
