int led = 13;
int botao = 11;
int estadoBotao = 0;
void setup () 
{
pinMode(led,OUTPUT);
pinMode(led,INPUT);
}
void loop ()
{
estadoBotao = digitalRead(botao);
  if (estadoBotao == HIGH){
    digitalWrite(led,HIGH);
  }
  else
  {
    digitalWrite(led,LOW);
  }
}
  
