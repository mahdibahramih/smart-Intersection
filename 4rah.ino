void setup() {
  // put your setup code here, to run once:
  pinMode(D5, OUTPUT) ;
  pinMode(D6, OUTPUT) ;
  pinMode(D7, OUTPUT) ;
  pinMode(D8, OUTPUT) ;
}
int q[] = {76,70,70,74};

int safe =0;
int vazeiat=0;
      
void loop() {
  // put your main code here, to run repeatedly:
  if ( q[0] >= q[1] && q[0] >= q[2] && q[0] >= q[3])
  {
    while (q[0] >= q[1] && q[0] >= q[2] && q[0] >= q[3])
    {
      digitalWrite(D5 , HIGH);
      delay(1000);
      q[0] --;
      safe = random(0,4);
      vazeiat = random(-1,2);
      q[safe] = q[safe] + (vazeiat); 
    }
    digitalWrite(D5 , LOW);
    digitalWrite(D6 , HIGH);
    delay(1000);
    q[1] -- ;
    safe = random(0,4);
    vazeiat = random(-1,2);
    q[safe] = q[safe] + (vazeiat); 
    digitalWrite(D6 , LOW);
    digitalWrite(D7 , HIGH);
    delay(1000);
    q[2] -- ;
    safe = random(0,4);
    vazeiat = random(-1,2);
    q[safe] = q[safe] + (vazeiat); 
    digitalWrite(D7 , LOW);
    digitalWrite(D8 , HIGH) ;
    delay(1000);
    q[3] -- ;
    safe = random(0,4);
    vazeiat = random(-1,2);
    q[safe] = q[safe] + (vazeiat); 
    digitalWrite(D8 , LOW) ;
  }
  if ( q[1] >= q[0] && q[1] >= q[2] && q[1] >= q[3])
  {
    digitalWrite(D5 , HIGH);
    delay(1000);
    q[0] --;
    safe = random(0,4);
    vazeiat = random(-1,2);
    q[safe] = q[safe] + (vazeiat); 
    digitalWrite(D5 , LOW);
    while (q[1] >= q[0] && q[1] >= q[2] && q[1] >= q[3])
    {
      digitalWrite(D6 , HIGH);
      delay(1000);
      q[1] -- ;
      safe = random(0,4);
      vazeiat = random(-1,2);
      q[safe] = q[safe] + (vazeiat); 
    }
    digitalWrite(D6 , LOW);
    digitalWrite(D7 , HIGH);
    delay(1000);
    q[2] -- ;
    safe = random(0,4);
    vazeiat = random(-1,2);
    q[safe] = q[safe] + (vazeiat); 
    digitalWrite(D7 , LOW);
    digitalWrite(D8 , HIGH) ;
    delay(1000);
    q[3] -- ;
    safe = random(0,4);
    vazeiat = random(-1,2);
    q[safe] = q[safe] + (vazeiat); 
    digitalWrite(D8 , LOW) ;
  }
  if ( q[2] >= q[0] && q[2] >= q[1] && q[2] >= q[3])
  {
    digitalWrite(D5 , HIGH);
    delay(1000);
    q[0] --;
    digitalWrite(D5 , LOW);
    digitalWrite(D6 , HIGH);
    delay(1000);
    q[1] -- ;
    safe = random(0,4);
    vazeiat = random(-1,2);
    q[safe] = q[safe] + (vazeiat); 
    digitalWrite(D6 , LOW);
    while (q[2] >= q[0] && q[2] >= q[1] && q[2] >= q[3])
    {
      digitalWrite(D7 , HIGH);
      delay(1000);
      q[2] -- ;     
      safe = random(0,4);
      vazeiat = random(-1,2);
      q[safe] = q[safe] + (vazeiat); 
    }
    digitalWrite(D7 , LOW);
    digitalWrite(D8 , HIGH) ;
    delay(1000);
    q[3] -- ;
    safe = random(0,4);
    vazeiat = random(-1,2);
    q[safe] = q[safe] + (vazeiat); 
    digitalWrite(D8 , LOW) ;
  }
  if ( q[3] >= q[0] && q[3] >= q[1] && q[3] >= q[2])
  {
    digitalWrite(D5 , HIGH);
    delay(1000);
    q[0] --;
          safe = random(0,4);
      vazeiat = random(-1,2);
      q[safe] = q[safe] + (vazeiat); 
    digitalWrite(D5 , LOW);
    digitalWrite(D6 , HIGH);
    delay(1000);
    q[1] -- ;
          safe = random(0,4);
      vazeiat = random(-1,2);
      q[safe] = q[safe] + (vazeiat); 
    digitalWrite(D6 , LOW);
    digitalWrite(D7 , HIGH);
    delay(1000);
    q[2] -- ;
          safe = random(0,4);
      vazeiat = random(-1,2);
      q[safe] = q[safe] + (vazeiat); 
    digitalWrite(D7 , LOW);
    while (q[3] >= q[0] && q[3] >= q[1] && q[3] >= q[2])
    {
      digitalWrite(D8 , HIGH) ;
      delay(1000);
      q[3] -- ;
            safe = random(0,4);
      vazeiat = random(-1,2);
      q[safe] = q[safe] + (vazeiat); 
    }
    digitalWrite(D8 , LOW) ;
  }
  
}
