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

void left_up (void){
  digitalWrite (inp1, HIGH);
  digitalWrite (inp2, LOW);  
  digitalWrite (speed1, HIGH); 
}

void left_down (void){
  digitalWrite (inp1, LOW);
  digitalWrite (inp2, HIGH);  
  digitalWrite (speed1, HIGH); 
}

void stop_left(void){
  digitalWrite (inp1, LOW);
  digitalWrite (inp2, LOW); 
//  digitalWrite (speed1, LO); 
}

void right_up (void){
  digitalWrite (inp3, HIGH);
  digitalWrite (inp4, LOW);  
  digitalWrite (speed2, HIGH); 
}

void right_down (void){
  digitalWrite (inp3, LOW);
  digitalWrite (inp4, HIGH);  
  digitalWrite (speed2, HIGH); 
}

void stop_right (void){
  digitalWrite (inp3, LOW);
  digitalWrite (inp4,  LOW);  
}

void ride_up (void){
  left_up ();
  right_up ();
}

void ride_down (void){
  left_down ();
  right_down ();
}

void stopm (void){
  stop_left();
  stop_right();
}
void ride_left (void){
  left_up();
  right_down();
}
  


void loop (){
  ride_up ();
  delay (1000);
  stopm();
  delay (220);
  ride_left ();
  
  delay (500);
  stopm();   delay (220);
   
}

