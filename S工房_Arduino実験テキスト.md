# 番外実験:Arduino導入
本テキストは2026年5月時点の情報で構成されている。

担当TAは必要に応じて本テキストを更新すること。ライセンスは

## 概要

Arduinoは安価で扱いやすい代表的なマイコンボードの一つである。本実験では、Arduinoを用いてLEDを点滅させるプログラム、俗に「Lチカ」と呼ばれるものから始める。自主実験への応用を見据え、最終的にはセンサの値をPCに記録するデータロガーとしての利用を習得することを目標とする。

### 注意事項

ArduinoはC言語やC++をベースとしている。1年後期の基礎プログラミング演習でC言語を学んでいる場合は復習しつつ読んでいくとよい。

プログラミング未習得の場合は、以降の内容を授業時間内に理解することは難しいため、参考になるWebページの章で挙げた資料を参考に、事前にC言語の基礎を学んでおくとよい。ただし、書籍はバージョンなど細かい違いで混乱する可能性が高いため非推奨である。


## 方法

### 環境構築

#### 初心者向け: Arduino IDEのインストール

[https://www.arduino.cc/en/software/](https://www.arduino.cc/en/software/)

開発に必要な機能が一通り揃っていて、GUIで簡単に設定ができる。以降の説明はこのソフトを使っている前提で進める。ある程度こうした開発に慣れている人は後述のCLIやVSCodeの拡張機能を使ってもよい。


![alt text](img/S工房_Arduino実験テキスト/image.png)

インストールは通常のソフトと同様に行う。
完了したら起動する。

![alt text](img/S工房_Arduino実験テキスト/image-1.png)

#### ラボ外での確認方法：シミュレータ

[https://wokwi.com/projects/new/arduino-uno](https://wokwi.com/projects/new/arduino-uno)



#### 上級者向け1: Arduino CLI

[https://arduino.github.io/arduino-cli/installation/](https://arduino.github.io/arduino-cli/installation/)

#### 上級者向け2: PlatformIO

VSCode拡張機能

[https://marketplace.visualstudio.com/items?itemName=platformio.platformio-ide](https://marketplace.visualstudio.com/items?itemName=platformio.platformio-ide)


### Arduino言語の基本



```arduino
void setup() {
  // スラッシュ二つを先頭に書いた行はコメントアウトになる。プログラムの挙動には影響しないメモ書きなどに使う。

}

void loop() {
  // put your main code here, to run repeatedly:

}
```

### Lチカ：LEDを点滅させる

ArduinoにはGPIOという外部との接続ポートが多数備わっている。これを使ってLEDを点滅させる「Lチカ」は"Hello World"に相当する基本的なプログラムとされている。


## 参考になるWebページ

* Arduino言語日本語リファレンス [https://www.musashinodenpa.com/arduino/ref/](https://www.musashinodenpa.com/arduino/ref/)
* 一週間で身につくC言語の基本 [https://c-lang.sevendays-study.com/index.html](https://c-lang.sevendays-study.com/index.html)