A=input('Enter Coefficient matrix :')
B=input('Enter source vector :')
n=length(B)
X=zeros(n,1)
d=det(A)
A_original=A
if d~=0
  for i=1:n
    A(:,i)=B
    X(i)=det(A)/d
    A=A_original
  endfor
  disp('Solution using cramer rule is:')
   X
else
 disp('Creamer rule not applicable')
end
