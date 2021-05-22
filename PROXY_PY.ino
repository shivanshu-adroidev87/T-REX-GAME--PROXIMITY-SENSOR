
int proxy=4;
void setup() {
  // put your setup code here, to run once:
  
  pinMode(proxy,INPUT);
  Serial.begin(9600);
}

void loop() {
  
  // put your main code here, to run repeatedly:
  if(digitalRead(proxy)==LOW)
  {
 
    Serial.println("jump");
    delay(100);
  }
  
}
