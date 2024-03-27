int led[10];

void setup()
{
  led[0] = 13; // VERDE
  led[1] = 12;  // AMARELO
  led[2] = 11; // VERMELHO
  led[3] = 2; // VERDE PEDESTRE
  led[4] = 1; // VERMELHO PEDESTRE
  led[5] = 10; // VERDE 2
  led[6] = 9;  // AMARELO 2
  led[7] = 8; // VERMELHO 2
  led[8] = 4; // VERDE PEDESTRE 2
  led[9] = 3; // VERMELHO PEDESTRE 2
  
  pinMode(led[0], OUTPUT);
  pinMode(led[1], OUTPUT);
  pinMode(led[2], OUTPUT);
  pinMode(led[3], OUTPUT);
  pinMode(led[4], OUTPUT);
  pinMode(led[5], OUTPUT);
  pinMode(led[6], OUTPUT);
  pinMode(led[7], OUTPUT);
  pinMode(led[8], OUTPUT);
  pinMode(led[9], OUTPUT);
}

void loop()
{
//PARTE 1
  digitalWrite(led[0], LOW); // VERDE
  digitalWrite(led[1], HIGH); // AMARELO
  digitalWrite(led[2],LOW); // VERMELHO
  digitalWrite(led[3], LOW); // VERDE PEDESTRE
  digitalWrite(led[4], HIGH); // VERMELHO PEDESTRE
  digitalWrite(led[5], LOW); // VERDE 2
  digitalWrite(led[6], LOW); // AMARELO 2
  digitalWrite(led[7], HIGH); // VERMELHO 2
  digitalWrite(led[8], HIGH); // VERDE PEDESTRE 2
  digitalWrite(led[9], LOW); // VERMELHO PEDESTRE 2
  delay(2000);
  digitalWrite(led[8], LOW);
  delay(250);
  digitalWrite(led[8], HIGH);
  delay(250);
  digitalWrite(led[8], LOW);
  delay(250);
  digitalWrite(led[8], HIGH);
  delay(250);
//FIM PARTE 1
//PARTE 2  
  digitalWrite(led[0], LOW); // VERDE
  digitalWrite(led[1], LOW); // AMARELO
  digitalWrite(led[2],HIGH); // VERMELHO
  digitalWrite(led[3], HIGH); // VERDE PEDESTRE
  digitalWrite(led[4], LOW); // VERMELHO PEDESTRE
  digitalWrite(led[5], HIGH); // VERDE 2
  digitalWrite(led[6], LOW); // AMARELO 2
  digitalWrite(led[7], LOW); // VERMELHO 2
  digitalWrite(led[8], LOW); // VERDE PEDESTRE 2
  digitalWrite(led[9], HIGH); // VERMELHO PEDESTRE 2
  delay(5000);
//FIM PARTE 2
//PARTE 3
  digitalWrite(led[0], LOW); // VERDE
  digitalWrite(led[1], LOW); // AMARELO
  digitalWrite(led[2],HIGH); // VERMELHO
  digitalWrite(led[3], HIGH); // VERDE PEDESTRE
  digitalWrite(led[4], LOW); // VERMELHO PEDESTRE
  digitalWrite(led[5], LOW); // VERDE 2
  digitalWrite(led[6], HIGH); // AMARELO 2
  digitalWrite(led[7], LOW); // VERMELHO 2
  digitalWrite(led[8], LOW); // VERDE PEDESTRE 2
  digitalWrite(led[9], HIGH); // VERMELHO PEDESTRE 2
  delay(2000);
  digitalWrite(led[3], LOW);
  delay(250);
  digitalWrite(led[3], HIGH);
  delay(250);
  digitalWrite(led[3], LOW);
  delay(250);
  digitalWrite(led[3], HIGH);
  delay(250);
//FIM PARTE 3
//PARTE 4
  digitalWrite(led[0], HIGH); // VERDE
  digitalWrite(led[1], LOW); // AMARELO
  digitalWrite(led[2],LOW); // VERMELHO
  digitalWrite(led[3], LOW); // VERDE PEDESTRE
  digitalWrite(led[4], HIGH); // VERMELHO PEDESTRE
  digitalWrite(led[5], LOW); // VERDE 2
  digitalWrite(led[6], LOW); // AMARELO 2
  digitalWrite(led[7], HIGH); // VERMELHO 2
  digitalWrite(led[8], HIGH); // VERDE PEDESTRE 2
  digitalWrite(led[9], LOW); // VERMELHO PEDESTRE 2
  delay(5000);
//FIM PARTE 4  
}