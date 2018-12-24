String one_string = "1";
String two_string = "2";
String three_string = "3";

void setup() {
  
  Serial.begin(9600);
  Serial.println("Please enter a number from 1 to 3");
  
}

void loop() {
Serial.flush();
  
Get_data_2();

}
