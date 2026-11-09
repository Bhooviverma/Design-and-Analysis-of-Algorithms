// A mall has a 2D parking layout (rows and columns). Some spots are empty (0), and some are occupied (1). You need to write a system that automatically finds the first available spot for an arriving car and parks it.

#include <stdio.h>

int main() {
    int parking[3][4] = {
        {1, 1, 1, 1},
        {1, 1, 0, 1},
        {0, 1, 1, 0}
    };

    int rows = 3, cols = 4;
    int found = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {

            if (parking[i][j] == 0) {
                parking[i][j] = 1;

                printf("Car parked at Row %d, Column %d\n",
                       i, j);

                found = 1;
                break;
            }
        }

        if (found)
            break;
    }

    if (!found) {
        printf("Parking is full\n");
    }

    return 0;
}
