#include <stdio.h>
#include <sys/resource.h>

int main() {
    struct rlimit lim;

    getrlimit(RLIMIT_STACK, &lim);
    getrlimit(RLIMIT_NPROC, &lim);
    getrlimit(RLIMIT_NOFILE, &lim);

    printf("stack size: %ld\n", lim.rlim_cur);
    printf("process limit: %ld\n", lim.rlim_cur);
    printf("max file descriptors: %ld\n", lim.rlim_cur);
    return 0;
}
