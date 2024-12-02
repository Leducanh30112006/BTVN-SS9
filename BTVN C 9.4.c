#include <stdio.h>

int main() {
    int arr[100];
    int n = 0;
    int choice;
    int maxsize = 100;
    do {
        printf("\n\tMENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Nhap so phan tu muon nhap: ");
                scanf("%d", &n);
                printf("Nhap cac phan tu cua mang:\n");
                for (int i = 0; i < n; i++) {
                    printf("arr[%d] = ", i);
                    scanf("%d", &arr[i]);
                }
                break;
            case 2:
                printf("Mang hien tai la:\n");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 3:
                if (n >= maxsize) {
                    printf("Mang da day! Khong the them phan tu moi.\n");
                    break;
                }
                int value, position;
                printf("Nhap gia tri muon them: ");
                scanf("%d", &value);
                printf("Nhap vi tri muon them (0 den %d): ", n);
                scanf("%d", &position);
                if (position < 0 || position > n) {
                    printf("Vi tri khong hop le!\n");
                    break;
                }
                for (int i = n; i > position; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[position] = value;
                n++;
                break;
            case 4:
                printf("Nhap vi tri muon sua (0 den %d): ", n - 1);
                scanf("%d", &position);

                if (position < 0 || position >= n) {
                    printf("Vi tri khong hop le!\n");
                    break;
                }
                printf("Nhap gia tri moi: ");
                scanf("%d", &value);
                arr[position] = value;
                break;
            case 5:
                printf("Nhap vi tri muon xoa (0 den %d): ", n - 1);
                scanf("%d", &position);
                if (position < 0 || position >= n) {
                    printf("Vi tri khong hop le!\n");
                    break;
                }
                for (int i = position; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--;
                break;
            case 6:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai!\n");
        }
    } while (choice != 6);

    return 0;
}

