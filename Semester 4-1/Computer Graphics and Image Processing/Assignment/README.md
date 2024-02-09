## Bresenham's line algorithm
$\textrm{\large 1.Slope(m)}$ = $\frac{\Delta \Large x}{\Delta \Large y}$

$\textrm{\large Decision parameter (P) = }$ $\Delta {\Large y} -\Delta \Large x$

| m<1 | m>1 |
| -------- | ------- |
|  <table><thead><tr><th>if p<0 </th><th>if p>=0</th></tr></thead><tbody><tr><td>${x_{i+1} = x_i + 1}$ <br>${y_{i+1} = y_i}$<br>${p_{k+1} = p_k + 2 * \Delta {\Large y}}$</td><td>${x_{i+1} = x_i + 1}$ <br>${y_{i+1} = y_i + 1}$<br>${p_{k+1} = p_k + 2 * \Delta {\Large y} - 2 * \Delta {\Large x}}$</td></tbody></table> | <table><thead><tr><th>if p<0</th><th>if p>=0</th></tr></thead><tbody><tr><td><code>'Isn't this fun?'</code></td><td>“Isn’t this fun?”</td></tbody></table>|

