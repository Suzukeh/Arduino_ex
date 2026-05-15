//超音波センサー（HC-SR04）での距離を計測し、シリアルモニタに出力する
//検知したcmに応じてLEDの明るさとスピーカーの音量を変更する
//ただし、デューティ比は255を超えることはできない

// VCC → 5V
// GND → GND
// Trig → 12
// Echo → 11

int trigPin = 12;  // Trigger
int echoPin = 11;  // Echo
long duration, cm; //距離を格納する変数

void setup() {
    Serial.begin(9600); //シリアル通信を開始する
    pinMode(trigPin, OUTPUT); //トリガーピンを出力に設定する
    pinMode(echoPin, INPUT); //エコーピンを入力に設定する

    pinMode(13, OUTPUT); //LED 13ピンを出力に設定する
    pinMode(9, OUTPUT); //スピーカー 9ピンを出力に設定する
}

void loop() {
    //トリガーピンを一瞬HIGHにして、超音波を発信
    digitalWrite(trigPin, LOW);
    delayMicroseconds(10);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    
    //エコーピンがHIGHになっている時間を測定する
    duration = pulseIn(echoPin, HIGH);
    
    //時間を距離に変換する
    //距離[cm] = ((音速[cm/s])*時間[s])/2
    //音速は約343m/s = 34300cm/s
    //durationはマイクロ秒単位なので、1[μs] = 0.000001[s]
    //音波は対象物まで往復しているので2で割る
    cm = duration * 0.000001 * 34000 / 2;
    
    Serial.print(cm);  //センチメートルを出力する
    Serial.print("cm");  //センチメートルの単位を出力する
    Serial.println();  //改行

    analogWrite(13, max(255, cm)); // 距離に応じてLEDの明るさを変更
    analogWrite(9, max(255, cm)); // 距離に応じてスピーカーの音を変更
    // analogWriteの引数は0から255なので、max関数で255を超えないようにしている
    
    delay(250);
}