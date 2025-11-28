//Show that enums store integers by printing assigned values.

#include <stdio.h>
enum SampleEnum {
    FIRST,
    SECOND,
    THIRD,
    FOURTH,
    FIFTH
};
int main() 
{
    enum SampleEnum value;
    printf("Enum values and their corresponding integers:\n");
    for (value = FIRST; value <= FIFTH; value++) {
        printf("%d: ", value);
        switch (value) {
            case FIRST:   printf("FIRST\n"); break;
            case SECOND:  printf("SECOND\n"); break;
            case THIRD:   printf("THIRD\n"); break;
            case FOURTH:  printf("FOURTH\n"); break;
            case FIFTH:   printf("FIFTH\n"); break;
        }
    }
    return 0;
}