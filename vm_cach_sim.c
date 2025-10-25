// CS-3853-001 - Virtual Memory & Cache Sim
// Team #11

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// STRUCTS
typedef struct 
{
    int cache_kb;
    int block_size;
    int associativity;
    char replacment[8];
    int physical_memory_mb;
    double os_used_percentage;
    long long time_slice;
    char *trace_files[3];
    int trace_count;
}Config;
