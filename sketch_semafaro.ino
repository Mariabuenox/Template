int led[5];

void setup()
{
  
  led[0] = 13;
  led[1] = 12;
  led[2] = 9;
  led[3] = 8;
  led[4] = 7;

  pinMode(led[0], OUTPUT);
  pinMode(led[1], OUTPUT);
  pinMode(led[2], OUTPUT);
  pinMode(led[3], OUTPUT);
  pinMode(led[4], OUTPUT);
}

void loop()
{
  digitalWrite(led[0], LOW); // VERM //13
  digitalWrite(led[1], HIGH); // AMAR //12
  digitalWrite(led[2], LOW); // VERD //9
  digitalWrite(led[3], HIGH); // verm //8
  digitalWrite(led[4], LOW); // verd //7
  delay(5000); 
  digitalWrite(led[0], HIGH); // VERM
  digitalWrite(led[1], LOW);
  digitalWrite(led[2], LOW);
  digitalWrite(led[3], LOW);
  digitalWrite(led[4], HIGH); // verd
  delay(5000); 
  digitalWrite(led[0], LOW);
  digitalWrite(led[1], LOW);
  digitalWrite(led[2], HIGH); // VERD
  digitalWrite(led[3], HIGH); // verm
  digitalWrite(led[4], LOW);
  delay(5000); 
  
  
}