A = [2 4 6 7 3]; 
B = [3 5 1];
C = union(A,B)
D = intersect(A, B)
E = setdiff(A, B)
F = setdiff(C, D)

disp("union of A and B is : ", C)
disp("intersection of A and B is : ", D)
disp("diffrence of A and B is : ", E)
disp("symmetric diffrence of A and B is : ", F)



