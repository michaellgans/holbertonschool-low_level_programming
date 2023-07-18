#include <stdio.h>
#include <stdlib.h>

int copy_file(const char *file_from, const char *file_to);

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Usage: %s file_from file_to\n", argv[0]);
        return 1;
    }

    const char *file_from = argv[1];
    const char *file_to = argv[2];

    int result = copy_file(file_from, file_to);
    if (result == -1)
    {
        printf("Error copying file.\n");
        return 1;
    }

    printf("File copied successfully.\n");
    return 0;
}

