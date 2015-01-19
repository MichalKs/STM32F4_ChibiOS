/**
 * @file    main.c
 * @brief
 * @date    14 sty 2015
 * @author  Michal Ksiezopolski
 *
 *
 * @verbatim
 * Copyright (c) 2014 Michal Ksiezopolski.
 * All rights reserved. This program and the
 * accompanying materials are made available
 * under the terms of the GNU Public License
 * v3.0 which accompanies this distribution,
 * and is available at
 * http://www.gnu.org/licenses/gpl.html
 * @endverbatim
 */

#include "ch.h"
#include "hal.h"

int main() {

  halInit();
  chSysInit();
  palSetPadMode(GPIOD, GPIOD_LED6, PAL_MODE_OUTPUT_PUSHPULL);

  while (TRUE) {
    palSetPad(GPIOD, GPIOD_LED6); /* Blue LED */
    chThdSleepMilliseconds(500);
    palClearPad(GPIOD, GPIOD_LED6);
    chThdSleepMilliseconds(500);
  }

}
