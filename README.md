# Parenthesis_checker
A simple command based Parenthesis checker
It will match opening brackets "(" ,"{" ,"[" with there corresponding closing brackets "(" ,"{" ,"[" .
DEMO INPUT SNIPPETS:

{(a + b) * [c - d]}                 -> balanced

[]                                  -> balanced

((a+b)*[c -d]})                     -> unbalanced

{(a+b)*[c-d]}                       -> balanced

{(a+b)*[c-d}}({[])}                 -> unbalanced

a+b-c                               -> balanced

{(a+[b-c]*[d/e])+[f/(g-h)]}         -> balanced

{[]}                                -> balanced

()                                  -> balanced
