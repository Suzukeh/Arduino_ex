void setup(){
    pinMode(13, OUTPUT); //LED 13ピンを出力に設定する
    pinMode(9, OUTPUT); //スピーカー 9ピンを出力に設定する
}

void loop(){
    //0-255の範囲でデューティ比(ONの時間の割合)を指定できる。これによりLEDの明るさや、スピーカーの音色を調整できる。
    analogWrite(13, 128); 
    analogWrite(9, 128);
    delay(1000);
}