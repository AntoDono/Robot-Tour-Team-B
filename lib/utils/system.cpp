#include <Arduino.h>

#pragma once

int freeRAM() {
  extern int __heap_start, *__brkval; 
  int v; 
  return (int) &v - (__brkval == 0 ? (int) &__heap_start : (int) __brkval); 
}

void getFreeRAMSpace() {
    Serial.print("Free RAM: ");
    Serial.println(freeRAM());
}