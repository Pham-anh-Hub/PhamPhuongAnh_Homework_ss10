#include<stdio.h>
int main(){
	int num[10]={5,3,8,9,11,2,7,4,13,6};
	for(int i=0;i<10; i++){
		int minIndex = i, temp; 
		for(int j=i+1; j<10; j++){
			if(num[j]<num[minIndex]){
				minIndex = j;
			}
		}	
	if(minIndex != i){		 
		temp = num[minIndex];
		num[minIndex] = num[i];
		num[i] = temp;
		}
	}
	printf("Mang sau khi sap xep la: ");
	for(int i=0; i<10; i++ ){
		printf("%d\t", num[i]); 
	}
	return 0; 
} 
