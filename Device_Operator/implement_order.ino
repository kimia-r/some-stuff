
if (state.equals(onMode)){
  digitalWrite(device,HIGH);
  Serial.println("LED: OFF");
  state='N';
}

else if (state.equals(offMode)){
  digitalWrite(device,LOW);
  Serial.println("LED: ON");
  state='N';
}
