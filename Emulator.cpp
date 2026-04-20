class Emulator{
    private:
        unsigned short i; //Index reg
        unsigned short pc; // Program counter
        unsigned char **GenRegs;
        unsigned char **memory; // Ram 4096 bytes
        /**
         * 0x000 start of ram
         * 0x200 start of most chip 8 programs
         * 0x600 start of eti 660 chip 8 programs
         * 0xfff end of ram.
         */
        unsigned char **stack;  

        void opdecode(unsigned short op){
            switch (op){
                // 0NNN call code routine at NNN
                // 00e0 Clear the screen
                // 1NNN Jump to NNN
                // 2NNN call subroutine at NNN
                // 3xnn Skip next ins if vx == nn
                // 4xnn skip ins if vx != nn
                // 5xy0 // skip ins if vx == vy
                // 6xnn set vx to nn
                // 7xnn adds nn to vx
                // 8xy0 set vx value to vy
                // 8xy1 set vx to vx or vy
                // 8xy2 set vx to vx and vy
                // 8xy3 set vx to vx xor vy
                // 8xy4 adds vx to vy. VF 1 overflow 0 otherwise
                // 8xy5 Vx -= Vy vf 0 if underflow 1 otherwise.
                // 8xy6 shift vx right by 1 and store into vf shifted bit.
                // 8xy7 vx to vy - vx
                // 8xyE vx shifted to left by 1, set vf to 1 if shifted bit was 1.
                // 9xy0 skip next ins if vx != vy
                // annn set i to addr NNN
                // bnnn jump addr to NNN + v0
                // cxnn vx to rand() & NN
                // DXYN draw sprite at Vx, Vy, and height n and width 8
                // EX9E skip next ins if key stored in vx is pressed
                // EXA1 skip ins if key in vx is not pressed
                // fx07 set vx to delay timer.
                //fx0a vx is set to pressed key.
                // fx15 set delay timer to vx
                // fx18 set sound timer to vx
                // fx1e adds vx to vf
                // fx1e adds vx to i.
                // fx29 sets location of sprite for character in vx.
                // fx55 stores from v0 to vx in memory at address i. i left unchanged
                // fx65 stores v0 to vx with value from memory at i. i unchanged. 
            }
        }
};