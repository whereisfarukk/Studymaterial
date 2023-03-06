### Bijection Method
```Matlab
f=inline('x^3-2*x^2-4')
a =  2;
b =  3;
function ret=bisection(f,a,b)
fa=f(a);
fb=f(b);
if fa*fb>=0
ret = 'the function has no real root in the given range';
return;
end
ret(1,:)=[a,b,0,0];
x=(a+b)/2;
fx=f(x);
for i=2:20
x=(a+b)/2;
fx=f(x);
if abs(x-ret(i-1,3))<0.00011
ret(i,:)=[a,b,x,fx];
return;
end
ret(i,:)=[a,b,x,fx];
if f(a)*fx<0
b=x;
elseif f(b)*fx<0
a=x;
else
return;
end
end
end
```
```
Answers:
   a         b         x         y
   2.00000   3.00000   0.00000   0.00000
   2.00000   3.00000   2.50000  -0.87500
   2.50000   3.00000   2.75000   1.67188
   2.50000   2.75000   2.62500   0.30664
   2.50000   2.62500   2.56250  -0.30640
   2.56250   2.62500   2.59375  -0.00552
   2.59375   2.62500   2.60938   0.14914
   2.59375   2.60938   2.60156   0.07145
   2.59375   2.60156   2.59766   0.03288
   2.59375   2.59766   2.59570   0.01365
   2.59375   2.59570   2.59473   0.00406
   2.59375   2.59473   2.59424  -0.00073
   2.59424   2.59473   2.59448   0.00166
   2.59424   2.59448   2.59436   0.00046
   2.59424   2.59436   2.59430  -0.00013
   ```
   
### Newton raphson method
```Matlab
fx=@(x) 3*x-cos(x)-1;
dx=@(x) 3+sin(x);
xq=0:0.1:10;
plot(xq,fx(xq));
x=0;
for i=0:10
  x=x-(fx(x)/dx(x));
endfor
hold on;
printf("%d",x);
plot(x,fx(x),'rx');
```
### False position method
```Matlab
f=@(x) 3*x-cos(x)-1;
xq=0:0.1:10;
plot(xq,f(xq));
hold on;
a=0;b=1;
fa=f(a);
fb=f(b);
c=(a+b)/2;
fc=f(c);
while abs(fc)>0.0001
  if fa*fc<0
    b=c;
  else 
    a=c;
  end
  c=(a+b)/2;
  fc=f(c); 
endwhile
plot(c,f(c),'rx');
```
# ODE
## Euler Method
$\frac{dy}{dx}=f(x,y)$
where $y(x_o)=y_o$ and h
So the formula for $y_n$ is...

$y_n=y_{n-1}+hf(x_{n-1}\,y_{n-1})$
### Problem
$y'=\frac{dy}{dx}=x+2y$

   $n$    | $x_n$       | $y_n$| $$calculation$$|
| ------------- |:-------------:|:-------------:| -----:| 
| $0$ | $2$| 3| |
| $1$| $2.1$|$3.8$|$y_1=y_o+hf'(x_o+2y_o)=3+0.1*(2+2*3)$ |
| $2$| $2.2$ | $4.77$ |$y_2=y_1+hf'(x_1+2y_1)=3.8+0.1*(2.1+2*3.8)$ | 
| $3$| $2.3$ | $5.9444$| ...|
| $4$| $2.4$ | $7.3628$| ...|
| $5$| $2.5$ | $9.07536$| ...|
## Runge kutta method
### Formula is ...

$y_n=y_{n-1}+\frac{1}{2}(k_{1,n}+k_{2,n})$

$k_{1,n}=hf(x_{n-1},y_{n-1})\space\space and\space\space K_2=hf(x_{n-1}+h,y_{n-1}+k_1)$

#### Question: Apply Runge kutta method of $2^{nd}$ order to solve initial problem $\frac{dy}{dx}=x+y$ , $y(0)=1$, find $y$ at $x=0.2$ ,taking $h=0.1$.
   $n$    | $k_1$       | $k_2$| $x_n$| $y_n$|
| ------------- |:-------------:|:-------------:|:-------------:| -----:| 
| $0$ | | | $0$|$1$|
| $1$| $0.1$|$0.12$|$0.1$|$1.11$|
| $2$| $0.12$ | $0.1431$ |$0.2$|$1.242$| 
# SLE

## Gausian Elimination Method
#### solve these equations using gausian elimination method.
```math
\begin{align*} x-y+z&= 8\\ 2x+3y-z&= -2\\ 3x-2y-9z&= 9 \end{align*}
```
$Writing\space the\space augmented\space matrix\space for\space the\space given\space system\space of\space equations\space, \space we\space find...$

```math
\left[ \begin{array}{ccc|c} 1&-1&1&8\\2&3&-1&-2\\3&-2&-9&9\end{array} \right]
```
```math
−2R_1+R_2=R_2\rightarrow \left[ \begin{array}{ccc|c} 1&-1&1&8\\0&5&-3&-18\\3&-2&-9&9\end{array} \right]
```
```math
−3R_1+R_3=R_3\rightarrow \left[ \begin{array}{ccc|c} 1&-1&1&8\\0&5&-3&-18\\0&1&-12&-15\end{array} \right]
```
```math
Interchange\space R_2\space and\space R_3\rightarrow\left[ \begin{array}{ccc|c} 1&-1&1&8\\0&1&-12&-15\\0&5&-3&-18\end{array} \right]
```
```math
−5R_2+R_3=R_3\rightarrow\left[ \begin{array}{ccc|c} 1&-1&1&8\\0&1&-12&-15\\0&0&57&57\end{array} \right]
```
```math
−\dfrac{1}{57}R_3=R_3\rightarrow\left[ \begin{array}{ccc|c} 1&-1&1&8\\0&1&-12&-15\\0&0&1&1\end{array} \right]
```
$The\space last\space matrix \space represents \space the\space equivalent\space system.$
```math
\begin{align*} x−y+z &= 8 \\ y−12z &= −15 \\ z &= 1 \end{align*}
```
$Using\space back-substitution\space, we \space obtain\space the\space solution\space as\space  (4,−3,1) .$
## Gauss-Jordan Elimination
#### Solve the following system by the Gauss-Jordan method.
```math
\begin{aligned} 
2 x+y+2 z &=10 \\ 
x+2 y+z &=8 \\ 
3 x+y-z &=2 
\end{aligned}
```
$writing\space the\space augmented\space matrix\space,\space we\space find\space...$
```math
\begin{align*}
&\left[\begin{array}{ccccc} 
2 & 1 & 2 & | & 10 \\ 
1 & 2 & 1 & | & 8 \\ 
3 & 1 & -1 & | & 2 
\end{array}\right] \nonumber &\\\\

&\left[\begin{array}{ccccc} 
1 & 2 & 1 & | & 8 \\ 
2 & 1 & 2 & | & 10 \\ 
3 & 1 & -1 & | & 2 
\end{array}\right] \quad \text { we interchanged row 1 (R1) and row 2 (R2) }\nonumber &\\\\

&\left[\begin{array}{ccccc} 
1 & 2 & 1 & | & 8 \\ 
0 & -3 & 0 & | & -6 \\ 
3 & 1 & -1 & | & 2 
\end{array}\right] \quad {R2=-2 R 1+R 2} \nonumber &\\\\

&\left[\begin{array}{ccccc} 
1 & 2 & 1 & | & 8 \\ 
0 & -3 & 0 & | & -6 \\ 
0 & -5 & -4 & | & -22 
\end{array}\right] \quad{R3=-3 R 1+R 3} \nonumber &\\\\

&\left[\begin{array}{ccccc} 
1 & 2 & 1 & | & 8 \\ 
0 & 1 & 0 & | & 2 \\ 
0 & -5 & -4 & | & -22 
\end{array}\right] \quad{R2= \mathrm{R} 2 \div(-3) }\nonumber &\\\\

&\left[\begin{array}{ccccc} 
1 & 0 & 1 & | & 4 \\ 
0 & 1 & 0 & | & 2 \\ 
0 & 0 & -4 & | & -12 
\end{array}\right] \quad{R1=-2 R 2+R 1 \text { and }R3= 5 R 2+R 3 }\nonumber &\\\\

& \left[\begin{array}{ccccc} 
1 & 0 & 1 & | & 4 \\ 
0 & 1 & 0 & | & 2 \\ 
0 & 0 & 1 & | & 3 
\end{array}\right] \quad \quad{R3= R 3 \div(-4) }\nonumber &\\\\
&\left[\begin{array}{ccccc} 
1 & 0 & 0 & | & 1 \\ 
0 & 1 & 0 & | & 2 \\ 
0 & 0 & 1 & | & 3 
\end{array}\right] \quad{R1=-\mathrm{R} 3+\mathrm{R} 1 }\nonumber
\end{align*}
```
$Clearly\space, the\space solution\space reads\space  x=1\space ,\space  y=2\space ,\space and\space  z=3\space .$
## Jacobi iterative method
This method is applicable to the system of equation in which leading diagonal elements of co-efficient matrix are dominent(large in magnitude) in their respective rows.
#### working rule:
```math
\begin{aligned} 
a11x+a12y+a13z=b1 \\
a21x+a22y+a23z=b2 \\
a31x+a32y+a33z=b3 \\
\end{aligned} 
```
#### Note: Diagonal dominance property must be satisfy i.e
```math
\begin{aligned} 
|a11|>|a12|+|a13| \\
|a22|>|a21|+|a23| \\
|a33|>|a31|+|a32| \\
\end{aligned} 
```
#### Rewriting the equation for x,y,z repectively
```math
\begin{aligned} 
x=\frac{1}{a_{11}}(b_1-a_{12}y-a_{13}z) \\
y=\frac{1}{a_{22}}(b_2-a_{21}x-a_{23}z) \\
z=\frac{1}{a_{33}}(b_3-a_{31}x-a_{32}y) \\
\end{aligned} 
```
#### Iteration 1: put $x=x_o,y=y_o,z=z_o$
```math
\begin{aligned} 
x=\frac{1}{a_{11}}(b_1-a_{12}y_o-a_{13}z_o) \\
y=\frac{1}{a_{22}}(b_2-a_{21}x_o-a_{23}z_o) \\
z=\frac{1}{a_{33}}(b_3-a_{31}x_o-a_{32}y_o) \\
\end{aligned} 
```

```math
\begin{flalign*}
& Again\space substituting\space these\space values\space of\space x\space,y\space,z\space to\space the\space next\space approximation\space is\space obtained\space.The\space above\space iteration\space process\space is\space continued\space until\space successive\space &\\ &approximation\space are\space equal\space.
\end{flalign*}
```
#### Q.Solve the following system of equations by gauss jacobi method.
```math
\begin{aligned} 
6x+2y-2 &=4 \\
x+5y+z &=3 \\
2x+y+4z &=27 \\
\end{aligned} 
```
$\large Rewriting\space the\space equations\space\cdots$
```math
\tag{1}
\begin{aligned} 
x &=\frac{1}{6}(4-2y+z)\\
y &=\frac{1}{5}(3-x-z) \\
z &=\frac{1}{4}(27-2x-y)\\
\end{aligned} 
```

#### iteration 1:
$\large put\space x=x_o=0\space,y=y_o=0\space ,z=z_o=0\space in\space equation\space (1)\cdots$
```math
\begin{aligned} 
x_1 &=\frac{1}{6}(4-2y_o+z_o)=0.6667\\
y_1 &=\frac{1}{5}(3-x_o-z_o)=0.6\\
z_1 &=\frac{1}{4}(27-2x_o-y_o)=6.75\\
\end{aligned} 
```
#### iteration 2:
$\large put\space x_1\space ,y_1\space ,z_1\space in\space equation\space (1)\cdots$
```math
\begin{aligned} 
x_2 &=\frac{1}{6}(4-2y_1+z_1)=1.5917\\
y_2 &=\frac{1}{5}(3-x_1-z_1)=-0.8833\\
z_2 &=\frac{1}{4}(27-2x_1-y_1)=6.2666\\
\end{aligned} 
```
#### iteration 3:
$\large put\space x_2\space ,y_2\space ,z_2\space in\space equation\space (1)\cdots$
```math
\begin{aligned} 
x_3 &=\frac{1}{6}(4-2y_2+z_2)=2.0055\\
y_3 &=\frac{1}{5}(3-x_2-z_2)=-0.4717\\
z_3 &=\frac{1}{4}(27-2x_2-y_2)=6.1750\\
\end{aligned} 
```
#### iteration 4:
$\large put\space x_3\space ,y_3\space ,z_3\space in\space equation\space (1)\cdots$
```math
\begin{aligned} 
x_4 &=\frac{1}{6}(4-2y_3+z_3)=2.0147\\
y_4 &=\frac{1}{5}(3-x_3-z_3)=-1.0361\\
z_4 &=\frac{1}{4}(27-2x_3-y_3)=5.9902\\
\end{aligned} 
```
#### iteration 5:
$\large put\space x_4\space ,y_4\space ,z_4\space in\space equation\space (1)\cdots$
```math
\begin{aligned} 
x_5 &=\frac{1}{6}(4-2y_4+z_4)=2.0104\\
y_5 &=\frac{1}{5}(3-x_4-z_4)=-1.0020\\
z_5 &=\frac{1}{4}(27-2x_4-y_4)=5.9992\\
\end{aligned} 
```
#### iteration 6:
$\large put\space x_5\space ,y_5\space ,z_5\space in\space equation\space (1)\cdots$
```math
\begin{aligned} 
x_6 &=\frac{1}{6}(4-2y_5+z_5)=2.0005\\
y_6 &=\frac{1}{5}(3-x_5-z_5)=-1.0019\\
z_6 &=\frac{1}{4}(27-2x_5-y_5)=5.9953\\
\end{aligned} 
```
#### iteration 7:
$\large put\space x_6\space ,y_6\space ,z_6\space in\space equation\space (1)\cdots$
```math
\begin{aligned} 
x_7 &=\frac{1}{6}(4-2y_6+z_6)=1.9998\\
y_7 &=\frac{1}{5}(3-x_6-z_6)=-0.9992\\
z_7 &=\frac{1}{4}(27-2x_6-y_6)=6.0002\\
\end{aligned} 
```
$\large As\space x_7\approx\space x_6\space ,y_7\approx y_6\space ,z_7\approx z_6\space,\space so\space the\space approximate\space answere\space is\space\cdots $
```math
\begin{aligned} 
x=1.9998\\
y=-0.9992\\
z=6.0002\\
\end{aligned} 
```
## Gauss Seidel
$\large \textbf{All}\space \textbf{the}\space \textbf{working}\space \textbf{rule}\space \textbf{are}\space \textbf{same}\space \textbf{as}\space \textbf{Gauss}\space \textbf{jacobi}\space \textbf{method}\space.Just\space we\space have\space to\space substitute\space\space x\space ,y\space ,z\space with\space the\space latest\space vaue\space .$
$N^{th} iteration value formula is\cdots.$
```math
\begin{aligned} 
\large x_n &=\large{\frac{1}{a_{11}}(b_1-a_{12}y_{n-1}-a_{13}z_{n-1})} \\
\large y_n &=\large{\frac{1}{a_{22}}(b_2-a_{21}x_n-a_{23}z_{n-1})} \\
\large z_n &=\large{\frac{1}{a_{33}}(b_3-a_{31}x_n-a_{32}y_n)} \\
\end{aligned} 
```

#### Q.Solve the following system of equations by gauss seidel method.
```math
\begin{aligned} 
27x+6y-z &=85 \\
6x+15y+2z &=72 \\
x+y+54z &=110 \\
\end{aligned} 
```
$\large Rewriting\space the\space equations\space\cdots$
```math
\tag{1}
\begin{aligned} 
x &=\frac{1}{27}(85-6y+z)\\
y &=\frac{1}{15}(72-6x-2z) \\
z &=\frac{1}{54}(11-x-y)\\
\end{aligned} 
```

#### iteration 1:
```math
\begin{aligned} 
x_1 &=\frac{1}{27}(85-6y_o+z_o)=3.1481\\
y_1 &=\frac{1}{15}(72-6x_1-2z_o)=3.5408 \\
z_1 &=\frac{1}{54}(11-x_1-y_1)=1.9132\\
\end{aligned} 
```
#### iteration 2:
```math
\begin{aligned} 
x_2 &=\frac{1}{27}(85-6y_1+z_1)=2.4322\\
y_2 &=\frac{1}{15}(72-6x_2-2z_1)=3.5720 \\
z_2 &=\frac{1}{54}(11-x_2-y_2)=1.9258\\
\end{aligned} 
```
#### iteration 3:
```math
\begin{aligned} 
x_3 &=\frac{1}{27}(85-6y_2+z_2)=2.4257\\
y_3 &=\frac{1}{15}(72-6x_3-2z_2)=3.5724 \\
z_3 &=\frac{1}{54}(11-x_3-y_3)=1.9260\\
\end{aligned} 
```
#### iteration 4:
```math
\begin{aligned} 
x_4 &=\frac{1}{27}(85-6y_3+z_3)=2.4256\\
y_4 &=\frac{1}{15}(72-6x_4-2z_3)=3.5730 \\
z_4 &=\frac{1}{54}(11-x_4-y_4)=1.9260\\
\end{aligned} 
```
$\large As\space x_4\approx\space x_3\space ,y_4\approx y_3\space ,z_4\approx z_3\space,\space so\space the\space approximate\space answere\space is\space\cdots $
```math
\begin{aligned} 
x=2.426\\
y=3.573\\
z=1.926\\
\end{aligned} 
```




