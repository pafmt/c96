# D言語からC言語にトランスパイルしてLチカする例

## C96
本リポジトリは、C96で配布されるペーパーの補足用のリポジトリです。  
標記の通り、D言語からC言語へトランスパイルすることにより、本来D言語をサポートしていない環境でコンパイルすることを可能としています。  
本リポジトリの例ではCS+でRL78マイコンの評価ボードでLチカします。

- [R5F1058AALA | RL78/G11](https://www.renesas.com/jp/ja/products/microcontrollers-microprocessors/rl78/rl78g1x/rl78g11/device/R5F1058AALA.html)
- [ＲＬ７８／Ｇ１１スティック型評価ボード　オンボードデバッガ搭載](http://akizukidenshi.com/catalog/g/gK-13752/)

## 必要なツール

- [llvm-cbe](https://github.com/JuliaComputing/llvm-cbe)
- [ldc](https://github.com/ldc-developers/ldc)
- [CS+](https://www.renesas.com/jp/ja/products/software-tools/tools/ide/csplus.html) [評価版](https://www.renesas.com/jp/ja/products/software-tools/evaluation-software-tools.html#cs)

## 手順

1. llvm-cbeをビルドする
2. ldcで*.dから*.llファイルを作成する (--output-ll)
3. CS+でビルドする

詳細はC96のペーパー参照。  
※ 12月にQiita記事として公開予定

