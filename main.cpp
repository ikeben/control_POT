//19oct2023
int LED[]={2,3,4, 5, 6,7, 8,9, 10, 11};
int val=0;
int con=0;
void setup() {
  // put your setup code here, to run once:
  for(int i=0; i<11;i++){
    pinMode(LED[i], OUTPUT);
  }
   pinMode(A0, INPUT);
  Serial.begin(9600);

}

void loop(){
  // put your main code here, to run repeatedly:
  val=analogRead(A0);
  //Serial.println(val);
  int con=map(val, 0,1025,0,10); //mapping out the values into 10
  for(int i=0; i<10; i+=1){
    if(i<=con){
       Serial.println(i);
       Serial.println(con);
    analogWrite(LED[i], 255);
    //delay(60);
    //digitalWrite(LED, 0);
    //delay(50);
    }
    else{
      analogWrite(LED[i], 0);
    }
  }
}


