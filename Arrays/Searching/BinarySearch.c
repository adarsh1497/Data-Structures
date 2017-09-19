#include<stdio.h>
int main(){
	int ar[100] ,n , num ,beg = 0, end , mid;
	printf("Enter the number of elements of  array : ");
	scanf("%d",&n);
	printf("Enter array elements : ");
	for(int i = 0 ; i < n ; i++)
		scanf("%d",&ar[i]);
	printf("Enter the number too be searched : ");
	scanf("%d",&num);
	end = n-1;
	while (beg <= end){	
		mid = (beg + end)/2 ;
		if (num == ar[mid] ){
			printf("Number found at location %d : \n" , mid+1);
			break;
		}
		else if(num < ar[mid] )
			end = mid -1;
		else
			beg = mid +1;
	}
	if(num != ar[mid] )
		printf("Number not found\n");
  	return 0;
  	}
	
	
	
	
	
