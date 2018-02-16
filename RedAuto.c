
void RedAuto()
{
motorReq[ConeIntake] = 50;
FourBarTarget = MAX_FOURBARHEIGHT;
wait1Msec(200);
MogoTarget = MIN_MOGO;
moveForwardWithSensor(1860);
MogoTarget = MAX_MOGO;
wait1Msec(400);
moveBackwardWithSensor(1550);
motorReq[ConeIntake] = -127
wait1Msec(200);
motorReq[ConeIntake] = 0;
wait1Msec(400);
turnLeftWithSensor(1150);
moveForwardWithSensor(650);
turnLeftWithSensor(TURN_90+40);
MogoTarget = 3500;
motorReq[leftfrontwheel] = 127;
motorReq[leftbackwheel] = 127;
motorReq[rightfrontwheel] = 127;
motorReq[rightbackwheel] = 127;
wait1Msec(2500);
motorReq[leftfrontwheel] = 0;
motorReq[leftbackwheel] = 0;
motorReq[rightfrontwheel] = 0;
motorReq[rightbackwheel] = 0;
MogoTarget = MIN_MOGO;
wait1Msec(1350);
moveForwardWithSensor(50);
MogoTarget = MAX_MOGO;
moveBackwardWithSensor(50);
MogoTarget = MIN_MOGO;
moveForwardWithSensor(50);
MogoTarget = MAX_MOGO;
moveBackwardWithSensor(500);
}
