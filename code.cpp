#include "AIStarter.h"



void setup(){
	AIStarter_SmartBotInit();
	AIStarter_SmartBotSetKeyInit();
	AIStarter_SmartBotSetColorWB(COLORSENOR2);
	AIStarter_SmartBotSetColorWB(COLORSENOR1);

}

void loop(){
	if(((AIStarter_SmartBotDetColorSenor(COLORSENOR2,BCOLOR)) && (AIStarter_SmartBotDetColorSenor(COLORSENOR1,BCOLOR)))){
		AIStarter_SmartBotSetMotor(MOTORR,50);
		AIStarter_SmartBotSetMotor(MOTORL,10);
		AIStarter_SmartBotSetLED(LED1,BLINK);
		delay(5*1000);
	}else{
		if(((AIStarter_SmartBotDetColorSenor(COLORSENOR2,GCOLOR)) && (AIStarter_SmartBotDetColorSenor(COLORSENOR1,GCOLOR)))){
			AIStarter_SmartBotSetMotor(MOTORR,10);
			AIStarter_SmartBotSetMotor(MOTORL,50);
			AIStarter_SmartBotSetLED(LED2,BLINK);
			delay(5*1000);
		}
	}

}
