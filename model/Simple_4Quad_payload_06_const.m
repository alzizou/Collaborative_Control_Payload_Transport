clear
clc

m = 1;
M = 1;
g = 9.81;
l = 1;
d1 = 1;
d2 = 1;
Ix = 0.1;
Iy = 0.1;
Iz = 0.1;

All_rho = ...
    [d1 0 0;
    -d1 0 0;
    0 d2 0;
    0 -d2 0];

Jo = diag([Ix;Iy;Iz]);
Jq = 0.1 * diag([1 1 2]); % Polar moment of inertia for the quadrotor (matrix)

delta = 2;
Des_rel_dist = 2*(l+d1) - delta;

Md = 1*[1;1;50;1;1;1]; 
SLM_alpha = 0.3;

kp1_N = 1;
kp2_N = 1;

ki1_N = 0;
ki2_N = 10;


%% Observer
var_u_ob = 1000;
var_y_ob = 1000;
C_ob = [eye(3) zeros(3)];
B_ob = [zeros(3);eye(3)];
Q_ob = var_u_ob * eye(6);
R_ob = var_y_ob * eye(3);

%% AMFC - Rotatioal
n = 6;
k1 = 1;
k2 = 0.1;
R = 1e+0*eye(n);
QR = 1e-0*eye(n);
BR = 1e0*eye(n);
BBT_inv = ((BR'*BR)^(-1))*BR';

gamma_1 = 1e+3*diag([1e-6*ones(3,1);1e-0*ones(3,1)]);
rho_1 = 1e-0;
gamma_0 = 1e-0*diag([1e-6*ones(3,1);1e-0*ones(3,1)]); 
rho_0 = 1e-0;
