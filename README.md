# Qt-Translate-Sample
![ライセンス](https://img.shields.io/github/license/sunboy3/Qt-Translate-Sample)
[![Build Status](https://travis-ci.com/enjoysoftware/Qt-Translate-Sample.svg?branch=master)](https://travis-ci.com/enjoysoftware/Qt-Translate-Sample)

Qtリンギストを使用したQtの翻訳サンプルです。
学習用としてご使用ください。なお、インストール機能のバグは解消いたしました。大変ご迷惑をおかけしました。
# 依存ライブラリ
Qt5           (`qtbase5-dev`)

### 依存ライブラリのインストール(Ubuntu)
```bash
sudo apt install qtbase5-dev
```
# ソースコードをクローンする

```bash
git clone https://github.com/sunboy3/Qt-Translate-Sample
```
# ビルドする

```bash
lrelease Translate.pro
qmake
make
```
# 実行する

```bash
./Translate 
```
# インストールする

##(Linuxのみ)
```bash
sudo make install
```
