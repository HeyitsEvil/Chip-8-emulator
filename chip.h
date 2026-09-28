#ifndef CHIP_H
#define CHIP_H

// personal notes:
//16 bit address, 8 bit value returns
// 0x000->0x1FF reserved for the interpreter

#include <cstdint>
class chip8{
    private:
    uint16_t stack[16];
    uint16_t sp;

    uint8_t memory[4096];
    uint8_t v_register[16];

    uint16_t index_reg;
    uint16_t PC;

    uint8_t delaytimer;
    uint8_t soundtimer;

    uint16_t opcode;
    uint8_t keypad[16]; // use SDL-3 for mapping and simulation
    uint8_t video[64*32]; // idk can change

    //input keys later implement
    public:

    //constructor and destructor
    chip8();
    ~chip8();

    void Load_ROM();
    


    //accessor
    uint16_t get_PC() const;
    uint16_t get_opcode() const;
    uint16_t get_current_sp() const;



    void push_stack(uint16_t addr);
    uint16_t pop_stack();   
};
#endif