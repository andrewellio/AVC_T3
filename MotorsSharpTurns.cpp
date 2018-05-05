#include <stdio.h>
#include <time.h>
#include "E101.h"

int main(){
	init();
	int timeWait = 3; //Will need to test speed and time for 90 degrees turn
	int turnSize = 50; 
	
	//Intial forward movement
	set_motor(1,127); //Right Side motor, Purple and grey wires
	set_motor(2,127); //Left side motor, Orange and yellow wires
	//Could we reverse motor connections?
	
	//Part 2
	while(){//Camera is active
		if(){//camera white space on left, Left Turn
			set_motor(1,-turnSize); 
			set_motor(2,turnSize);
			sleep1(timeWait,0); 
			//Someway to call forward movment
		}
		else if(){//camera white space on right, Right Turn
			set_motor(1,turnSize); 
			set_motor(2,-turnSize);
			sleep1(timeWait,0);
			//""
		}
		else if(){//camera white space left & right, T Intersect
			set_motor(1,-turnSize); 
			set_motor(2,turnSize);
			sleep1(timeWait,0); 
			//""
		}
		else if(){//camera black space, Dead End
			set_motor(1,-turnSize); 
			set_motor(2,turnSize);
			sleep1((timeWait*2),0); //double time for 180 degrees
			//""
		}
		else(){
			//Call forward movement
		}
	}
		

	//Motors turn off
	set_motor(2, 0);
	set_motor(1, 0);
	
	return 0;
	}
