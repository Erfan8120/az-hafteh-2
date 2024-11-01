const int ledpin 13 ;

void setup() {

pinMode (ledpin, OUTPUT); Serial.begin(9600);

}

void loop() {

if (Serial.available()>0){

int income = Serial.parseInt();

if (income = 101) {

digitalWrite(ledpin, HIGH);
}
else if (income 201 ){

digitalWrite(ledpin, LOW);

}}
}