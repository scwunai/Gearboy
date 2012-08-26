/*
 * Gearboy - Nintendo Game Boy Emulator
 * Copyright (C) 2012  Ignacio Sanchez

 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see http://www.gnu.org/licenses/ 
 * 
 */

#ifndef INPUT_H
#define	INPUT_H

#include "definitions.h"

class Memory;
class Processor;

class Input
{
public:
    Input(Memory* pMemory, Processor* pProcessor);
    void Init();
    void Reset();
    u8 GetJoyPadState();
    void KeyPressed(Gameboy_Keys key);
    void KeyReleased(Gameboy_Keys key);
private:
    Memory* m_pMemory;
    Processor* m_pProcessor;
    u8 m_JoypadState;
};

#endif	/* INPUT_H */

