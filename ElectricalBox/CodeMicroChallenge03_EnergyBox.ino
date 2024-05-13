#define ROTARY_ANGLE_SENSOR 1
#define ADC_REF 5
#define GROVE_VCC 5
#define FULL_ANGLE 300

#define NUM_RELAYS  6 // Change this number based on how many relays you have
int relayPins[NUM_RELAYS] = {5,6,8,10,12,13}; // Store the pins for the relay in an array this allows them to be called dynamically
int increments = FULL_ANGLE /NUM_RELAYS ;


void setup() {
  Serial.begin(9600);
  pinMode(ROTARY_ANGLE_SENSOR, INPUT); // set pinmode of dial
  
  digitalWrite(relayPins[6], LOW);

  // set pinmode and state of each relay dynamically
  for (int i = 0; i < NUM_RELAYS; i++) {
    pinMode(relayPins[i], OUTPUT);
    digitalWrite(relayPins[i], LOW);
  }
}

void loop() {
  int degrees;
  degrees = getDegree();
  Serial.println("The angle between the mark and the starting position:");
  Serial.println(degrees);
  //Serial.println(increments); 

  // this ensures that if relays
  if (degrees == 0){
    for (int i = 0; i < NUM_RELAYS; i++){ // by setting i to 0 it needs to be less then as array stores from 0 to ..
      digitalWrite(relayPins[i], LOW);
      Serial.print("Relays Off");
    }
  }
  if (degrees > 0) {
    int activeRelays = degrees / increments; // Takes degrees read and divides by increments set above, this then says how many relays should be turned on!
    // Loop through i being the amount of relays to turn on, and then for each relay turn this on. So it activeRelays = 2 it goes through twice and turns on relay1 + relay 2
    for (int i = 0; i <= activeRelays && i < NUM_RELAYS; i++) {
      digitalWrite(relayPins[i], HIGH);
      Serial.print("Activating relay ");
      digitalWrite(relayPins[i+1], LOW);
      Serial.println(i + 1);

    }
  }
  //Serial.println(RELAY1);
  delay(50);
}

int getDegree() {
  int sensor_value = analogRead(ROTARY_ANGLE_SENSOR);
  float voltage = (float)sensor_value * ADC_REF / 4095;
  float degrees = (voltage * FULL_ANGLE) / GROVE_VCC;
  return degrees;
}