#include<stdio.h>
void InsertionSort(int ar[] , int n){
	int key ,i;
	for(int j = 1 ; j < n ; j++){
		key = ar[j];
		i = j - 1;
		while (i >= 0 && ar[i] > key ){
			ar[i+1] = ar[i];
			i = i - 1;
		}
		ar[i+1] = key;
	}
}
int main(){
	int n , ar[100] ;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	for(int i = 0 ; i < n ; i ++){	
		printf("Enter the %d element : ", i+1);
		scanf("%d",&ar[i]);
	}
	InsertionSort(ar , n);
	for(int i  = 0 ; i <  n ; i++ )
		printf("%d ",ar[i]);
	return 0;
}	

