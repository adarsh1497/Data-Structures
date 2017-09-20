#include<stdio.h>
void swap(int x , int y){
	int t;
	t = x;
	x = y;
	y = t;
}
int partition(int a[] , int p , int r){
	int j,i = p;
	int x = a[i];
	for( j = p+1 ; j <= r ; j++){
		if(a[j] <= a[i] ){
			i+=1;
			swap(a[i], a[j]);
		}
	}
	swap(a[i] , a[p]);
}

void quickSort(int a[] , int p ,int r){
	int q ;
	if(p<=r){
		q = partition(a , p ,r);
		quickSort(a , p ,q-1);
		quickSort(a , q+1 , r);
	}
}
int main(){
	int n;
	printf("ENTER THE NUMBER OF ELEMENTS OF ARRAY : ");
	scanf("%d" , &n);
	int a[n];
	for(int i = 1 ; i <= n ; i++){
		printf("ENTER THE %d ELEMENT : ",i);
		scanf("%d" , &a[i]);
	}
	quickSort(a , 1 ,n);
	for(int i = 1 ; i <= n ; i++){
		printf("%d " , a[i]);
	}
}		
