void SkillsAuto()
{
motorReq[ConeIntake] = 50;
FourBarTarget = MAX_FOURBARHEIGHT;
wait1Msec(500);
MogoTarget = MIN_MOGO;
moveForwardWithSensor(1500);
MogoTarget = MAX_MOGO;
moveForwardWithSensor(300);
wait1Msec(400);
moveBackwardWithSensor(1630);
motorReq[ConeIntake] = -127
wait1Msec(200);
motorReq[ConeIntake] = 0;
wait1Msec(400);
TurnRightWithSensor(TURN_180);
moveForwardWithSensor(300):
MogoTarget = MIN_MOGO;
wait1Msec(1000);
moveBackwardWithSensor(75);
MogoTarget = MAX_MOGO;
wait1Msec(500);
moveBackwardWithSensor(300);
TurnRightWithSensor(TURN_180+30); // turn around to go to other side of field
moveForwardWithSensor(500):
MogoTarget = MIN_MOGO;
moveForwardWithSensor(1650):
MogoTarget = MAX_MOGO;
moveForwardWithSensor(650);
turnLeftWithSensor(TURN_90+40); // Turn to the center
moveForwardWithSensor(650);
turnRightWithSensor(TURN_90+20);
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
//moveBackwardWithSensor(600);
motorReq[leftfrontwheel] = -127;
motorReq[leftbackwheel] = -127;
motorReq[rightfrontwheel] = -127;
motorReq[rightbackwheel] = -127;
wait1Msec(1000);
motorReq[leftfrontwheel] = 0;
motorReq[leftbackwheel] = 0;
motorReq[rightfrontwheel] = 0;
motorReq[rightbackwheel] = 0;
turnLeftWithSensor(TURN_90+40);
moveForwardWithSensor(350);
turnLeftWithSensor(TURN_90+40);
moveForwardWithSensor(4600);

}
