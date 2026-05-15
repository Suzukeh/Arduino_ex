//超音波センサー（HC-SR04）での距離を計測し、シリアルモニタに出力する
// VCC → 5V
// GND → GND
// Trig → 12
// Echo → 11

int trigPin = 12;  // このように変数を使うとコードが読みやすくなる。今回は12ピンをTriggerに設定している
int echoPin = 11;  // 11ピンをEchoに設定
long duration, cm; //距離を格納する変数

void setup() {
    Serial.begin(9600); //シリアル通信を開始する
    pinMode(trigPin, OUTPUT); //トリガーピンを出力に設定する
    pinMode(echoPin, INPUT); //エコーピンを入力に設定する
}

void loop() {
    //トリガーピンを一瞬HIGHにして、超音波を発信
    digitalWrite(trigPin, LOW);
    delayMicroseconds(5);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    
    //エコーピンがHIGHになった時間を測定する
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
    
    delay(250);
}