#include "mbed.h"
#include "beep/beep.h"
#include "Buzzer/Buzzer.h"

Buzzer buzz(P3_26);
DigitalIn joyC(P3_25);
DigitalIn joyL(P1_29);
DigitalIn joyR(P1_28);
DigitalIn joyU(P1_25);
DigitalIn joyD(P1_26);

int main() {
	buzz.beep_once();
	while (1) {
		if (joyC == 0)
			buzz.beep_once();
		if (joyL == 0)
			buzz.beep_thrice();
		if (joyR == 0)
			buzz.beep_twice();
		if (joyU == 0)
			buzz.beep_once();
		if (joyD == 0)
			buzz.long_beep();
	}
}
