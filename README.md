# compiler

This is a simple compiler that is capable of generating Intel x86 assembly code from a Pascal program. This compiler is developed using GNU  C++,  Lex, and  YACC. Major features of this compiler include syntax error detection, type error detection, arithmetic expression handling for integer numbers, and handling branch and loop constructs.


# Sample Input

```
var u,a,b,v,w,z,d,e,f : integer ;
begin
a:=12;

if b>5 then
b:=10;

c:=a+b;
d:=a+c;

if x=4 then
e:=c*d;

if u<v then
m:=m*n;

n:=u*v;

a:=c*d;
end
```


# Sample Output

```
.model small
.stack 100H
.data
 
u  dw  0
a  dw  0
b  dw  0
v  dw  0
w  dw  0
z  dw  0
d  dw  0
e  dw  0
f  dw  0
a  dw  0
b  dw  0 
MOV BX ,12
MOV a, BX

MOV AX,b
CMP AX,5
JG 
.code


main proc

MOV AX,@data 
 MOV ds,AX 
 MOV es,AX 

 
MOV BX ,12
MOV a, BX

MOV AX,b
CMP AX,5
JG if1
jmp else1

if1:
MOV BX ,10
MOV b, BX

 else1: 
MOV AX , a
MOV DX , b
ADD AX , DX

MOV c, AX

MOV AX , a
MOV DX , c
ADD AX , DX

MOV d, AX

MOV AX,x
CMP AX,4
JE if2
jmp else2

if2: 
MOV BX , c
MOV AX , d
MUL BX

MOV e, AX

 else2:
MOV AX,u
CMP AX,v
JL if3
jmp else3

if3:
MOV BX , m
MOV AX , n
MUL BX

MOV m, AX

 else3:
MOV BX , u
MOV AX , v
MUL BX

MOV n, AX

MOV BX , c
MOV AX , d
MUL BX

MOV a, AX

main endp
 end main
```
