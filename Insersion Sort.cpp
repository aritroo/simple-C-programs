#include<stdio.h>
#include<conio.h>

int main()
{
	int a[20];
	int i,j,temp;
	int n;
	
	printf("\n Enter the number of elements in array : ");
	scanf("%d",&n);
	
	printf("\n Enter %d elements in array : \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	printf("\n The sorted array is :\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}

