#include<stdio.h>
void ShellSort( int ar[] , int n){
	int gap = 1 , temp , i;
	while (gap < n/3) 
		gap = gap*3 + 1;
	while (gap  > 0){
		for(int j = 0 ; j < n ; j++){
			temp = ar[j];
			i = j;
			while( i > gap - 1  && ar[i - gap] >= temp){
				ar[i] = ar[i-gap];
				i-=gap;
			}
			ar[i] = temp;
		}
		gap = (gap-1)/3;
	}
}
int main(){
	int n , ar[100] ;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	for(int i = 0 ; i < n ; i ++){	
		printf("Enter the %d element  : ", i+1);
		scanf("%d",&ar[i]);
	}
	ShellSort(ar , n);
	printf("Array after sorting is : ");
	for(int i = 0 ; i < n ;i++)
		printf("%d ",ar[i]);
	return 0;
}
