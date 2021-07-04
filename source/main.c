#include <string.h>
#include <stdio.h>
#include <stdbool.h>

#include <switch.h>
#include "ams_bpc.h"

int main(int argc, char **argv)
{
    // Console init
    spsmInitialize();
    
    // AMS safe shutdown
    spsmShutdown(false);
    
    return 0;
}
