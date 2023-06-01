```
Welcome to SWI-Prolog (threaded, 64 bits, version 9.0.4)
SWI-Prolog comes with ABSOLUTELY NO WARRANTY. This is free software.
Please run ?- license. for legal details.

For online help and background, visit https://www.swi-prolog.org
For built-in help, use ?- help(Topic). or ?- apropos(Word).
?- use_module(library(clpfd)).
true.
?- X in 1..5.
X in 1..5.

?- X.
% ... 1,000,000 ............ 10,000,000 years later
% 
%       >> 42 << (last release gives the question)
?- X in 1..5, Y in 1..5, X + Y #= 7, label([X,Y]).
X = 2,
Y = 5 
Unknown action: , (h for help)
Action? 
  Possible actions:
  ; (n,r,space,TAB): redo              | t:         trace&redo
  *:                 show choicepoint  | c (a,RET): stop
  w:                 write             | p:         print
  b:                 break             | h (?):     help

Action? ;
X = 3,
Y = 4 ;
X = 4,
Y = 3 ;
X = 5,
Y = 2.

```
