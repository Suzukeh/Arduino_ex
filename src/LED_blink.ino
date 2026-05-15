void setup() {
    //13ピンをLEDのアノード(+)に、GNDをカソード(-)に接続する。
    //後のため、ブレッドボードを使うとよい。
    pinMode(13, OUTPUT); //13ピンを出力に設定する
    //このsetup関数内はプログラムの起動時（リセット時）に一度だけ実行される。
}

void loop() {
    digitalWrite(13, HIGH); //13ピンをHIGH(5V)にする
    delay(1000); //1000ミリ秒=1秒待つ
    digitalWrite(13, LOW); //13ピンをLOW(0V)にする
    delay(1000); //1000ミリ秒=1秒待つ
    //このloop関数内を何度も繰り返し続けるため、LEDが点滅する。
}