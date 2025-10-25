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
    char replacement[8];
    int physical_memory_mb;
    double os_used_percentage;
    long long time_slice;
    char *trace_files[3];
    int trace_count;
}Config;

typedef struct 
{
    unsigned long long total_blocks;
    int tag_bits;
    int index_bits;
    unsigned long long rows;
    unsigned long long overhead_bytes;
    double implementation_kb;
    double cost;
    unsigned long long num_physical_pages;
    unsigned long long num_system_pages;
    int pte_bits;
    unsigned long long total_pt_ram_bytes;
}Calculations;

//FUNCTION PROTOTYPE DECLERATIONS

void parse_args(int argc, char **argv, Config *cfg);
void compute_values(Config *cfg, Calculations *calc);
void print_results(Config *cfg, Calculations *calc);

int main(int argc, char **argv){
    Config cfg = {0};
    Calculations calc = {0};

    parse_args(argc, argv, &cfg);
    compute_values(&cfg, &calc);
    print_results(&cfg, &calc);

    return 0;
}


// FUNCTION DEFS

//Parsing the command line args
void parse_args(int argc, char **argv, Config *cfg){
    // TODO: Fill in the logic for parsing
}

// Computing values
void compute_values(Config *cfg, Calculations *calc){
    // TODO: implement calcs requirments for milestone 1
}

// Printing per the requirments
void print_results(Config *cfg, Calculations *calc){
        printf("MILESTONE #1: Input Parameters and Calculated Values\n\n");
    printf("Cache Simulator - CS 3853 – Team #11\n\n");

    printf("Trace File(s):\n");
    for (int i = 0; i < cfg->trace_count; ++i) {
        printf("        %s\n", cfg->trace_files[i]);
    }

    printf("\n***** Cache Input Parameters *****\n\n");
    printf("Cache Size:                     %d KB\n", cfg->cache_kb);
    printf("Block Size:                     %d bytes\n", cfg->block_size);
    printf("Associativity:                  %d\n", cfg->associativity);
    printf("Replacement Policy:             %s\n", cfg->replacement);
    printf("Physical Memory:                %d MB\n", cfg->physical_memory_mb);
    printf("Percent Memory Used by System:  %.1f%%\n", cfg->os_used_percentage);
    printf("Instructions / Time Slice:      %lld\n", cfg->time_slice);

    printf("\n***** Cache Calculated Values *****\n\n");
    printf("Total # Blocks:                 %llu\n", calc->total_blocks);
    printf("Tag Size:                       %d bits\n", calc->tag_bits);
    printf("Index Size:                     %d bits\n", calc->index_bits);
    printf("Total # Rows:                   %llu\n", calc->rows);
    printf("Overhead Size:                  %llu bytes\n", calc->overhead_bytes);
    printf("Implementation Memory Size:     %.2f KB\n", calc->implementation_kb);
    printf("Cost:                           $%.2f\n", calc->cost);

    printf("\n***** Physical Memory Calculated Values *****\n\n");
    printf("Number of Physical Pages:       %llu\n", calc->num_physical_pages);
    printf("Number of Pages for System:     %llu\n", calc->num_system_pages);
    printf("Size of Page Table Entry:       %d bits\n", calc->pte_bits);
    printf("Total RAM for Page Table(s):    %llu bytes\n", calc->total_pt_ram_bytes);
}