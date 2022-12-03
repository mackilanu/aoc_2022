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

        printf("%c\n", me);

        switch (me)
        {
        case 'X':
            total_score += 1;
            if(o == 'C') {
                total_score += 6;
            } else if(o == 'A') {
                total_score += 3;
            }

            break;
        case 'Y':
            total_score += 2;
            if(o == 'A') {
                total_score += 6;
            } else if(o == 'B') {
                total_score += 3;
            }
            break;
        case 'Z':
            total_score += 3;
            if(o == 'B') {
                total_score += 6;
            } else if(o == 'C') {
                total_score += 3;
            }
        
        default:
            break;
        }
    }

    printf("#1: %d\n", total_score);
    return 0;
}

