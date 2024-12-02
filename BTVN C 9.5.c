#include <stdio.h>

int main() {
    int arr[100];
    int n = 0;
    int menu;

    do {
        printf("\n\tMENU\n");
        printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
        printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
        printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
        printf("7. Them mot phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &menu);

        switch (menu) {
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
                printf("Cac phan tu chan trong mang la:\n");
                int sumchan = 0;
                for (int i = 0; i < n; i++) {
                    if (arr[i] % 2 == 0) {
                        printf("%d ", arr[i]);
                        sumchan += arr[i];
                    }
                }
                printf("\nTong cac phan tu chan la: %d\n", sumchan);
                break;

            case 4:
                if (n > 0) {
                    int max = arr[0], min = arr[0];
                    for (int i = 1; i < n; i++) {
                        if (arr[i] > max) {
                            max = arr[i];
                        }
                        if (arr[i] < min) {
                            min = arr[i];
                        }
                    }
                    printf("Gia tri lon nhat trong mang la: %d\n", max);
                    printf("Gia tri nho nhat trong mang la: %d\n", min);
                } else {
                    printf("Mang rong!\n");
                }
                break;

            case 5:
                printf("Cac phan tu la so nguyen to trong mang la:\n");
                int sumsonguyen = 0;
                for (int i = 0; i < n; i++) {
                    if (arr[i] <= 1) {
                        continue;
                    }
                    int flag = 1;
                    for (int j = 2; j <= arr[i] / 2; j++) {
                        if (arr[i] % j == 0) {
                            flag = 0;
                            break;
                        }
                    }
                    if (flag) {
                        printf("%d ", arr[i]);
                        sumsonguyen += arr[i];
                    }
                }
                printf("\nTong cac phan tu la so nguyen to la: %d\n", sumsonguyen);
                break;

            case 6:
                printf("Nhap gia tri can thong ke: ");
                int value, count;
                scanf("%d", &value);
                count = 0;
                for (int i = 0; i < n; i++) {
                    if (arr[i] == value) {
                        count++;
                    }
                }
                printf("So luong phan tu %d trong mang la: %d\n", value, count);
                break;

            case 7:
                if (n >= 100) {
                    printf("Mang da day! Khong the them phan tu moi.\n");
                    break;
                }
                printf("Nhap gia tri muon them: ");
                scanf("%d", &value);
                printf("Nhap vi tri muon them (0 den %d): ", n);
                int position;
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

            case 8:
                printf("Thoat chuong trinh.\n");
                break;

            default:
                printf("Lua chon khong hop le. Vui long chon lai!\n");
        }
    } while (menu != 8);

    return 0;
}

