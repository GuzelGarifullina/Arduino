int inp1 = 13;
int inp2 = 12;
int speed1 = 6;

int inp3 = 11;
int inp4  = 10;
int speed2 = 5;

void setup (){
  for (int i = 13; i<= 11; i --) 
    pinMode (i, OUTPUT);
    
   for (int i = 5; i<= 6; i ++) 
    pinMode (i, OUTPUT);
   
}

void ride_left_up (void){
  digitalWrite (inp1, HIGH);
  digitalWrite (inp2, LOW);  
  digitalWrite (speed1, HIGH); 
}

void ride_left_down (void){
  digitalWrite (inp1, LOW);
  digitalWrite (inp2, HIGH);  
  digitalWrite (speed1, HIGH); 
}

void stop_left(void){
  digitalWrite (inp1, LOW);
  digitalWrite (inp2, LOW); 
//  digitalWrite (speed1, LO); 
}

void ride_right_up (void){
  digitalWrite (inp3, HIGH);
  digitalWrite (inp4, LOW);  
  digitalWrite (speed2, HIGH); 
}

void ride_right_down (void){
  digitalWrite (inp3, LOW);
  digitalWrite (inp4, HIGH);  
  digitalWrite (speed2, HIGH); 
}

void stop_right (void){
  digitalWrite (inp3, LOW);
  digitalWrite (inp4,  LOW);  
}

void ride_up (void){
  ride_left_up ();
  ride_right_up ();
}

void ride_down (void){
  ride_left_down ();
  ride_right_down ();
}


void loop (){
  ride_up ();
  delay (5000);
  stop_left();
  
  delay (1000);  
}

