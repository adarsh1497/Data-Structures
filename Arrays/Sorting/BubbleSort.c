#include<stdio.h>
// A function to swap two values
void swap(int *x, int *y){
	int t = *x;;
	*x = *y ;
	*y = t;
}
// A function to implement bubble sort
void BubbleSort (int ar[] , int n){
	int i ,j ;
	for( i = 0 ; i < n-1 ; i++){
		
		for( j = 0 ; j < n-i-1 ; j ++){
			
			if(ar[j]  > ar[j+1] ){
				swap(&ar[j] , &ar[j+1]);
			} 
			
		}
	
	}
}
// Driver program
int main(){
	int ar[100]  , n ;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	for(int i = 0 ; i< n ; i ++){
		printf("Enter the %d element : " , i+1 );
		scanf("%d", &ar[i] );
		}
		
	
	BubbleSort(ar , n);
	printf("Array after sorting \n");
	for(int i = 0 ; i < n ; i ++)
		printf("%d ",ar[i]);
	
	return 0;
}


