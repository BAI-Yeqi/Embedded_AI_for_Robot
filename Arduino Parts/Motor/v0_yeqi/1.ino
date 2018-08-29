const int AI2 = 4;    //motor A
const int AI1 = 5;
const int PWM_A = 3;

const int BI2 = 7;
const int BI1 = 6;
const int PWM_B = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(AI2, OUTPUT);
  pinMode(AI1, OUTPUT);
  pinMode(PWM_A, OUTPUT);
  pinMode(BI2, OUTPUT);
  pinMode(BI2, OUTPUT);
  pinMode(PWM_B, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(AI2, HIGH);
  digitalWrite(AI1, LOW);
  analogWrite(PWM_A, 255);
  digitalWrite(BI2, HIGH);
  digitalWrite(BI1, LOW);
  analogWrite(PWM_B, 255);

  delay(2000);


 
  digitalWrite(AI2, LOW);
  digitalWrite(AI1, LOW);
  analogWrite(PWM_A, 0);
  digitalWrite(BI2, LOW);
  digitalWrite(BI1, LOW);
  analogWrite(PWM_B, 0);

  delay(3000);
}
