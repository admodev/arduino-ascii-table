int byte_num = 33;

void setup()
{
  Serial.begin(9600);

  while (!Serial)
  {
    ;
  }

  Serial.println("ASCII Table");
}

void loop()
{
  Serial.write(byte_num);
  Serial.print(", dec: ");
  Serial.print(byte_num, DEC);
  Serial.print(", hex: ");
  Serial.print(byte_num, HEX);
  Serial.print(", oct: ");
  Serial.print(byte_num, OCT);
  Serial.print(", bin: ");
  Serial.print(byte_num, BIN);
  Serial.println("");

  if (byte_num == 126)
  {
    while (true)
    {
      continue;
    }
  }

  byte_num++;
}
