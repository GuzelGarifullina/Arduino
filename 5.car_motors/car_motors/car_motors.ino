

void setup (){
  //pinMode(11, OUTPUT); 
  Serial.begin (9600);
  for (int i = 2; i < 6; i ++){
    pinMode (i, OUTPUT);
  }
        analogWrite( 11, 200); 
}




void loop (){
  analogWrite( 11, 0); 
  int array[4][4];
  
  char a[4] [4] = { {'1', '2', '3', 'A' }, 
                   {'4', '5', '6', 'B' },
                   { '7', '8', '9', 'C'},
                   {'*', '0', '#', 'D'}};
                   
  
  
  
  for (int i = 0 ; i < 4 ; i ++) {
    
    for ( int j =  0 ; j < 4 ; j ++) { 
      digitalWrite(j + 2, LOW);
    }
    
    digitalWrite ( i + 2, HIGH);
    
    for (int j = 0 ; j < 4; j ++){
      array[i][j] = digitalRead (j + 6);  
      
    }
    delay (300);
    
  }
  
  char btm [16];
  int amt = 0;
  for ( int  i = 0 ; i < 4; i ++) {
    for ( int j = 0 ; j < 4; j ++) {
      if (array [i] [j] == 1 ){
       analogWrite( 11, 200); 
       btm [amt] = a [i] [j];
       amt ++;
      } 
      Serial.print ( array [i][j]);
      Serial.print (' ');
    } 
    Serial.println (' ');
  
  Serial.println (' ');
  }
  for (int i = 0; i < amt; i ++){
    Serial.print (btm [i] );
    Serial.print  ( ' ' );
  }
  Serial.println (' ');  
  
  
  
}

