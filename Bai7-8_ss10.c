#include<stdio.h>
int main(){
	int m, n; 	
	printf("Nhap vao so hang ");
	scanf("%d", &m);
	printf("Nhap vao so cot ");
	scanf("%d", &n);
	int num[m][n];
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("Nhap phan tu thu %d cua hang %d ",j+1,i+1);
			scanf("%d", &num[i][j]); 
		} 
	}
	for(int a=0; a<m*n; a++){
		int temp; 
		for(int b = 0;b<m*n-1-a; b++){
			for(int i=0; i<m; i++){
				for(int j=0; j<n; j++){
					if(num[i][j]>num[i][j+1]){
						temp = num[i][j+1];
						num[i][j+1] = num[i][j];
						num[i][j] = temp; 
					}
				}
			}
		}
	}
	printf("Mang la:\n ");
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("%d\t", num[i][j]); 
		}
	printf("\n"); 
	}
	return 0;
	 
} 
