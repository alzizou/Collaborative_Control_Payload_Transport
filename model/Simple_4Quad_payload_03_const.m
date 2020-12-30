clear
clc

M = 1;
ge = 9.81;
l = 2;
d1 = 1;
d2 = 1;
Ix = 1;
Iy = 1;
Iz = 1;

delta = 2;
Des_rel_dist = 2*(l+d1) - delta;

Md = 1*[1;1;1;1;1;1]; 

kp1_N = 10;
kp2_N = 100;
kp1_S = 10;
kp2_S = 100;

ki1_N = 0;
ki2_N = 0;
ki1_S = 0;
ki2_S = 0;

%%
%Quadrotor

n = 6;

Kf = 1.0e-5; % 6.11e-8; % each motor force constant (scalar)
Kt = 0.0435 * Kf; %1.5e-9; % each motor torque constant (scalar)
Ka = 0.01; %*diag([1 1 1],0); % Aerodynamcs torque constant (matrix)
Kd = 0.01; %*diag([1 1 1],0); % Aerodynamics force constant (matrix)

Lq = 0.45; % Quadrotor each Arm Length (scalar)
Jq = 1.2416e-3 * diag([1 1 2]); % Polar moment of inertia for the quadrotor (matrix)
Mq = 2.95; % Quadrotor total Mass (scalar)

% RM = [1 1 1 1;
%     -1e-1 0 1e-1 0;
%     0 -1e-1 0 1e-1;
%     1e-2 -1e-2 1e-2 -1e-2];

alpha_Q = 1.0e-5;
beta_Q = 1;
L1 = 1;
RM = alpha_Q*[1 1 1 1;
    -L1 0 L1 0;
    0 -L1 0 L1;
    beta_Q -beta_Q beta_Q -beta_Q];
RM_1 = RM^(-1);
