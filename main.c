#include <stdio.h>
#include <stdio.h>
#include <string.h>

int main() {
    int laenge_in;
    printf("Geben Sie die Laenge des Strings: ");
    scanf("%d", &laenge_in);
    char str_in[laenge_in];
    printf("Geben Sie den String ein: ");
    scanf("%s", &str_in);
    char str_out[laenge_in*2];
    for (int i = 0; i < laenge_in; ++i) {
        for (int j = 0; j < 2; ++j) {
            str_out[i*2]=str_in[i];
            str_out[(i*2)+1]=str_in[i];
        }
    }
    printf("** %s **",str_out);
    return 0;
}