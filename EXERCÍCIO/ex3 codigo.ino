int i = 1;
void setup()
{
while (i<6){
pinMode (i, OUTPUT);
i = i+1;
}
}
void loop()
{
  i=0;
    while (i<=5){
    digitalWrite (i, HIGH);
    delay (2000);
     
    i++;
  }
  i=0;
  while (i<=5){
    digitalWrite (i, LOW);
     
    i++;
  }
}
