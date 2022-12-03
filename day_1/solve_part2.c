#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE * fp;
    char * line = NULL;
    size_t len = 0;
    ssize_t read;

    fp = fopen("data.in", "r");
    if (fp == NULL)
        exit(EXIT_FAILURE);

    int top3[3];
    top3[0] = 0;
    top3[1] = 0;
    top3[2] = 0;

    int sum;
    while ((read = getline(&line, &len, fp)) != -1) {
        if(read  == 1) {
            if(sum > top3[0]) {
                int tmp1 = top3[0];
                int tmp2 = top3[1];
                top3[0] = sum;
                top3[1] = tmp1;
                top3[2] = tmp2;
            } else if(sum > top3[1]) {
                int tmp1 = top3[1];
                top3[1] = sum;
                top3[2] = tmp1;
            } else if(sum > top3[2]) {
                top3[2] = sum;
            }
            sum = 0;
        } else {
            sum += atoi(line);
        }
    }

    fclose(fp);
    if (line)
        free(line);

    printf("#1: %d\n", top3[0] + top3[1] + top3[2]);
    return 0;
}


