
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if(argc < 2)
        exit(EXIT_SUCCESS);

    int cur_arg = 1;
    while( cur_arg < argc ) {
        FILE *read = fopen(argv[cur_arg++], "r");
        if(read == NULL) {
            printf("wcat: cannot open file\n");
            exit(EXIT_FAILURE);
        }

        char buffer[1024];

        while( fgets(buffer, sizeof(buffer), read) != NULL )
            printf("%s", buffer);
    }

}
