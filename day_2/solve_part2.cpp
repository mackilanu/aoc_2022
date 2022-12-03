#include <iostream>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    FILE * fp;
    char * line = NULL;
    size_t len = 0;
    ssize_t read;

    fp = fopen("data.in", "r");


    int total_score = 0;
    int score = 0;
    while ((read = getline(&line, &len, fp)) != -1) {
        char o = line[0];
        char me = line[2];

        char tmp;

        switch (me)
        {
            case 'X':
                if(o == 'A') {
                    total_score += 3;
                } else if(o == 'B') {
                    total_score += 1;
                } else if(o == 'C') {
                    total_score += 2;
                }
                break;
            case 'Y':
                if(o == 'A') {
                    total_score += 4;
                } else if(o == 'B') {
                    total_score += 5;
                } else if(o == 'C') {
                    total_score += 6;
                }
                break;
            case 'Z':
                if(o == 'A') {
                    total_score += 8;
                } else if(o == 'B') {
                    total_score += 9;
                } else if(o == 'C') {
                    total_score += 7;
                }
                break;
        }
    }

    printf("#1: %d\n", total_score);
    return 0;
}

