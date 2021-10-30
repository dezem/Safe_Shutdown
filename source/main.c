#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <switch.h>

int main(int argc, char **argv)
{
    // Console init
    spsmInitialize();
    // AMS safe shutdown
    spsmShutdown(false);
    spsmExit();
    return 0;
}