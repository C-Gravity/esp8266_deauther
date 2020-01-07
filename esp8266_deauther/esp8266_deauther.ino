/*
   Copyright (c) 2020 Stefan Kremser
   This software is licensed under the MIT License. See the license file for details.
   Source: github.com/spacehuhn/esp8266_deauther
 */

#include "debug.h"
#include "cli.h"

void setup() {
    debug_init();
}

void loop() {
    debug_update();
}