void setup() {
  // put your setup code here, to run once:

  pinMode(2,INPUT);
  digitalWrite(2,HIGH);
  Keyboard.begin();
  while(digitalRead(2) ) 
  {
    
  }

  //Keyboard.releaseAll();
  //Keyboard.print();
  //Keyboard.println();
  //Keyboard.write();
  //Keyboard.press('n');
  //Keyboard.release('n');
  //Keyboard.releaseAll();
  //Keyboard.(KEY_BACKSPACE);

   delay(1000);   
   Keyboard.println("HELLO WORLD");
   delay(1000);
   Keyboard.println("I AM ALIVE");
   delay(1000);
   Keyboard.write(48); //character 0
   delay(1000);
   Keyboard.println("How about that Jaito?");
   delay(1000);
   Keyboard.press(KEY_BACKSPACE);
   delay(1000);
   Keyboard.println("SORRY!!.. JAMES");
   delay(800);
   Keyboard.releaseAll();
}

void loop() {
  // put your main code here, to run repeatedly:
}