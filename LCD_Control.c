

//LCD Display code.
const short leftButton = 1;
const short centerButton = 2;
const short rightButton = 4;

//Declare count variable to keep track of our choice
	int count = 0;
//Wait for Press--------------------------------------------------
void waitForPress()
{
	while(nLCDButtons == 0){}
	wait1Msec(5);
}
//----------------------------------------------------------------

//Wait for Release------------------------------------------------
void waitForRelease()
{
	while(nLCDButtons != 0){}
	wait1Msec(5);
}

//

/////////////////////////////////////////////////////////////////////////////////////////
//
//                          Pre-Autonomous Functions
//
// You may want to perform some actions before the competition starts. Do them in the
// following function.
//
/////////////////////////////////////////////////////////////////////////////////////////
//MUST CALL THIS FUNCTION IN PRE_AUTO!!!!
task LCD()
{
	bool debug=false;
	bLCDBacklight = true;
	//------------- Beginning of User Interface Code ---------------
	//Clear LCD
	clearLCDLine(0);
	clearLCDLine(1);
	while (true) {
		switch(nLCDButtons){
		case leftButton:
			autonomousChoice=autoChoiceRed;
			break;
		case rightButton:
			autonomousChoice=autoChoiceBlue;
			break;
		case centerButton:
			autonomousChoice=autoChoiceSkills;
			break;
		}

		switch(autonomousChoice){
		case autoChoiceRed:
			displayLCDCenteredString(0, "Right Red Auto");
			break;
		case autoChoiceBlue:
			//Display second choice
			displayLCDCenteredString(0, "Left Blue Auto");
			break;
		case autoChoiceSkills:
			//Display third choice
			displayLCDCenteredString(0, "Skills");
			break;
		}

		string mainBattery, backupBattery, slift;
		if (debug) {
			clearLCDLine(1);
			sprintf(slift,"%d %d %d %d",SensorValue[LeftLiftSensor],SensorValue[RightLiftSensor], motorReq[LeftLift], motorReq[RightLift]);
			displayLCDString(1,0,slift);
		} else {

			//Display the Primary Robot battery voltage
			displayLCDString(1, 0, "P:");
			sprintf(mainBattery, "%1.2f%c", nImmediateBatteryLevel/1000.0,'V'); //Build the value to be displayed
			displayNextLCDString(mainBattery);

			//Display the Backup battery voltage
			displayLCDString(1, 8, "B:");
			sprintf(backupBattery, "%1.2f%c", BackupBatteryLevel/1000.0, 'V');	//Build the value to be displayed
			displayNextLCDString(backupBattery);
		}

		wait1Msec(200);
	}
}
