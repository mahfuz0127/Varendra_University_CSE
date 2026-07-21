#include <stdio.h>
#include <stdlib.h>

int abs(int x)
{
    return x >= 0 ? x : -x;
}

int minsteps(int sx, int sy, int dx, int dy)
{
    return abs(sx - dx) > abs(sy - dy) ? abs(sx - dx) : abs(sy - dy);
}

int main()
{
    int sx, sy, dx, dy;
    printf("Enter Source coordinates (SX, SY): ");
    scanf("%d %d", &sx, &sy);
    printf("Enter Destination coordinates (DX, DY): ");
    scanf("%d %d", &dx, &dy);

    int steps = minsteps(sx, sy, dx, dy);
    printf("\nMinimum steps required: %d\n", steps);

    printf("\n");
    printf("Path: ");
    while (sx != dx || sy != dy) {

        if (sx < dx && sy < dy) {
            printf("RU");
            sx++;
            sy++;
        } else if (sx < dx && sy > dy) {
            printf("RD");
            sx++;
            sy--;
        } else if (sx > dx && sy < dy) {
            printf("LU");
            sx--;
            sy++;
        } else if (sx > dx && sy > dy) {
            printf("LD");
            sx--;
            sy--;
        } else if (sx < dx) {
            printf("R");
            sx++;
        } else if (sx > dx) {
            printf("L");
            sx--;
        } else if (sy < dy) {
            printf("U");
            sy++;
        } else if (sy > dy) {
            printf("D");
            sy--;
        }
        if (sx != dx || sy != dy) {
            printf("--");
        }
    }
    printf("\n");

    return 0;
}
