

#include <Servo.h> // Include the servo library
Servo myservo;     // Create a new servo object

#define servoPin 9 // Define the servo pin
int angle = 0;     // Create a variable to store the servo position


const int buttonPin = 12;  // Button placed in pin 12
int buttonState     = 0;   // variable for reading the pushbutton status


void setup() {  // put your setup code here, to run once:
  
  pinMode(LED_BUILTIN, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
 // Attach the Servo variable to a pin:
  myservo.attach(servoPin); 
  // Tell the servo to go to a particular angle:
  myservo.write(40);
}

void loop() { // put your main code here, to run repeatedly:
   

  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  digitalWrite(LED_BUILTIN, LOW);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);


  // Tell the servo to go to a particular angle:
    myservo.write(85); // optical left 45'
    delay(1500);
     
    myservo.write(5); // optical right 45'
    delay(500);

    digitalWrite(LED_BUILTIN, LOW); // turn off internal led

  } else {
    // turn LED off:
    digitalWrite(LED_BUILTIN, LOW);
    myservo.write(40);
  }


}
