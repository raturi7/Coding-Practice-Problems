/*Program to implement binary search operation on an Array
 *
 * 
 * 
 */
 
 
#include <stdio.h>

void display(int a[], int n)            // Display function
{
	
	for(int i=0; i<n; i++)
	printf("%d\t",a[i]);
	
}

void bubble(int a[],int n)                 // Bubble sort function
{
    int temp;
    for(int j=1;j<n;j++)
    for(int k=0;k<n-j;k++)
    {
    	if(a[k+1]<a[k])
    	{
   	 temp = a[k];
   	 a[k]=a[k+1];
   	 a[k+1]=temp;
    	}
    }
}

void binary(int a[], int n, int end)              // Binary search function
{
	int beg =0, mid, k, pos =-1; 
	printf("\n\nEnter element to be searched: ");
	scanf("%d",&k);
	while(beg <= end)
	
	{
		mid=(beg+end)/2;
		
		if(a[mid]==k)
		{
			printf("\nElement %d is present at %d\n", k, mid+1);
			pos=mid;
			break;
		}
		else if(a[mid]<k)
		beg = mid + 1;
		
		else
		end = mid - 1;
		
	}
	
	if(pos==-1)
	printf("\nElement not present in array\n");
}

int main()
{
	int n, i, a[10], total;
	printf("Enter size of array: ");
	scanf("%d",&n);
	printf("Enter elements\n");
	for(i=0; i<n; i++)
	{
	scanf("%d",&a[i]);
	}
	total = i; //Total size of array

	bubble(a, n);
	printf("\nBubble sorted arrray\n");
	display(a, n);
	binary(a, n, total);

	return 0;
}
