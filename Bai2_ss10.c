#include<stdio.h>
int main(){
	int num[8]={3,5,2,1,9,7,10,6};
	for(int i=0; i< 8;i++){
		int temp; 
		for(int j=0; j<8-i-1;j++){
			if(num[j]>num[j+1]){
				temp=num[j];
				num[j]=num[j+1];
				num[j+1]=temp; 
			}
		} 
	}
	printf("Mang sau khi sap xep la: ");
	for(int i=0; i<8;i++){
		printf("%d \t", num[i]); 
	}
	return 0; 
		 
} 
