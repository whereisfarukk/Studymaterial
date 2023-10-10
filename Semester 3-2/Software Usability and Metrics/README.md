# 9/19
```C++
// this fun take a number
int foo(int a)
{
  //return square
   return a*a;
}
```

$\textrm{\large How many line are in there-(4,3,6)? All are correct.Ans are depends on the question.}$

$\textrm{\large What is measurement model?}$

$\textrm{\large =>making the unmeasureable measureable.}$

$\textrm{\large Types of model : }$
<ol>
  <li>$Text$</li>
  <li>$Diagramatic$</li>
  <li>$Algorithm.$</li>
</ol>

$\textrm{\large 1.Text: }$

$\textrm{\large Defects: Incompletenese of the product or wrong use case etc.Agile model is a text model.}$


$\textrm{\large 2.Diagramatic:}$
```mermaid
flowchart LR;
1(feature)
2(size)
3(effort)
4(cost)
5(schedule)
6(defects)
style 1 fill:#355E3B
1--->2--->3--->4
3--->5--->6
2--->6
```
$\textrm{\large 3.Algorithm:}$

```math
\begin{flalign}
 \textrm{\large effort} &=  \textrm{\large schedule} \times  \textrm{\large resource} \\ \\
 &= \textrm{\large A} \times {\textrm{\large (sizeof program)}}^B + \textrm{\large C} \\ \\

\end{flalign} 
```

response time : diagram

$\textrm{\large ResponseTime = (start of decorate - end of decorate)}$

$\textrm{\large How to measure anything?}$ nije pora.

$\textrm{\Large Another model:}$

$\textrm{\large Meta model for metrics:}$

$\textrm{\large define concept => response time.}$

$\textrm{\large define => how to measure time(average response time in one hour(absatruct))}$

$\textrm{\large operational definition => clearing abstruct definition(avaerage response time in one hour(calculation)}$

$\textrm{\large measurement of real world.}$
```mermaid
flowchart TD;

    root1{{define concept}}

    1(define)
    2(operational definition)
    3(measurement of real world)
    style root1 fill:#424949
    root1-->1-->2-->3
```





### Measurement scale

<ol>
  <li>$\textrm{\large Nominal(mode)}$ </li>
  <li>$\textrm{\large Ordinal(median)}$</li>
  <li>$\textrm{\large Interval(mode,medium,mean)}$</li>
  <li>$\textrm{\large Ratio}$</li>
  <li>$\textrm{\large Absolute}$</li>
</ol>

$\textrm{\large 1.Nominal:Unordered set of categories.}$

$\textrm{\large 2.Ordinal:Ordered set of categories.Can't compare with each other categorie.Like we cant say 2 major bug > 4 minor bug.}$

$\textrm{\large 3.Interval:If there is consistent difference, we measure it via interval.}$

$\textrm{\large 4.Ratio:}$

$\textrm{\large 5.Absolute: Number of occurance.There is no negative value.}$

#### Variability

```math
\begin{flalign}
\textrm{\large Range: Between low and high point in data.} \\ \\
\textrm{\large Daviation:Mean -> distance.} \\ \\
\textrm{\large Variance:} \sum_{}^{} \frac{\textrm{\large Deviations}^{2}}{\large N}  \\ \\
\textrm{\large Standard Deviation:}\sqrt{\textrm{\large Variance}} \\ \\
\textrm{\large Index of Variation:} \frac{\textrm{\large Standard Deviation}}{\large Mean} \\
\end{flalign} 
```

End of 3rd chapter

### 10/10
$\textrm{\large Chapter :4}$
$\textrm{\large Software Size= LOC(line of code) better version KLOC(1K LOC) }$
$\textrm{\large Another way is NKLOC(Non commented  thousand line of code)}$
$\textrm{\large Grearing factor:}$
Language  		Grearing factor
C++			55
Java 			53
C			128
$\textrm{\large Nasa proposed the models:}$
<ol>
  <li>$\textrm{\large Reduced vervation}$ </li>
  <li>$\textrm{\large Slightly modified = 25%>modified}$</li>
  <li>$\textrm{\large extensively modified}$</li>
  <li>$\textrm{\large New->100% modified}$</li>
</ol>

$\textrm{\large How to calculate functionality:}$

$\textrm{\large IFPUC an organization arrange a way to calculate functionality-}$

<ol>
  <li>$\textrm{\large Input}$ </li>
  <li>$\textrm{\large output}$</li>
  <li>$\textrm{\large Data file}$</li>
  <li>$\textrm{\large Interface}$</li>
  <li>$\textrm{\large Inquires}$</li>
</ol>

$\textrm{\large Function point:}$

$\textrm{\large UFP=∑complexity rating}$

$\textrm{\large VAP=}$

$\textrm{\large AFP=UFP*(0.65+0.01*VFP)}$

$\textrm{\large Software productivity research proposed another method:}$

$\textrm{\large Formula : AFP=UFP+(0.4+0.1(PC+DC)}$

$\textrm{\large Book page : 45 (Math)}$
