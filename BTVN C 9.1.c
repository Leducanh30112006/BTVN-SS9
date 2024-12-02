#include <stdio.h>

int main(){
	int arr[100];
	int index, num;
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++){
		printf("nhap cac phan tu : ");
		scanf("%d", &arr[i]);
	}
	printf("Nhap vi tri muon thay : ");
	scanf("%d",&index);
	printf("Nhap so muon thay : ");
	scanf("%d",&num);
	if (index < 0 || index > n) {
        printf("Vi tri khong hop le!\n");
        return 0;
    }
	for(int i=n; i>=index;i--){
		arr[i]=arr[i-1];
	}
	arr[index]=num;
	for(int i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}	
	return 0;
} 

