#include<stdio.h>
int main(){
	int num[6]={1,3,5,7,9,13};
	int number, temp=0;
	printf("Moi nhap vao so nguyen muon check: ");
	scanf("%d",&number);
	
	for(int i=0; i<6; i++){
		if(number==num[i]){
			temp=i;
		}		
	}
	if(temp>0 && temp<6){
		printf("\nSo %d o vi tri thu %d",number,temp+1);
	}else{
		printf("\nSo %d khong thuoc mang",number);
	}
	return 0;
}
