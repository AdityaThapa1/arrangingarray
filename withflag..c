#include<stdio.h>
int main(){
	int arr[8]={4,8,7,9,15,10,6,1};
	int i,j,k,m;
	int flag;
	int num,temp;
	
	for(j=0;j<7;j++){
		temp=arr[j];
		flag=0;
		
		for(i=(j+1);i<8;i++){
			if (temp>arr[i]){
			
			temp=arr[i];
			k=i;
			flag=1;
			
			}
		}
		if(flag==1){
			num=arr[j];
			arr[j]=temp;	
			arr[k]=num;
			
		}
	}
	printf("\n the sorted array in ascending order is: \n");
	for(m=0;m<8;m++){
		printf("%d \t", arr[m]);
			
	}
		
	
	return 0;
	
}
