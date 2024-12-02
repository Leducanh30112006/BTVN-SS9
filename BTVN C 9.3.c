#include <stdio.h>

int main(){
	int n;
	printf("Nhap do dai mang : ");
	scanf("%d",&n);
	int arr[n];
	int index, num;
	for(int i=0;i<n;i++){
		printf("nhap cac phan tu : ");
		scanf("%d", &arr[i]);
	}
	printf("Nhap vi tri muon xoa : ");
	scanf("%d",&index);
	if (index < 0 || index > n) {
        printf("Vi tri khong hop le!\n");
        return 0;
    }
    for(int i=index; i<n;i++){
	    arr[i]=arr[i+1];
    } 
	for(int i=0;i<n-1;i++){
		printf("%d\t",arr[i]);
	}	
	return 0;
} 

