

int leds[5] = { 12 ,11, 10, 9, 8}; 
int i; 

void setup() {
  i = 0;
  while (i < 5) {
    pinMode(leds[i], OUTPUT);
    i++; 
  }
}

void loop() {
   i = 0;
    while (i < 5) {
      analogWrite(leds[i], 255);
      delay(1000);               
      i++;
    }


    i = 0;
    while (i < 5) {
      analogWrite(leds[i], 0);  
      delay(1000);               
      i++;
    }
  

}
