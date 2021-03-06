#pragma config(Motor,  motorB,          leftMotor,     tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorC,          rightMotor,    tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	// loop 5 times for the 5 segments of the star
	for (int i = 0; i < 5; i++)
	{
		// move motorB and motorC forward
		setMotorSyncEncoder(motorB, motorC, 0, 1080, 50);
		waitUntilMotorStop(motorB);
		// turn right
		moveMotorTarget(motorB, 339, 70);
		moveMotorTarget(motorC, 339, -70);
		waitUntilMotorStop(motorC);
	}

}
