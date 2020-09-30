#include <karel.h>

void last_func();
void turn_right();
bool front_is_blocked();

int main(){
	turn_on("stairs1.kw");
	set_step_delay(400);

	while (front_is_blocked()){
		turn_left();
		while(beepers_present()){
			pick_beeper();
		}
		step();
		turn_right();
		step();
	}
	if (front_is_clear()){
		step();
		turn_right();
		step();
		step();
		step();
		step();
		turn_left();
		step();
		step();
	}
	turn_off();
}

void turn_right(){
	set_step_delay(0);
	turn_left();
	turn_left();
	set_step_delay(400);
	turn_left();
}

bool front_is_blocked(){
	if(front_is_clear()){
		return false;
	}
	return true;
}

//void last_func(){
//while(front_is_clear()){
//step();
//if(front_is_blocked()){
//turn_right();
//}
//}
//}
	//step();
	//turn_right();
	//step();
	//step();
	//step();
	//step();
	//turn_left();
	//step();
	//step();
	//step();
	//turn_off();//
