/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

// NTC-Thermistor 3950 100k 4.7k PullUp XHypercube CR10 Heatend
const short temptable_13[][2] PROGMEM = {
  { OV( 20.04), 285 },
  { OV( 23.19), 275 },
  { OV( 26.71), 265 },
  { OV( 31.23), 255 },
  { OV( 36.52), 245 },
  { OV( 42.75), 235 },
  { OV( 50.68), 225 },
  { OV( 60.22), 216 },
  { OV( 71.81), 208 },
  { OV( 86.50), 198 },
  { OV(102.31), 189 },
  { OV(124.19), 179 },
  { OV(151.02), 161 },
  { OV(182.86), 153 },
  { OV(220.38), 142 },
  { OV(317.00), 124 },
  { OV(446.38), 105 },
  { OV(590.31),  87 },
  { OV(737.19),  69 },
  { OV(857.20),  50 },
  { OV(939.69),  36 },
  { OV(984.56),  21 },
  { OV(1008.7),   0 }
};
