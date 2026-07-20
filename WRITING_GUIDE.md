# 執筆パッケージの使い方

Claude(claude.ai)との議論から生成した『AIで本を書く』の執筆キットです。
ReVIEW-Templateから作った自分のリポジトリ(ai-writing-guidebook)に、
以下の手順で混ぜてください。

## 中身

```
articles/            … 全章の.reスケルトン+catalog.yml
  catalog.yml        … 章構成(テンプレート側のものと差し替え)
  preface.re         … はじめに
  01_handson.re      … 第1章 いきなり本を作る
  02_git_github.re   … 第2章 Git/GitHubが執筆を支える
  03_review_template.re … 第3章 Re:VIEWとTechBoosterテンプレート
  04_syntax.re       … 第4章 記法カタログ(ソース→出力の実演方式)
  05_cursor.re       … 第5章 Cursorと書く(本体)
  06_why_write.re    … 第6章 AI時代になぜ書くのか
  07_publish.re      … 第7章 本にして届ける
  postscript.re      … おわりに
references/
  sources.md       … 全参照資料のURL+要点(R1〜R15)。Cursorの一次情報庫
.cursor/rules/
  writing.mdc        … Cursor用の執筆ルール(文体・方針・分担)
```

## 導入手順

1. 自分のリポジトリ(ReVIEW-Template由来)に references/ と .cursor/ をコピー
2. articles/ の .re ファイル群をコピーし、catalog.yml をこのパッケージのものに差し替え
3. 鹿野さんのgist 2本を skills/ ディレクトリに保存(sources.mdR12・R13のURL参照)
4. 手元の FirstStepReVIEW-v3.pdf を references/ に置く(任意)
5. pushしてビルドが通ることを確認(スケルトンだけでもPDFになります)
6. (任意)Chrome DevTools MCPをCursorに設定する → 第5章「キャプチャも任せる」で使う。
   設定方法と注意点はsources.mdR16を参照

## .reファイルの読み方

- `#@#` で始まる行は執筆メモです。ビルド時には出力されません
- メモには「その節で何を書くか」「参照する資料(R番号=sources.mdの項目)」
  「使うスクショ・図」が書いてあります
- 一部の節には下書きの本文が入っています。著者の声に直して使ってください
- `#@# TODO` は未決事項です(Cursorの現在地の節をどうするか、など)

## 書き進め方(合意済みの方針)

- 準備を先にしない。第1章のハンズオンを自分でやりながら第1章を書くのが最初の作業
- 実体験の章(5章・6章)は著者がラフを書き、AIに整えさせる。逆にしない
- 参照整理の章(1・2・3・4・7章)はsources.mdを基にAIに展開させてよい。出典脚注を忘れない
- 優先順位: 第1章・第4章(講習会で必須)→ 第5章 → 残り

## 最初の一手(リポジトリをクローンした直後にやること)

Cursorのチャットに以下を投げる。

> `.cursor/rules` と `references/sources.md` と `WRITING_GUIDE.md` を読んで。
> これから `articles/01_handson.re` を書き進める。私はいまテンプレートから
> リポジトリ(ai-writing-guidebook)を作ってクローンしたところ。
> `#@#` メモに沿って「テンプレートから自分のリポジトリを作る」の節から一緒に書こう。

リポジトリを作ってクローンするまでの体験が、そのまま第1章の原稿になる。
記憶が新しいうちに書く。つまずいた箇所こそ本文の価値になるので省略しない。
