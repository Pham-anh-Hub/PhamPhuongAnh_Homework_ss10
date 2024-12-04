#include<stdio.h>
int main(){
	int num[15]={3,5,9,7,1,8,4,6,2,7,2,5,9,2,8};
	int index[15];
	int size = sizeof(num)/sizeof(num[0]), item;
	printf("Moi nhap vao so nguyen muon tim: ");
	scanf("%d",&item);
	for(int i=0; i<size; i++){
		if(item==num[i]){
			index[i] = i+1;			
		}else{
			index[i] = 0 ;
		}	
	}
	printf("So %d xuat hien tai vi tri \n",item);
	for(int i=0; i<sizeof(index)/sizeof(index[0]);i++){
		if(index[i]!=0){
			printf("%d\t",index[i]);
		}		
	}
	return 0;
}
