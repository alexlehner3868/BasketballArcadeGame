bool currently_playing = false;
int score = 0; 
#define START_TIME 3600 
int timer; 

void setup() {
 // TODO: define the pin setups for IR sensor

 // TODO: define the pin setups for the led strips 

 // TODO: define pin setups for the buttons 

 // TODO: define pin setups for the 7-segs 

  // TODO: Set initial values of timer and score 
}

// TODO: Return true, if the ball has gone through the net (ie beam is broken)
bool is_beam_broken(){ 
   
}

// TODO: return true, if the restart button is pressed 
bool is_restart_button_pressed(){
    
}

void restart_game(){
  timer = START_TIME;
  score = 0; 
}

// TODO: display the score onto the 7segs 
void display_score(){
  
}

// TODO: display the current time on the LED strips 
void display_timer(){
  
}

void loop() {
  
  if(currently_playing){
    // Check if a ball is scored 
    if(is_beam_broken()){
        score = score + 1; 
    }
    timer = timer - 1;
  }

  display_score(); 
  display_timer();

  if(timer == 0){
    currently_playing = false; 
  }
  if(is_restart_button_pressed()){
    restart_game();
    currently_playing = true;
  }
}
