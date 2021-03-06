#pragma config(Motor,  motorB,          leftMotor,     tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorC,          rightMotor,    tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

void drive(int left, int right)
{
	motor[motorB] = left;
	motor[motorC] = right;
}

task main()
{
	drive(40,40);
	delay(4500);
	drive(40,0);
	delay(530);
	drive(40,40);
	delay(3250);
	drive(40,0);
	delay(620);
	drive(40,40);
	delay(2700);
	drive(40,0);
	delay(850);
	drive(40,40);
	delay(2000);
	drive(40,0);
	delay(850);
	drive(40,40);
	delay(2200);
	drive(40,0);
	delay(420);
	drive(40,40);
	delay(2600);
	drive(0,40);
	delay(440);
	drive(40,40);
	delay(5100);
	drive(50, -50);
	delay(800);
	drive(0,0);
}
