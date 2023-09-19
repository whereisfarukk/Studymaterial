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

effort = schedule * resource
       = A*(Sizeof Program^B)+C

response time : diagram

$\textrm{\large ResponseTime = (start of decorate - end of decorate)}$

$\textrm{\large How to measure anything?}$ nije pora.

$\textrm{\Large Another model:}$

$\textrm{\large Meta model for metrics:}$

define concept(response time)-> define(how to measure time)(average response time in one hour(absatruct)) -> operational definition(clearing abstruct definition)(avaerage response time in one hour(calculation))->measurement of real world.
```mermaid
flowchart TD;

    root1{{define concept}}

    1(define)
    2(operational definition)
    3(measurement of real world)
    style root1 fill:#424949
    root1-->1-->2-->3
```





# Measurement scale
1.Nominal(mode)
2.Ordinal(median)
3.Interval(mode,medium,mean)
4.Ratio
5.Absolute

1.Nominal:Unordered set of categories.


2.Ordinal:Ordered set of categories.Can't compare with each other categorie.Like we cant say 2 major bug > 4 minor bug.


3.Interval:If there is consistent difference, we measure it via interval.


4.Ratio:

5.Absolute: Number of occurance.There is no negative value.




#Variability

### Range:between low and high point in data.

### Daviation:Mean -> distance.

### Variance: sumof(Deviations^2/N)


### Standard Deviation:rootof(Variance)

### Index of Variation: Standard Deviation/mean.


End of 3rd chapter


