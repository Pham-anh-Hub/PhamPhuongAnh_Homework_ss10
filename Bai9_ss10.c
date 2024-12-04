#include <stdio.h>

int main(){
	int num[100][100],i,j,t,m,n,temp;
	printf("Nhap vao so hang: ");
	scanf("%d",&m);
	printf("Nhap vao so cot: ");
	scanf("%d",&n);
	if(m!=n){
		printf("so hang khong bang so cot");
		return 0;
	}
	i=0;
	while(i<m){
		j=0;
		while(j<n){
			printf("Nhap vao num[%d][%d]: ",i,j);
			scanf("%d",&num[i][j]);
			j++;
		}
		i++;
	}
	i=0;
	while(i<n-1){
		j=0;
		while(j<n-i-1){
			if(num[j][j]>num[j+1][j+1]){
				temp=num[j][j];
				num[j][j]=num[j+1][j+1];
				num[j+1][j+1]=temp;
			}
			j++;
		}
		i++;
	}
	i=0;
	printf("Ma tran\n");
	while(i<m){
		j=0;
		while(j<n){
			if(i==j){
				printf("  %d  ",num[i][j]);
			}else{
				printf(" %d ",num[i][j]);
			}
			j++;
		}
		printf("\n");
		i++;
	}

	return 0;
}
