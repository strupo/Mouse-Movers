void setup() {
  // put your setup code here, to run once:
}

void loop() {
    Mouse.move(2,0); //move to the right 
        delay(25);
        Mouse.move(-2,0); //to the left
        delay(300000); //wait 5 minutes
        Mouse.move(0,0); //Stop moving?
}
