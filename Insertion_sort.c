#include<stdio.h>
int main(){
	int num[] = {2,4,1,7,5,3,6,9};
	int size = sizeof(num)/sizeof(num[0]);
	for(int i=0; i<size; i++){
		int temp = num[i];
		int j = i-1;
		while(j>=0 && num[j] > temp){
			num[j+1] = num[j];
			j = j-1;
		}
		num[j+1] = temp;
	}
	printf("Mang sap xep theo insertion sort: ");
	for(int i=0; i<size; i++){
		printf("%d",num[i]);
	}
	return 0; 
}
