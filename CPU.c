#include "CPU.h"

struct CPU *init_CPU(){
    struct CPU *temp = malloc(sizeof(CPU));
    temp->regs = malloc(sizeof(unsigned int *) * 4);
    temp->memory = malloc(sizeof(unsigned char*) * 4096);
    for(int i = 0; i < 16; i++){
        
        temp->regs[i] = calloc(0, sizeof(unsigned char));
    }
    for(int i = 0; i < 4096; i++){
        temp->memory = calloc(0, sizeof(unsigned char));
    }
    temp->insp = PROGRAMSTART;
}

/**
 * Load program into memory.
 * @param c The CPU memory struct
 * #param path the file we want to read.
 */
void load_program(struct CPU *c, char *path){
    unsigned char **temp = c->mem;
    temp = temp + PROGRAMSTART;
    FILE *fp = fread(path, "rb");
    fread(temp, sizeof(&temp), sizeof(unsigned char), fp);
}

/**
 * Execute a single cycle.
 */
struct CPU *exec(struct CPU *c){
    write_input(c);
    
    
    write_display(c);
}

/**
 * Writes the data to the display
 */
void write_display(struct CPU *c){
    
}


/**
 * Takes the user input collected on the other thread and writes it to memory.
 */
void write_input(){

    
}

void exec_ins(struct CPU *c){
    switch(c->mem[c->ins_p]){
        
    }
}

/**
 * the main program loop.
 */
void start(char *file){
    struct CPU *c = init_CPU();
    // start up thread for user input.
    load_program(c, file);
    while(0){
        c = exec(c);
        write_display(c);
    }
}