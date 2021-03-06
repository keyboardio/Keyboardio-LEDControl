/* Kaleidoscope-LEDControl - LED control plugin for Kaleidoscope
 * Copyright (C) 2017-2018  Keyboard.io, Inc.
 *
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "LED-Off.h"

namespace kaleidoscope {
void LEDOff::onActivate(void) {
  ::LEDControl.set_all_leds_to({0, 0, 0});
}

void LEDOff::refreshAt(byte row, byte col) {
  ::LEDControl.setCrgbAt(row, col, {0, 0, 0});
}
}

kaleidoscope::LEDOff LEDOff;
