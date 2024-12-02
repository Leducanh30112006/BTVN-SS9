#include <stdio.h>

int main() {
    int n, thay, index;
    printf("Nhap do dai mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("Nhap vi tri muon thay : ");
    scanf("%d", &index);
    if (index < 0 || index >= n) {
        printf("Vi tri khong hop le!\n");
        return 0;
    }
    printf("Nhap gia tri muon thay: ");
    scanf("%d", &thay);
    arr[index] = thay;
    printf("Mang sau khi thay the:\n");
    for (int i = 0; i < n; i++) {
        printf("%d \t", arr[i]);
    }
    printf("\n");

    return 0;
}

