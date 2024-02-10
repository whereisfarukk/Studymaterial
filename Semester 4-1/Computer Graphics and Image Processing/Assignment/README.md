## Bresenham's line algorithm
$\textrm{\large 1.Slope(m)}$ = $\frac{\Delta \Large y}{\Delta \Large x}$

$\textrm{\large Decision parameter (P) = }$ $2* \Delta {\Large y} -\Delta \Large x \space;$ $\textrm{\large If m<1 }$

$\textrm{\large Decision parameter (P) = }$ $2* \Delta {\Large x} -\Delta \Large y \space;$ $\textrm{\large If m>=1 }$

| $\textrm{\large m<1}$  | $\textrm{\large m>=1}$ |
| -------- | ------- |
|  <table><thead><tr><th>$\textrm{\large if p<0}$ </th><th>$\textrm{\large if p>=0}$</th></tr></thead><tbody><tr><td>${\Large {x_{i+1} = x_i + 1}}$ <br>${\Large {y_{i+1} = y_i}}$<br>${{\Large p_{k+1} = p_k + }2 * \Delta {\Large y}}$</td><td>${\Large {x_{i+1} = x_i + 1}}$ <br>${\Large {y_{i+1} = y_i + 1}}$<br>${{\Large p_{k+1} = p_k + } 2 * \Delta {\Large y} - 2 * \Delta {\Large x}}$</td></tbody></table> | <table><thead><tr><th>$\textrm{\large if p<0}$</th><th>$\textrm{\large if p>=0}$</th></tr></thead><tbody><tr><td>${\Large{x_{i+1} = x_i}}$ <br>${\Large{y_{i+1} = y_i + 1}}$<br>${{\Large p_{k+1} = p_k + }2 * \Delta {\Large x}}$</td><td>${\Large{x_{i+1} = x_i + 1}}$ <br>${\Large{y_{i+1} = y_i + 1}}$<br>${{\Large p_{k+1} = p_k + 2 }* \Delta {\Large x} - \Delta {\Large y}}$</td></tbody></table>|


### Questions
$\textrm{\large solve for the Case 1: (1,1), (8,4)
Case 2: (1,1), (4,8) }$
```c++
#include <bits/stdc++.h>
using namespace std;

void Bresenham(int x1, int y1, int x2, int y2)
{
     int dx = abs(x1 - x2), dy = abs(y1 - y2);
     int p ;
     int twoDy = 2 * dy, twoDx = 2 * dx, twoDyDx = 2 * (dy - dx);
     int x, y, xEnd, yEnd;
     /*Determining  which points to start and End */
     if (x1 > x2) {
          x = x2;
          y = y2;
          xEnd = x1;
          yEnd = y1;
     }
     else {
          x = x1; y = y1 ; xEnd =  x2; yEnd = y2;
     }
     cout << x << " " << y << endl;
     if (dx > dy) { // if m(slope ) less than 1
          p = 2 * dy - dx;
          while (x < xEnd) { // ending condition
               x++;
               if (p < 0) {
                    p = p + twoDy;
               }
               else {
                    y++;
                    p = p + twoDyDx;
               }
               cout << x << " " << y << endl;
          }
     }
     else { // if slope(m) greater than 1
          p = 2 * dx - dy;
          while (y < yEnd) { // ending condition
               y++;
               if (p < 0) {
                    p = p + twoDx;
               }
               else {
                    x++;
                    p = p + twoDx - twoDy;
               }
               cout << x << " " << y << endl;
          }
     }

}
int main() {
    cout<<"Insert the value of x1,y1,x2,y2 : ";
    int x1, y1, x2, y2 ;
    cin>>x1>>y1>>x2>>y2;
    Bresenham(x1, y1, x2, y2);
     return 0;

}
```

 ```math
\begin{aligned} 
 \textrm{\large Output for the Case 1: (1,1), (8,4)} \\

 \end{aligned} 
```

| | $\textrm{\large x}$ | $\textrm{\large y}$ | |
|---|---|---|---|
| |   1   |  1   | |
| |   2   |  1   | |
| |   3   |  2   | |
| |   4   |  2   | |
| |   5   |  3   | |
| |   6   |  3   | |
| |   7   |  4   | |
| |   8   |  4   | |

 ```math
\begin{aligned} 
 \textrm{\large Output for the Case 1: (1,1), (4,8)} \\

 \end{aligned} 
```
| | $\textrm{\large x}$ | $\textrm{\large y}$ | |
|---|---|---|---|
| |   1   |  1   | |
| |   1   |  2   | |
| |   2   |  3   | |
| |   2   |  4   | |
| |   3   |  5   | |
| |   3   |  6   | |
| |   4   |  7   | |
| |   4   |  8   | |







