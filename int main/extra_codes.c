#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// malloc allocation //

// int main(void) {
//     size_t size = 1;
//     void *ptr;

//     while (1) {
//         ptr = malloc(size);
//         if (ptr == NULL) {
//             printf("Failed to allocate %zu bytes\n", size);
//             break;
//         }
//         printf("Allocated %zu bytes\n", size);
//         free(ptr);
//         size *= 2; // Double the size for the next allocation
//     }
//     return 0;
// }

// int max value //

// int main(void)
// {
//     printf("%d", __INT_MAX__);
// }

// the byets read read //

// #include <stdlib.h>
// #include <unistd.h>
// #include <fcntl.h>

// #define BUFFER_SIZE 900000000  // 1 MB buffer

// int main(void) {
//     int fd = open("large_file.txt", O_RDONLY);
//     if (fd < 0) {
//         perror("open");
//         return 1;
//     }

//     char *buffer = malloc(BUFFER_SIZE);
//     if (!buffer) {
//         perror("malloc");
//         close(fd);
//         return 1;
//     }

//     ssize_t bytes_read = read(fd, buffer, BUFFER_SIZE);
//     if (bytes_read < 0) {
//         perror("read");
//     } else {
//         printf("Read %zd bytes\n", bytes_read);
//     }

//     free(buffer);
//     close(fd);
//     return 0;
// }

// OPEN_MAX macro//

// #include <limits.h>
// #include <stdio.h>


// int main(void)
// {
//     printf("|%d|", OPEN_MAX);
// }