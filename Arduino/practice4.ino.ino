void setup() {

  pinMode(1,OUTPUT);//b
  pinMode(12,OUTPUT); //f
  pinMode(11, OUTPUT); //g
  pinMode(10, OUTPUT); //a
  pinMode(8, OUTPUT); //C
  pinMode(3,OUTPUT);//d
  pinMode(5,OUTPUT);//e





}

void loop() {
  // put your main code here, to run repeatedly:

  //9
  digitalWrite(1,LOW);//b
  digitalWrite(12, LOW); //f
  digitalWrite(11,LOW);//g
  digitalWrite(10, LOW); //a
  digitalWrite(8, LOW); //c
  digitalWrite(3, HIGH); //d
  digitalWrite(5, HIGH); //e
  delay(1500);

  //8

  digitalWrite(1,LOW);//b
  digitalWrite(12, LOW); //f
  digitalWrite(11,LOW);//g
  digitalWrite(10, LOW); //a
  digitalWrite(8, LOW); //c
  digitalWrite(3, LOW); //d
  digitalWrite(5, LOW); //e
  delay(1500);

  //7
  digitalWrite(1,LOW);//b
  digitalWrite(12, HIGH); //f
  digitalWrite(11,HIGH);//g
  digitalWrite(10, LOW); //a
  digitalWrite(8, LOW); //c
  digitalWrite(3, HIGH); //d
  digitalWrite(5, HIGH); //e
  delay(1500);

    //6
  digitalWrite(1, HIGH);//b
  digitalWrite(12, LOW); //f
  digitalWrite(11,LOW);//g
  digitalWrite(10, HIGH); //a
  digitalWrite(8, LOW); //c
  digitalWrite(3, LOW); //d
  digitalWrite(5, LOW); //e
  delay(1500);

    //5
  digitalWrite(1, HIGH);//b
  digitalWrite(12, LOW); //f
  digitalWrite(11,LOW);//g
  digitalWrite(10, LOW); //a
  digitalWrite(8, LOW); //c
  digitalWrite(3, LOW); //d
  digitalWrite(5, HIGH); //e
  delay(1500);

    //4

  digitalWrite(1,LOW);//b
  digitalWrite(12, LOW); //f
  digitalWrite(11,LOW);//g
  digitalWrite(10, HIGH); //a
  digitalWrite(8, LOW); //c
  digitalWrite(3, HIGH); //d
  digitalWrite(5, HIGH); //e
  delay(1500);

      //4

  digitalWrite(1,LOW);//b
  digitalWrite(12, LOW); //f
  digitalWrite(11,LOW);//g
  digitalWrite(10, HIGH); //a
  digitalWrite(8, LOW); //c
  digitalWrite(3, HIGH); //d
  digitalWrite(5, HIGH); //e
  delay(1500);

  //3
  digitalWrite(1,LOW);//b
  digitalWrite(12, HIGH); //f
  digitalWrite(11,LOW);//g
  digitalWrite(10, LOW); //a
  digitalWrite(8, LOW); //c
  digitalWrite(3, LOW); //d
  digitalWrite(5, HIGH); //e
  delay(1500);

  //2
  digitalWrite(1,LOW);//b
  digitalWrite(12, HIGH); //f
  digitalWrite(11,LOW);//g
  digitalWrite(10, LOW); //a
  digitalWrite(8, HIGH); //c
  digitalWrite(3, LOW); //d
  digitalWrite(5, LOW); //e
  delay(1500);

  //1

  digitalWrite(1,LOW);//b
  digitalWrite(12, HIGH); //f
  digitalWrite(11,HIGH);//g
  digitalWrite(10, HIGH); //a
  digitalWrite(8, LOW); //c
  digitalWrite(3, HIGH); //d
  digitalWrite(5, HIGH); //e
  delay(1500);

  // 0
  digitalWrite(1,LOW);//b
  digitalWrite(12, LOW); //f
  digitalWrite(11,HIGH);//g
  digitalWrite(10, LOW); //a
  digitalWrite(8, LOW); //c
  digitalWrite(3, LOW); //d
  digitalWrite(5, LOW); //e
  delay(1500);
}
