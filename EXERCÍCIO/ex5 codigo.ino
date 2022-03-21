//<span style="font-weight:400">ligando a ledinha</span>
int botao = 2;
int led = 4;
bool estadoLed = 0;
void setup()
{
  pinMode(botao,INPUT_PULLUP);//definindo "INPUT"
  pinMode(led,OUTPUT);
}
void loop()
{
 if(digitalRead(botao)== HIGH)//botao apertado
 {
   estadoLed = !estadoLed;//desliga o led 
   digitalWrite(led,estadoLed);
   while(digitalRead(botao)== HIGH);
   delay(100);
 }
}
