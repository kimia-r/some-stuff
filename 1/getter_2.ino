void Get_data_2(){

  if (Serial.available()>0){
   String num = Serial.readString();
   Serial.println(num);
    check_2 (num);
  }
}
