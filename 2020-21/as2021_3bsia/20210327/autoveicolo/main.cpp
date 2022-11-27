/**
 * File che usa la classe Autoveicolo.
 *
 * @file main.cpp
 * @author Massi Gionata 3B SIA
 */
#include "autoveicolo.h"
#include <string>
#include <iostream>
using namespace std;

int main() {
    Autoveicolo macchina("Fiat", "Panda", 130);
    // accendi!
    macchina.accendi();
    // ripeti 30 volte `accelera (10)`
    for(int i = 0; i < 30; i++) {
      macchina.accelera(10);
      macchina.stampa();
    }
    // ripeti 30 volte `frena (15)`
    for(int i = 0; i < 30; i++) {
      macchina.frena(15);
      macchina.stampa();
    }
    macchina.spegni();
    
    return 0;
}

