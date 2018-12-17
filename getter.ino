void Get_data(){

  String num = "";
  while (Serial.available()>0){
   int num_part = Serial.read();
   
   if (isDigit(num_part)){
   num += (char)num_part; 
   }
   
  }
 
    
    check (num.toInt());
    
}
