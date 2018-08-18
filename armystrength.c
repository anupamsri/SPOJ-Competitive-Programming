#include <stdio.h>

int main()
{
	int i,j,t;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		int ng,nm,maxg=0,maxm=0,temp;

		scanf("%d",&ng);
		scanf("%d",&nm);


		for(j=0;j<ng;j++)
		{
			scanf("%d",&temp);

			if(temp>maxg) maxg=temp;

		}
		temp=0;
		for(j=0;j<nm;j++)
		{
			scanf("%d",&temp);

			if(temp>maxm) maxm=temp;

		}

		if(maxm>maxg) printf("MechaGodzilla\n");
		else printf("Godzilla\n");



	}
	return 0;

}
