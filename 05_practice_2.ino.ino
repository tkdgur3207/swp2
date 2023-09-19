int led = 7;
int flag=1;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (flag==1) {
    digitalWrite(led, LOW);
    delay(1000);

    for (int i=1; i<=5; i++) {
      digitalWrite(led, HIGH);
      delay(100);
      digitalWrite(led, LOW);
      delay(100);
    }

    digitalWrite(led, HIGH);
    flag=0;
  }
}
