                                                   /*Anyone is free to copy, modify, publish, use, compile or
                                                    distribute this software, either in source code form or as a compiled
                                                    binary, for non-commercial use only. (i.e. YOU MAY NOT SELL IT)
                                                    John B 04/06/2021

                                                    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
                                                    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
                                                    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
                                                    IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
                                                    OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
                                                    ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
                                                    OTHER DEALINGS IN THE SOFTWARE.*/








//GLCD FontName : Tahoma15x21
//GLCD FontSize : 15 x 21

const unsigned short Tahoma15x21[] = {

   0x00,0x00,0xC0,0x01,0xC0,0x01,0x60,0x03,0x60,0x03,0x60,0x03,0x30,0x06,0x30,0x06,0x30,0x06,0x18,0x0C,0x18,0x0C,0xF8,0x0F,0xFC,0x1F,0x0C,0x18,0x0C,0x18,0x0E,0x38,0x06,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 65 'A'   0 TO 42 long
   0x00,0x00,0xFC,0x03,0xFC,0x07,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0xFC,0x03,0xFC,0x03,0x0C,0x06,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x06,0xFC,0x07,0xFC,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 66  B    42 - 84
   0x00,0x00,0xC0,0x07,0xF0,0x1F,0x70,0x18,0x18,0x10,0x18,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x1C,0x00,0x18,0x10,0x78,0x18,0xF0,0x1F,0xC0,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 67  C    84 - 126
   0x00,0x00,0xFC,0x01,0xFC,0x03,0x0C,0x07,0x0C,0x0C,0x0C,0x0C,0x0C,0x18,0x0C,0x18,0x0C,0x18,0x0C,0x18,0x0C,0x18,0x0C,0x18,0x0C,0x0C,0x0C,0x0C,0x0C,0x07,0xFC,0x03,0xFC,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 68  D    126 - 168
   0x00,0x00,0xFC,0x07,0xFC,0x07,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0xFC,0x03,0xFC,0x03,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0xFC,0x07,0xFC,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 69  E    168 - 210
   0x00,0x00,0xFC,0x07,0xFC,0x07,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0xFC,0x07,0xFC,0x07,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 70  F    210 - 252
   0x00,0x00,0xE0,0x07,0xF0,0x1F,0x38,0x1C,0x0C,0x10,0x0C,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x1F,0x06,0x1F,0x06,0x18,0x0C,0x18,0x0C,0x18,0x38,0x18,0xF8,0x1F,0xE0,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 71  G    252 - 294
   0x00,0x00,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0xFC,0x0F,0xFC,0x0F,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 72  H    294 - 336
   0x00,0x00,0xF0,0x03,0xF0,0x03,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xF0,0x03,0xF0,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 73  I    336 - 378
   0x00,0x00,0xFC,0x1F,0xFC,0x1F,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0xC2,0x01,0xFE,0x00,0x7C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 74  J    378 - 420
   0x00,0x00,0x0C,0x0E,0x0C,0x07,0x8C,0x03,0x8C,0x01,0xCC,0x00,0xEC,0x00,0x7C,0x00,0x3C,0x00,0x7C,0x00,0xEC,0x00,0xCC,0x00,0x8C,0x01,0x8C,0x03,0x0C,0x03,0x0C,0x06,0x0C,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 75  K    420 - 462
   0x00,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0xFC,0x07,0xFC,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 76  L    462 - 504
   0x00,0x00,0x0E,0x1C,0x0E,0x1C,0x1E,0x1E,0x1E,0x1E,0x16,0x1A,0x36,0x1B,0x36,0x19,0x26,0x19,0xE6,0x19,0xC6,0x18,0xC6,0x18,0xC6,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 77  M    504 - 546
   0x00,0x00,0x1C,0x0C,0x1C,0x0C,0x3C,0x0C,0x2C,0x0C,0x6C,0x0C,0x6C,0x0C,0x4C,0x0C,0xCC,0x0C,0x8C,0x0C,0x8C,0x0D,0x8C,0x0D,0x0C,0x0F,0x0C,0x0F,0x0C,0x0E,0x0C,0x0E,0x0C,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 78  N    546 - 588
   0x00,0x00,0xE0,0x03,0xF8,0x0F,0x1C,0x1C,0x0C,0x18,0x0E,0x38,0x06,0x30,0x06,0x30,0x06,0x30,0x06,0x30,0x06,0x30,0x06,0x30,0x0E,0x38,0x0C,0x18,0x1C,0x1C,0xF8,0x0F,0xE0,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 79  O    588 - 630
   0x00,0x00,0xFC,0x01,0xFC,0x07,0x0C,0x06,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x06,0xFC,0x03,0xFC,0x01,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 80  P    630 - 672
   0x00,0x00,0xE0,0x03,0xF8,0x0F,0x1C,0x1C,0x0C,0x18,0x0E,0x38,0x06,0x30,0x06,0x30,0x06,0x30,0x06,0x30,0x06,0x30,0x06,0x30,0x0E,0x38,0x0C,0x18,0x1C,0x1C,0xF8,0x0F,0xE0,0x03,0x00,0x03,0x00,0x07,0x00,0x1E,0x00,0x3C, // Code for char num 81  Q    672 - 714
   0x00,0x00,0xFC,0x01,0xFC,0x03,0x0C,0x07,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x03,0xFC,0x01,0xFC,0x00,0xCC,0x01,0x8C,0x03,0x0C,0x03,0x0C,0x06,0x0C,0x0E,0x0C,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 82  R    714 - 756
   0x00,0x00,0xF0,0x03,0xF8,0x07,0x1C,0x04,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x3C,0x00,0xF8,0x01,0xE0,0x07,0x00,0x0E,0x00,0x0C,0x00,0x0C,0x04,0x0C,0x0C,0x06,0xFC,0x07,0xF0,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 83  S    756 - 798
   0x00,0x00,0xFE,0x1F,0xFE,0x1F,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 84  T    798 - 840
   0x00,0x00,0x06,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x0E,0x1C,0x1C,0x0E,0xF8,0x07,0xF0,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 85  U    840 - 882
   0x00,0x00,0x04,0x10,0x0C,0x18,0x0C,0x18,0x0C,0x18,0x18,0x0C,0x18,0x0C,0x18,0x0C,0x30,0x06,0x30,0x06,0x30,0x06,0x60,0x03,0x60,0x03,0x60,0x03,0xC0,0x01,0xC0,0x01,0xC0,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 86  V    882 - 924
   0x00,0x00,0x02,0x20,0x82,0x20,0x82,0x20,0x42,0x21,0x46,0x31,0x46,0x31,0x44,0x11,0x44,0x11,0x44,0x11,0x6C,0x1B,0x28,0x0A,0x28,0x0A,0x28,0x0A,0x28,0x0A,0x10,0x04,0x10,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 87  W    924 - 966
   0x00,0x00,0x06,0x18,0x0C,0x0C,0x18,0x06,0x18,0x06,0x30,0x03,0x30,0x03,0xE0,0x01,0xC0,0x00,0xC0,0x00,0xE0,0x01,0x30,0x03,0x30,0x03,0x18,0x06,0x18,0x06,0x0C,0x0C,0x06,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 88  X    966 - 1008
   0x00,0x00,0x04,0x08,0x04,0x08,0x0C,0x0C,0x08,0x04,0x18,0x06,0x10,0x02,0x30,0x03,0xE0,0x01,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 89  Y    1008 - 1050
   0x00,0x00,0xFC,0x0F,0xFC,0x0F,0x00,0x0C,0x00,0x06,0x00,0x03,0x00,0x03,0x80,0x01,0xC0,0x00,0xC0,0x00,0x60,0x00,0x30,0x00,0x30,0x00,0x18,0x00,0x0C,0x00,0xFC,0x0F,0xFC,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 90  Z    1050 - 1092
   // Code for char num 91
   0x06,0x00,0x06,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0x80,0x01,0x80,0x01,0x00,0x00, // Code for char num 92      1092  1134
    // Code for char num 93
   0x00,0x00,0xC0,0x01,0xC0,0x01,0x60,0x03,0x30,0x06,0x30,0x06,0x18,0x0C,0x0C,0x18,0x06,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 94     1134   1176
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x07,0x00,0x00, // Code for char num 95     1176   1218
   // Code for char num 96
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x01,0xF8,0x03,0x00,0x06,0x00,0x06,0xE0,0x07,0xF8,0x07,0x1C,0x06,0x0C,0x06,0x0C,0x07,0xFC,0x07,0xF0,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 97     1218  1260
   0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0xCC,0x03,0xFC,0x07,0x1C,0x06,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x06,0xFC,0x07,0xEC,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 98     1260  1303
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x03,0xF8,0x07,0x18,0x04,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x18,0x04,0xF8,0x07,0xE0,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 99     1302  1344
   0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0xE0,0x0D,0xF8,0x0F,0x18,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x18,0x0E,0xF8,0x0F,0xF0,0x0D,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 100    1344  1386
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x03,0xF8,0x07,0x18,0x0E,0x0C,0x0C,0xFC,0x0F,0xFC,0x0F,0x0C,0x00,0x0C,0x00,0x18,0x08,0xF8,0x0F,0xE0,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 101    1386  1428
   0xE0,0x01,0xF0,0x01,0x38,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0xFC,0x00,0xFC,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 102    1428  1470
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x0D,0xF0,0x0F,0x18,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x18,0x0E,0xF8,0x0F,0xF0,0x0D,0x00,0x0C,0x08,0x06,0xF8,0x07,0xF8,0x01, // Code for char num 103    1470  1512
   0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0xEC,0x01,0xFC,0x03,0x1C,0x07,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 104    1512  1554  H LOWER CASE
   // Code for char num 105
   // Code for char num 106
   0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x03,0x8C,0x01,0xCC,0x00,0x6C,0x00,0x3C,0x00,0x7C,0x00,0x6C,0x00,0xCC,0x00,0x8C,0x01,0x8C,0x03,0x0C,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 107    1554  1596
   // Code for char num 108
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3E,0x1F,0xFF,0x3F,0xC3,0x30,0xC3,0x30,0xC3,0x30,0xC3,0x30,0xC3,0x30,0xC3,0x30,0xC3,0x30,0xC3,0x30,0xC3,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 109    1596  1638
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xEC,0x01,0xFC,0x03,0x1C,0x07,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 110    1638  1680  N LOWER CASE
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x01,0xF8,0x07,0x18,0x06,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x18,0x06,0xF8,0x07,0xE0,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 111 O LOWER CASE 1680 1722
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xEC,0x03,0xFC,0x07,0x1C,0x06,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x06,0xFC,0x07,0xFC,0x01,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00, // Code for char num 112   1722  1764  P LOWER CASE
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x0D,0xF8,0x0F,0x18,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x18,0x0E,0xF8,0x0F,0xF0,0x0D,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C, // Code for char num 113   1764  1806  Q
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xCC,0x01,0xFC,0x03,0x1C,0x02,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 114
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x01,0xF8,0x03,0x0C,0x02,0x0C,0x00,0x1C,0x00,0xF8,0x01,0xE0,0x03,0x00,0x03,0x04,0x03,0xFC,0x01,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 115
   0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0xFC,0x00,0xFC,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x01,0xF8,0x01,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 116
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x1C,0x07,0xF8,0x07,0xF0,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 117
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x06,0x18,0x03,0x18,0x03,0x18,0x03,0xB0,0x01,0xB0,0x01,0xB0,0x01,0xE0,0x00,0xE0,0x00,0xE0,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 118
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x83,0x60,0xC3,0x61,0xC6,0x31,0x46,0x33,0x66,0x33,0x66,0x33,0x2C,0x12,0x3C,0x1E,0x3C,0x1E,0x18,0x0C,0x18,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 119
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x06,0x18,0x03,0xB0,0x01,0xB0,0x01,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xB0,0x01,0xB0,0x01,0x18,0x03,0x0C,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 120
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x06,0x18,0x03,0x18,0x03,0x18,0x03,0xB0,0x01,0xB0,0x01,0xB0,0x01,0xE0,0x00,0xE0,0x00,0xE0,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x20,0x00,0x38,0x00, // Code for char num 121
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0x01,0xFC,0x01,0xC0,0x00,0xC0,0x00,0x60,0x00,0x70,0x00,0x30,0x00,0x18,0x00,0x1C,0x00,0xFC,0x01,0xFC,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 122
   0xC0,0x01,0xE0,0x01,0x70,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x18,0x00,0x0E,0x00,0x0E,0x00,0x18,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x70,0x00,0xE0,0x01,0xC0,0x01, // Code for char num 123
   // Code for char num 124
   0x0E,0x00,0x1E,0x00,0x38,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x60,0x00,0xC0,0x01,0xC0,0x01,0x60,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x38,0x00,0x1E,0x00,0x0E,0x00, // Code for char num 125
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x30,0xFC,0x30,0xCE,0x39,0x86,0x1F,0x06,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 126
   0x7C,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x7C,0x00,0x00,0x00,0x00,0x00 // Code for char num 127
        };



//GLCD FontName : Segment1416x22
//GLCD FontSize : 16 x 22 SET FONT WIDTH TO 15 AND HEIGHT TO 22
const unsigned short Number_Font[] = {   //  44 Long  2 Bytes 16 Pixels Wide

   0xFE,0x3F,0xFD,0x5F,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x01,0x40,0x02,0x20,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0xFD,0x5F,0xFE,0x3F, // Code for char num 48 0   0 to 44
   0x80,0x00,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x00,0x01,0x80,0x00,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x00, // Code for char num 49 1   44 to 88
   0xFF,0x3F,0xFE,0x5F,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0xFE,0x5F,0xFD,0x3F,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0xFD,0x3F,0xFE,0x7F, // Code for char num 50 2   88 to 132
   0xFF,0x3F,0xFE,0x5F,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0xFE,0x3F,0xFE,0x5F,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0xFE,0x5F,0xFF,0x3F, // Code for char num 51 3   132 to 176
   0x01,0x40,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0xFD,0x3F,0xFE,0x5F,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x20, // Code for char num 52 4   176 to 220
   0xFE,0x7F,0xFD,0x3F,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0xFD,0x3F,0xFE,0x5F,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0xFE,0x5F,0xFF,0x3F, // Code for char num 53 5   220 to 264
   0xFE,0x7F,0xFD,0x3F,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0xFD,0x3F,0xFE,0x5F,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0xFD,0x5F,0xFE,0x3F, // Code for char num 54 6   264 to 308
   0xFF,0x3F,0xFE,0x5F,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x40,0x00,0x20,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x40, // Code for char num 55 7   308 to 352
   0xFE,0x3F,0xFD,0x5F,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0xFD,0x3F,0xFE,0x5F,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0xFD,0x5F,0xFE,0x3F, // Code for char num 56 8   352 to 396
   0xFE,0x3F,0xFD,0x5F,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0x03,0x60,0xFD,0x3F,0xFE,0x5F,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0xFE,0x5F,0xFF,0x3F  // Code for char num 57 9   396 to 440
        };


/*//GLCD FontName : Bell_MT12x19
//GLCD FontSize : 12 x 19     SET FONT WIDTH TO 15 AND HEIGHT TO 19

const unsigned short Number_Font[] = {   //38 Bytes Long

   0x00,0x00,0x00,0x00,0xF0,0x00,0x1C,0x03,0x0E,0x07,0x06,0x06,0x07,0x0E,0x07,0x0E,0x07,0x0E,0x07,0x0E,0x07,0x0E,0x06,0x06,0x0E,0x07,0x1C,0x03,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 48
   0x00,0x00,0x00,0x00,0xC0,0x00,0xFC,0x00,0xF0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0xFC,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 49
   0x00,0x00,0x00,0x00,0xE0,0x01,0x30,0x03,0x1C,0x07,0x0C,0x07,0x0E,0x07,0x2E,0x03,0x9E,0x03,0xDC,0x01,0x40,0x00,0x30,0x04,0xF8,0x07,0xFC,0x03,0xFE,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 50
   0x00,0x00,0x00,0x00,0xE0,0x03,0x18,0x07,0x0C,0x07,0x2C,0x07,0xAC,0x03,0x98,0x00,0xC0,0x03,0x20,0x07,0x00,0x07,0x0E,0x07,0x8E,0x03,0xCE,0x01,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 51
   0x00,0x00,0x00,0x00,0x00,0x03,0x80,0x03,0xC0,0x03,0xA0,0x03,0x90,0x03,0x88,0x0B,0x84,0x0B,0xFE,0x0F,0x80,0x0B,0x80,0x0B,0x80,0x03,0x80,0x03,0xE0,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 52
   0x00,0x04,0x00,0x06,0xF0,0x03,0xF0,0x03,0xF0,0x00,0x10,0x00,0xE8,0x01,0x98,0x03,0x08,0x07,0x08,0x07,0x00,0x07,0x0E,0x07,0x8E,0x03,0x8E,0x01,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 53
   0x00,0x00,0x00,0x00,0xE0,0x07,0x30,0x0E,0x18,0x0E,0x1C,0x0E,0x1C,0x00,0xEE,0x03,0x1E,0x07,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0C,0x0E,0x18,0x07,0xF0,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 54
   0x00,0x00,0x04,0x00,0xFC,0x0F,0xFC,0x07,0xFE,0x07,0x06,0x02,0x02,0x01,0x00,0x01,0x80,0x01,0x80,0x00,0xC0,0x00,0xC0,0x00,0xE0,0x00,0xE0,0x00,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 55
   0x00,0x00,0x00,0x00,0xF0,0x01,0x0C,0x07,0x06,0x06,0x06,0x06,0x3E,0x03,0xFC,0x01,0xF8,0x03,0xCC,0x07,0x06,0x07,0x06,0x06,0x06,0x06,0x0C,0x03,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // Code for char num 56
   0x00,0x00,0x00,0x00,0xF0,0x01,0x1C,0x03,0x0E,0x06,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x1C,0x0F,0xF8,0x0E,0x00,0x07,0x0E,0x07,0x0E,0x03,0x8E,0x01,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 // Code for char num 57
        };*/




/*//GLCD FontName : Script_MT_Bold16x26
//GLCD FontSize : 16 x 26

const unsigned short Number_Font[] = {   //52 Bytes Long

   0x00,0x3C,0x00,0x7E,0x80,0xC3,0xC0,0xC3,0xE0,0xC1,0xF0,0xC0,0xF0,0xC0,0x78,0xC0,0x78,0xC0,0x3C,0xC0,0x3C,0xC0,0x1E,0xC0,0x1E,0x40,0x1E,0x40,0x1F,0x40,0x0F,0x60,0x0F,0x20,0x0F,0x20,0x0F,0x30,0x0F,0x10,0x0F,0x18,0x1F,0x0C,0x1E,0x06,0xFE,0x07,0xFC,0x01,0xF8,0x00, // Code for char num 48
   0x00,0x3C,0x00,0x1E,0x00,0x1F,0x80,0x1F,0xC0,0x1F,0x60,0x0F,0x30,0x0F,0x18,0x0F,0x98,0x07,0x80,0x07,0x80,0x07,0xC0,0x07,0xC0,0x03,0xC0,0x03,0xE0,0x03,0xE0,0x01,0xE0,0x01,0xE0,0x01,0xF0,0x01,0xF0,0x00,0xF0,0x00,0xF8,0x00,0xF8,0x00,0x78,0x00,0x7C,0x00,0x3C,0x00, // Code for char num 49
   0x00,0x1F,0xC0,0x7F,0x60,0xF8,0x30,0xF0,0x18,0xE0,0x18,0xE0,0x1C,0xE0,0x3C,0xE0,0x7C,0xE0,0x7C,0xF0,0x18,0xF0,0x00,0x78,0x00,0x38,0x00,0x1C,0x00,0x0E,0x00,0x07,0xC0,0x03,0xE0,0x01,0x70,0x00,0x38,0x00,0x18,0x40,0x0C,0x60,0xFE,0x3F,0xFF,0x3F,0xFF,0x1F,0xFF,0x0F, // Code for char num 50
   0x80,0x1F,0xE0,0x7F,0x70,0xF8,0x18,0xF0,0x1C,0xE0,0x3C,0xE0,0x3C,0xE0,0x1C,0xE0,0x00,0xF0,0x00,0x70,0x00,0x1C,0xC0,0x07,0xC0,0x1F,0x00,0x3C,0x00,0x78,0x00,0xF0,0x00,0xF0,0x06,0xF0,0x07,0xF0,0x03,0xF0,0x03,0xF0,0x03,0x78,0x03,0x38,0x07,0x1C,0x0E,0x0F,0xFC,0x03, // Code for char num 51
   0x00,0x70,0x00,0x78,0x00,0x7C,0x00,0x7E,0x00,0x7B,0x80,0x7D,0xC0,0x7C,0x60,0x3C,0x30,0x3C,0x10,0x3E,0x18,0x1E,0x0C,0x1E,0x04,0x1F,0x02,0x0F,0x03,0x0F,0x81,0xEF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x07,0xC0,0x03,0xE0,0x03,0xE0,0x01,0xE0,0x01,0xF0,0x00,0xF0,0x00, // Code for char num 52
   0x80,0x7F,0x80,0xFF,0xC0,0xFF,0xE0,0x7F,0x60,0x00,0x60,0x00,0x60,0x00,0x70,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0xF0,0x0F,0xF0,0x1F,0x00,0x3C,0x00,0x78,0x00,0xF0,0x00,0xF0,0x00,0xF0,0x06,0xF0,0x07,0xF0,0x07,0xF8,0x07,0x78,0x07,0x3C,0x1E,0x1E,0xFC,0x0F,0xF0,0x03, // Code for char num 53
   0x00,0x70,0x00,0x3C,0x00,0x0E,0x80,0x07,0xC0,0x03,0xE0,0x01,0xF0,0x01,0xF8,0x00,0xF8,0x00,0x7C,0x00,0x7C,0x00,0x3E,0x3C,0x3E,0x7F,0xBE,0xF1,0x1F,0xE0,0x1F,0xE0,0x1F,0xE0,0x0F,0xE0,0x0F,0xE0,0x0F,0xF0,0x0F,0xF0,0x0E,0x70,0x0E,0x78,0x1C,0x1C,0xF8,0x0F,0xF0,0x03, // Code for char num 54
   0xFC,0xE1,0xFC,0xFF,0xFE,0x7F,0xFE,0x7F,0x02,0x3F,0x03,0x20,0x01,0x10,0x00,0x08,0x00,0x08,0x00,0x04,0x00,0x02,0x00,0x03,0x80,0x01,0x80,0x01,0xC0,0x00,0xE0,0x00,0x70,0x00,0x70,0x00,0x38,0x00,0x3C,0x00,0x3C,0x00,0x1E,0x00,0x1E,0x00,0x0E,0x00,0x0F,0x00,0x07,0x00, // Code for char num 55
   0x00,0x1F,0xC0,0x7F,0xE0,0xF0,0xF0,0xE0,0x70,0xC0,0x78,0xC0,0x78,0xC0,0x78,0x60,0x78,0x30,0xF8,0x18,0xF0,0x0F,0xE0,0x03,0xE0,0x07,0xF0,0x0F,0x1C,0x1F,0x06,0x3E,0x03,0x3E,0x03,0x3C,0x03,0x3C,0x03,0x3C,0x03,0x1C,0x03,0x1C,0x07,0x0E,0x0F,0x06,0xFE,0x03,0xFC,0x00, // Code for char num 56
   0xC0,0x0F,0xF0,0x1F,0x38,0x38,0x1C,0x70,0x1E,0x70,0x0F,0xF0,0x0F,0xF0,0x07,0xF0,0x07,0xF0,0x07,0xF8,0x07,0xF8,0x07,0xF8,0x0F,0x78,0x1F,0x7D,0xFE,0x7C,0x3C,0x3E,0x00,0x3E,0x00,0x1F,0x00,0x1F,0x80,0x0F,0x80,0x07,0xC0,0x03,0xE0,0x01,0x70,0x00,0x3C,0x00,0x0E,0x00 // Code for char num 57
        };*/

/*//GLCD FontName : Verdana13x18
//GLCD FontSize : 13 x 18

const unsigned short Number_Font[] = {   //36 Bytes Long

   0x00,0x00,0xF0,0x01,0xF8,0x03,0x1C,0x07,0x0C,0x06,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x0C,0x06,0x1C,0x07,0xF8,0x03,0xF0,0x01,0x00,0x00, // Code for char num 48
   0x00,0x00,0xC0,0x00,0xC0,0x00,0xF8,0x00,0xF8,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xF8,0x07,0xF8,0x07,0x00,0x00, // Code for char num 49
   0x00,0x00,0xF8,0x01,0xFC,0x03,0x04,0x07,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x03,0x80,0x01,0xC0,0x01,0xE0,0x00,0x70,0x00,0x38,0x00,0x1C,0x00,0xFC,0x0F,0xFC,0x0F,0x00,0x00, // Code for char num 50
   0x00,0x00,0xF8,0x01,0xFC,0x03,0x04,0x07,0x00,0x06,0x00,0x06,0x00,0x03,0xE0,0x01,0xE0,0x01,0x00,0x03,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x04,0x03,0xFC,0x03,0xF8,0x00,0x00,0x00, // Code for char num 51
   0x00,0x00,0x00,0x03,0x80,0x03,0xC0,0x03,0xE0,0x03,0x70,0x03,0x30,0x03,0x18,0x03,0x1C,0x03,0x0E,0x03,0xFE,0x0F,0xFE,0x0F,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x00, // Code for char num 52
   0x00,0x00,0xF8,0x0F,0xF8,0x0F,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0xF8,0x03,0xF8,0x07,0x00,0x0E,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x04,0x06,0xFC,0x07,0xF8,0x01,0x00,0x00, // Code for char num 53
   0x00,0x00,0xE0,0x03,0xF0,0x03,0x18,0x00,0x0C,0x00,0x0C,0x00,0x06,0x00,0xF6,0x01,0xFE,0x07,0x0E,0x0E,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x0C,0x0C,0x1C,0x06,0xF8,0x03,0xF0,0x01,0x00,0x00, // Code for char num 54
   0x00,0x00,0xFC,0x0F,0xFC,0x0F,0x00,0x0C,0x00,0x0C,0x00,0x06,0x00,0x06,0x00,0x03,0x00,0x03,0x80,0x01,0xC0,0x01,0xC0,0x00,0xE0,0x00,0x60,0x00,0x70,0x00,0x30,0x00,0x38,0x00,0x00,0x00, // Code for char num 55
   0x00,0x00,0xF0,0x01,0xFC,0x07,0x0E,0x0E,0x06,0x0C,0x06,0x0C,0x0E,0x0C,0x1C,0x07,0xF0,0x01,0xFC,0x07,0x0E,0x0E,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x0E,0x06,0xFC,0x07,0xF0,0x01,0x00,0x00, // Code for char num 56
   0x00,0x00,0xF0,0x01,0xF8,0x03,0x0C,0x07,0x06,0x06,0x06,0x0C,0x06,0x0C,0x06,0x0C,0x0E,0x0E,0xFC,0x0F,0xF0,0x0D,0x00,0x0C,0x00,0x06,0x00,0x06,0x80,0x03,0xF8,0x01,0xF8,0x00,0x00,0x00 // Code for char num 57
        };*/

const unsigned char Number_Font_Start = 0;
const unsigned char Number_Font_Length_Bytes = 44;
const unsigned char Number_Font_Width = 16;      // full bytes of pixels   8,16,24 etc
const unsigned char Number_Font_Height = 22;
const unsigned char Number_Font_Spacing = 1;



// TFT display connections
unsigned char TFT_DataPort at PORTB;
sbit TFT_WR at LATA3_bit;
sbit TFT_RD at LATA4_bit;
sbit TFT_CS at LATA2_bit;
sbit TFT_RS at LATA0_bit;        //This Is The #DC Pin  Needs Ra0
sbit TFT_RST at LATA1_bit;


unsigned char TFT_DataPort_Direction at TRISB;
sbit TFT_WR_Direction at TRISA3_bit;
sbit TFT_RD_Direction at TRISA4_bit;
sbit TFT_CS_Direction at TRISA2_bit;
sbit TFT_RS_Direction at TRISA0_bit;    // D/C# BIT
sbit TFT_RST_Direction at TRISA1_bit;

void TFT_Write_Command_ST7735S(unsigned char cmd) {
  TFT_CS = 0;
  TFT_RS = 0;
  TFT_DataPort = cmd;
  TFT_WR = 0;
  TFT_WR = 1;
  TFT_CS = 1;
}

void TFT_Write_Data_ST7735S(unsigned int _data) {
  TFT_CS = 0;
  TFT_RS = 1;
  TFT_DataPort = _data;
  TFT_WR = 0;
  TFT_WR = 1;
  TFT_RS = 0;
  TFT_CS = 1;
}


void Initialize_Display(){
      //------------------------------------ST7735S Reset Sequence-----------------------------------------//
       TFT_RST = 1;
       Delay_ms(1);
       TFT_RST = 0;
       Delay_ms(1);
       TFT_RST = 1;
       Delay_ms(120);
   //--------------------------------------------------------------------------------------------------------

       TFT_Write_Command_ST7735S(0x11);              // SLEEP OUT
       Delay_ms(120);

   //------------------------------------ST7735S Frame rate-----------------------------------------//

        TFT_Write_Command_ST7735S(0xB1); //Frame rate 80Hz
        TFT_Write_Data_ST7735S(0x02);
        TFT_Write_Data_ST7735S(0x35);
        TFT_Write_Data_ST7735S(0x36);

        TFT_Write_Command_ST7735S(0xB2); //Frame rate 80Hz
        TFT_Write_Data_ST7735S(0x02);
        TFT_Write_Data_ST7735S(0x35);
        TFT_Write_Data_ST7735S(0x36);

        TFT_Write_Command_ST7735S(0xB3); //Frame rate 80Hz
        TFT_Write_Data_ST7735S(0x02);
        TFT_Write_Data_ST7735S(0x35);
        TFT_Write_Data_ST7735S(0x36);
        TFT_Write_Data_ST7735S(0x02);
        TFT_Write_Data_ST7735S(0x35);
        TFT_Write_Data_ST7735S(0x36);

      //-----------------------------------End ST7735S Frame Rate-----------------------------------------//

        TFT_Write_Command_ST7735S(0xB4); //Dot Inversion  ?????????????????
        TFT_Write_Data_ST7735S(0x03);
      //------------------------------------ST7735S Power Sequence-----------------------------------------//

        TFT_Write_Command_ST7735S(0xC0);
        TFT_Write_Data_ST7735S(0xA2);
        TFT_Write_Data_ST7735S(0x02);
        TFT_Write_Data_ST7735S(0x84);
        TFT_Write_Command_ST7735S(0xC1);
        TFT_Write_Data_ST7735S(0xC5);
        TFT_Write_Command_ST7735S(0xC2);
        TFT_Write_Data_ST7735S(0x0D);
        TFT_Write_Data_ST7735S(0x00);
        TFT_Write_Command_ST7735S(0xC3);
        TFT_Write_Data_ST7735S(0x8D);
        TFT_Write_Data_ST7735S(0xEA);
        TFT_Write_Command_ST7735S(0xC4);
        TFT_Write_Data_ST7735S(0x8D);
        TFT_Write_Data_ST7735S(0xEE);

     //---------------------------------End ST7735S Power Sequence-------------------------------------//

        TFT_Write_Command_ST7735S(0xC5);  //VCOM
        TFT_Write_Data_ST7735S(0x05);

        TFT_Write_Command_ST7735S(0x36);  //MX, MY, RGB mode
      //  TFT_Write_Data_ST7735S(0B00001100); //TOP = CABLE AT TO         //         TFT_Write_Data_ST7735S(0xC8);  //TOP = CABLE AT BOTTOM
         TFT_Write_Data_ST7735S(0xC8);  //TOP = CABLE AT BOTTOM

     //------------------------------------ST7735S Gamma Sequence-----------------------------------------//

        TFT_Write_Command_ST7735S(0xE0);
        TFT_Write_Data_ST7735S(0x03);
        TFT_Write_Data_ST7735S(0x1B);
        TFT_Write_Data_ST7735S(0x09);
        TFT_Write_Data_ST7735S(0x0E);
        TFT_Write_Data_ST7735S(0x32);
        TFT_Write_Data_ST7735S(0x2D);
        TFT_Write_Data_ST7735S(0x28);
        TFT_Write_Data_ST7735S(0x2C);
        TFT_Write_Data_ST7735S(0x2B);
        TFT_Write_Data_ST7735S(0x29);
        TFT_Write_Data_ST7735S(0x30);
        TFT_Write_Data_ST7735S(0x3B);
        TFT_Write_Data_ST7735S(0x00);
        TFT_Write_Data_ST7735S(0x01);
        TFT_Write_Data_ST7735S(0x02);
        TFT_Write_Data_ST7735S(0x10);
        TFT_Write_Command_ST7735S(0xE1);
        TFT_Write_Data_ST7735S(0x03);
        TFT_Write_Data_ST7735S(0x1B);
        TFT_Write_Data_ST7735S(0x09);
        TFT_Write_Data_ST7735S(0x0E);
        TFT_Write_Data_ST7735S(0x32);
        TFT_Write_Data_ST7735S(0x2E);
        TFT_Write_Data_ST7735S(0x28);
        TFT_Write_Data_ST7735S(0x2C);
        TFT_Write_Data_ST7735S(0x2B);
        TFT_Write_Data_ST7735S(0x28);
        TFT_Write_Data_ST7735S(0x31);
        TFT_Write_Data_ST7735S(0x3C);
        TFT_Write_Data_ST7735S(0x00);
        TFT_Write_Data_ST7735S(0x00);
        TFT_Write_Data_ST7735S(0x02);
        TFT_Write_Data_ST7735S(0x10);

     //------------------------------------ST7735S Gamma Sequence End-----------------------------------------//

        TFT_Write_Command_ST7735S(0x3A);  //65k mode  PAGE 52 FOR DETAILS
        TFT_Write_Data_ST7735S(0x05);     //16 Bit Colour  8-bit Data Bus for 16-bit/Pixel (RGB 5-6-5-bit Input), 65K-Colors, 3AH= “05h”

        TFT_Write_Command_ST7735S(0x38);   //Idle Mode Off
        TFT_Write_Command_ST7735S(0x29);   //Display on
      // TFT_Write_Command_ST7735S(0x28);   //Display OFF

}


const unsigned char Black = 0;
const unsigned char Red = 2;
const unsigned char Orange = 3;
const unsigned char Yellow = 4;
const unsigned char Green = 5;
const unsigned char Blue = 6;
const unsigned char Violet = 7;
const unsigned char Gray = 8;
const unsigned char White = 9;
const unsigned char Magenta = 10;
const unsigned char Lime = 11;
const unsigned char Baby_Powder = 12;
const unsigned char Cyan = 13;
const unsigned char Lavenderblush = 14;
const unsigned char Beige = 15;

#define Black_Out         TFT_Write_Data_ST7735S(0b00000000);  TFT_Write_Data_ST7735S(0b00000000);
#define Red_Out           TFT_Write_Data_ST7735S(0b11110000);  TFT_Write_Data_ST7735S(0b00000000);
#define Orange_Out        TFT_Write_Data_ST7735S(0b11100101);  TFT_Write_Data_ST7735S(0b00100110);
#define Yellow_Out        TFT_Write_Data_ST7735S(0b11111111);  TFT_Write_Data_ST7735S(0b11100000);
#define Green_Out         TFT_Write_Data_ST7735S(0b00000011);  TFT_Write_Data_ST7735S(0b00000000);
#define Blue_Out          TFT_Write_Data_ST7735S(0b00000000);  TFT_Write_Data_ST7735S(0b00010111);
#define Violet_Out        TFT_Write_Data_ST7735S(0b10001011);  TFT_Write_Data_ST7735S(0b00111011);
#define Gray_Out          TFT_Write_Data_ST7735S(0b00111001);  TFT_Write_Data_ST7735S(0b11100011);
#define White_Out         TFT_Write_Data_ST7735S(0b11111111);  TFT_Write_Data_ST7735S(0b11111111);
#define Magenta_Out       TFT_Write_Data_ST7735S(0b11111001);  TFT_Write_Data_ST7735S(0b00001101);
#define Lime_Out          TFT_Write_Data_ST7735S(0b01100111);  TFT_Write_Data_ST7735S(0b11100000);
#define Baby_Powder_Out   TFT_Write_Data_ST7735S(0b11101110);  TFT_Write_Data_ST7735S(0b10001111);
#define Cyan_Out          TFT_Write_Data_ST7735S(0b00000111);  TFT_Write_Data_ST7735S(0b11111111);
#define Lavenderblush_Out TFT_Write_Data_ST7735S(0b11111011);  TFT_Write_Data_ST7735S(0b11000111);
#define Beige_Out         TFT_Write_Data_ST7735S(0b10111100);  TFT_Write_Data_ST7735S(0b00000000);

unsigned char X_Position;
unsigned char Y_Position;

void Set_Display_Tahoma15x21(unsigned char X_Position, unsigned char Y_Position){  //FOR ALPHABET CHARACTERS, NOT NUMBERS

     unsigned char font_width = 15;
     unsigned char font_height = 21;

     unsigned char set_start_column = 0x00 | X_Position;
     unsigned char Set_start_row = 0x00 | Y_position;

     unsigned char Set_end_column = Set_start_column + font_width;
     unsigned char Set_end_row = Set_start_row + font_height;

     TFT_Write_Command_ST7735S(0x2A); //Set Column Address//128
     TFT_Write_Data_ST7735S(0x00);
     TFT_Write_Data_ST7735S(Set_start_column); // Start Column Address   20 to 24 is 5 bytes
     TFT_Write_Data_ST7735S(0x00);
     TFT_Write_Data_ST7735S(Set_end_column);   // End Column Address

     TFT_Write_Command_ST7735S(0x2B); //Set Row Address //128
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(Set_start_row); // Satrt Row Address
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(159);   // End Row Address

     TFT_Write_Command_ST7735S(0x2C);
}


void Set_Display_Number_Font(unsigned char X_Position, unsigned char Y_Position){

     unsigned char set_start_column = 0x00 | X_Position;
     unsigned char Set_start_row = 0x00 | Y_position;

     unsigned char Set_end_column = Set_start_column + Number_Font_width-1; //(bytes -1 bit) 8 pixels = 1 byte, 16 pixels = 2 bytes
     unsigned char Set_end_row = Set_start_row + Number_font_height;

     TFT_Write_Command_ST7735S(0x2A); //Set Column Address//128
     TFT_Write_Data_ST7735S(0x00);
     TFT_Write_Data_ST7735S(Set_start_column); // Start Column Address   bytes
     TFT_Write_Data_ST7735S(0x00);
     TFT_Write_Data_ST7735S(Set_end_column);   // End Column Address   bytes or pixels of data

     TFT_Write_Command_ST7735S(0x2B); //Set Row Address //128
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(Set_start_row); // Satrt Row Address
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(159);   // End Row Address

     TFT_Write_Command_ST7735S(0x2C);
}


unsigned int Background_Colour;

TFT_Clear_Screen_ST7735S(unsigned int colour){

       static unsigned int i;
       Background_Colour = 0x00 | colour;
       TFT_Write_Command_ST7735S(0x2A); //Set Column Address//128
       TFT_Write_Data_ST7735S(0x00);
       TFT_Write_Data_ST7735S(0);
       TFT_Write_Data_ST7735S(0x00);
       TFT_Write_Data_ST7735S(127);

       TFT_Write_Command_ST7735S(0x2B); //Set Row Address //159
       TFT_Write_Data_ST7735S(0);
       TFT_Write_Data_ST7735S(0);
       TFT_Write_Data_ST7735S(0);
       TFT_Write_Data_ST7735S(159);
       TFT_Write_Command_ST7735S(0x2C); //Write Memory Start

    switch (colour)  {

     case 0:     for(i=0;i<20480;i++){
                 Black_Out;
                 } break;
     case 2:     for(i=0;i<20480;i++){
                 Red_Out;
                 } break;
     case 3:     for(i=0;i<20480;i++){
                 Orange_Out;
                 } break;
     case 4:     for(i=0;i<20480;i++){
                 Yellow_Out;
                 } break;
     case 5:     for(i=0;i<20480;i++){
                 Green_Out;
                 } break;
     case 6:     for(i=0;i<20480;i++){
                 Blue_Out;
                 } break;
     case 7:     for(i=0;i<20480;i++){
                 Violet_Out;
                 } break;
     case 8:     for(i=0;i<20480;i++){
                 Gray_Out;
                 } break;
     case 9:     for(i=0;i<20480;i++){
                 White_Out;
                 } break;
     case 10:    for(i=0;i<20480;i++){
                 Magenta_Out;
                 } break;
     case 11:    for(i=0;i<20480;i++){
                 Lime_Out;
                 } break;
     case 12:    for(i=0;i<20480;i++){
                 Baby_Powder_Out;
                 } break;
     case 13:    for(i=0;i<20480;i++){
                 Cyan_Out;
                 } break;
     case 14:    for(i=0;i<20480;i++){
                 Lavenderblush_Out;
                 } break;
     case 15:    for(i=0;i<20480;i++){
                 Beige_Out;
                 } break;
     default:    for(i=0;i<20480;i++){
                 TFT_Write_Data_ST7735S(colour);
                 TFT_Write_Data_ST7735S(colour);
                 } break;
    }

    return Background_Colour;
}

void Draw_Box_Rand_Dot(){

     static unsigned int i;
     static unsigned int colour;
     TFT_Write_Command_ST7735S(0x2A); //Set Column Address//128    TOP HORITONTAL LINE
     TFT_Write_Data_ST7735S(0x00);
     TFT_Write_Data_ST7735S(0); // Start Column Address
     TFT_Write_Data_ST7735S(0x00);
     TFT_Write_Data_ST7735S(127);   // End Column Address

     TFT_Write_Command_ST7735S(0x2B); //Set Row Address //128     TOP HORITONTAL LINE
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(32); // Satrt Row Address
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(32);   // End Row Address
     TFT_Write_Command_ST7735S(0x2C);

       for(i=0;i<256;i++){ //128x128  16384 per 2 bytes for 16 bit colour
        colour = Rand();
        TFT_Write_Data_ST7735S(colour);
        }

     TFT_Write_Command_ST7735S(0x2A); //Set Column Address//128    BOTTOM HORITONTAL LINE
     TFT_Write_Data_ST7735S(0x00);
     TFT_Write_Data_ST7735S(0); // Start Column Address
     TFT_Write_Data_ST7735S(0x00);
     TFT_Write_Data_ST7735S(127);   // End Column Address

     TFT_Write_Command_ST7735S(0x2B); //Set Row Address //128     BOTTOM HORITONTAL LINE
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(159); // Satrt Row Address
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(159);   // End Row Address
     TFT_Write_Command_ST7735S(0x2C);

        for(i=0;i<256;i++){ //128x128  16384 per 2 bytes for 16 bit colour
        colour = Rand();
        TFT_Write_Data_ST7735S(colour);
        }

     TFT_Write_Command_ST7735S(0x2A); //Set Column Address//128   LEFT VERTICAL LINE
     TFT_Write_Data_ST7735S(0x00);
     TFT_Write_Data_ST7735S(0); // Start Column Address
     TFT_Write_Data_ST7735S(0x00);
     TFT_Write_Data_ST7735S(0);   // End Column Address

     TFT_Write_Command_ST7735S(0x2B); //Set Row Address //128     LEFT VERTICAL LINE
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(33); // Satrt Row Address
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(158);   // End Row Address
     TFT_Write_Command_ST7735S(0x2C);

        for(i=0;i<254;i++){ //128x128  x 2 for 2 bytes per pixel
        colour = Rand();
        TFT_Write_Data_ST7735S(colour);
        }

     TFT_Write_Command_ST7735S(0x2A); //Set Column Address//128   RIGHT VERTICAL LINE
     TFT_Write_Data_ST7735S(0x00);
     TFT_Write_Data_ST7735S(127); // Start Column Address
     TFT_Write_Data_ST7735S(0x00);
     TFT_Write_Data_ST7735S(127);   // End Column Address

     TFT_Write_Command_ST7735S(0x2B); //Set Row Address //128     RIGHT VERTICAL LINE
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(33); // Satrt Row Address
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(158);   // End Row Address
     TFT_Write_Command_ST7735S(0x2C);

        for(i=0;i<254;i++){ //128x128  x 2 for 2 bytes per pixel
         colour = Rand();
         TFT_Write_Data_ST7735S(colour);
        }
}



void Draw_Box_Rand_Line(){

     static unsigned int i;
     static unsigned int colour;

     TFT_Write_Command_ST7735S(0x2A); //Set Column Address//128   TOP HORITONTAL LINE
     TFT_Write_Data_ST7735S(0x00);
     TFT_Write_Data_ST7735S(0); // Start Column Address
     TFT_Write_Data_ST7735S(0x00);
     TFT_Write_Data_ST7735S(127);   // End Column Address

     TFT_Write_Command_ST7735S(0x2B); //Set Row Address //128    TOP HORITONTAL LINE
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(32); // Satrt Row Address
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(32);   // End Row Address
     TFT_Write_Command_ST7735S(0x2C);

      colour = Rand();

      for(i=0;i<256;i++){ //128x128  16384 per 2 bytes for 16 bit colour
        TFT_Write_Data_ST7735S(colour);
       }

     TFT_Write_Command_ST7735S(0x2A); //Set Column Address//128     BOTTOM HORITONTAL LINE
     TFT_Write_Data_ST7735S(0x00);
     TFT_Write_Data_ST7735S(0); // Start Column Address
     TFT_Write_Data_ST7735S(0x00);
     TFT_Write_Data_ST7735S(127);   // End Column Address

     TFT_Write_Command_ST7735S(0x2B); //Set Row Address //128
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(159); // Satrt Row Address
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(159);   // End Row Address
     TFT_Write_Command_ST7735S(0x2C);

     colour = Rand();

     for(i=0;i<256;i++){ //128x128  16384 per 2 bytes for 16 bit colour
      TFT_Write_Data_ST7735S(colour);
     }

     TFT_Write_Command_ST7735S(0x2A); //Set Column Address//128       LEFT VERTICAL LINE
     TFT_Write_Data_ST7735S(0x00);
     TFT_Write_Data_ST7735S(0); // Start Column Address
     TFT_Write_Data_ST7735S(0x00);
     TFT_Write_Data_ST7735S(0);   // End Column Address

     TFT_Write_Command_ST7735S(0x2B); //Set Row Address //128   LEFT VERTICAL LINE
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(33); // Satrt Row Address
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(158);   // End Row Address
     TFT_Write_Command_ST7735S(0x2C);

     colour = Rand();

     for(i=0;i<254;i++){ //128x128  x 2 for 2 bytes per Pixel
     TFT_Write_Data_ST7735S(colour);
     }

     TFT_Write_Command_ST7735S(0x2A); //Set Column Address//128    RIGHT VERTICAL LINE
     TFT_Write_Data_ST7735S(0x00);
     TFT_Write_Data_ST7735S(127); // Start Column Address
     TFT_Write_Data_ST7735S(0x00);
     TFT_Write_Data_ST7735S(127);   // End Column Address

     TFT_Write_Command_ST7735S(0x2B); //Set Row Address //128    RIGHT VERTICAL LINE
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(33); // Satrt Row Address
     TFT_Write_Data_ST7735S(0);
     TFT_Write_Data_ST7735S(158);   // End Row Address
     TFT_Write_Command_ST7735S(0x2C);

     colour = Rand();

     for(i=0;i<254;i++){ //128x128  x 2 for 2 bytes per pixel
     TFT_Write_Data_ST7735S(colour);
     }
}

unsigned char Pixela;
unsigned char Pixelb;
unsigned char Pixelc;
unsigned char Pixeld;

void Pixel(){
 TFT_Write_Data_ST7735S(Pixela);
 TFT_Write_Data_ST7735S(Pixelb);
}

void Space(){
 TFT_Write_Data_ST7735S(Pixelc);
 TFT_Write_Data_ST7735S(Pixeld);
}

Get_Pixel_Colour(unsigned int Set_Colour){

    unsigned int colour = 0x00 | Set_Colour;

      switch (colour)  {

     case 0:     Pixela = 0b00000000;  Pixelb = 0b00000000;
                 break;
     case 2:     Pixela = 0b11110000;  Pixelb = 0b00000000;
                 break;
     case 3:     Pixela = 0b11110011;  Pixelb = 0b10000000;
                 break;
     case 4:     pixela = 0b11111111;  Pixelb = 0b11100000;
                 break;
     case 5:     pixela = 0b00000011;  pixelb = 0b00000000;
                 break;
     case 6:     pixela = 0b00000000;  pixelb = 0b00010111;
                 break;
     case 7:     pixela = 0b11110000;  pixelb = 0b00011111;
                 break;
     case 8:     pixela = 0b00111001;  pixelb = 0b11100011;
                 break;
     case 9:     pixela = 0b11111111;  pixelb = 0b11111111;
                 break;
     case 10:    pixela = 0b11111001;  pixelb = 0b00001101;
                 break;
     case 11:    pixela = 0b01100111;  pixelb = 0b11100000;
                 break;
     case 12:    pixela = 0b11101110;  pixelb = 0b10001111;
                 break;
     case 13:    pixela = 0b00000111;  pixelb = 0b11111111;
                 break;
     case 14:    pixela = 0b11111011;  pixelb = 0b11000111;
                 break;
     case 15:    pixela = 0b10111100;  pixelb = 0b00000000;
                 break;
     default:    pixela = 0b11111111;  pixelb = 0b11111111;
                 break;
    }

      switch (Background_colour)  {

     case 0:     Pixelc = 0b00000000;  Pixeld = 0b00000000;
                 break;
     case 2:     Pixelc = 0b11110000;  Pixeld = 0b00000000;
                 break;
     case 3:     Pixelc = 0b11110011;  Pixeld = 0b10000000;
                 break;
     case 4:     pixelc = 0b11111111;  Pixeld = 0b11100000;
                 break;
     case 5:     pixelc = 0b00000011;  pixeld = 0b00000000;
                 break;
     case 6:     pixelc = 0b00000000;  pixeld = 0b00010111;
                 break;
     case 7:     pixelc = 0b11110000;  pixeld = 0b00011111;
                 break;
     case 8:     pixelc = 0b00111001;  pixeld = 0b11100011;
                 break;
     case 9:     pixelc = 0b11111111;  pixeld = 0b11111111;
                 break;
     case 10:    pixelc = 0b11111001;  pixeld = 0b00001101;
                 break;
     case 11:    pixelc = 0b01100111;  pixeld = 0b11100000;
                 break;
     case 12:    pixelc = 0b11101110;  pixeld = 0b10001111;
                 break;
     case 13:    pixelc = 0b00000111;  pixeld = 0b11111111;
                 break;
     case 14:    pixelc = 0b11111011;  pixeld = 0b11000111;
                 break;
     case 15:    pixelc = 0b10111100;  pixeld = 0b00000000;
                 break;
     default:    pixelc = Background_Colour&0xff00>>8;  pixeld = Background_Colour&0xff;
                 break;
    }

    return colour;
    return Background_Colour;

}



void Write_Number_Space(unsigned int X_Position, unsigned int Y_Position){
     static unsigned int Colour;
     static unsigned int jj=0;

     Get_Pixel_Colour(Colour);
     Set_Display_Number_Font(X_Position,Y_Position);
     TFT_CS = 0;

     for (jj=0; jj<Number_Font_Length_Bytes*8; jj++){    //Space

       TFT_Write_Data_ST7735S(Pixelc);
       TFT_Write_Data_ST7735S(Pixeld);
      }

     TFT_CS = 1;
}



void Write_Number_Nine(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Number_Font(X_Position,Y_Position);

     for (jj=Number_Font_Length_Bytes*9; jj<Number_Font_Length_Bytes*10; jj++){

         for (x=0; x<8; x++){

         dataout = Number_Font[jj] &i;

         if (dataout >=1){                 //Number 9
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}



void Write_Number_Eight(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Number_Font(X_Position,Y_Position);

     for (jj=Number_Font_Length_Bytes*8; jj<Number_Font_Length_Bytes*9; jj++){

         for (x=0; x<8; x++){

         dataout = Number_Font[jj] &i;

         if (dataout >=1){                 //Number 8
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}


void Write_Number_Seven(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Number_Font(X_Position,Y_Position);

     for (jj=Number_Font_Length_Bytes*7; jj<Number_Font_Length_Bytes*8; jj++){

         for (x=0; x<8; x++){

         dataout = Number_Font[jj] &i;

         if (dataout >=1){                 //Number 7
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}


void Write_Number_Six(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Number_Font(X_Position,Y_Position);

     for (jj=Number_Font_Length_Bytes*6; jj<Number_Font_Length_Bytes*7; jj++){

         for (x=0; x<8; x++){

         dataout = Number_Font[jj] &i;

         if (dataout >=1){                 //Number 6
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}


void Write_Number_Five(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Number_Font(X_Position,Y_Position);

     for (jj=Number_Font_Length_Bytes*5; jj<Number_Font_Length_Bytes*6; jj++){

         for (x=0; x<8; x++){

         dataout = Number_Font[jj] &i;

         if (dataout >=1){                 //Number 5
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}



void Write_Number_Four(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Number_Font(X_Position,Y_Position);

     for (jj=Number_Font_Length_Bytes*4; jj<Number_Font_Length_Bytes*5; jj++){

         for (x=0; x<8; x++){

         dataout = Number_Font[jj] &i;

         if (dataout >=1){                 //Number 4
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}

void Write_Number_Three(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Number_Font(X_Position,Y_Position);

     for (jj=Number_Font_Length_Bytes*3; jj<Number_Font_Length_Bytes*4; jj++){

         for (x=0; x<8; x++){

         dataout = Number_Font[jj] &i;

         if (dataout >=1){                 //Number 3
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}

void Write_Number_Two(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Number_Font(X_Position,Y_Position);

     for (jj=Number_Font_Length_Bytes*2; jj<Number_Font_Length_Bytes*3; jj++){

         for (x=0; x<8; x++){

         dataout = Number_Font[jj] &i;

         if (dataout >=1){                 //Number 2
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}



void Write_Number_One(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Number_Font(X_Position,Y_Position);

     for (jj=Number_Font_Length_Bytes; jj<Number_Font_Length_Bytes*2; jj++){

         for (x=0; x<8; x++){

         dataout = Number_Font[jj] &i;

         if (dataout >=1){                 //Number 1
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}


void Write_Number_Zero(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Number_Font(X_Position,Y_Position);

     for (jj=Number_Font_Start; jj<Number_Font_Length_Bytes; jj++){    //JUST FOR NUMBERS 'NUMBER_FONT_START'

         for (x=0; x<8; x++){

         dataout = Number_Font[jj] &i;

         if (dataout >=1){                 //Number zero
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}


void Write_Tahoma_A(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Tahoma15x21(X_Position,Y_Position);

     for (jj=0; jj<42; jj++){

         for (x=0; x<8; x++){

         dataout = Tahoma15x21[jj] &i;

         if (dataout >=1){                 //letter A Tahoma15x21
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}


void Write_Tahoma_B(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Tahoma15x21(X_Position,Y_Position);

     for (jj=42; jj<84; jj++){

         for (x=0; x<8; x++){

         dataout = Tahoma15x21[jj] &i;

         if (dataout >=1){                 //letter B Tahoma15x21
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}

void Write_Tahoma_D(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Tahoma15x21(X_Position,Y_Position);

     for (jj=126; jj<168; jj++){

         for (x=0; x<8; x++){

         dataout = Tahoma15x21[jj] &i;

         if (dataout >=1){                 //letter D Tahoma15x21   126 - 168
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}


void Write_Tahoma_F(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Tahoma15x21(X_Position,Y_Position);

     for (jj=210; jj<252; jj++){

         for (x=0; x<8; x++){

         dataout = Tahoma15x21[jj] &i;

         if (dataout >=1){                 //letter F  Tahoma15x21
         Pixel();
         } else  { Space(); }
          i=i<<1;
          if (i>=256){
               i=1;}
         }
     }
}


void Write_Tahoma_H_lc(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Tahoma15x21(X_Position,Y_Position);

     for (jj=1512; jj<1554; jj++){

         for (x=0; x<8; x++){

         dataout = Tahoma15x21[jj] &i;

         if (dataout >=1){                 //letter H LOWER CASE Tahoma15x21   1512  1554  H LOWER CASE
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}


void Write_Tahoma_I(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Tahoma15x21(X_Position,Y_Position);

     for (jj=336; jj<378; jj++){

         for (x=0; x<8; x++){

         dataout = Tahoma15x21[jj] &i;

         if (dataout >=1){                 //letter I Tahoma15x21  336 - 378
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}


void Write_Tahoma_J(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Tahoma15x21(X_Position,Y_Position);

     for (jj=378; jj<420; jj++){

         for (x=0; x<8; x++){

         dataout = Tahoma15x21[jj] &i;

         if (dataout >=1){                 //letter J  Tahoma15x21 J  378 - 420
         Pixel();
         } else  { Space(); }
          i=i<<1;
          if (i>=256){
               i=1;}
         }
     }
}

void Write_Tahoma_M(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Tahoma15x21(X_Position,Y_Position);

     for (jj=504; jj<546; jj++){

         for (x=0; x<8; x++){

         dataout = Tahoma15x21[jj] &i;

         if (dataout >=1){                 //letter M  Tahoma15x21 504 - 546
         Pixel();
         } else { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}


void Write_Tahoma_N_lc(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Tahoma15x21(X_Position,Y_Position);

     for (jj=1638; jj<1680; jj++){

         for (x=0; x<8; x++){

         dataout = Tahoma15x21[jj] &i;

         if (dataout >=1){                 //letter N LOWER CASE Tahoma15x21  1638  1680  N
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}


void Write_Tahoma_S(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Tahoma15x21(X_Position,Y_Position);

     for (jj=756; jj<798; jj++){

         for (x=0; x<8; x++){

         dataout = Tahoma15x21[jj] &i;

         if (dataout >=1){                 //letter S  Tahoma15x21   756 - 798
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}


void Write_Tahoma_O(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Tahoma15x21(X_Position,Y_Position);

     for (jj=588; jj<630; jj++){

         for (x=0; x<8; x++){

         dataout = Tahoma15x21[jj] &i;

         if (dataout >=1){                 //letter O Capital Tahoma15x21
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}


void Write_Tahoma_O_lc(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Tahoma15x21(X_Position,Y_Position);

     for (jj=1680; jj<1722; jj++){

         for (x=0; x<8; x++){

         dataout = Tahoma15x21[jj] &i;

         if (dataout >=1){                 //letter O lower case Tahoma15x21 O LOWER CASE 1680 1722
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}



void Write_Tahoma_N(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Tahoma15x21(X_Position,Y_Position);

     for (jj=546; jj<588; jj++){

         for (x=0; x<8; x++){

         dataout = Tahoma15x21[jj] &i;

         if (dataout >=1){                 //letter N  Tahoma15x21
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}


void Write_Tahoma_T(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Tahoma15x21(X_Position,Y_Position);

     for (jj=798; jj<840; jj++){

         for (x=0; x<8; x++){

         dataout = Tahoma15x21[jj] &i;

         if (dataout >=1){                 //letter T  Tahoma15x21  T  798 - 840
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}


void Write_Tahoma_U(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Tahoma15x21(X_Position,Y_Position);

     for (jj=840; jj<882; jj++){

         for (x=0; x<8; x++){

         dataout = Tahoma15x21[jj] &i;

         if (dataout >=1){                 //letter U  Tahoma15x21 U  840 - 882
         Pixel();
         } else  { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}

void Write_Tahoma_Y(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Tahoma15x21(X_Position,Y_Position);

     for (jj=1008; jj<1050; jj++){

         for (x=0; x<8; x++){

         dataout = Tahoma15x21[jj] &i;

         if (dataout >=1){                 //letter Y  Tahoma15x21  1008 - 1050
         Pixel();
         } else { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}


void Write_Tahoma_Percent(unsigned char X_Position, unsigned char Y_Position, unsigned int Colour){
     static unsigned char x=0;
     static unsigned char dataout=0;
     static unsigned int i=1;
     static unsigned int jj=0;
     static unsigned int Pixel_Colour = 0x00 | Colour;

     Get_Pixel_Colour(Pixel_Colour);
     Set_Display_Tahoma15x21(X_Position,Y_Position);

     for (jj=0; jj<42; jj++){

         for (x=0; x<8; x++){

         dataout = Tahoma15x21_Percent[jj] &i;

         if (dataout >=1){                 // Symbol % Percent Tahoma15x21
         Pixel();
         } else { Space(); }

          i=i<<1;

          if (i>=256){
               i=1;}
         }
     }
}

void Clear_Tahoma_Text(unsigned int Colour){

       static unsigned int i;
       Background_Colour = 0x00 | colour;
       TFT_Write_Command_ST7735S(0x2A); //Set Column Address//128
       TFT_Write_Data_ST7735S(0x00);
       TFT_Write_Data_ST7735S(1);
       TFT_Write_Data_ST7735S(0x00);
       TFT_Write_Data_ST7735S(126);

       TFT_Write_Command_ST7735S(0x2B); //Set Row Address //159
       TFT_Write_Data_ST7735S(0);
       TFT_Write_Data_ST7735S(72);
       TFT_Write_Data_ST7735S(0);
       TFT_Write_Data_ST7735S(96);
       TFT_Write_Command_ST7735S(0x2C); //Write Memory Start

    switch (colour)  {

     case 0:     for(i=0;i<2688;i++){
                 Black_Out;
                 } break;
     case 2:     for(i=0;i<2688;i++){
                 Red_Out;
                 } break;
     case 3:     for(i=0;i<2688;i++){
                 Orange_Out;
                 } break;
     case 4:     for(i=0;i<2688;i++){
                 Yellow_Out;
                 } break;
     case 5:     for(i=0;i<2688;i++){
                 Green_Out;
                 } break;
     case 6:     for(i=0;i<2688;i++){
                 Blue_Out;
                 } break;
     case 7:     for(i=0;i<2688;i++){
                 Violet_Out;
                 } break;
     case 8:     for(i=0;i<2688;i++){
                 Gray_Out;
                 } break;
     case 9:     for(i=0;i<2688;i++){
                 White_Out;
                 } break;
     case 10:    for(i=0;i<2688;i++){
                 Magenta_Out;
                 } break;
     case 11:    for(i=0;i<2688;i++){
                 Lime_Out;
                 } break;
     case 12:    for(i=0;i<2688;i++){
                 Baby_Powder_Out;
                 } break;
     case 13:    for(i=0;i<2688;i++){
                 Cyan_Out;
                 } break;
     case 14:    for(i=0;i<2688;i++){
                 Lavenderblush_Out;
                 } break;
     case 15:    for(i=0;i<2688;i++){
                 Beige_Out;
                 } break;
     default:    for(i=0;i<2688;i++){
                 TFT_Write_Data_ST7735S(colour);
                 TFT_Write_Data_ST7735S(colour);
                 } break;
    }


}

   unsigned char DoneOne   = 1;
   unsigned char DoneTwo   = 1;
   unsigned char DoneThree = 1;
   unsigned char DoneFour  = 1;
   unsigned char DoneFive  = 1;
   unsigned char DoneSix   = 1;
   unsigned char DoneSeven = 1;
   unsigned char DoneEight = 1;
   unsigned char DoneNine  = 1;
   unsigned char  ValidEight = 0, ValidSeven = 0, ValidSix = 0, ValidFive = 0, ValidFour = 0, ValidThree = 0, ValidTwo = 0, ValidOne = 0, ValidZero = 0;

void Write_Number(unsigned long num,unsigned int X_Position,unsigned int Y_Position, unsigned char Font_Colour) {

   unsigned char Font_Width;
   unsigned int units_start;
   unsigned int tens_start;
   unsigned int hundreds_start;
   unsigned int thousands_start;
   unsigned int ten_thousands_start;
   unsigned int hundred_thousands_start;
   unsigned int million_start;
   unsigned int ten_million_start;
   unsigned int hundred_million_start;

   unsigned char Colour;
   static unsigned char numberstring[14];
   Colour = 0x00 | Font_Colour;
   Font_Width = Number_Font_Width + Number_Font_Spacing;

   if (num <=9){
      units_start = X_Position;
     }

   if (num >=10 && num<=99){
       DoneOne = 0;
       ValidEight = 1;
       units_start = X_Position +Font_Width*1;
       tens_start= X_Position;
      }

    if (num >=100 && num<=999){
       DoneTwo = 0;
       ValidSeven = 1;
       ValidEight = 1;
       units_start = X_Position + Font_Width *2;
       tens_start = X_Position + Font_Width*1;
       hundreds_start = X_Position;
      }

      if (num >=1000 && num<=9999){             //thousand
       DoneThree = 0;
       ValidSix = 1;
       ValidSeven = 1;
       ValidEight = 1;
       units_start = X_Position +Font_Width *3;
       tens_start = X_Position + Font_Width *2;
       hundreds_start = X_Position + Font_Width*1;
       thousands_start = X_Position;
       }

       if (num >=10000 && num<=99999){            //ten thousand to 99 thousand
       DoneFour = 0;
       ValidFive = 1;
       ValidSix = 1;
       ValidSeven = 1;
       ValidEight = 1;
       units_start = X_Position + Font_Width *4;
       tens_start = X_Position +Font_Width *3;
       hundreds_start = X_Position + Font_Width *2;
       thousands_start = X_Position + Font_Width*1;
       ten_thousands_start = X_Position;
       }

       if (num >=100000 && num<=999999){         //100 thousand  to 999 thousand
       DoneFive = 0;
       ValidFour = 1;
       ValidFive = 1;
       ValidSix = 1;
       ValidSeven = 1;
       ValidEight = 1;
       units_start = X_Position + Font_Width *5;
       tens_start = X_Position + Font_Width *4;
       hundreds_start = X_Position + Font_Width *3;
       thousands_start = X_Position+ Font_Width *2;
       ten_thousands_start = X_Position + Font_Width*1;
       hundred_thousands_start = X_Position;
       }

       if (num >=1000000 && num<=9999999){         // 1 million  to 9'999'999
       DoneSix = 0;
       ValidThree = 1;
       ValidFour = 1;
       ValidFive = 1;
       ValidSix = 1;
       ValidSeven = 1;
       ValidEight = 1;
       units_start = X_Position+ Font_Width *6;
       tens_start = X_Position + Font_Width *5;
       hundreds_start = X_Position +Font_Width *4;
       thousands_start = X_Position+ Font_Width *3;
       ten_thousands_start = X_Position+ Font_Width *2;
       hundred_thousands_start = X_Position+ Font_Width*1;
       million_start = X_Position;
       }

       if (num >=10000000 && num<=99999999){       //ten million to 99 million
       DoneSeven = 0;
       ValidTwo = 1;
       ValidThree = 1;
       ValidFour = 1;
       ValidFive = 1;
       ValidSix = 1;
       ValidSeven = 1;
       ValidEight = 1;
       units_start = X_Position+ Font_Width *7;
       tens_start = X_Position + Font_Width *6;
       hundreds_start = X_Position + Font_Width *5;
       thousands_start = X_Position+ Font_Width *4;
       ten_thousands_start = X_Position+ Font_Width *3;
       hundred_thousands_start = X_Position+ Font_Width *2;
       million_start = X_Position+ Font_Width*1;
       ten_million_start = X_position;
       }

       if (num >=100000000 && num<=999999999){       //humdred million
       DoneEight = 0;
       ValidOne = 1;
       ValidTwo = 1;
       ValidThree = 1;
       ValidFour = 1;
       ValidFive = 1;
       ValidSix = 1;
       ValidSeven = 1;
       ValidEight = 1;
       units_start = X_Position+ Font_Width *8;
       tens_start = X_Position + Font_Width *7;
       hundreds_start = X_Position + Font_Width *6;
       thousands_start = X_Position+ Font_Width *5;
       ten_thousands_start = X_Position+ Font_Width *4;
       hundred_thousands_start = X_Position+ Font_Width *3;
       million_start = X_Position+ Font_Width*2;
       ten_million_start = X_position+Font_Width;
       hundred_million_start = X_Position;
       }


       LongWordTostr(num,numberstring);     // Converts input unsigned long integer number to a string

       if (num<10 && DoneOne !=1){               //Clears The Tens Position Once
        Write_Number_Space(X_Position + Font_Width,Y_Position);
        DoneOne = 1;
        ValidEight = 0;
       }

       if (num<100 && DoneTwo !=1){             //Clears The Hundreds Position Once
        Write_Number_Space(X_Position + Font_Width *2,Y_Position);
        DoneTwo = 1;
        ValidSeven = 0;
       }

       if (num<1000 && DoneThree !=1){          //Clears The Thousands Position Once
        Write_Number_Space(X_Position + Font_Width *3,Y_Position);
        DoneThree = 1;
        ValidSix = 0;
       }

       if (num<10000 && DoneFour !=1){         //Clears The Ten Thousands Position Once
        Write_Number_Space(X_Position + Font_Width *4,Y_Position);
        DoneFour = 1;
        ValidFive = 0;
       }


       if (num<100000 && DoneFive !=1){        //Clears The Hundred Thousands Position Once
         Write_Number_Space(X_Position + Font_Width *5,Y_Position);
         DoneFive = 1;
         ValidFour = 0;
        }

       if (num<1000000 && DoneSix !=1){     //Clears The million Position Once
         Write_Number_Space(X_Position + Font_Width *6,Y_Position);
         DoneSix = 1;
         ValidThree = 0;
        }

        if (num<10000000 && DoneSeven !=1){     //Clears Ten million Position Once
         Write_Number_Space(X_Position + Font_Width *7,Y_Position);
         DoneSeven = 1;
         ValidTwo = 0;
        }

        if (num<100000000 && DoneEight !=1){     //Clears Hundred Million Position Once
          Write_Number_Space(X_Position + Font_Width *8,Y_Position);
          DoneEight = 1;
          ValidOne = 0;
         }

        if (num<1000000000 && DoneNine !=1){     //Clears One Billion Position Once
          Write_Number_Space(X_Position + Font_Width *9,Y_Position);
          DoneNine = 1;
          ValidZero = 0;
         }

     switch (numberstring[9])  {                          //units position

     case 48:    X_Position = units_start;
                 Write_Number_Zero(X_Position,Y_Position, Colour);
                 break;
     case 49:    X_Position = units_start;
                 Write_Number_One(X_Position,Y_Position, Colour);
                 break;
     case 50:    X_Position = units_start;
                 Write_Number_Two(X_Position,Y_Position, Colour);
                 break;
     case 51:    X_Position = units_start;
                 Write_Number_Three(X_Position,Y_Position, Colour);
                 break;
     case 52:    X_Position = units_start;
                 Write_Number_Four(X_Position,Y_Position, Colour);
                 break;
     case 53:    X_Position = units_start;
                 Write_Number_Five(X_Position,Y_Position, Colour);
                 break;
     case 54:    X_Position = units_start;
                 Write_Number_Six(X_Position,Y_Position, Colour);
                 break;
     case 55:    X_Position = units_start;
                 Write_Number_Seven(X_Position,Y_Position, Colour);
                 break;
     case 56:    X_Position = units_start;
                 Write_Number_Eight(X_Position,Y_Position, Colour);
                 break;
     case 57:    X_Position = units_start;
                 Write_Number_Nine(X_Position,Y_Position, Colour);
                 break;
     default:    break;
    }


  if (ValidEight){
     switch (numberstring[8])  {                         //tens position

     case 48:    X_Position = tens_start;
                 Write_Number_Zero(X_Position,Y_Position, Colour);
                 break;
     case 49:    X_Position = tens_start;
                 Write_Number_One(X_Position,Y_Position, Colour);
                 break;
     case 50:    X_Position = tens_start;
                 Write_Number_Two(X_Position,Y_Position, Colour);
                 break;
     case 51:    X_Position = tens_start;
                 Write_Number_Three(X_Position,Y_Position, Colour);
                 break;
     case 52:    X_Position = tens_start;
                 Write_Number_Four(X_Position,Y_Position, Colour);
                 break;
     case 53:    X_Position = tens_start;
                 Write_Number_Five(X_Position,Y_Position, Colour);
                 break;
     case 54:    X_Position = tens_start;
                 Write_Number_Six(X_Position,Y_Position, Colour);
                 break;
     case 55:    X_Position = tens_start;
                 Write_Number_Seven(X_Position,Y_Position, Colour);
                 break;
     case 56:    X_Position = tens_start;
                 Write_Number_Eight(X_Position,Y_Position, Colour);
                 break;
     case 57:    X_Position = tens_start;
                 Write_Number_Nine(X_Position,Y_Position, Colour);
                 break;
     default:    break;
    }}


    if (ValidSeven){
     switch (numberstring[7])  {                   //hundreds position

     case 48:    X_Position = hundreds_start;
                 Write_Number_Zero(X_Position,Y_Position, Colour);
                 break;
     case 49:    X_Position = hundreds_start;
                 Write_Number_One(X_Position,Y_Position, Colour);
                 break;
     case 50:    X_Position = hundreds_start;
                 Write_Number_Two(X_Position,Y_Position, Colour);
                 break;
     case 51:    X_Position = hundreds_start;
                 Write_Number_Three(X_Position,Y_Position, Colour);
                 break;
     case 52:    X_Position = hundreds_start;
                 Write_Number_Four(X_Position,Y_Position, Colour);
                 break;
     case 53:    X_Position = hundreds_start;
                 Write_Number_Five(X_Position,Y_Position, Colour);
                 break;
     case 54:    X_Position = hundreds_start;
                 Write_Number_Six(X_Position,Y_Position, Colour);
                 break;
     case 55:    X_Position = hundreds_start;
                 Write_Number_Seven(X_Position,Y_Position, Colour);
                 break;
     case 56:    X_Position = hundreds_start;
                 Write_Number_Eight(X_Position,Y_Position, Colour);
                 break;
     case 57:    X_Position = hundreds_start;
                 Write_Number_Nine(X_Position,Y_Position, Colour);
                 break;
     default:    break;
    } }

    if (ValidSix){
     switch (numberstring[6])  {                   //thousands position

     case 48:    X_Position = thousands_start;
                 Write_Number_Zero(X_Position,Y_Position, Colour);
                 break;
     case 49:    X_Position = thousands_start;
                 Write_Number_One(X_Position,Y_Position, Colour);
                 break;
     case 50:    X_Position = thousands_start;
                 Write_Number_Two(X_Position,Y_Position, Colour);
                 break;
     case 51:    X_Position = thousands_start;
                 Write_Number_Three(X_Position,Y_Position, Colour);
                 break;
     case 52:    X_Position = thousands_start;
                 Write_Number_Four(X_Position,Y_Position, Colour);
                 break;
     case 53:    X_Position = thousands_start;
                 Write_Number_Five(X_Position,Y_Position, Colour);
                 break;
     case 54:    X_Position = thousands_start;
                 Write_Number_Six(X_Position,Y_Position, Colour);
                 break;
     case 55:    X_Position = thousands_start;
                 Write_Number_Seven(X_Position,Y_Position, Colour);
                 break;
     case 56:    X_Position = thousands_start;
                 Write_Number_Eight(X_Position,Y_Position, Colour);
                 break;
     case 57:    X_Position = thousands_start;
                 Write_Number_Nine(X_Position,Y_Position, Colour);
                 break;
     default:    break;
    }}


    if (ValidFive){
     switch (numberstring[5])  {            //ten thousands position

     case 48:    X_Position = ten_thousands_start;
                 Write_Number_Zero(X_Position,Y_Position, Colour);
                 break;
     case 49:    X_Position = ten_thousands_start;
                 Write_Number_One(X_Position,Y_Position, Colour);
                 break;
     case 50:    X_Position = ten_thousands_start;
                 Write_Number_Two(X_Position,Y_Position, Colour);
                 break;
     case 51:    X_Position = ten_thousands_start;
                 Write_Number_Three(X_Position,Y_Position, Colour);
                 break;
     case 52:    X_Position = ten_thousands_start;
                 Write_Number_Four(X_Position,Y_Position, Colour);
                 break;
     case 53:    X_Position = ten_thousands_start;
                 Write_Number_Five(X_Position,Y_Position, Colour);
                 break;
     case 54:    X_Position = ten_thousands_start;
                 Write_Number_Six(X_Position,Y_Position, Colour);
                 break;
     case 55:    X_Position = ten_thousands_start;
                 Write_Number_Seven(X_Position,Y_Position, Colour);
                 break;
     case 56:    X_Position = ten_thousands_start;
                 Write_Number_Eight(X_Position,Y_Position, Colour);
                 break;
     case 57:    X_Position = ten_thousands_start;
                 Write_Number_Nine(X_Position,Y_Position, Colour);
                 break;
     default:    break;
    }}

   if (ValidFour){
     switch (numberstring[4])  {          //hundred thousands position

     case 48:    X_Position = hundred_thousands_start;
                 Write_Number_Zero(X_Position,Y_Position, Colour);
                 break;
     case 49:    X_Position = hundred_thousands_start;
                 Write_Number_One(X_Position,Y_Position, Colour);
                 break;
     case 50:    X_Position = hundred_thousands_start;
                 Write_Number_Two(X_Position,Y_Position, Colour);
                 break;
     case 51:    X_Position = hundred_thousands_start;
                 Write_Number_Three(X_Position,Y_Position, Colour);
                 break;
     case 52:    X_Position = hundred_thousands_start;
                 Write_Number_Four(X_Position,Y_Position, Colour);
                 break;
     case 53:    X_Position = hundred_thousands_start;
                 Write_Number_Five(X_Position,Y_Position, Colour);
                 break;
     case 54:    X_Position = hundred_thousands_start;
                 Write_Number_Six(X_Position,Y_Position, Colour);
                 break;
     case 55:    X_Position = hundred_thousands_start;
                 Write_Number_Seven(X_Position,Y_Position, Colour);
                 break;
     case 56:    X_Position = hundred_thousands_start;
                 Write_Number_Eight(X_Position,Y_Position, Colour);
                 break;
     case 57:    X_Position = hundred_thousands_start;
                 Write_Number_Nine(X_Position,Y_Position, Colour);
                 break;
     default:    break;
    }}

     if (ValidThree){
     switch (numberstring[3])  {                  //1 million position

     case 48:    X_Position = million_start;
                 Write_Number_Zero(X_Position,Y_Position, Colour);
                 break;
     case 49:    X_Position = million_start;
                 Write_Number_One(X_Position,Y_Position, Colour);
                 break;
     case 50:    X_Position = million_start;
                 Write_Number_Two(X_Position,Y_Position, Colour);
                 break;
     case 51:    X_Position = million_start;
                 Write_Number_Three(X_Position,Y_Position, Colour);
                 break;
     case 52:    X_Position = million_start;
                 Write_Number_Four(X_Position,Y_Position, Colour);
                 break;
     case 53:    X_Position = million_start;
                 Write_Number_Five(X_Position,Y_Position, Colour);
                 break;
     case 54:    X_Position = million_start;
                 Write_Number_Six(X_Position,Y_Position, Colour);
                 break;
     case 55:    X_Position = million_start;
                 Write_Number_Seven(X_Position,Y_Position, Colour);
                 break;
     case 56:    X_Position = million_start;
                 Write_Number_Eight(X_Position,Y_Position, Colour);
                 break;
     case 57:    X_Position = million_start;
                 Write_Number_Nine(X_Position,Y_Position, Colour);
                 break;
     default:    break;
    }}


     if (ValidTwo){
     switch (numberstring[2])  {                //10 million position

     case 48:    X_Position = ten_million_start;
                 Write_Number_Zero(X_Position,Y_Position, Colour);
                 break;
     case 49:    X_Position = ten_million_start;
                 Write_Number_One(X_Position,Y_Position, Colour);
                 break;
     case 50:    X_Position = ten_million_start;
                 Write_Number_Two(X_Position,Y_Position, Colour);
                 break;
     case 51:    X_Position = ten_million_start;
                 Write_Number_Three(X_Position,Y_Position, Colour);
                 break;
     case 52:    X_Position = ten_million_start;
                 Write_Number_Four(X_Position,Y_Position, Colour);
                 break;
     case 53:    X_Position = ten_million_start;
                 Write_Number_Five(X_Position,Y_Position, Colour);
                 break;
     case 54:    X_Position = ten_million_start;
                 Write_Number_Six(X_Position,Y_Position, Colour);
                 break;
     case 55:    X_Position = ten_million_start;
                 Write_Number_Seven(X_Position,Y_Position, Colour);
                 break;
     case 56:    X_Position = ten_million_start;
                 Write_Number_Eight(X_Position,Y_Position, Colour);
                 break;
     case 57:    X_Position = ten_million_start;
                 Write_Number_Nine(X_Position,Y_Position, Colour);
                 break;
     default:    break;
    }}

      if (ValidOne){
     switch (numberstring[1])  {              //100 million position

     case 48:    X_Position = hundred_million_start;
                 Write_Number_Zero(X_Position,Y_Position, Colour);
                 break;
     case 49:    X_Position = hundred_million_start;
                 Write_Number_One(X_Position,Y_Position, Colour);
                 break;
     case 50:    X_Position = hundred_million_start;
                 Write_Number_Two(X_Position,Y_Position, Colour);
                 break;
     case 51:    X_Position = hundred_million_start;
                 Write_Number_Three(X_Position,Y_Position, Colour);
                 break;
     case 52:    X_Position = hundred_million_start;
                 Write_Number_Four(X_Position,Y_Position, Colour);
                 break;
     case 53:    X_Position = hundred_million_start;
                 Write_Number_Five(X_Position,Y_Position, Colour);
                 break;
     case 54:    X_Position = hundred_million_start;
                 Write_Number_Six(X_Position,Y_Position, Colour);
                 break;
     case 55:    X_Position = hundred_million_start;
                 Write_Number_Seven(X_Position,Y_Position, Colour);
                 break;
     case 56:    X_Position = hundred_million_start;
                 Write_Number_Eight(X_Position,Y_Position, Colour);
                 break;
     case 57:    X_Position = hundred_million_start;
                 Write_Number_Nine(X_Position,Y_Position, Colour);
                 break;
     default:    break;
    }}
}


void main() {



           unsigned int x = 0;
           unsigned char xpos=20;
           unsigned char ypos=40;


           OSCCON =  0b01110000;   //   PIC18F26K22
           OSCTUNE.PLLEN = 1;        //page 35

           TRISA = 0;
           TRISB = 0;
           TRISC = 0;;
           TRISE = 0;
           PORTA = 0;
           PORTB = 0;
           PORTC = 0;
           PORTE = 0;
           ANSELA = 0;
           ANSELB = 0;
           ANSELC = 0;
           TFT_WR = 1;
           TFT_RD = 1;

           Initialize_Display();
           TFT_Clear_Screen_ST7735S(0);
           Draw_Box_Rand_Line();

         /*Write_Tahoma_M(xpos,ypos,Yellow);
            Write_Tahoma_A(xpos+16,ypos,Red);
            Write_Tahoma_N(xpos+32,ypos,Lime);
            Write_Tahoma_D(xpos+48,ypos,Cyan);
            Write_Tahoma_Y(xpos+64,ypos,Violet);*/

            Write_Tahoma_J(xpos,ypos,Yellow);
            Write_Tahoma_O_lc(xpos+16,ypos,Red);
            Write_Tahoma_H_lc(xpos+32,ypos,Lime);
            Write_Tahoma_N_lc(xpos+48,ypos,Cyan);
            Write_Tahoma_B(xpos+64,ypos,Violet);



  while(1){


                     Write_Number(x,8,100,Lime);
                     x++;





     }
}