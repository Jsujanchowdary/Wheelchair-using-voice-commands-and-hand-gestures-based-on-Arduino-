int val_flex = 0;
// Index finger flex sensor pin
#define INDEX_FLEX_PIN A0
#define MIDDLE_FLEX_PIN A1
#define RING_FLEX_PIN A2
#define LITTLE_FLEX_PIN A3
// Flex sensor threshold
#define INDEX_THRESHOLD 810
#define MIDDLE_THRESHOLD 780
#define RING_THRESHOLD 850
#define LITTLE_THRESHOLD 880
int m1 = 2;
int m2 = 3;
int m3 = 4;
int m4 = 5;
int trigPin = 6;
int echoPin = 7;
int buzzerPin = 8;
int trigPin_2 = 10;
int echoPin_2 = 9;
long duration;
int distance;
long duration_2;
int distance_2;
String val_bl = "";
void setup() {
pinMode(m1, OUTPUT);  
pinMode(m2, OUTPUT);  
pinMode(m3, OUTPUT);  
pinMode(m4, OUTPUT);  
pinMode(trigPin, OUTPUT);  
pinMode(echoPin, INPUT);  
pinMode(trigPin_2, OUTPUT);  
pinMode(echoPin_2, INPUT);  
pinMode(buzzerPin, OUTPUT);  
digitalWrite(m1, 0);  
digitalWrite(m2, 0);  
digitalWrite(m3, 0);  
digitalWrite(m4, 0);  
Serial.begin(9600);
}
void loop() {     
// Read index finger flex sensor value  
int index_flex = analogRead(INDEX_FLEX_PIN);  
int middle_flex = analogRead(MIDDLE_FLEX_PIN);  
int ring_flex = analogRead(RING_FLEX_PIN);  
int little_flex = analogRead(LITTLE_FLEX_PIN); 
// Check if index finger is bent to threshold  
if (index_flex >= INDEX_THRESHOLD && middle_flex < MIDDLE_THRESHOLD && ring_flex < RING_THRESHOLD && little_flex < LITTLE_THRESHOLD) {    
val_flex = 1; // for forward    
//forward command   (1 0 0 0)      
digitalWrite(m1, 1);      
digitalWrite(m2, 0);      
digitalWrite(m3, 1);      
digitalWrite(m4, 0);    
}
 if (index_flex >= INDEX_THRESHOLD && middle_flex >= MIDDLE_THRESHOLD && ring_flex >= RING_THRESHOLD && little_flex >= LITTLE_THRESHOLD) {    
val_flex = 2;    
// stop command  (1 1 1 1)      
digitalWrite(m1, 0);      
digitalWrite(m2, 0);      
digitalWrite(m3, 0);      
digitalWrite(m4, 0);     
}  
if (middle_flex >= MIDDLE_THRESHOLD && index_flex < INDEX_THRESHOLD && ring_flex < RING_THRESHOLD && little_flex < LITTLE_THRESHOLD) {    
val_flex = 3;    
Serial.println("back command from flex sensor");    
//backward command (0 1 0 0)     
digitalWrite(m1, 0);      
digitalWrite(m2, 1);      
digitalWrite(m3, 0);      
digitalWrite(m4, 1);
} 
 if (ring_flex >= RING_THRESHOLD && middle_flex < MIDDLE_THRESHOLD && index_flex < INDEX_THRESHOLD && little_flex < LITTLE_THRESHOLD)
 {    
val_flex = 4;    
//right command  (0 0 1 0)     
digitalWrite(m1, 0);      
digitalWrite(m2, 1);      
digitalWrite(m3, 1);      
digitalWrite(m4, 0);    
 }
 if (little_flex >= LITTLE_THRESHOLD && middle_flex < MIDDLE_THRESHOLD && ring_flex < RING_THRESHOLD && index_flex < INDEX_THRESHOLD)
 {
    val_flex = 5;
    //left command (0 0 0 1)   
digitalWrite(m1, 1);      
digitalWrite(m2, 0);      
digitalWrite(m3, 0);      
digitalWrite(m4, 1);  
 } 
 if (Serial.available()) 
{
 val_bl = Serial.readString();    
Serial.print(val_bl);    
if (val_bl == "*forward#") {      
digitalWrite(m1, 1);      
digitalWrite(m2, 0);     
 digitalWrite(m3, 1);      
digitalWrite(m4, 0);    
}    
else if (val_bl == "*backward#") {      
digitalWrite(m1, 0);      
digitalWrite(m2, 1);      
digitalWrite(m3, 0);      
digitalWrite(m4, 1);      
/*digitalWrite(trigPin_2, LOW);
  delayMicroseconds(2);  
digitalWrite(trigPin_2, HIGH);  
delayMicroseconds(10);  
digitalWrite(trigPin_2, LOW);  
duration_2 = pulseIn(echoPin_2, HIGH);
distance_2 = duration_2 / 58;
Serial.print("sen 2 = ");
Serial.print(distance_2);
if (distance_2 < 20) {    
digitalWrite(buzzerPin, HIGH);    
digitalWrite(m1, 0);    
digitalWrite(m2, 0);   
 digitalWrite(m3, 0);    
digitalWrite(m4, 0);  }
else {    
digitalWrite(buzzerPin, LOW);  
}*/    
}    
else if (val_bl == "*right#") {      
digitalWrite(m1, 0);      
digitalWrite(m2, 1);      
digitalWrite(m3, 1);      
digitalWrite(m4, 0);    
}    
else if (val_bl == "*left#") {      
digitalWrite(m1, 1);      
digitalWrite(m2, 0);      
digitalWrite(m3, 0);      
digitalWrite(m4, 1);    
}    
else if (val_bl == "*stop#") {      
digitalWrite(m1, 0);      
digitalWrite(m2, 0);      
digitalWrite(m3, 0);     
digitalWrite(m4, 0);    
}  
}
digitalWrite(trigPin, LOW);  
delayMicroseconds(2);  
digitalWrite(trigPin, HIGH);  
delayMicroseconds(10);  
digitalWrite(trigPin, LOW);  
duration = pulseIn(echoPin, HIGH);  

digitalWrite(trigPin_2, LOW);  
delayMicroseconds(2);  
digitalWrite(trigPin_2, HIGH);  
delayMicroseconds(10);  
digitalWrite(trigPin_2, LOW);  
duration_2 = pulseIn(echoPin_2, HIGH);    
     
distance_2 = duration_2 / 58;   
Serial.print("sen 2 = ");   
Serial.println(distance_2);  
if (distance_2 < 20  && (val_bl =="*backward#"|| val_flex == 3))
{    
digitalWrite(buzzerPin, HIGH);    
delay(30);    
digitalWrite(m1, 0);
digitalWrite(m2, 0);    
digitalWrite(m3, 0);    
digitalWrite(m4, 0);  
}  
distance = duration / 58;  
Serial.print("sen 1 = ");   
Serial.println(distance);  
if (distance < 20 && !(val_bl =="*backward#"|| val_flex == 3)) 
{    
digitalWrite(buzzerPin, HIGH);    
digitalWrite(m1, 0);    
digitalWrite(m2, 0);    
digitalWrite(m3, 0);    
digitalWrite(m4, 0);  
}  else 
{    
digitalWrite(buzzerPin, LOW);  
}  
}


