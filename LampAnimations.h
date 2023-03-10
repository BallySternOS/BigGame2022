#ifndef LAMP_ANIMATIONS_H

#include "BSOS_Config.h"
#include "BallySternOS.h"

// Lamp animation arrays
#define NUM_LAMP_ANIMATIONS       5
#define LAMP_ANIMATION_STEPS      24
#define NUM_LAMP_ANIMATION_BYTES  8
byte LampAnimations[NUM_LAMP_ANIMATIONS][LAMP_ANIMATION_STEPS][NUM_LAMP_ANIMATION_BYTES] = {
  // Radar Animation (index = 0)
  {
    {0x00, 0x00, 0x40, 0xE0, 0x00, 0x00, 0x00, 0x00}, // lamps on = 4
    {0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00}, // lamps on = 1
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 0
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00}, // lamps on = 1
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x92, 0x00, 0x00}, // lamps on = 3
    {0x28, 0x00, 0x00, 0x00, 0x00, 0xD9, 0x02, 0x00}, // lamps on = 8
    {0x18, 0x00, 0x00, 0x00, 0x00, 0x6D, 0x02, 0x00}, // lamps on = 8
    {0x00, 0x00, 0x00, 0x00, 0x80, 0x24, 0x00, 0x00}, // lamps on = 3
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 0
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 0
    {0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 1
    {0x00, 0xE0, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 4
    {0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00}, // lamps on = 4
    {0x80, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 4
    {0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00}, // lamps on = 3
    {0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00}, // lamps on = 2
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 0
    {0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 2
    {0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 1
    {0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 1
    {0x00, 0x00, 0x82, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 2
    {0x00, 0x00, 0x82, 0x01, 0x00, 0x00, 0x00, 0x00}, // lamps on = 3
    {0x01, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00}, // lamps on = 5
    {0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00}  // lamps on = 3
  // Bits Missing
  // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  },
  // Center Out Animation (index = 1)
  {
    {0x00, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 2
    {0x00, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 2
    {0x00, 0x90, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00}, // lamps on = 3
    {0x00, 0x90, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00}, // lamps on = 4
    {0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00}, // lamps on = 2
    {0x00, 0x02, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00}, // lamps on = 3
    {0x00, 0x02, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 2
    {0x00, 0x40, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00}, // lamps on = 3
    {0x00, 0x48, 0x80, 0x48, 0x80, 0x03, 0x00, 0x00}, // lamps on = 8
    {0x40, 0x49, 0x00, 0x48, 0x80, 0x02, 0x00, 0x00}, // lamps on = 8
    {0x00, 0x01, 0x00, 0x01, 0x00, 0x08, 0x00, 0x00}, // lamps on = 3
    {0x00, 0x24, 0x00, 0x01, 0x00, 0x1C, 0x00, 0x00}, // lamps on = 6
    {0x80, 0x24, 0x02, 0x92, 0x00, 0x14, 0x00, 0x00}, // lamps on = 9
    {0x80, 0x00, 0x02, 0x12, 0x00, 0xE0, 0x00, 0x00}, // lamps on = 7
    {0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00}, // lamps on = 3
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 0
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 0
    {0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 2
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 0
    {0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 2
    {0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00}, // lamps on = 3
    {0x04, 0x00, 0x60, 0x00, 0x00, 0x00, 0x60, 0x00}, // lamps on = 5
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x22, 0x00}, // lamps on = 2
    {0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00}  // lamps on = 2
  // Bits Missing
  // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  },
  // Bottom to Top Animation (index = 2)
  {
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00}, // lamps on = 1
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 0
    {0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 2
    {0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 1
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 0
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 0
    {0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00}, // lamps on = 3
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00}, // lamps on = 3
    {0x00, 0x00, 0x00, 0x00, 0x80, 0x03, 0x00, 0x00}, // lamps on = 3
    {0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 2
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 0
    {0x00, 0xE0, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00}, // lamps on = 6
    {0x00, 0x1C, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00}, // lamps on = 6
    {0x80, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 3
    {0x00, 0x02, 0x80, 0x03, 0x00, 0x00, 0x40, 0x00}, // lamps on = 5
    {0x41, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 3
    {0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 1
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 0
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 0
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 0
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00}, // lamps on = 1
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 0
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00}, // lamps on = 1
    {0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}  // lamps on = 2
  // Bits Missing
  // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  },
  // Saucer Out Animation (index = 3)
  {
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00}, // lamps on = 1
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00}, // lamps on = 1
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00}, // lamps on = 1
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 0
    {0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 1
    {0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 1
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 0
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00}, // lamps on = 1
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 0
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 0
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 0
    {0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 1
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 0
    {0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 1
    {0xC0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00}, // lamps on = 5
    {0x00, 0x1E, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 5
    {0x00, 0xE0, 0x80, 0x05, 0x00, 0x00, 0x00, 0x00}, // lamps on = 6
    {0x01, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00}, // lamps on = 6
    {0x00, 0x00, 0x20, 0xD0, 0x80, 0x00, 0x00, 0x00}, // lamps on = 5
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00}, // lamps on = 4
    {0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00}, // lamps on = 4
    {0x08, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 2
    {0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 1
    {0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00}  // lamps on = 2
  // Bits Missing
  // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  },
  // Rain Animation (index = 4)
  {
    {0x00, 0x85, 0x00, 0x02, 0x00, 0x14, 0x00, 0x00}, // lamps on = 6
    {0x40, 0x28, 0x40, 0x12, 0x00, 0xA0, 0x00, 0x00}, // lamps on = 8
    {0x00, 0x40, 0x42, 0x10, 0x00, 0x00, 0x62, 0x00}, // lamps on = 7
    {0x03, 0x00, 0x02, 0x80, 0x00, 0x00, 0x00, 0x00}, // lamps on = 4
    {0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00}, // lamps on = 1
    {0x20, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00}, // lamps on = 3
    {0x00, 0x00, 0x80, 0x08, 0x00, 0x00, 0x80, 0x00}, // lamps on = 3
    {0x00, 0x00, 0x20, 0x44, 0x00, 0x00, 0x80, 0x00}, // lamps on = 4
    {0x04, 0x00, 0x00, 0x20, 0x00, 0x01, 0x00, 0x00}, // lamps on = 3
    {0x94, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00}, // lamps on = 5
    {0x00, 0x07, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00}, // lamps on = 4
    {0x40, 0x38, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00}, // lamps on = 5
    {0x08, 0xC0, 0x40, 0x02, 0x80, 0x10, 0x40, 0x00}, // lamps on = 8
    {0x00, 0x00, 0x40, 0x12, 0x00, 0x84, 0x20, 0x00}, // lamps on = 6
    {0x00, 0x00, 0x00, 0x10, 0x00, 0x20, 0x00, 0x00}, // lamps on = 2
    {0x02, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00}, // lamps on = 2
    {0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00}, // lamps on = 3
    {0x20, 0x00, 0xA2, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 4
    {0x00, 0x00, 0x80, 0x01, 0x00, 0x01, 0x00, 0x00}, // lamps on = 3
    {0x00, 0x00, 0x00, 0x05, 0x00, 0x08, 0x00, 0x00}, // lamps on = 3
    {0x00, 0x00, 0x00, 0x28, 0x00, 0x40, 0x80, 0x00}, // lamps on = 4
    {0x14, 0x02, 0x00, 0x40, 0x00, 0x00, 0x80, 0x00}, // lamps on = 5
    {0x0C, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // lamps on = 3
    {0x80, 0x10, 0x00, 0x00, 0x80, 0x02, 0x00, 0x00}  // lamps on = 4
  // Bits Missing
  // 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  }
};


void ShowLampAnimation(byte animationNum, unsigned long divisor, unsigned long baseTime, byte subOffset, boolean dim, boolean reverse = false, byte keepLampOn = 99) {
  if (animationNum>=NUM_LAMP_ANIMATIONS) return;
  
  byte currentStep = (baseTime / divisor) % LAMP_ANIMATION_STEPS;
  if (reverse) currentStep = (LAMP_ANIMATION_STEPS - 1) - currentStep;

  byte lampNum = 0;
  for (int byteNum = 0; byteNum < NUM_LAMP_ANIMATION_BYTES; byteNum++) {
    for (byte bitNum = 0; bitNum < 8; bitNum++) {

      // if there's a subOffset, turn off lights at that offset
      if (subOffset) {
        byte lampOff = true;
        lampOff = LampAnimations[animationNum][(currentStep + subOffset) % LAMP_ANIMATION_STEPS][byteNum] & (1 << bitNum);
        if (lampOff && lampNum != keepLampOn) BSOS_SetLampState(lampNum, 0);
      }

      byte lampOn = false;
      lampOn = LampAnimations[animationNum][currentStep][byteNum] & (1 << bitNum);
      if (lampOn) BSOS_SetLampState(lampNum, 1, dim);

      lampNum += 1;
    }
  }
}




#define LAMP_ANIMATIONS_H
#endif
