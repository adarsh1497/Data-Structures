#include<stdio.h>
void swap(int *x , int *y){
	int temp = *x;
	*x = *y;
	*y = temp;

}
void SelectionSort(int ar[] , int n){
	int smallest ;
	for(int j = 0 ; j < n-1 ; j++){
		smallest = j;
		for(int i = j+1 ; i < n ; i++ ){
			if(ar[i] < ar[smallest])
				smallest = i;
		}
		swap( &ar[j] , &ar[smallest]) ;		
	}

}
int main(){
	int n , ar[100] ;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	for(int i = 0 ; i < n ; i ++){	
		printf("Enter the %d element  : ", i);
		scanf("%d",&ar[i]);
	}
	SelectionSort(ar , n);
	for(int i = 0 ; i < n ; i++)
		printf("%d ",ar[i]);	
}
