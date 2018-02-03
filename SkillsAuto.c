void SkillsAuto()
{
	// Hold Cone
	motorReq[ConeIntake] = 50;
	// Lift Four Bar
	FourBarTarget = MAX_FOURBARHEIGHT;
	wait1Msec(300);
	// Bring out Mobile Goal Intake
	MogoTarget = MIN_MOGO;
	// Go to the mobile goal
	moveForwardWithSensor(1250);
	// Take in Mobile Goal
	MogoTarget = MAX_MOGO;
	wait1Msec(1000);
	// Go back to the scoring zone
	moveBackwardWithSensor(900);
	// Turn around
	TurnRightWithSensor(TURN_180);
	// Release Cone
	motorReq[ConeIntake] = -127;
	wait1Msec(200);
	motorReq[ConeIntake] = 0;
	// Go to the 10 zone
	moveForwardWithSensor(300);
	// Releae goal in 10 zone
	MogoTarget = MIN_MOGO;
	wait1Msec(2000);
	// Go back a little
	moveBackwardWithSensor(40);
	// Take back goal intake
	MogoTarget = MAX_MOGO
	// Continue moving backwards
	moveBackwardWithSensor(400);
	// Turn around to go to the other side of the field
	turnRightWithSensor(TURN_180);
	// Bring out Goal intake
	MogoTarget = MIN_MOGO;
	//Go to the next goal
	moveForwardWithSensor(1600);
	// Pickup the goal
	MogoTarget = MAX_MOGO;
	// Continue to the opposite side.
	moveForwardWithSensor(1250);
	wait1Msec(50);
	// Turn to the center
	turnLeftWithSensor(TURN_90);
	wait1Msec(50);
	// Move to the center
	moveForwardWithSensor(500);
	wait1Msec(50);
	// Turn towards the 20 zone.
	turnRightWithSensor(TURN_90);
	wait1Msec(50);
	//  Go to the 20 zone
	//moveForwardWithSensor(1000);
	MogoTarget = 3700;
motorReq[leftfrontwheel] = 127;
motorReq[leftbackwheel] = 127;
motorReq[rightfrontwheel] = 127;
motorReq[rightbackwheel] = 127;
wait1Msec(3000);
motorReq[leftfrontwheel] = 0;
motorReq[leftbackwheel] = 0;
motorReq[rightfrontwheel] = 0;
motorReq[rightbackwheel] = 0;
MogoTarget = MIN_MOGO;
wait1Msec(1000);
MogoTarget = MAX_MOGO;
moveBackwardWithSensor(500);
}
