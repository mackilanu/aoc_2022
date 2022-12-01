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

    int largest_sum = 0;
    int sum = 0;
    while ((read = getline(&line, &len, fp)) != -1) {
        if(read  == 1) {
            if(sum > largest_sum)
               largest_sum = sum;
            sum = 0;
        } else {
            sum += atoi(line);

        }

    }

    fclose(fp);
    if (line)
        free(line);

    printf("#1: %d\n", largest_sum);
    return 0;
}


