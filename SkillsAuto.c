void SkillsAuto()
{
motorReq[ConeIntake] = 50;
FourBarTarget = MAX_FOURBARHEIGHT;
wait1Msec(500);
MogoTarget = MIN_MOGO;
moveForwardWithSensor(1800);
MogoTarget = MAX_MOGO;
wait1Msec(400);
moveBackwardWithSensor(1630);
motorReq[ConeIntake] = -127
wait1Msec(200);
motorReq[ConeIntake] = 0;
wait1Msec(400);
TurnRightWithSensor(TURN_180);
moveForwardWithSensor(400):
MogoTarget = MIN_MOGO;
wait1Msec(1000);
moveBackwardWithSensor(75);
MogoTarget = MAX_MOGO;
moveBackwardWithSensor(300);

}
