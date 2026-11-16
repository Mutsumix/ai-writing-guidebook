=[nodisp] フレッシュお野菜4コマ

#@# 2本入りの画像を各ページに1枚ずつ配置する。
#@# 通常の左綴じの本で見開きになるよう、偶数ページから開始する。
#@# 1ページ目は見出し・脚注を直接描画した画像。原画像も同じフォルダに保存。

//embed[latex]{
\clearpage
\ifodd\value{page}
  \thispagestyle{empty}\null\clearpage
\fi
\begingroup
\pagestyle{empty}
\setlength{\parindent}{0pt}
\noindent\makebox[\textwidth][c]{%
  \includegraphics[width=\textwidth,height=0.98\textheight,keepaspectratio]{images/90_4koma/page-1-with-title-note-unnumbered.png}%
}\par
\clearpage
\noindent\makebox[\textwidth][c]{%
  \includegraphics[width=\textwidth,height=0.98\textheight,keepaspectratio]{images/90_4koma/page-2-party-aspect-preserved.png}%
}\par
\clearpage
\endgroup
//}
