#include <stdlib>
#include <stdio>

#define PROGRAMEND 0xFFF 
#define PROGRAMSTART 0x1FF #limit code starts at 0x200


struct CPU{
    unsigned int ins_p;
    unsigned char **regs;
    unsigned char **mem;
};


struct CPU *init_CPU();