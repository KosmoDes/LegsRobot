#define LED 13

int val;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  digitalWrite(LED, HIGH);
}

void loop() {
  if (Serial.available()){
    val = Serial.read();
    digitalWrite(LED, HIGH);
    delay(100);
    digitalWrite(LED, LOW);
    delay(100);
    Serial.println(val);
    if(val == '1'){
      Serial.println("YES");
    }
    if(val == '0'){
      Serial.println("NO");  
    }
  }

}
