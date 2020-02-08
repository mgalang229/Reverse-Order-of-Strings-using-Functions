# Reverse-Order-of-Strings-using-Functions
---
# Sample Input
<pre>
  hello my world
</pre>
---
# Sample Output
<pre>
  world 
  my 
  hello 
</pre>
---
# Algorithm
<pre>
  i = j = 0
  
  while(i != '\0')
    i++;
    
  // PROCESS
  // h e l l o   m y   w  o  r  l  d /0
  // 0 1 2 3 4 5 6 7 8 9 10 11 12 13
  
  i = 13
  while(13 > 0)
    str[j] = str[--i]
    ++j;
    
  // PROCESS
  // d l r o w   y m   o  l  l  e  h \0
  // 0 1 2 3 4 5 6 7 8 9 10 11 12 13
  // Last Value of j -> 14
  
  str2[14] = '\0'
  for(int i = 0; i < str2[i] != '\0'; i++
    if(str2[i+1] == ' ' || str2[i+1] == '\0')
      for(j = i; j >= 0 && str2[j] != ' '; j--)
        cout << str2[j]
    cout << endl
     
   // PROCESS
   // d l r o w  [ ]  y m   o  l  l  e  h \0
   // 0 1 2 3 4   5   6 7 8 9 10 11 12 13
   //         i  i+1  
   // j = 4 then decrement until it reaches 0 or str2[j] encounters a space ' '
   
   // Output
   // world
   // my
   // hello
</pre>
