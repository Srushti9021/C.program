#include <stdio.h>
int main() {
    int x, y, z, i, j, k;
    printf("Enter dimensions (x y z): ");
    scanf("%d %d %d", &x, &y, &z);

    int arr[x][y][z];

    printf("Enter elements:\n");
    for(i = 0; i < x; i++) {
        for(j = 0; j < y; j++) {
            for(k = 0; k < z; k++) {
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    int max = arr[0][0][0];
    for(i = 0; i < x; i++) {
        for(j = 0; j < y; j++) {
            for(k = 0; k < z; k++) {
                if(arr[i][j][k] > max)
                    max = arr[i][j][k];
            }
        }
    }

    printf("Maximum element = %d\n", max);
    return 0;
}
