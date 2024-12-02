#include <stdio.h>

int main() {
    int arr[100][100];
    int n, m;
    int menu;

    do {
        printf("\n\tMENU\n");
        printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In gia tri cac phan tu la le va tinh tong\n");
        printf("4. In ra cac phan tu nam tren duong bien va tinh tich\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh\n");
        printf("6. In ra cac phan tu nam tren duong cheo phu\n");
        printf("7. In ra dong co tong gia tri cac phan tu la lon nhat\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &menu);

        switch (menu) {
            case 1:
                printf("Nhap so hang: ");
                scanf("%d", &n);
                printf("Nhap so cot: ");
                scanf("%d", &m);
                printf("Nhap cac phan tu cua mang:\n");
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        printf("arr[%d][%d] = ", i, j);
                        scanf("%d", &arr[i][j]);
                    }
                }
                break;

            case 2:
                printf("Mang theo ma tran la:\n");
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        printf("%d ", arr[i][j]);
                    }
                    printf("\n");
                }
                break;
            case 3:
                printf("Cac phan tu le trong mang la:\n");
                int sum = 0;
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        if (arr[i][j] % 2 != 0) {
                            printf("%d ", arr[i][j]);
                            sum += arr[i][j];
                        }
                    }
                }
                printf("\nTong cac phan tu le la: %d\n", sum);
                break;
            case 4:
                printf("Cac phan tu tren duong bien la:\n");
                int flag = 1;
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                            printf("%d ", arr[i][j]);
                            flag *= arr[i][j];
                        }
                    }
                }
                printf("\nTich cac phan tu tren duong bien la: %d\n", flag);
                break;

            case 5:
                printf("Cac phan tu tren duong cheo chinh la:\n");
                for (int i = 0; i < n && i < m; i++) {
                    printf("%d ", arr[i][i]);
                }
                printf("\n");
                break;

            case 6:
                printf("Cac phan tu tren duong cheo phu la:\n");
                for (int i = 0; i < n && i < m; i++) {
                    printf("%d ", arr[i][m - i - 1]);
                }
                printf("\n");
                break;

            case 7:
                printf("Dong co tong gia tri cac phan tu lon nhat la:\n");
                int maxsum = 0, index = 0;
                for (int i = 0; i < n; i++) {
                    int row_sum = 0;
                    for (int j = 0; j < m; j++) {
                        row_sum += arr[i][j];
                    }
                    if (sum > maxsum) {
                        maxsum = sum;
                        index = i;
                    }
                }
                for (int j = 0; j < m; j++) {
                    printf("%d ", arr[index][j]);
                }
                printf("\nTong gia tri cac phan tu cua dong lon nhat la: %d\n", maxsum);
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

