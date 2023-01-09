#include <SoftwareSerial.h>

SoftwareSerial myserial(7, 8);  // RX, TX

//for gsm
String text;
int command;
int count = 0;
char buffer[50];
int flag = 0;
int flag1 = 0;


// Serial
// String scommand;




void setup() {

  Serial.begin(9600);
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);

  //for gsm
  myserial.begin(115200);
  delay(5000);                    // give time to log on to network.
  myserial.print("AT+CMGF=1\r");  // set SMS mode to text
  delay(100);
  myserial.print("AT+CNMI=2,2,0,0,0\r");
  // blurt out contents of new SMS upon receipt to the GSM shield's serial out
  delay(100);
  myserial.println("AT+CMGDA=\"DEL ALL\"");
  delay(100);
  Serial.println("Ready...");
  //  lcd.clear();
}

void loop() {


  if (Serial.available() > 0) {
    String scommand = Serial.read();
    scommand.trim();
    // Serial.println(scommand);

    if (scommand == "fi" && flag == 0)
    {
      digitalWrite(13, HIGH);
      firealeart();
      firealeart1();
      firealeart2();
      flag = 1;
    }

    if (scommand == "am" && flag1 == 0)
    {
      digitalWrite(13, LOW);
      ambualert();
      ambualert1();
      ambualert2();
      flag1 = 1;
    }

    if (scommand == "no" && (flag == 1 || flag1 == 1))
    {
      flag = 0;
      flag1 = 0;
    }
  }
}

// first sms
void firealeart() {
  myserial.println("AT\r");  //Once the handshake test is successful, it will back to OK
  delay(1000);
  myserial.print("AT+CMGF=1\r");  // AT command to set SMS Format to text mode
  delay(1000);
  myserial.println("AT+CMGS=\"+8801316847091\"");  // +8801843513352 recipient's mobile number, in international format
  delay(1000);
  myserial.println("fire truck Detected.");
  delay(1000);
  myserial.println((char)26);  // End AT command with a ^Z, ASCII code 26
  delay(3000);
  myserial.println();
  delay(1000);
}

void ambualert() {
  myserial.println("AT\r");  //Once the handshake test is successful, it will back to OK
  delay(1000);
  myserial.print("AT+CMGF=1\r");  // AT command to set SMS Format to text mode
  delay(1000);
  myserial.println("AT+CMGS=\"+8801316847091\"");  // +8801843513352 recipient's mobile number, in international format
  delay(1000);
  myserial.println("Ambulance Detected.");
  delay(1000);
  myserial.println((char)26);  // End AT command with a ^Z, ASCII code 26
  delay(3000);
  myserial.println();
  delay(1000);
}


// 2nd sms
void firealeart1() {
  myserial.println("AT\r");  //Once the handshake test is successful, it will back to OK
  delay(1000);
  myserial.print("AT+CMGF=1\r");  // AT command to set SMS Format to text mode
  delay(1000);
  myserial.println("AT+CMGS=\"+8801954683452\"");  // +8801843513352 recipient's mobile number, in international format
  delay(1000);
  myserial.println("fire truck Detected.");
  delay(1000);
  myserial.println((char)26);  // End AT command with a ^Z, ASCII code 26
  delay(3000);
  myserial.println();
  delay(1000);
}

void ambualert1() {
  myserial.println("AT\r");  //Once the handshake test is successful, it will back to OK
  delay(1000);
  myserial.print("AT+CMGF=1\r");  // AT command to set SMS Format to text mode
  delay(1000);
  myserial.println("AT+CMGS=\"+8801954683452\"");  // +8801843513352 recipient's mobile number, in international format
  delay(1000);
  myserial.println("Ambulance Detected.");
  delay(1000);
  myserial.println((char)26);  // End AT command with a ^Z, ASCII code 26
  delay(3000);
  myserial.println();
  delay(1000);
}

// 3rd sms
void firealeart2() {
  myserial.println("AT\r");  //Once the handshake test is successful, it will back to OK
  delay(1000);
  myserial.print("AT+CMGF=1\r");  // AT command to set SMS Format to text mode
  delay(1000);
  myserial.println("AT+CMGS=\"+8801675514524\"");  // +8801843513352 recipient's mobile number, in international format
  delay(1000);
  myserial.println("fire truck Detected.");
  delay(1000);
  myserial.println((char)26);  // End AT command with a ^Z, ASCII code 26
  delay(3000);
  myserial.println();
  delay(1000);
}

void ambualert2() {
  myserial.println("AT\r");  //Once the handshake test is successful, it will back to OK
  delay(1000);
  myserial.print("AT+CMGF=1\r");  // AT command to set SMS Format to text mode
  delay(1000);
  myserial.println("AT+CMGS=\"+8801675514524\"");  // +8801843513352 recipient's mobile number, in international format
  delay(1000);
  myserial.println("Ambulance Detected.");
  delay(1000);
  myserial.println((char)26);  // End AT command with a ^Z, ASCII code 26
  delay(3000);
  myserial.println();
  delay(1000);
}


