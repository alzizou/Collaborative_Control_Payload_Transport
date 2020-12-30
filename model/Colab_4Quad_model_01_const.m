clear
clc

m = 1.5;
M = 1.0;
g = 9.81;
l = 3.1819;
d1 = 0.25;
d2 = 0.25;
Ix = 0.166667;
Iy = 0.166667;
Iz = 0.166667;

All_rho = ...
    [d1 0 0;
    -d1 0 0;
    0 d2 0;
    0 -d2 0];

Jo = diag([Ix;Iy;Iz]);
Jq = diag([0.0291 0.0291 0.0552]); % Polar moment of inertia for the quadrotor (matrix)

U0 = -20;
