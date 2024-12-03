#include<stdio.h>
int main(){
	int num[6]={1,3,1,7,9,1};
	int number, temp=0;
	printf("Moi nhap vao so nguyen muon check: ");
	scanf("%d",&number);
	
	for(int i=0; i<6; i++){
		if(number==num[i]){
			temp++;
		}		
	}
	printf("So %d xuat hien %d lan ",number,temp); 
	
	
	return 0;
}
