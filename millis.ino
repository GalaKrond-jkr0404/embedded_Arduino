unsigned long curr_time = 0;
unsigned long pre_time;
int cnt = 0;
int cnt1 = 0;
int Time_cnt = 0;
void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  curr_time = millis();
  if (pre_time != curr_time){ // 1ms마다 조건 충족
    pre_time = curr_time;
    if(cnt++>=500){ // 500ms마다 조건 충족
      cnt = 0;
      Time_cnt++;
      Serial.println(Time_cnt);
      digitalWrite(13,digitalRead(13)^1); // XOR
    }
        if(cnt++>=505){ // 505ms마다 조건 충족
      cnt1 = 0;
      Time_cnt++;
      Serial.println(Time_cnt);
      digitalWrite(12,digitalRead(12)^1); // XOR

    }
  }
}
