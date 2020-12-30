clear
clc

m = 1.5;
M = 5.0;
g = 9.81;
l = 2.0;
d1 = 0.5;
d2 = 0.5;
Ix = 0.2;
Iy = 0.2;
Iz = 0.2;
Jo = diag([Ix;Iy;Iz]);
Jq = diag([0.03 0.03 0.06]); % Polar moment of inertia for the quadrotor (matrix)

All_rho = ...
    [d1 0 0;
    -d1 0 0;
    0 d2 0;
    0 -d2 0];

delta = 4.0;
Des_rel_dist = (2*l+d1+d2) - delta;

alphaTF = 1;

xo_init = 0;
yo_init = 0;
zo_init = 0;

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
np = 3;
k1 = 10;
k2 = 0.01;
cons_sld = 0.001;
alpha_chatt = cons_sld;

R = 1e+0*eye(n);
BR = 1e0*eye(n);
BBT_inv = ((BR'*BR)^(-1))*BR';

Rp = 1e+0*eye(np);
BRp = 1e0*eye(np);
BBT_invp = ((BRp'*BRp)^(-1))*BRp';

QR = 1e-0*eye(n);
gamma_1 = 1e+3*diag([1e-3*ones(3,1);1e-0*ones(3,1)]);
rho_1 = 1e-0;
gamma_0 = 1e-0*diag([1e-3*ones(3,1);1e-0*ones(3,1)]); 
rho_0 = 1e-0;

max_att = pi/5;

%% AMFC - links
QL = 1e-0*eye(n);
gamma_1L = 1e+1*diag([1e-3*ones(3,1);1e-3*ones(3,1)]);
rho_1L = 1e-0;
gamma_0L = 1e+0*diag([1e-3*ones(3,1);1e-3*ones(3,1)]); 
rho_0L = 1e-0;

%% AMFC - Payload-velocity
Qv = 1e-0*eye(np);
gamma_1v = 1e+0*diag(1e-0*ones(3,1));
rho_1v = 1e-0;
gamma_0v = 1e+0*diag(1e-0*ones(3,1)); 
rho_0v = 1e-0;

%% AMFC - Payload-position
Qp = 1e-0*eye(np);
gamma_1p = 1e+0*diag(1e-3*ones(3,1));
rho_1p = 1e-0;
gamma_0p = 1e-0*diag(1e-3*ones(3,1)); 
rho_0p = 1e-0;

%% AMFC - Payload-attitude
Qa = 1e-0*eye(np);
gamma_1a = 1e+0*diag(1e-0*ones(3,1));
rho_1a = 1e-0;
gamma_0a = 1e-0*diag(1e-0*ones(3,1)); 
rho_0a = 1e-0;

%% AMFC - Payload-attitude rate
Qr = 1e-0*eye(np);
gamma_1r = 1e+0*diag(1e-3*ones(3,1));
rho_1r = 1e-0;
gamma_0r = 1e-0*diag(1e-3*ones(3,1)); 
rho_0r = 1e-0;

