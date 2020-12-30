clear
clc

m = 1;
M = 1;
g = 9.81;
l = 2;
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
Jq = 0.01 * diag([1 1 2]); % Polar moment of inertia for the quadrotor (matrix)

delta = 2.0;
Des_rel_dist = 2*(l+d1) - delta;

alphaTF = 0.1;

%% Observer
var_u_ob = 1e3;
var_y_ob = 1e3;
C_ob = [eye(3) zeros(3)];
B_ob = [zeros(3);eye(3)];
Q_ob = var_u_ob * eye(6);
R_ob = var_y_ob * eye(3);

noise_var_Omegao = 0e-6;
noise_var_RelPos = 0e-6;
noise_var_RelAcc = 0e-6;

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

%% AMFC - links
QL = 1e-0*eye(n);
gamma_1L = 1e+3*diag([1e-6*ones(3,1);1e-0*ones(3,1)]);
rho_1L = 1e-0;
gamma_0L = 1e-0*diag([1e-6*ones(3,1);1e-0*ones(3,1)]); 
rho_0L = 1e-0;

%% AMFC - Payload-velocity
Qv = 1e-0*eye(n);
gamma_1v = 1e+3*diag([1e-0*ones(3,1);1e-0*ones(3,1)]);
rho_1v = 1e-0;
gamma_0v = 1e-0*diag([1e-0*ones(3,1);1e-0*ones(3,1)]); 
rho_0v = 1e-1;

%% AMFC - Payload-position
Qo = 1e-0*eye(n);
gamma_1o = 1e-6*diag([1e-0*ones(3,1);1e-0*ones(3,1)]);
rho_1o = 1e-0;
gamma_0o = 1e-6*diag([1e-0*ones(3,1);1e-0*ones(3,1)]); 
rho_0o = 1e-1;
