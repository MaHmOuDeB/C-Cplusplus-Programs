#include <stdio.h>
#include <stdlib.h>
void set_all_elements(int **arr, int numrow, int numcol) {
int r, c;
for (r = 0; r < numrow; r++)
for (c = 0; c < numcol; c++)
arr[r][c] = r * c; // some value ...

}

int main() {
int **table, row;
table = (int **) malloc(sizeof(int *) * 3); if (table == NULL)
exit(1);
for (row = 0; row < 3; row++) {
table[row] = (int *) malloc(sizeof(int) * 4); if (table[row] == NULL)
exit(1); }
set_all_elements(table, 3, 4); }