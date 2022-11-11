#define BIT_A 10
#define BIT_B 11
#define BIT_C 12
#define BIT_D 13

int d = 1000; //DELAY DEFAULT
int dm = 10; // DELAY MINIMAL

void setup()
{
  pinMode(BIT_A, OUTPUT);
  pinMode(BIT_B, OUTPUT);
  pinMode(BIT_C, OUTPUT);
  pinMode(BIT_D, OUTPUT);
}

void loop()
{
  //ZERO .... [0]
  digitalWrite(BIT_A, LOW);
  digitalWrite(BIT_B, LOW);
  digitalWrite(BIT_C, LOW);
  digitalWrite(BIT_D, LOW);
  delay(d);
  
  //ONE ---. [1]
  digitalWrite(BIT_A, HIGH);
  delay(d); // 0001 ON
  digitalWrite(BIT_A, LOW);
  delay(dm); // 0001 OFF
  
  //TWO --.- [2]
  digitalWrite(BIT_B, HIGH);
  delay(d); // 0010 ON
  digitalWrite(BIT_B, LOW);
  delay(dm); // 0010 OFF
  
  //THREE --.. [3]
  digitalWrite(BIT_A, HIGH);
  digitalWrite(BIT_B, HIGH);
  delay(d); // 0011 ON
  digitalWrite(BIT_A, LOW);
  digitalWrite(BIT_B, LOW);
  delay(dm); // 0011 OFF
  
  //FOUR -.-- [4]
  digitalWrite(BIT_C, HIGH);
  delay(d); // 0100 ON
  digitalWrite(BIT_C, LOW);
  delay(dm); // 0101 OFF
  
  //FIVE -.-. [5]
  digitalWrite(BIT_A, HIGH);
  digitalWrite(BIT_C, HIGH);
  delay(d); // 0101 ON
  digitalWrite(BIT_A, LOW);
  digitalWrite(BIT_C, LOW);
  delay(dm); // 0101 OFF
  
  //SIX -..- [6]
  digitalWrite(BIT_B, HIGH);
  digitalWrite(BIT_C, HIGH);
  delay(d); // 0110 ON
  digitalWrite(BIT_B, LOW);
  digitalWrite(BIT_C, LOW);
  delay(dm); // 0110 OFF
  
  //SEVEN -... [7]
  digitalWrite(BIT_A, HIGH);
  digitalWrite(BIT_B, HIGH);
  digitalWrite(BIT_C, HIGH);
  delay(d); // 0111 ON
  digitalWrite(BIT_A, LOW);
  digitalWrite(BIT_B, LOW);
  digitalWrite(BIT_C, LOW);
  delay(dm); // 0111 OFF
  
  //EIGTH .--- [8]
  digitalWrite(BIT_D, HIGH);
  delay(d); // 1000 ON
  digitalWrite(BIT_D, LOW);
  delay(dm); // 1000 OFF
  
  //NINE .--. [9]
  digitalWrite(BIT_A, HIGH);
  digitalWrite(BIT_D, HIGH);
  delay(d); // 1001 ON
  digitalWrite(BIT_A, LOW);
  digitalWrite(BIT_D, LOW);
  delay(dm); // 1001 OFF
}