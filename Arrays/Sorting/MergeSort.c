#include<stdio.h>
#include<math.h>
//Program for Merging 

void Merge(int ar[] , int p , int q , int r){
	static double f = INFINITY;
	int n1 = q-p+1 , i , j;
	int n2 = r-q ;
	int L[n1] , R[n2] ;
	for(int i = 0 ; i < n1 ;i ++)
		L[i] = ar[p+i-1] ;
	for(int j = 0 ; j < n2 ; j++)
		R[j]  = ar[q+j];
	L[n1] = f ;
	R[n2] = f ;
	i = 1 ; 
	j = 1 ;
	for(int k = p ; k <= r ; k++){
		if( L[i] <= R[j] ){
			ar[k]  = L[i] ;
			i+=1;
		}
		if ( ar[k] = R[j] ) 
			j+=1;
	}
}

// Main Mergesort Program

void MergeSort(int ar[] , int p , int r){
	int q;
	if(p < r ){
		q = ceil((p+r)/2);		// This finds the middle value of array
		MergeSort(ar , p ,q);		// This function divides the first half of  array recursively .
		MergeSort(ar , q+1 , r);	// This function divides the second half of  array recursively .
		Merge( ar ,p , q, r);		// This function merges all the sub-arrays in ascending order .
	}
}

// Driver program to take inputs and for sorting .

int main(){
	int n , ar[100] = {0} ;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	for(int i = 0 ; i < n ; i ++){	
		printf("Enter the %d element\n", i);
		scanf("%d",&ar[i]);
	}
	MergeSort(ar ,  0 , n);
	for(int i = 0 ; i < n ; i++)
		printf("%d ",ar[i]);	
	return 0 ;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
