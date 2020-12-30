clear
clc

m = 1.5;
M = 1.0;
g = 9.81;
l = 3.0;
d1 = 0.5;
d2 = 0.5;
Ix = 0.02;
Iy = 0.02;
Iz = 0.02;
Jo = diag([Ix;Iy;Iz]);
Jq = diag([0.03 0.03 0.06]); % Polar moment of inertia for the quadrotor (matrix)

All_rho = ...
    [d1 0 0;
    -d1 0 0;
    0 d2 0;
    0 -d2 0];

U0 = -20;
tau_x = 0.1;
tau_y = 0.0;
tau_z = 0.0;
