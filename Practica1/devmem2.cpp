#include <fcntl.h>
#include <sys/mman.h>
#include <stdio.h>
#include <unistd.h>
int main() {
int fd = open("/dev/mem", O_RDWR | O_SYNC);
void *map_base = mmap(0, 4096, PROT_READ | PROT_WRITE, MAP_SHARED,
fd, 0x44E07000);
while (1) {
*(unsigned long *)(map_base + 0x194) = 0x00000080;
usleep(100000);
*(unsigned long *)(map_base + 0x190) = 0x00000080;
usleep(100000);
}
}
