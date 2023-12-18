#include "rvemu.h"

/**
 * host program  <> high
 * guest program <> low     virtAddr + offset
*/
int main (int argc, char* argv[]) {
    assert (argc > 1);
    
    machine_t machine = {0};
    machine_load_programe (&machine, argv[1]);

    printf ("entry: %llx\n", TO_HOST(machine.mmu.entry));
    printf ("host alloc : %lx\n", machine.mmu.host_alloc);
    return 0;
}