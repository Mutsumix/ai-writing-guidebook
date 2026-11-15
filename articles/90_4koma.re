=[nodisp] フレッシュキャベツ4コマ！

#@# 画像は articles/images/90_4koma/ に置く。未配置のあいだは枠だけ出る。
#@# 1ページ目 左: 4koma_1.png  右: 4koma_2.png
#@# 2ページ目 左: 4koma_3.png  右: 4koma_4.png

//embed[latex]{
\pagestyle{empty}
\newcommand{\reviewyonkomapanel}[1]{%
  \begin{minipage}[c]{0.48\textwidth}%
    \centering
    \IfFileExists{images/90_4koma/#1.png}{%
      \includegraphics[width=\linewidth,height=0.9\textheight,keepaspectratio]{images/90_4koma/#1.png}%
    }{%
      \fbox{%
        \parbox[c][0.9\textheight][c]{\dimexpr\linewidth-2\fboxsep-2\fboxrule\relax}{%
          \centering\detokenize{#1.png}%
        }%
      }%
    }%
  \end{minipage}%
}
\noindent
\reviewyonkomapanel{4koma_1}\hfill
\reviewyonkomapanel{4koma_2}
\clearpage
\noindent
\reviewyonkomapanel{4koma_3}\hfill
\reviewyonkomapanel{4koma_4}
//}
