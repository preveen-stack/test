```
% N-Queens problem
% Place N queens on an NxN chessboard so that no two queens threaten each other.

% Input parameter
int: N = 8; % Size of the chessboard

% Decision variables
array[1..N] of var 1..N: queens; % Position of the queens

% Constraints
constraint forall(i, j in 1..N where i < j)(queens[i] != queens[j] /\ abs(queens[i] - queens[j]) != abs(i - j));

% Objective function (optional, not required for feasibility problems)
% Solve for the existence of any solution, not for optimization
solve satisfy;

% Output solution
output ["\(queens)"];
```

<img width="790" alt="image" src="https://github.com/preveen-stack/test/assets/31464911/f07f38f7-321a-4b31-9e72-b91351d04c02">

