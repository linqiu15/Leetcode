
# Table of Contents

1.  [Algorithm](#org3fe952b)
    1.  [sliding window algorithm](#org3284ada)
2.  [Snippets](#orgeeaeabb)
    1.  [to figure out if j-th element of string occurs before](#org51339f0)
3.  [Math](#orga5f09f8)
    1.  [digits sum](#orgafa61a8)


<a id="org3fe952b"></a>

# Algorithm


<a id="org3284ada"></a>

## sliding window algorithm

Related to **longest-substring-without-repeating-characters**

For finding pattern in arrays or strings,the information of current sub-object should be used
as possivle in each iteration.For example, if j-th element of string repeats in the inteval
[i,j],then any substr in the inteval will be definitely shorted than (j-i) and thus there is no 
need to iterate between this inteval. 


<a id="orgeeaeabb"></a>

# Snippets


<a id="org51339f0"></a>

## to figure out if j-th element of string occurs before

    if(s.find(s[j],pos)==j)


<a id="orga5f09f8"></a>

# Math


<a id="orgafa61a8"></a>

## [digits sum](https://en.wikipedia.org/wiki/Digital_root)

\begin{equation}
  dr_b(n)=
  \begin{cases}
    0&\text{if }n\eq 0\\
    1+((n-1)mod(b-1))&\text{if }n\neq 0
  \end{cases}
\end{equation}

