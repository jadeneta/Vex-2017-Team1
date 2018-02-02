void SkillsAuto()
{
motorReq[ConeIntake] = 50;
FourBarTarget = MAX_FOURBARHEIGHT;
wait1Msec(300);
MogoTarget = MIN_MOGO;
moveForwardWithSensor(1250);
MogoTarget = MAX_MOGO;
wait1Msec(1000);
moveBackwardWithSensor(900);
TurnRightWithSensor(TURN_180);
motorReq[ConeIntake] = -127;
wait1Msec(200);
motorReq[ConeIntake] = 0;
moveForwardWithSensor(300);
MogoTarget = MIN_MOGO;
wait1Msec(2000);
moveBackwardWithSensor(40);
MogoTarget = MAX_MOGO
moveBackwardWithSensor(400);
turnRightWithSensor(TURN_180);
MogoTarget = MIN_MOGO;
moveForwardWithSensor(1500);
MogoTarget = MAX_MOGO;
moveForwardWithSensor(1250);
wait1Msec(50);
turnLeftWithSensor(TURN_90);
wait1Msec(50);
moveForwardWithSensor(500);
wait1Msec(50);
turnRightWithSensor(TURN_90);
wait1Msec(50);
moveForwardWithSensor(1000);
}
