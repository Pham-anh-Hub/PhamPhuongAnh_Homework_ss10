#include<stdio.h>
int main(){
	int num[6]={3,2,1,5,9,4};
	int index[20]; 
	int item, flag = -1;
	for(int i=0; i<6; i++ ){
		for(int j=0; j<6-1-i; j++){
			int temp;
			if(num[j]>num[j+1]){
				temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}
		}
	}
	printf("\nMoi nhap vao so nguyen muon check: ");
	scanf("%d",&item);
	int size = sizeof(num)/sizeof(num[0]);
	int start=0, end = size-1 , mid;
	while(start<=end){
		int mid = (start+end)/2;
		if(num[mid]>item){//chung to item phai nam ve ben trai, nho hon
			end = mid-1;
		}else if(num[mid]<item){//chung to item phai nam ve ben phai, lon hon
			start = mid + 1;
		}else{
			flag = mid; 
			printf("Phan tu %d co vi tri la %d ",item, mid+1);
			return 0; 
		}
	}
	if(flag==-1){
		printf("Khong co phan tu %d trong mang",item); 
	}		
	 


	return 0;
}
