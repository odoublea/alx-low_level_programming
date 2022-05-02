#include <stdio.h>
#include <stdlib.h>
#include <syscall.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
