//Code der die Infos über den Datei Namen und die Kompelierungsinformationen

void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println();
  Serial.print("Programmdatei: ");
  Serial.println(__FILE__);
  Serial.print("Kompiliert am: ");
  Serial.print(__DATE__);
  Serial.print(" um ");
  Serial.println(__TIME__);
}

void loop() 
{
  // put your main code here, to run repeatedly:

}
