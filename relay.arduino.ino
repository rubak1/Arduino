int pinled1 = 8;   // Relay 1
int pinled2 = 9;   // Relay 2

char var;

void setup() {

  Serial.begin(9600);

  pinMode(pinled1, OUTPUT);
  pinMode(pinled2, OUTPUT);

  digitalWrite(pinled1, LOW);
  digitalWrite(pinled2, LOW);
}

void loop() {

  if (Serial.available()) {

    var = Serial.read();

    if (var == 'a') {          // Relay 1 ON
      digitalWrite(pinled1, HIGH);
    }

    if (var == 'w') {          // Relay 1 OFF
      digitalWrite(pinled1, LOW);
    }

    if (var == 'b') {          // Relay 2 ON
      digitalWrite(pinled2, HIGH);
    }

    if (var == 'x') {          // Relay 2 OFF
      digitalWrite(pinled2, LOW);
    }
  }
}
